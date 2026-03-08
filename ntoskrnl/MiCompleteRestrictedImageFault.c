/*
 * XREFs of MiCompleteRestrictedImageFault @ 0x14028D690
 * Callers:
 *     MiSoftFaultMappedView @ 0x14034A9A0 (MiSoftFaultMappedView.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140210114 (MiLockAndDecrementShareCount.c)
 *     MiAllocateWsle @ 0x14026D1B0 (MiAllocateWsle.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiGetContainingPageTable @ 0x140289FE0 (MiGetContainingPageTable.c)
 *     MiStartingOffset @ 0x14028C530 (MiStartingOffset.c)
 *     PfSnLogPageFault @ 0x14028D4BC (PfSnLogPageFault.c)
 *     MiQueueCoreWorkingSetEntries @ 0x14028D9D0 (MiQueueCoreWorkingSetEntries.c)
 *     MiIncreaseUsedPtesCount @ 0x14029F850 (MiIncreaseUsedPtesCount.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402CFF20 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiGetSessionIdForVa @ 0x140343520 (MiGetSessionIdForVa.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1403440B0 (MiReferenceControlAreaFileWithTag.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1403441C0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiGetUsedPtesHandle @ 0x140346CA0 (MiGetUsedPtesHandle.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiCompleteRestrictedImageFault(__int64 a1, unsigned __int64 a2, __int64 *a3, unsigned int a4)
{
  __int64 *v4; // r15
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  __int64 v8; // rdi
  unsigned __int64 v9; // r8
  unsigned int v10; // esi
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // ebp
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // r12
  _QWORD *v17; // rsi
  unsigned __int64 v18; // rbx
  __int64 v19; // rdi
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r13
  __int64 v22; // r14
  unsigned __int64 v23; // rbx
  int Wsle; // eax
  unsigned __int64 v25; // rdi
  __int64 UsedPtesHandle; // rax
  unsigned int SessionIdForVa; // eax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // [rsp+40h] [rbp-68h]
  unsigned __int64 v32; // [rsp+48h] [rbp-60h]
  __int64 v33; // [rsp+50h] [rbp-58h]
  __int64 v34; // [rsp+58h] [rbp-50h]
  unsigned int v38; // [rsp+C8h] [rbp+20h] BYREF

  v38 = a4;
  v4 = a3;
  v34 = *(_QWORD *)a1;
  v5 = a4;
  v6 = *a3;
  v7 = a2;
  v8 = a1;
  v9 = 0xFFFFDE0000000000uLL;
  v10 = 1;
  v11 = *(_QWORD *)(48 * v6 - 0x220000000000LL + 8) | 0x8000000000000000uLL;
  v12 = *(_QWORD *)(48 * v6 - 0x220000000000LL + 16);
  v32 = v11;
  if ( qword_140C657C0 && (v12 & 0x10) == 0 )
    v12 &= ~qword_140C657C0;
  v13 = 0;
  v14 = *(_QWORD *)(v12 >> 16);
  v33 = v14;
  if ( PfSnNumActiveTraces )
  {
    v30 = MiReferenceControlAreaFileWithTag(v14, 1666411853LL);
    v11 = v32;
    v15 = v30;
    v9 = 0xFFFFDE0000000000uLL;
  }
  else
  {
    v15 = 0LL;
  }
  v31 = v15;
  if ( v5 )
  {
    while ( 1 )
    {
      v16 = *v4;
      v17 = (_QWORD *)(48 * *v4 - 0x220000000000LL);
      v18 = v17[2];
      v19 = v18;
      if ( qword_140C657C0 && (v18 & 0x10) == 0 )
        v19 = v18 & ~qword_140C657C0;
      v20 = v17[1] | 0x8000000000000000uLL;
      v21 = v7 + 8 * ((__int64)(v20 - v11) >> 3);
      if ( v15 )
      {
        SessionIdForVa = MiGetSessionIdForVa(
                           v15,
                           (__int64)(v21 << 25) >> 16,
                           0xFFFFDE0000000000uLL,
                           0x8000000000000000uLL);
        v29 = MiStartingOffset((__int64 *)(v19 >> 16), v20, SessionIdForVa);
        v22 = v31;
        PfSnLogPageFault(v31, v29, 1u);
      }
      else
      {
        v22 = v31;
      }
      v8 = a1;
      v23 = MiMakeValidPte(v21, v16, (v18 >> 5) & 0x1F) & 0xFFFFFFFFFFFFFFDFuLL;
      MiQueueCoreWorkingSetEntries(a1, v21, v17);
      Wsle = MiAllocateWsle(v34, (unsigned __int64 *)v21, v17, 0, v23, 12, 0LL);
      v5 = v38;
      v7 = a2;
      if ( !Wsle )
        break;
      v11 = v32;
      ++v13;
      ++v4;
      v9 = 0xFFFFDE0000000000uLL;
      if ( v13 >= v38 )
      {
        v4 = a3;
        v10 = 1;
        v14 = v33;
        goto LABEL_17;
      }
      v15 = v31;
    }
    v4 = a3;
    --*(_WORD *)(a1 + 10);
    v14 = v33;
    v10 = 0;
  }
  else
  {
    v22 = v15;
  }
LABEL_17:
  if ( v13 )
  {
    if ( *(_WORD *)(v8 + 10) )
      MiEmptyDeferredWorkingSetEntries(v8, v11, v9);
    v25 = 48 * MiGetContainingPageTable(v7) - 0x220000000000LL;
    v38 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v38);
      while ( *(__int64 *)(v25 + 24) < 0 );
    }
    *(_QWORD *)(v25 + 24) ^= (*(_QWORD *)(v25 + 24) ^ (*(_QWORD *)(v25 + 24) + v13)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16);
    MiIncreaseUsedPtesCount(UsedPtesHandle, v13);
  }
  else
  {
    *(_WORD *)(v8 + 10) = 0;
  }
  if ( v13 != v5 )
  {
    do
      MiLockAndDecrementShareCount(48 * v4[v13++] - 0x220000000000LL, 0);
    while ( v13 != v5 );
    v22 = v31;
  }
  if ( v22 )
    ObFastDereferenceObjectDeferDelete(v14 + 64, v22, 1666411853LL);
  return v10;
}
