namespace {
namespace SIMDJSON_IMPLEMENTATION {
namespace ondemand {

class token_iterator;

namespace logger {

static constexpr const bool LOG_ENABLED = SIMDJSON_IMPLEMENTATION::logger::LOG_ENABLED;

static simdjson_really_inline void log_headers() noexcept;
static simdjson_really_inline void log_line(const token_iterator &iter, const char *title_prefix, const char *title, std::string_view detail, int delta, int depth_delta) noexcept;
static simdjson_really_inline void log_event(const token_iterator &iter, const char *type, std::string_view detail="", int delta=-1, int depth_delta=0) noexcept;
static simdjson_really_inline void log_value(const token_iterator &iter, const char *type, std::string_view detail="", int delta=-1, int depth_delta=0) noexcept;
static simdjson_really_inline void log_start_value(const token_iterator &iter, const char *type, int delta=-1, int depth_delta=0) noexcept;
static simdjson_really_inline void log_end_value(const token_iterator &iter, const char *type, int delta=-1, int depth_delta=0) noexcept;
static simdjson_really_inline void log_error(const token_iterator &iter, const char *error, int delta=-1, int depth_delta=0) noexcept;

} // namespace logger
} // namespace ondemand
} // namespace SIMDJSON_IMPLEMENTATION
} // unnamed namespace