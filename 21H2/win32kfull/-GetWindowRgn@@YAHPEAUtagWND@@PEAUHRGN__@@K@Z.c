/*
 * XREFs of ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x1C00B4AAC
 * Callers:
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C00B4348 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     ?GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z @ 0x1C00B478C (-GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     CalcVisRgn @ 0x1C004B8D0 (CalcVisRgn.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C029D948 (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall GetWindowRgn(struct tagWND *a1, HRGN a2, char a3)
{
  int v6; // ecx
  unsigned int v7; // r9d
  unsigned int RgnBox; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  HRGN v14; // [rsp+20h] [rbp-28h] BYREF
  __int128 v15; // [rsp+28h] [rbp-20h] BYREF

  v14 = a2;
  if ( (a3 & 2) != 0 )
  {
    v6 = (2 * (a3 & 4 | 0x4800200)) | 0x10;
    if ( (a3 & 8) == 0 )
      v6 = 2 * (a3 & 4 | 0x4800200);
    v7 = v6 | 1;
    v15 = 0LL;
    if ( (a3 & 0x10) != 0 )
      v7 = v6;
    CalcVisRgn(&v14, a1, a1, v7);
    RgnBox = GreGetRgnBox(v14, &v15);
  }
  else
  {
    v12 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL);
    if ( !v12 )
      return 0LL;
    RgnBox = GreCombineRgn(a2, v12, 0LL, 5LL);
  }
  v9 = RgnBox;
  if ( !RgnBox )
    return 0LL;
  v10 = *((_QWORD *)a1 + 5);
  if ( (*(_WORD *)(v10 + 42) & 0x2FFF) != 0x29D )
    v9 = GreOffsetRgn(v14, (unsigned int)-*(_DWORD *)(v10 + 88), (unsigned int)-*(_DWORD *)(v10 + 92));
  if ( (a3 & 0x20) != 0
    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) != 0 )
  {
    v13 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v13 + 288) & 0x4000000F) == 0x40000000 )
      GreScaleRgnToDestLogPixel(*(unsigned __int16 *)(v13 + 284), v14);
  }
  return v9;
}
