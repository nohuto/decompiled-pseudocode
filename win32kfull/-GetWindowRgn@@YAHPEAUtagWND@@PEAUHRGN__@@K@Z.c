/*
 * XREFs of ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x1C0025400
 * Callers:
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C0025360 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     ?GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z @ 0x1C0044458 (-GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     CalcVisRgn @ 0x1C00535C0 (CalcVisRgn.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C02AA790 (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall GetWindowRgn(struct tagWND *a1, HRGN a2, char a3)
{
  char *v3; // rbx
  unsigned int RgnBox; // eax
  unsigned int v7; // edi
  __int64 v9; // rdx
  HRGN v10; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+28h] [rbp-20h] BYREF

  v3 = (char *)a1 + 40;
  v10 = a2;
  if ( (a3 & 2) != 0 )
  {
    v11 = 0LL;
    CalcVisRgn(&v10);
    RgnBox = GreGetRgnBox(v10, &v11);
  }
  else
  {
    v9 = *(_QWORD *)(*(_QWORD *)v3 + 168LL);
    if ( !v9 )
      return 0LL;
    RgnBox = GreCombineRgn(a2, v9, 0LL, 5LL);
  }
  v7 = RgnBox;
  if ( !RgnBox )
    return 0LL;
  if ( (*(_WORD *)(*(_QWORD *)v3 + 42LL) & 0x2FFF) != 0x29D )
    v7 = GreOffsetRgn(
           v10,
           (unsigned int)-*(_DWORD *)(*(_QWORD *)v3 + 88LL),
           (unsigned int)-*(_DWORD *)(*(_QWORD *)v3 + 92LL));
  if ( (a3 & 0x20) != 0
    && W32GetThreadWin32Thread(KeGetCurrentThread())
    && *((_QWORD *)PtiCurrentShared() + 57)
    && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) != 0
    && (*(_DWORD *)(*(_QWORD *)v3 + 288LL) & 0x4000000F) == 0x40000000 )
  {
    GreScaleRgnToDestLogPixel(*(unsigned __int16 *)(*(_QWORD *)v3 + 284LL), v10);
  }
  return v7;
}
