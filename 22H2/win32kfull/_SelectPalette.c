/*
 * XREFs of _SelectPalette @ 0x1C0131050
 * Callers:
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01FC7BC (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01FCAD4 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     _IsChild @ 0x1C0016C4C (_IsChild.c)
 *     GetNonChildAncestor @ 0x1C00255E4 (GetNonChildAncestor.c)
 *     GetThreadDesktopWindow @ 0x1C00EC080 (GetThreadDesktopWindow.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     WindowFromCacheDC @ 0x1C01BDECC (WindowFromCacheDC.c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C0214D24 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall SelectPalette(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  __int64 v6; // rax
  struct tagWND *v7; // rsi
  struct tagWND *NonChildAncestor; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx

  v5 = 1;
  if ( !a3 && (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && a2 != GreGetStockObject(15LL) )
  {
    v6 = WindowFromCacheDC(a1);
    v7 = (struct tagWND *)v6;
    if ( v6 )
    {
      NonChildAncestor = (struct tagWND *)GetNonChildAncestor(v6);
      if ( (*(_BYTE *)(*((_QWORD *)NonChildAncestor + 5) + 18LL) & 0x20) == 0 )
      {
        if ( NonChildAncestor != (struct tagWND *)GetThreadDesktopWindow(0LL) )
          *(_DWORD *)(*((_QWORD *)NonChildAncestor + 2) + 488LL) |= 0x800u;
        SetOrClrWF(1, NonChildAncestor, 0x220u, 1);
      }
      if ( gpqForeground )
        v9 = *(_QWORD *)(gpqForeground + 128LL);
      else
        v9 = 0LL;
      v10 = *(_QWORD *)(*((_QWORD *)NonChildAncestor + 3) + 8LL);
      if ( NonChildAncestor != *(struct tagWND **)(v10 + 24)
        && NonChildAncestor != *(struct tagWND **)(v10 + 168)
        && v9
        && ((struct tagWND *)v9 == v7 || (unsigned int)IsChild(v9, (__int64)v7) || (unsigned int)IsTopmostRealApp(v7))
        && *(char *)(*((_QWORD *)v7 + 5) + 24LL) >= 0 )
      {
        v5 = 0;
      }
    }
  }
  return GreSelectPalette(a1, a2, v5);
}
