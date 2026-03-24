/*
 * XREFs of ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0067074
 * Callers:
 *     NtUserDrawIconEx @ 0x1C0043E90 (NtUserDrawIconEx.c)
 *     NtUserGetIconInfo @ 0x1C00672D0 (NtUserGetIconInfo.c)
 *     NtUserGetIconSize @ 0x1C010F600 (NtUserGetIconSize.c)
 *     NtUserGetCursorFrameInfo @ 0x1C0162370 (NtUserGetCursorFrameInfo.c)
 * Callees:
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C0024D48 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     GetDpiForSystem @ 0x1C0063CBC (GetDpiForSystem.c)
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C00670B4 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C011C45C (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 */

struct tagCURSOR *__fastcall GetVirtualizedDpiCursor(struct tagCURSOR *a1)
{
  __int64 v2; // rcx
  struct tagCURSOR *result; // rax
  unsigned int DpiForSystem; // eax
  CCursorSizes *v5; // rcx
  int SizeForDpi; // eax

  if ( !ShouldVirtualizeIconCursorSize(a1) )
    return a1;
  DpiForSystem = GetDpiForSystem(v2);
  SizeForDpi = CCursorSizes::GetSizeForDpi(v5, DpiForSystem);
  result = FindDPICursor(a1, SizeForDpi);
  if ( !result )
    return a1;
  return result;
}
