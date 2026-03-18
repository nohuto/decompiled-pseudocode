/*
 * XREFs of ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0025E68
 * Callers:
 *     NtUserGetIconInfo @ 0x1C00240A0 (NtUserGetIconInfo.c)
 *     NtUserDrawIconEx @ 0x1C00BDC50 (NtUserDrawIconEx.c)
 *     NtUserGetIconSize @ 0x1C00FB970 (NtUserGetIconSize.c)
 *     NtUserGetCursorFrameInfo @ 0x1C014A720 (NtUserGetCursorFrameInfo.c)
 * Callees:
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C0025EA8 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C00A1F0C (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C01083EC (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 */

struct tagCURSOR *__fastcall GetVirtualizedDpiCursor(struct tagCURSOR *a1)
{
  struct tagCURSOR *result; // rax
  unsigned int DpiForSystem; // eax
  CCursorSizes *v4; // rcx
  unsigned int SizeForDpi; // eax

  if ( !ShouldVirtualizeIconCursorSize(a1) )
    return a1;
  DpiForSystem = GetDpiForSystem();
  SizeForDpi = CCursorSizes::GetSizeForDpi(v4, DpiForSystem);
  result = FindDPICursor(a1, SizeForDpi);
  if ( !result )
    return a1;
  return result;
}
