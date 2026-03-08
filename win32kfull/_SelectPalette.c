/*
 * XREFs of _SelectPalette @ 0x1C0125A20
 * Callers:
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01FF33C (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01FF654 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     _IsChild @ 0x1C00164BC (_IsChild.c)
 *     GetNonChildAncestor @ 0x1C0027014 (GetNonChildAncestor.c)
 *     GetThreadDesktopWindow @ 0x1C003BE08 (GetThreadDesktopWindow.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     WindowFromCacheDC @ 0x1C01BF06C (WindowFromCacheDC.c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C02178E4 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall SelectPalette(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  __int64 v6; // rax
  struct tagWND *v7; // rsi
  __int64 *NonChildAncestor; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx

  v5 = 1;
  if ( !a3 && (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && a2 != GreGetStockObject(15LL) )
  {
    v6 = WindowFromCacheDC(a1);
    v7 = (struct tagWND *)v6;
    if ( v6 )
    {
      NonChildAncestor = (__int64 *)GetNonChildAncestor(v6);
      if ( (*(_BYTE *)(NonChildAncestor[5] + 18) & 0x20) == 0 )
      {
        if ( NonChildAncestor != (__int64 *)GetThreadDesktopWindow(0LL) )
          *(_DWORD *)(NonChildAncestor[2] + 488) |= 0x800u;
        SetOrClrWF(1, NonChildAncestor, 0x220u, 1);
      }
      if ( gpqForeground )
        v9 = *(_QWORD *)(gpqForeground + 128LL);
      else
        v9 = 0LL;
      v10 = *(_QWORD *)(NonChildAncestor[3] + 8);
      if ( NonChildAncestor != *(__int64 **)(v10 + 24)
        && NonChildAncestor != *(__int64 **)(v10 + 168)
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
