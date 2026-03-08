/*
 * XREFs of ExInitializePagedHeaps @ 0x140374F94
 * Callers:
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 * Callees:
 *     ExCreateHeap @ 0x14037523C (ExCreateHeap.c)
 *     RtlpDynamicLookasideInitialize @ 0x14039D5B0 (RtlpDynamicLookasideInitialize.c)
 */

__int64 ExInitializePagedHeaps()
{
  int v0; // esi
  __int64 v1; // r14
  int v2; // ecx
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int128 v6; // xmm1
  __int64 v7; // rax
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF

  v10 = 0LL;
  v0 = 0;
  if ( dword_140C74660 )
  {
    while ( 1 )
    {
      v9 = 0LL;
      BYTE2(v9) = v0;
      LOBYTE(v9) = 2;
      v1 = 1048LL * (unsigned int)v0;
      v2 = ExCreateHeap(&v9, 0LL, &v10);
      if ( v2 < 0 )
        break;
      v3 = v10;
      if ( PoolForceFullDecommit )
      {
        *(_DWORD *)(v10 + 880) |= 2u;
        *(_BYTE *)(v3 + 333) |= 8u;
        *(_BYTE *)(v3 + 525) |= 8u;
      }
      ExPoolState[v1 + 1826].Value = v3;
      RtlpDynamicLookasideInitialize(&ExPoolState[v1 + 1832]);
      *(_QWORD *)(v3 + 40) = &ExPoolState[v1 + 1832];
      v9 = 0LL;
      BYTE2(v9) = v0;
      LOBYTE(v9) = 10;
      v2 = ExCreateHeap(&v9, 0LL, &v10);
      if ( v2 < 0 )
        break;
      v4 = v10;
      ++v0;
      ExPoolState[v1 + 1827].Value = v10;
      *(_DWORD *)(v4 + 880) |= 2u;
      *(_BYTE *)(v4 + 333) |= 8u;
      *(_BYTE *)(v4 + 525) |= 8u;
      if ( v0 >= (unsigned int)dword_140C74660 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v9 = 0LL;
    LOBYTE(v9) = 2;
    v2 = ExCreateHeap(&v9, 0LL, &v10);
    if ( v2 >= 0 )
    {
      v5 = v10;
      v9 = 0LL;
      LOBYTE(v9) = 10;
      v6 = v9;
      *(_DWORD *)(v10 + 880) |= 2u;
      *(_BYTE *)(v5 + 333) |= 8u;
      *(_BYTE *)(v5 + 525) |= 8u;
      qword_140CF7690 = v5;
      v9 = v6;
      v2 = ExCreateHeap(&v9, 0LL, &v10);
      if ( v2 >= 0 )
      {
        v7 = v10;
        *(_DWORD *)(v10 + 880) |= 2u;
        *(_BYTE *)(v7 + 333) |= 8u;
        *(_BYTE *)(v7 + 525) |= 8u;
        qword_140CF7698 = v7;
      }
    }
  }
  return (unsigned int)v2;
}
