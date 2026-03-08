/*
 * XREFs of ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C003B9FC
 * Callers:
 *     NtUserDrawIconEx @ 0x1C003B810 (NtUserDrawIconEx.c)
 *     NtUserGetIconSize @ 0x1C003B910 (NtUserGetIconSize.c)
 *     NtUserGetCursorFrameInfo @ 0x1C00DDFF0 (NtUserGetCursorFrameInfo.c)
 * Callees:
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C003AAB8 (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C003AB4C (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C0060F98 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
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
