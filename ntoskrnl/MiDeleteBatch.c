/*
 * XREFs of MiDeleteBatch @ 0x14027A5E0
 * Callers:
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiDeleteClusterPage @ 0x14027A890 (MiDeleteClusterPage.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiDetermineModifiedPageListHead @ 0x14027E090 (MiDetermineModifiedPageListHead.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPfnShareCountIsZero @ 0x14032BF50 (MiPfnShareCountIsZero.c)
 *     MiCaptureDirtyBitToPfn @ 0x14032D790 (MiCaptureDirtyBitToPfn.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiBadShareCount @ 0x14064B0E0 (MiBadShareCount.c)
 */

__int64 __fastcall MiDeleteBatch(unsigned __int8 *a1)
{
  __int64 result; // rax
  __int64 v3; // r13
  __int64 v4; // r14
  unsigned __int8 v5; // bp
  __int64 v6; // r12
  char v7; // di
  unsigned __int64 v8; // rsi
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int8 i; // di
  unsigned __int64 v16; // rdx
  int v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  if ( !*a1 )
    return 0LL;
  v3 = 0LL;
  v18 = *((_QWORD *)a1 + 2);
  v4 = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)(qword_140C67048
                 + 8
                 * ((*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v18) >> 12) & 0xFFFFFFFFFFLL)
                               - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
  do
  {
    v18 = *(_QWORD *)&a1[8 * v5 + 16];
    v7 = v18;
    v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v18) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( (v7 & 0x42) != 0 )
      v10 = MiCaptureDirtyBitToPfn(v8);
    else
      v10 = 0LL;
    *(_QWORD *)&a1[8 * v5 + 16] = v10;
    v11 = MiDetermineModifiedPageListHead(v8, v6, 1LL, v9);
    if ( v11 != v4 )
    {
      if ( v4 )
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 32));
      v4 = v11;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 32));
    }
    if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
      MiBadShareCount(v8);
    v12 = *(_QWORD *)(v8 + 24) ^ (*(_QWORD *)(v8 + 24) ^ (*(_QWORD *)(v8 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v8 + 24) = v12;
    if ( (v12 & 0x3FFFFFFFFFFFFFFFLL) == 0 && (unsigned int)MiPfnShareCountIsZero(v8) == 3 && *(__int64 *)(v8 + 40) >= 0 )
      ++v3;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v5;
  }
  while ( v5 < *a1 );
  if ( v4 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 32));
  v13 = *((_QWORD *)a1 + 1);
  if ( a1[1] )
  {
    MiLockNestedPageAtDpcInline(*((_QWORD *)a1 + 1));
  }
  else
  {
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v17);
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
  }
  if ( (*(_BYTE *)(v13 + 34) & 7) != 6 || (v14 = *a1, (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < v14) )
    MiBadShareCount(v13);
  *(_QWORD *)(v13 + 24) ^= (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) - v14)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  for ( i = 0; i < *a1; ++i )
  {
    v16 = *(_QWORD *)&a1[8 * i + 16];
    if ( v16 )
      MiReleasePageFileInfo(v6, v16, 1);
  }
  result = v3;
  *a1 = 0;
  return result;
}
