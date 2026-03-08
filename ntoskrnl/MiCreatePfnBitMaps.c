/*
 * XREFs of MiCreatePfnBitMaps @ 0x140809BDC
 * Callers:
 *     MmCreatePartition @ 0x1403A6A3C (MmCreatePartition.c)
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     MiSplitPfnBitMaps @ 0x140809F08 (MiSplitPfnBitMaps.c)
 *     MiInitializeDynamicBitmap @ 0x14080A0E4 (MiInitializeDynamicBitmap.c)
 *     MiDeletePfnBitMaps @ 0x140A40338 (MiDeletePfnBitMaps.c)
 *     MiInitializeRebuildCandidateCounts @ 0x140B3C420 (MiInitializeRebuildCandidateCounts.c)
 */

__int64 __fastcall MiCreatePfnBitMaps(__int64 a1, _DWORD *a2)
{
  __int64 *v2; // r12
  unsigned __int64 v3; // r13
  _QWORD *v4; // r15
  unsigned int v5; // ebx
  unsigned int i; // esi
  unsigned __int64 v9; // rcx
  ULONG_PTR v10; // rax
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r12
  ULONG_PTR v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rsi
  ULONG_PTR v17; // rax
  __int64 *v18; // r15
  __int64 v19; // r13
  unsigned __int64 v20; // r15
  ULONG_PTR v21; // rax
  __int64 *v22; // r12
  __int64 v23; // rsi
  int v24; // esi
  __int64 *v26; // rdx
  unsigned int v27; // r8d
  _QWORD v28[10]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v29; // [rsp+90h] [rbp+18h]
  __int64 *v30; // [rsp+90h] [rbp+18h]
  unsigned __int64 v31; // [rsp+98h] [rbp+20h]

  v2 = MiLargePageSizes;
  v3 = qword_140C65820 + 1;
  v4 = (_QWORD *)(a1 + 16136);
  v5 = 0;
  for ( i = 0; i < 4; ++i )
  {
    if ( i < 2 )
    {
      v9 = *v2;
      v29 = (_QWORD *)(16LL * i + a1 + 16008);
    }
    else
    {
      v29 = v4;
      v9 = 512LL;
      if ( (unsigned __int16 *)a1 != MiSystemPartition )
      {
        *v4 = 0LL;
        v4[1] = 0LL;
        goto LABEL_7;
      }
    }
    v31 = v3 / v9 + (v3 % v9 != 0);
    v10 = MiReservePtes((__int64)&qword_140C695C0, (((v31 + 7) >> 3) + 4095) >> 12);
    v28[0] = v10;
    if ( !v10 )
      goto LABEL_30;
    if ( !(unsigned int)MiInitializeDynamicBitmap(v29, (__int64)(v10 << 25) >> 16, v31, 2LL) )
    {
      v27 = (((v31 + 7) >> 3) + 4095) >> 12;
      v26 = (__int64 *)v28[0];
LABEL_29:
      MiReleasePtes((__int64)&qword_140C695C0, v26, v27);
LABEL_30:
      MiDeletePfnBitMaps(a1);
      return 0LL;
    }
    *v29 = 0LL;
LABEL_7:
    ++v2;
    v4 += 2;
  }
  v11 = (v3 >> 9) + ((v3 & 0x1FF) != 0);
  v12 = (v11 + 4095) >> 12;
  v13 = MiReservePtes((__int64)&qword_140C695C0, v12);
  v30 = (__int64 *)v13;
  if ( !v13 )
    goto LABEL_30;
  v14 = (__int64)(v13 << 25) >> 16;
  if ( !(unsigned int)MiInitializeDynamicBitmap(v28, v14, 8 * v11, 2LL) )
  {
    v26 = v30;
    v27 = v12;
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 16048) = v14;
  v15 = ((v3 & 0x3FFFF) != 0) + (v3 >> 18);
  v16 = (((v15 + 7) >> 3) + 4095) >> 12;
  v17 = MiReservePtes((__int64)&qword_140C695C0, v16);
  v18 = (__int64 *)v17;
  if ( !v17 )
    goto LABEL_30;
  if ( !(unsigned int)MiInitializeDynamicBitmap(a1 + 16056, (__int64)(v17 << 25) >> 16, v15, 2LL) )
  {
    v27 = v16;
    v26 = v18;
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 16056) = 0LL;
  v19 = 2 * v15;
  v20 = (2 * v15 + 4095) >> 12;
  v21 = MiReservePtes((__int64)&qword_140C695C0, v20);
  v22 = (__int64 *)v21;
  if ( !v21 )
    goto LABEL_30;
  v23 = (__int64)(v21 << 25) >> 16;
  if ( !(unsigned int)MiInitializeDynamicBitmap(v28, v23, 8 * v19, 2LL) )
  {
    v27 = v20;
    v26 = v22;
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 16072) = v23;
  if ( a2 )
  {
    v24 = 0;
    if ( *a2 )
    {
      while ( (unsigned int)MiSplitPfnBitMaps(a1, *(_QWORD *)&a2[4 * v24 + 4], *(_QWORD *)&a2[4 * v24 + 6]) )
      {
        if ( (unsigned int)++v24 >= *a2 )
          goto LABEL_18;
      }
      return 0LL;
    }
  }
LABEL_18:
  *(_BYTE *)(a1 + 15782) = 1;
  if ( a2 && KeNumberNodes )
  {
    do
    {
      MiInitializeRebuildCandidateCounts(v5, 2LL);
      MiInitializeRebuildCandidateCounts(v5++, 1LL);
    }
    while ( v5 < (unsigned __int16)KeNumberNodes );
  }
  return 1LL;
}
