/*
 * XREFs of ?Release@?$CMILCOMBaseT@VIBitmapSource@@@@UEAAKXZ @ 0x1802B8F14
 * Callers:
 *     ?Release@?$CMILCOMBaseT@VIBitmapSource@@@@$4PPPPPPPM@DAA@EAAKXZ @ 0x18011FE70 (-Release@-$CMILCOMBaseT@VIBitmapSource@@@@$4PPPPPPPM@DAA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBaseT<IBitmapSource>::Release(__int64 a1)
{
  return CMILRefCountBaseT<IBitmapSource>::InternalRelease((volatile signed __int32 *)(a1 - 32));
}
