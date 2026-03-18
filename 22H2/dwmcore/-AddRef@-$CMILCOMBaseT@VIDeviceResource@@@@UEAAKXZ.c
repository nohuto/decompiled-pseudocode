/*
 * XREFs of ?AddRef@?$CMILCOMBaseT@VIDeviceResource@@@@UEAAKXZ @ 0x1800FA1E8
 * Callers:
 *     ?AddRef@?$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@FI@EAAKXZ @ 0x18011EA60 (-AddRef@-$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@FI@EAAKXZ.c)
 *     ?AddRef@?$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@EI@EAAKXZ @ 0x18011EAC0 (-AddRef@-$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@EI@EAAKXZ.c)
 *     ?AddRef@?$CMILCOMBaseT@VIDDASwapChain@@@@$4PPPPPPPM@IA@EAAKXZ @ 0x180121440 (-AddRef@-$CMILCOMBaseT@VIDDASwapChain@@@@$4PPPPPPPM@IA@EAAKXZ.c)
 *     ?AddRef@?$CMILCOMBaseT@VILegacyRemotingSwapChain@@@@$4PPPPPPPM@MI@EAAKXZ @ 0x1801215C0 (-AddRef@-$CMILCOMBaseT@VILegacyRemotingSwapChain@@@@$4PPPPPPPM@MI@EAAKXZ.c)
 *     ?AddRef@?$CMILCOMBaseT@VIBitmapSource@@@@$4PPPPPPPM@DAA@EAAKXZ @ 0x180123FE0 (-AddRef@-$CMILCOMBaseT@VIBitmapSource@@@@$4PPPPPPPM@DAA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBaseT<IDeviceResource>::AddRef(__int64 a1)
{
  return CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 - 16));
}
