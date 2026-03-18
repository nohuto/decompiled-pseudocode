/*
 * XREFs of ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C0025DC8
 * Callers:
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0025910 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtUserDrawIconEx @ 0x1C00BDC50 (NtUserDrawIconEx.c)
 *     _DrawIconEx @ 0x1C00BDD48 (_DrawIconEx.c)
 *     NtUserGetIconSize @ 0x1C00FB970 (NtUserGetIconSize.c)
 * Callees:
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C0025EA8 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     GetCursorSizeFromIndex @ 0x1C009AAF8 (GetCursorSizeFromIndex.c)
 */

void __fastcall GetVirtualizedCursorSize(struct tagCURSOR *a1, int *a2, int *a3)
{
  unsigned int v6; // ebx
  unsigned int DpiForSystem; // eax
  INT CursorSizeFromIndex; // ebx

  *a2 = *((_DWORD *)a1 + 35);
  *a3 = *((_DWORD *)a1 + 36);
  v6 = 0;
  if ( ShouldVirtualizeIconCursorSize(a1) )
  {
    DpiForSystem = GetDpiForSystem();
    if ( DpiForSystem >= 0x90 )
    {
      if ( DpiForSystem >= 0xC0 )
      {
        if ( DpiForSystem >= 0x120 )
          v6 = 4 - (DpiForSystem < 0x180);
        else
          v6 = 2;
      }
      else
      {
        v6 = 1;
      }
    }
    CursorSizeFromIndex = GetCursorSizeFromIndex(v6);
    *a2 = EngMulDiv(*a2, CursorSizeFromIndex, *((_DWORD *)a1 + 19));
    *a3 = EngMulDiv(*a3, CursorSizeFromIndex, *((_DWORD *)a1 + 19));
  }
}
