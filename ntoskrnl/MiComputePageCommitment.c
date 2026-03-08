/*
 * XREFs of MiComputePageCommitment @ 0x140345CE0
 * Callers:
 *     MiPerformVadSplitting @ 0x1402D581C (MiPerformVadSplitting.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140344540 (MiProtectPrivateMemory.c)
 *     MiCountCommittedPages @ 0x140644EA8 (MiCountCommittedPages.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402B0EB0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiLocateCloneAddress @ 0x1402CF530 (MiLocateCloneAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiIsPrototypePteVadLookup @ 0x140327240 (MiIsPrototypePteVadLookup.c)
 *     MiIsPteDecommittedPage @ 0x140345F34 (MiIsPteDecommittedPage.c)
 *     MiGetNextPageTable @ 0x1403468E0 (MiGetNextPageTable.c)
 */

__int64 __fastcall MiComputePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        _QWORD *a6,
        _QWORD *a7)
{
  int v7; // ebx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r12
  __int64 v10; // r13
  _QWORD *v11; // r14
  int v12; // eax
  __int64 NextPageTable; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  __int64 v16; // r15
  unsigned __int64 v17; // r14
  _QWORD *v18; // r15
  __int64 v20; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // r15
  __int64 v25; // rax
  unsigned __int64 v26; // r15
  _QWORD *CloneAddress; // rax
  bool v28; // cc
  unsigned __int64 v29; // [rsp+30h] [rbp-78h]
  _KPROCESS *Process; // [rsp+38h] [rbp-70h]
  __int64 v31; // [rsp+40h] [rbp-68h]
  unsigned __int64 v32; // [rsp+48h] [rbp-60h]
  unsigned int v33; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+10h]
  __int64 v35; // [rsp+C0h] [rbp+18h] BYREF
  char v36; // [rsp+C8h] [rbp+20h]

  v36 = a4;
  v33 = 0;
  v7 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v29 = Process[1].ActiveProcessors.StaticBitmap[28];
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( *(int *)(a3 + 52) < 0 )
  {
    v7 = 2;
    v10 = ((__int64)(v9 - v8) >> 3) + 1;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = a6;
  if ( a6 )
    *a6 = 0LL;
  if ( v8 <= v9 )
  {
    v12 = a5;
    do
    {
      NextPageTable = MiGetNextPageTable(v8, v9, 0, a4, v12, (__int64)&v33);
      v8 = NextPageTable;
      if ( !NextPageTable )
        return v10;
      v14 = 1LL;
      v15 = NextPageTable;
      v34 = 1LL;
      if ( v33 )
      {
        v20 = v33;
        do
        {
          v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v14 <<= 9;
          --v20;
        }
        while ( v20 );
        v34 = v14;
      }
      v31 = 8 * v14;
      v32 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v16 = *(_QWORD *)v15;
        if ( MiPteInShadowRange(v15)
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v16 & 1) != 0
          && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v22 = *((_QWORD *)&Flink->Flink + ((v15 >> 3) & 0x1FF));
            v23 = v16 | 0x20;
            if ( (v22 & 0x20) == 0 )
              v23 = v16;
            v16 = v23;
            if ( (v22 & 0x42) != 0 )
              v16 = v23 | 0x42;
          }
        }
        v35 = v16;
        if ( v16 )
        {
          if ( (unsigned int)MiIsPteDecommittedPage(&v35) )
            v7 |= 1u;
          else
            v7 &= ~1u;
          if ( (v7 & 2) != 0 )
          {
            if ( (v7 & 1) != 0 )
              v10 -= v34;
          }
          else if ( (v7 & 1) == 0 )
          {
            v10 += v34;
          }
          if ( v11 )
          {
            v17 = *(_QWORD *)(v29 + 344);
            if ( !v17 || (v7 & 1) != 0 )
              goto LABEL_19;
            if ( (v16 & 1) != 0 )
            {
              v24 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v35) >> 12) & 0xFFFFFFFFFFLL)
                  - 0x220000000000LL;
              v25 = *(_QWORD *)(v24 + 40);
              if ( v25 < 0 && ((v25 & 0x10000000000LL) != 0 || *(__int64 *)(v24 + 8) <= 0) )
              {
                v26 = *(_QWORD *)(v24 + 8) | 0x8000000000000000uLL;
                goto LABEL_57;
              }
              goto LABEL_19;
            }
            if ( (v16 & 0x400) == 0 || MiIsPrototypePteVadLookup(v16) || MI_PROTO_FORMAT_COMBINED(v16) )
              goto LABEL_19;
            if ( qword_140C657C0 && (v16 & 0x10) == 0 )
              v16 &= ~qword_140C657C0;
            v26 = v16 >> 16;
LABEL_57:
            CloneAddress = MiLocateCloneAddress((__int64)Process, v26);
            if ( !CloneAddress )
            {
LABEL_19:
              v11 = a6;
            }
            else
            {
              v28 = v17 <= CloneAddress[12];
              v11 = a6;
              if ( !v28 )
                ++*a6;
            }
          }
          v18 = a7;
          if ( a7
            && (v7 & 1) == 0
            && *(_QWORD *)(*(_QWORD *)(qword_140C67048
                                     + 8
                                     * ((*(_QWORD *)(48
                                                   * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v35) >> 12) & 0xFFFFFFFFFFLL)
                                                   - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL))
                         + 200LL) != *v18 )
          {
            *v18 = 0LL;
          }
        }
        v8 += v31;
        v15 += 8LL;
      }
      while ( (v15 & 0xFFF) != 0 && v8 <= v9 );
      v12 = a5;
      if ( (a5 & 4) == 0 )
      {
        MiUnlockPageTableInternal((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v32);
        v12 = a5;
      }
      a4 = v36;
    }
    while ( v8 <= v9 );
  }
  return v10;
}
