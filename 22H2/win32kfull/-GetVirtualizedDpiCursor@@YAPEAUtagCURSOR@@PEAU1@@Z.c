/*
 * XREFs of ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0028B20
 * Callers:
 *     NtUserDrawIconEx @ 0x1C0028220 (NtUserDrawIconEx.c)
 *     NtUserGetIconSize @ 0x1C0028390 (NtUserGetIconSize.c)
 *     NtUserGetCursorFrameInfo @ 0x1C00A7580 (NtUserGetCursorFrameInfo.c)
 * Callees:
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C00273AC (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C0027440 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C002BFB8 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 *     GetDpiForSystem @ 0x1C00EDB80 (GetDpiForSystem.c)
 */

struct tagCURSOR *__fastcall GetVirtualizedDpiCursor(struct tagCURSOR *a1)
{
  struct tagCURSOR *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int DpiForSystem; // eax
  CCursorSizes *v6; // rcx
  int SizeForDpi; // eax
  struct tagCURSOR *DPICursor; // rax

  v1 = a1;
  if ( ShouldVirtualizeIconCursorSize(a1) )
  {
    DpiForSystem = GetDpiForSystem(v3, v2);
    SizeForDpi = CCursorSizes::GetSizeForDpi(v6, DpiForSystem);
    DPICursor = FindDPICursor(v1, SizeForDpi);
    if ( DPICursor )
      return DPICursor;
  }
  return v1;
}
