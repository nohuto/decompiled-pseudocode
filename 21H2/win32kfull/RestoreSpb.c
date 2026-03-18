/*
 * XREFs of RestoreSpb @ 0x1C0158DC0
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0047DD4 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     IsVisible @ 0x1C006C350 (IsVisible.c)
 *     FreeSpb @ 0x1C00DCA08 (FreeSpb.c)
 *     FindSpb @ 0x1C0158F38 (FindSpb.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     GreSaveScreenBits @ 0x1C029D748 (GreSaveScreenBits.c)
 */

__int64 __fastcall RestoreSpb(__int64 a1, __int64 a2, HDC *a3)
{
  unsigned int v6; // esi
  __int64 Spb; // rbx
  __int64 v8; // r14
  __int64 v9; // r8
  int v10; // eax
  HDC v11; // rdi
  __int64 v12; // r12
  __int128 v14; // xmm0
  __int64 v15; // r8
  __int128 v16; // [rsp+60h] [rbp-58h] BYREF

  v6 = 0;
  Spb = FindSpb(a1);
  v8 = a2;
  v9 = *(_QWORD *)(Spb + 40);
  if ( v9 )
  {
    v6 = 1;
    v8 = ghrgnSPB1;
    if ( (unsigned int)GreCombineRgn(ghrgnSPB1, a2, v9, 1LL) <= 1 )
      goto LABEL_12;
  }
  v10 = *(_DWORD *)(Spb + 48);
  if ( (v10 & 1) != 0 )
  {
    v14 = *(_OWORD *)(Spb + 24);
    v15 = *(_QWORD *)(Spb + 56);
    *(_DWORD *)(Spb + 48) = v10 & 0xFFFFFFFE;
    v16 = v14;
    if ( !GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), 1LL, v15, &v16) )
    {
LABEL_12:
      FreeSpb(Spb);
      return 1LL;
    }
    SetRectRgnIndirect(ghrgnSPB2, Spb + 24);
    if ( (unsigned int)GreCombineRgn(a2, ghrgnSPB2, v8, 4LL) != 1 )
      v6 = 2;
  }
  else
  {
    v11 = *a3;
    if ( !*a3 )
    {
      v11 = *(HDC *)(gpDispInfo + 56LL);
      *a3 = v11;
    }
    v12 = GreSelectBitmap(ghdcMem, *(_QWORD *)(Spb + 16));
    if ( !v12 )
      goto LABEL_12;
    GreSelectVisRgn(v11, v8, 2LL);
    NtGdiBitBltInternal(
      v11,
      *(_DWORD *)(Spb + 24),
      *(_DWORD *)(Spb + 28),
      *(_DWORD *)(Spb + 32) - *(_DWORD *)(Spb + 24),
      *(_DWORD *)(Spb + 36) - *(_DWORD *)(Spb + 28),
      ghdcMem,
      *(_DWORD *)(Spb + 24) & 7,
      0,
      13369376,
      0,
      0);
    GreSelectBitmap(ghdcMem, v12);
    GreCombineRgn(a2, a2, v8, 4LL);
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 40) + 168LL) || !(unsigned int)IsVisible(a1) )
    FreeSpb(Spb);
  return v6;
}
