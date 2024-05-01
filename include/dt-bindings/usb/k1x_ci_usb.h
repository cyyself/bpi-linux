// SPDX-License-Identifier: GPL-2.0

#ifndef _DT_BINDINGS_USB_MV_USB_H
#define _DT_BINDINGS_USB_MV_USB_H

#define MV_USB_HAS_VBUS_DETECTION	(1 << 0)
#define MV_USB_HAS_IDPIN_DETECTION	(1 << 1)
#define MV_USB_HAS_VBUS_IDPIN_DETECTION	\
			(MV_USB_HAS_VBUS_DETECTION | MV_USB_HAS_IDPIN_DETECTION)

#define	MV_USB_MODE_UDC	(0)
#define	MV_USB_MODE_OTG	(1)
#define	MV_USB_MODE_HOST	(2)

#endif
