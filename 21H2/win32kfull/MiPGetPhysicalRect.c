/*
 * XREFs of MiPGetPhysicalRect @ 0x1C0110BD4
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C0110B24 (_GetPointerDeviceRects.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01DBC98 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 * Callees:
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E01B4 (VirtualizeMultiMonDigitizerSize.c)
 */

_OWORD *__fastcall MiPGetPhysicalRect(_OWORD *a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize(v3);
  if ( *(_DWORD *)*gpDispInfo > 1u )
    VirtualizeMultiMonDigitizerSize(a1);
  return a1;
}
