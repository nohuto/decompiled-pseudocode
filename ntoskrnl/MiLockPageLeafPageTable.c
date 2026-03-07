__int64 __fastcall MiLockPageLeafPageTable(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // r14
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rbx
  bool i; // zf
  __int64 v11; // r15
  __int64 v12; // rax
  char v13; // r12
  unsigned __int64 v14; // r9
  __int64 j; // r10
  __int16 v16; // ax
  __int64 v17; // rax
  __int64 v18; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned __int64 v22; // [rsp+20h] [rbp-48h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]
  unsigned __int64 v24; // [rsp+30h] [rbp-38h]
  __int64 v25; // [rsp+38h] [rbp-30h]
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 48) = ZeroPte;
  v4 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v22 = v4;
  v23 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v24 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = *(_QWORD *)(a1 + 40);
  v25 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v5 )
  {
    if ( v5 == ((*(_QWORD *)(a1 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      goto LABEL_4;
    MiUnlockPageTableInternal(v2, v5);
    *(_DWORD *)(a1 + 72) &= ~0x20u;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v6 = MiFastLockLeafPageTable(v2, v1, 4LL);
  if ( !v6 )
  {
    LODWORD(v9) = 3;
    *(_QWORD *)(a1 + 40) = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    goto LABEL_13;
  }
  *(_QWORD *)(a1 + 40) = *(&v22 + v6);
  if ( v6 != 1 )
  {
    LODWORD(v9) = v6 - 1;
    goto LABEL_13;
  }
  while ( 1 )
  {
LABEL_4:
    v7 = *(_QWORD *)v4;
    if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
        || (v7 & 1) == 0
        || (v7 & 0x20) != 0 && (v7 & 0x42) != 0 )
      {
        v4 = v22;
      }
      else
      {
        v4 = v22;
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v20 = *((_QWORD *)&Flink->Flink + ((v22 >> 3) & 0x1FF));
          v21 = v7 | 0x20;
          if ( (v20 & 0x20) == 0 )
            v21 = v7;
          v7 = v21;
          if ( (v20 & 0x42) != 0 )
            v7 = v21 | 0x42;
        }
      }
    }
    if ( (v7 & 1) != 0 )
      break;
    result = MiFaultInProbeAddress(a1);
    if ( (int)result < 0 )
    {
LABEL_31:
      ++dword_140C67B74;
      return result;
    }
    *(_QWORD *)(a1 + 40) = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    LODWORD(v9) = 3;
LABEL_13:
    v9 = (int)v9;
    for ( i = (int)v9 == 0LL; !i; i = v9 == 0 )
    {
      while ( 1 )
      {
        v11 = *(&v22 + v9);
        v12 = MI_READ_PTE_LOCK_FREE(v11);
        v26 = v12;
        if ( (v12 & 1) != 0 )
          break;
        result = MiFaultInProbeAddress(a1);
        if ( (int)result < 0 )
          goto LABEL_31;
        *(_QWORD *)(a1 + 40) = 0xFFFFF6FB7DBEDF68uLL;
        MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
        v9 = 3LL;
      }
      if ( (v12 & 0x80u) != 0LL )
      {
        if ( *(_DWORD *)(a1 + 96) == 1 && (v12 & 0x800) == 0 )
        {
          ++dword_140C67B7C;
          return 3221225477LL;
        }
        v13 = 1;
        v1 >>= 12;
        v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v26) >> 12) & 0xFFFFFFFFFFLL;
        for ( j = 1LL; v9; --v9 )
        {
          v16 = v1;
          v1 >>= 9;
          v17 = j * (v16 & 0x1FF);
          j <<= 9;
          v14 += v17;
        }
        v18 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 136) = v14;
        *(_QWORD *)(a1 + 152) = v18 & ~((j << 12) - 1);
        *(_QWORD *)(a1 + 160) = (~((j << 12) - 1) & ((j << 12) + v18)) - 1;
        *(_DWORD *)(a1 + 72) |= 0x20u;
        *(_QWORD *)(a1 + 168) = v14 & ~(j - 1);
      }
      else
      {
        v13 = 0;
      }
      MiLockPageTableInternal(v2, v11, 0LL);
      MiUnlockPageTableInternal(v2, *(_QWORD *)(a1 + 40));
      *(_QWORD *)(a1 + 40) = v11;
      if ( v13 )
        return 0LL;
      --v9;
    }
  }
  *(_QWORD *)(a1 + 48) = v7;
  return 0LL;
}
