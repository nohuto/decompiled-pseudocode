/*
 * XREFs of MiFlushDirtyBitsToPfn @ 0x1402F908C
 * Callers:
 *     MmFlushVirtualMemory @ 0x140668FB4 (MmFlushVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiGetNextPageTable @ 0x14028DEA0 (MiGetNextPageTable.c)
 *     MiWriteValidPteNewProtection @ 0x140290080 (MiWriteValidPteNewProtection.c)
 *     MiGetLeafVa @ 0x1402AD4F0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 */

void *__fastcall MiFlushDirtyBitsToPfn(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  void *result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r12
  __int64 v12; // r13
  char v13; // bl
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  _KPROCESS *v18; // rdx
  unsigned __int64 v19; // rbx
  struct _LIST_ENTRY *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  unsigned __int64 v24; // rdi
  __int64 v25; // rdx
  unsigned __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rbx
  unsigned int v34; // esi
  __int64 v35; // rbx
  char i; // [rsp+30h] [rbp-D0h]
  __int64 v37; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v38; // [rsp+40h] [rbp-C0h] BYREF
  int v39; // [rsp+44h] [rbp-BCh] BYREF
  int v40; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v42; // [rsp+58h] [rbp-A8h]
  _QWORD v43[24]; // [rsp+60h] [rbp-A0h] BYREF

  v38 = 0;
  result = memset(v43, 0, 0xB8uLL);
  if ( !byte_140C4DEE8 )
  {
    LODWORD(v43[0]) = 1;
    WORD2(v43[0]) = 0;
    v43[2] = 0LL;
    LODWORD(v43[1]) = 20;
    v43[3] = 0LL;
    v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v41 = *(_QWORD *)(a3 + 184) + 1664LL;
    v12 = v41;
    v13 = MiLockWorkingSetShared(v41, v7, v8, v9);
    for ( i = v13; v10 <= v11; v13 = i )
    {
      NextPageTable = MiGetNextPageTable(v10, v11, (__int64)v43, v13, 0, &v38);
      v10 = NextPageTable;
      if ( !NextPageTable )
        break;
      v15 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v42 = v15;
      if ( v38 )
      {
        v24 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v25 = v38;
        do
        {
          v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v25;
        }
        while ( v25 );
        v26 = 0x200000LL;
        if ( v38 > 1 )
        {
          v27 = v38 - 1;
          do
          {
            v24 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v26 <<= 9;
            --v27;
          }
          while ( v27 );
        }
        v28 = MI_READ_PTE_LOCK_FREE(v24);
        v37 = v28;
        v29 = v28;
        if ( (v28 & 1) != 0 && (v28 & 0x42) != 0 )
        {
          if ( MiPteInShadowRange((unsigned __int64)&v37)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v29 & 0x20) == 0 )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v37 >> 3) & 0x1FF)) & 0x20) != 0 )
                v29 |= 0x20uLL;
            }
          }
          v33 = 48 * ((v29 >> 12) & 0xFFFFFFFFFLL) + 24;
          v34 = 0;
          if ( v26 )
          {
            v35 = v33 - 0x58000000000LL;
            do
            {
              v39 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v35, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v39, (__int64)Flink, v31, v32);
                while ( *(__int64 *)v35 < 0 );
              }
              *(_BYTE *)(v35 + 10) |= 0x10u;
              _InterlockedAnd64((volatile signed __int64 *)v35, 0x7FFFFFFFFFFFFFFFuLL);
              v34 += 4096;
              v35 += 48LL;
            }
            while ( v34 < v26 );
            v12 = v41;
          }
        }
        v10 = ((MiGetLeafVa(v24 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      else
      {
        v16 = (__int64)(NextPageTable << 25) >> 16;
        do
        {
          v17 = MI_READ_PTE_LOCK_FREE(v10);
          v37 = v17;
          v19 = v17;
          if ( (v17 & 1) != 0 && (v17 & 0x42) != 0 )
          {
            if ( MiPteInShadowRange((unsigned __int64)&v37)
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v19 & 0x20) == 0 )
            {
              v20 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v20 )
              {
                if ( ((__int64)*(&v20->Flink + (((unsigned __int64)&v37 >> 3) & 0x1FF)) & 0x20) != 0 )
                  v19 |= 0x20uLL;
              }
            }
            v23 = 48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v40 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v40, (__int64)v20, v21, v22);
              while ( *(__int64 *)(v23 + 24) < 0 );
            }
            *(_BYTE *)(v23 + 34) |= 0x10u;
            _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiWriteValidPteNewProtection(v10, v37 & 0xFFFFFFFFFFFFFFBDuLL);
            MiInsertTbFlushEntry((__int64)v43, v16, 1LL, 0);
          }
          v16 += 4096LL;
          v10 += 8LL;
        }
        while ( (v16 & 0x1FFFFF) != 0 && v10 <= v11 );
        MiFlushTbList((__int64)v43, v18);
        v15 = v42;
        v12 = v41;
      }
      MiUnlockPageTableInternal(v12, v15);
    }
    return (void *)MiUnlockWorkingSetShared(v12, v13);
  }
  return result;
}
