void *__fastcall MiFlushDirtyBitsToPfn(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v6; // r12d
  void *result; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // r13
  unsigned __int8 v11; // di
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rbx
  unsigned __int8 i; // [rsp+30h] [rbp-D0h]
  unsigned int v26; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v30; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v31; // [rsp+50h] [rbp-B0h]
  _QWORD v32[24]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = 0;
  v26 = 0;
  result = memset(v32, 0, 0xB8uLL);
  if ( !byte_140C65768 )
  {
    LODWORD(v32[0]) = 1;
    WORD2(v32[0]) = 0;
    v32[2] = 0LL;
    LODWORD(v32[1]) = 20;
    v32[3] = 0LL;
    v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v30 = *(_QWORD *)(a3 + 184) + 1664LL;
    v10 = v30;
    v11 = MiLockWorkingSetShared(v30);
    for ( i = v11; v8 <= v9; v11 = i )
    {
      LOBYTE(v12) = v11;
      NextPageTable = MiGetNextPageTable(v8, v9, (unsigned int)v32, v12, 0, (__int64)&v26);
      v8 = NextPageTable;
      if ( !NextPageTable )
        break;
      v15 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v31 = v15;
      if ( v26 )
      {
        v18 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v19 = v26;
        do
        {
          v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v19;
        }
        while ( v19 );
        v20 = 0x200000LL;
        if ( v26 > 1 )
        {
          v21 = v26 - 1;
          do
          {
            v18 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v20 <<= 9;
            --v21;
          }
          while ( v21 );
        }
        v22 = MI_READ_PTE_LOCK_FREE(v18);
        v27 = v22;
        if ( (v22 & 1) != 0 && (v22 & 0x42) != 0 )
        {
          v23 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v27) >> 12) & 0xFFFFFFFFFFLL) + 24;
          if ( v20 )
          {
            v24 = v23 - 0x220000000000LL;
            do
            {
              v28 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v24, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v28);
                while ( *(__int64 *)v24 < 0 );
              }
              *(_BYTE *)(v24 + 10) |= 0x10u;
              _InterlockedAnd64((volatile signed __int64 *)v24, 0x7FFFFFFFFFFFFFFFuLL);
              v6 += 4096;
              v24 += 48LL;
            }
            while ( v6 < v20 );
            v10 = v30;
          }
          v6 = 0;
        }
        v8 = (((unsigned __int64)MiGetLeafVa(v18 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      else
      {
        v14 = (__int64)(NextPageTable << 25) >> 16;
        do
        {
          v13 = MI_READ_PTE_LOCK_FREE(v8);
          v27 = v13;
          if ( (v13 & 1) != 0 && (v13 & 0x42) != 0 )
          {
            v17 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v27) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            v29 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v29);
              while ( *(__int64 *)(v17 + 24) < 0 );
            }
            *(_BYTE *)(v17 + 34) |= 0x10u;
            _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiWriteValidPteNewProtection(v8, v27 & 0xFFFFFFFFFFFFFFBDuLL);
            MiInsertTbFlushEntry(v32, v14, 1LL);
          }
          v14 += 4096LL;
          v8 += 8LL;
        }
        while ( (v14 & 0x1FFFFF) != 0 && v8 <= v9 );
        MiFlushTbList(v32);
        v15 = v31;
        v10 = v30;
      }
      MiUnlockPageTableInternal(v10, v15);
    }
    return (void *)MiUnlockWorkingSetShared(v10, v11);
  }
  return result;
}
