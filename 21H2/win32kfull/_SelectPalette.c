/*
 * XREFs of _SelectPalette @ 0x1C00EE130
 * Callers:
 *     NtUserSelectPalette @ 0x1C00EE0D0 (NtUserSelectPalette.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C0219890 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C0219BAC (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     GetNonChildAncestor @ 0x1C00825AC (GetNonChildAncestor.c)
 *     GetThreadDesktopWindow @ 0x1C00F26A0 (GetThreadDesktopWindow.c)
 *     _IsChild @ 0x1C011631C (_IsChild.c)
 *     WindowFromCacheDC @ 0x1C01E3328 (WindowFromCacheDC.c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C022E728 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall SelectPalette(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  __int64 v7; // rax
  struct tagWND *v8; // rsi
  struct tagWND *NonChildAncestor; // rbx
  struct tagWND *v10; // rcx
  __int64 v11; // rdx

  v5 = 1;
  if ( !a3 && (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && a2 != GreGetStockObject(15LL) )
  {
    v7 = WindowFromCacheDC(a1);
    v8 = (struct tagWND *)v7;
    if ( v7 )
    {
      NonChildAncestor = (struct tagWND *)GetNonChildAncestor(v7);
      if ( (*(_BYTE *)(*((_QWORD *)NonChildAncestor + 5) + 18LL) & 0x20) == 0 )
      {
        if ( NonChildAncestor != (struct tagWND *)GetThreadDesktopWindow(0LL) )
          *(_DWORD *)(*((_QWORD *)NonChildAncestor + 2) + 488LL) |= 0x800u;
        SetOrClrWF(1, NonChildAncestor, 0x220u, 1);
      }
      if ( gpqForeground )
        v10 = *(struct tagWND **)(gpqForeground + 120LL);
      else
        v10 = 0LL;
      v11 = *(_QWORD *)(*((_QWORD *)NonChildAncestor + 3) + 8LL);
      if ( NonChildAncestor != *(struct tagWND **)(v11 + 24)
        && NonChildAncestor != *(struct tagWND **)(v11 + 168)
        && v10
        && (v10 == v8 || (unsigned int)IsChild(v10, v8) || (unsigned int)IsTopmostRealApp(v8))
        && *(char *)(*((_QWORD *)v8 + 5) + 24LL) >= 0 )
      {
        v5 = 0;
      }
    }
  }
  return GreSelectPalette(a1, a2, v5);
}
