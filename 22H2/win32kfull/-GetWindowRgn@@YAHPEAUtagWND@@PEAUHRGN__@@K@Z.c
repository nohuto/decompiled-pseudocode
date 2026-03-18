/*
 * XREFs of ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x1C005EE64
 * Callers:
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C005EDC4 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     ?GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z @ 0x1C00ECBC8 (-GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z.c)
 * Callees:
 *     CalcVisRgn @ 0x1C0033320 (CalcVisRgn.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C02A8100 (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall GetWindowRgn(struct tagWND *a1, HRGN a2, char a3)
{
  char *v3; // rbx
  int v7; // ecx
  unsigned int v8; // r8d
  __int64 v9; // r9
  unsigned int RgnBox; // eax
  unsigned int v11; // edi
  __int64 v13; // rdx
  HRGN v14; // [rsp+20h] [rbp-28h] BYREF
  __int128 v15; // [rsp+28h] [rbp-20h] BYREF

  v3 = (char *)a1 + 40;
  v14 = a2;
  if ( (a3 & 2) != 0 )
  {
    v7 = 2 * (a3 & 4 | 0x4800200);
    v8 = v7 | 0x10;
    v15 = 0LL;
    if ( (a3 & 8) == 0 )
      v8 = v7;
    v9 = v8 | 1;
    if ( (a3 & 0x10) != 0 )
      v9 = v8;
    CalcVisRgn(&v14, a1, a1, v9);
    RgnBox = GreGetRgnBox(v14, &v15);
  }
  else
  {
    v13 = *(_QWORD *)(*(_QWORD *)v3 + 168LL);
    if ( !v13 )
      return 0LL;
    RgnBox = GreCombineRgn(a2, v13, 0LL, 5LL);
  }
  v11 = RgnBox;
  if ( !RgnBox )
    return 0LL;
  if ( (*(_WORD *)(*(_QWORD *)v3 + 42LL) & 0x2FFF) != 0x29D )
    v11 = GreOffsetRgn(
            v14,
            (unsigned int)-*(_DWORD *)(*(_QWORD *)v3 + 88LL),
            (unsigned int)-*(_DWORD *)(*(_QWORD *)v3 + 92LL));
  if ( (a3 & 0x20) != 0
    && W32GetThreadWin32Thread(KeGetCurrentThread())
    && *((_QWORD *)PtiCurrentShared() + 57)
    && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) != 0
    && (*(_DWORD *)(*(_QWORD *)v3 + 288LL) & 0x4000000F) == 0x40000000 )
  {
    GreScaleRgnToDestLogPixel(*(unsigned __int16 *)(*(_QWORD *)v3 + 284LL), v14);
  }
  return v11;
}
