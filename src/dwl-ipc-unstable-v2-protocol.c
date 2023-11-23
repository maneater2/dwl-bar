/* Generated by wayland-scanner 1.22.0 */

#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

#ifndef __has_attribute
# define __has_attribute(x) 0  /* Compatibility with non-clang compilers. */
#endif

#if (__has_attribute(visibility) || defined(__GNUC__) && __GNUC__ >= 4)
#define WL_PRIVATE __attribute__ ((visibility("hidden")))
#else
#define WL_PRIVATE
#endif

extern const struct wl_interface wl_output_interface;
extern const struct wl_interface zdwl_ipc_output_v2_interface;

static const struct wl_interface *dwl_ipc_unstable_v2_types[] = {
	NULL,
	NULL,
	NULL,
	NULL,
	&zdwl_ipc_output_v2_interface,
	&wl_output_interface,
};

static const struct wl_message zdwl_ipc_manager_v2_requests[] = {
	{ "release", "", dwl_ipc_unstable_v2_types + 0 },
	{ "get_output", "no", dwl_ipc_unstable_v2_types + 4 },
};

static const struct wl_message zdwl_ipc_manager_v2_events[] = {
	{ "tags", "u", dwl_ipc_unstable_v2_types + 0 },
	{ "layout", "s", dwl_ipc_unstable_v2_types + 0 },
};

WL_PRIVATE const struct wl_interface zdwl_ipc_manager_v2_interface = {
	"zdwl_ipc_manager_v2", 2,
	2, zdwl_ipc_manager_v2_requests,
	2, zdwl_ipc_manager_v2_events,
};

static const struct wl_message zdwl_ipc_output_v2_requests[] = {
	{ "release", "", dwl_ipc_unstable_v2_types + 0 },
	{ "set_tags", "uu", dwl_ipc_unstable_v2_types + 0 },
	{ "set_client_tags", "uu", dwl_ipc_unstable_v2_types + 0 },
	{ "set_layout", "u", dwl_ipc_unstable_v2_types + 0 },
};

static const struct wl_message zdwl_ipc_output_v2_events[] = {
	{ "toggle_visibility", "", dwl_ipc_unstable_v2_types + 0 },
	{ "active", "u", dwl_ipc_unstable_v2_types + 0 },
	{ "tag", "uuuu", dwl_ipc_unstable_v2_types + 0 },
	{ "layout", "u", dwl_ipc_unstable_v2_types + 0 },
	{ "title", "s", dwl_ipc_unstable_v2_types + 0 },
	{ "appid", "s", dwl_ipc_unstable_v2_types + 0 },
	{ "layout_symbol", "s", dwl_ipc_unstable_v2_types + 0 },
	{ "frame", "", dwl_ipc_unstable_v2_types + 0 },
	{ "fullscreen", "2u", dwl_ipc_unstable_v2_types + 0 },
	{ "floating", "2u", dwl_ipc_unstable_v2_types + 0 },
};

WL_PRIVATE const struct wl_interface zdwl_ipc_output_v2_interface = {
	"zdwl_ipc_output_v2", 2,
	4, zdwl_ipc_output_v2_requests,
	10, zdwl_ipc_output_v2_events,
};

