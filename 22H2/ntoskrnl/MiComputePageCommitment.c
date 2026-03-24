/*
 * XREFs of MiComputePageCommitment @ 0x14028D1E0
 * Callers:
 *     MiCommitExistingVad @ 0x140218D50 (MiCommitExistingVad.c)
 *     MiDeletePartialVad @ 0x14027DF5C (MiDeletePartialVad.c)
 *     MiProtectPrivateMemory @ 0x14028E080 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1402B3300 (MiSetProtectionOnSection.c)
 *     MiCountCommittedPages @ 0x1405498E8 (MiCountCommittedPages.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x14023E878 (MiLocateCloneAddress.c)
 *     MiIsPteDecommittedPage @ 0x14028D5E0 (MiIsPteDecommittedPage.c)
 *     MiGetNextPageTable @ 0x14028DEA0 (MiGetNextPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402E31E8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x1402E3470 (MiIsPrototypePteVadLookup.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiComputePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int16 a4,
        int a5,
        _QWORD *a6)
{
  int v6; // ebx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rbp
  __int64 v10; // r13
  _QWORD *v11; // rsi
  int v12; // eax
  __int64 NextPageTable; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // rdi
  __int64 v17; // r15
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rax
  int IsPteDecommittedPage; // eax
  __int64 v23; // r9
  int v24; // ecx
  unsigned int v25; // ecx
  __int64 v26; // rax
  unsigned __int64 v27; // r14
  _QWORD *CloneAddress; // rsi
  unsigned __int64 v29; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // r9
  bool v34; // cc
  __int64 v35; // [rsp+30h] [rbp-68h] BYREF
  _KPROCESS *Process; // [rsp+38h] [rbp-60h]
  _KPROCESS *v37; // [rsp+40h] [rbp-58h]
  unsigned __int64 *v38; // [rsp+48h] [rbp-50h]
  unsigned int v39; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v40; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v41; // [rsp+B0h] [rbp+18h]
  unsigned __int8 v42; // [rsp+B8h] [rbp+20h]

  v42 = a4;
  v39 = 0;
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = Process[1].ActiveProcessorsPadding[8];
  v38 = &Process[1].ActiveProcessorsPadding[6];
  v41 = v7;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v40 = v9;
  if ( *(int *)(a3 + 52) >= 0 )
  {
    v10 = 0LL;
  }
  else
  {
    v6 = 2;
    v10 = ((__int64)(v9 - v8) >> 3) + 1;
  }
  v11 = a6;
  if ( a6 )
    *a6 = 0LL;
  if ( v8 <= v9 )
  {
    v12 = a5;
    do
    {
      NextPageTable = MiGetNextPageTable(v8, v9, 0, a4, v12, (__int64)&v39);
      v8 = NextPageTable;
      if ( !NextPageTable )
        return v10;
      v16 = NextPageTable;
      v17 = 1LL;
      if ( v39 )
      {
        v18 = v39;
        v14 = 0xFFFFF68000000000uLL;
        v15 = 0x7FFFFFFFF8LL;
        do
        {
          v16 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v17 <<= 9;
          --v18;
        }
        while ( v18 );
      }
      v19 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v37 = (_KPROCESS *)v19;
      do
      {
        v20 = *(_QWORD *)v16;
        if ( v16 >= 0xFFFFF6FB7DBED000uLL
          && v16 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v19, v14, v15, v20)
          && (v20 & 1) != 0
          && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
        {
          v19 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v14 = *(_QWORD *)(v19 + 1928);
          if ( v14 )
          {
            v21 = *(_QWORD *)(v14 + 8 * ((v16 >> 3) & 0x1FF));
            v14 = v20 | 0x20;
            v19 = (unsigned __int8)v21;
            LOBYTE(v19) = v21 & 0x20;
            if ( (v21 & 0x20) == 0 )
              v14 = v20;
            v20 = v14;
            if ( (v21 & 0x42) != 0 )
              v20 = v14 | 0x42;
          }
        }
        v35 = v20;
        if ( v20 )
        {
          IsPteDecommittedPage = MiIsPteDecommittedPage(&v35);
          v24 = v6;
          v6 |= 1u;
          v25 = v24 & 0xFFFFFFFE;
          if ( !IsPteDecommittedPage )
            v6 = v25;
          v19 = v6 & 1;
          if ( (v6 & 2) != 0 )
          {
            v26 = v10 - v17;
            if ( (v6 & 1) == 0 )
              v26 = v10;
            v10 = v26;
          }
          else if ( (v6 & 1) == 0 )
          {
            v10 += v17;
          }
          if ( !v11 )
            goto LABEL_42;
          v27 = *(_QWORD *)(v7 + 360);
          if ( !v27 || (v6 & 1) != 0 )
            goto LABEL_41;
          CloneAddress = 0LL;
          if ( (v23 & 1) != 0 )
          {
            v29 = MI_READ_PTE_LOCK_FREE(&v35);
            if ( (unsigned int)MI_PFN_IS_PROTO(48 * ((v29 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) )
            {
              v14 = 0x1000000000LL;
              if ( (*(_QWORD *)(v19 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v19 + 8) > 0 )
              {
                v11 = a6;
LABEL_41:
                v7 = v41;
LABEL_42:
                v9 = v40;
                goto LABEL_43;
              }
              v31 = *(_QWORD *)(v19 + 8) | 0x8000000000000000uLL;
LABEL_57:
              CloneAddress = MiLocateCloneAddress((__int64)Process, v31);
            }
          }
          else if ( (v23 & 0x400) != 0
                 && !(unsigned int)MiIsPrototypePteVadLookup(v23)
                 && !(unsigned __int8)MI_PROTO_FORMAT_COMBINED(v32) )
          {
            if ( qword_140C4DF40 && (v33 & 0x10) == 0 )
              v33 &= ~qword_140C4DF40;
            v31 = v33 >> 16;
            goto LABEL_57;
          }
          v9 = v40;
          if ( CloneAddress )
          {
            v34 = v27 <= CloneAddress[12];
            v11 = a6;
            v7 = v41;
            if ( !v34 )
              ++*a6;
          }
          else
          {
            v11 = a6;
            v7 = v41;
          }
        }
LABEL_43:
        v16 += 8LL;
        v8 += 8 * v17;
      }
      while ( (v16 & 0xFFF) != 0 && v8 <= v9 );
      v12 = a5;
      if ( (a5 & 4) == 0 )
      {
        MiUnlockPageTableInternal(v38, v37);
        v12 = a5;
      }
      a4 = v42;
    }
    while ( v8 <= v9 );
  }
  return v10;
}
