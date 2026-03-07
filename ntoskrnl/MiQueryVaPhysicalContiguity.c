__int64 __fastcall MiQueryVaPhysicalContiguity(__int64 a1, unsigned __int64 a2, int a3, char a4)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rsi
  int v8; // ebp
  int v9; // r12d
  unsigned int v10; // ebx
  int v11; // r14d
  unsigned __int8 v12; // al
  __int64 v13; // rax
  __int64 v14; // r13
  unsigned __int64 NextPageTable; // rax
  __int64 v16; // rbp
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int16 v22; // ax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rbp
  bool v26; // zf
  __int64 v27; // rax
  unsigned int v29; // [rsp+30h] [rbp-78h] BYREF
  int v30; // [rsp+34h] [rbp-74h]
  int v31; // [rsp+38h] [rbp-70h]
  __int64 v32; // [rsp+40h] [rbp-68h]
  unsigned __int64 v33; // [rsp+48h] [rbp-60h]
  __int64 v34; // [rsp+50h] [rbp-58h]
  __int64 v35; // [rsp+58h] [rbp-50h]
  int v37; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v38; // [rsp+C0h] [rbp+18h]

  v29 = 0;
  v4 = a1;
  v35 = MiLargePageSizes[a3];
  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v34 = -1LL;
  v6 = ((((v35 << 12) + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 0LL;
  v33 = v6;
  v32 = 0LL;
  v8 = 0;
  v37 = 0;
  v9 = 0;
  v10 = 1;
  v11 = 0;
  v31 = a4 & 1;
  v12 = MiLockWorkingSetShared(a1);
  v38 = v12;
  if ( v5 > v6 )
    goto LABEL_47;
  v13 = v6;
  while ( 1 )
  {
    v14 = 1LL;
    if ( v7 )
    {
      if ( (v5 & 0xFFF) != 0 )
        goto LABEL_19;
      MiUnlockPageTableInternal(v4, v7);
      v13 = v33;
      v7 = 0LL;
    }
    NextPageTable = MiGetNextPageTable(v5, v13, 0LL, v38, 1, &v29);
    if ( !NextPageTable )
      break;
    v16 = v29;
    v7 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v29 )
    {
      v32 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v17 = v32;
      if ( v29 > 1 )
      {
        v18 = v29 - 1;
        do
        {
          v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v18;
        }
        while ( v18 );
        v32 = v17;
      }
      v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    else
    {
      v17 = v32;
    }
    if ( NextPageTable != v5 )
      break;
    if ( v29 )
    {
      v19 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v17) >> 12) & 0xFFFFFFFFFFLL;
      v20 = (unsigned __int64)((__int64)(v5 << 25) >> 16) >> 12;
      v21 = v16;
      do
      {
        v22 = v20;
        v20 >>= 9;
        v23 = v14 * (v22 & 0x1FF);
        v14 <<= 9;
        v19 += v23;
        --v21;
      }
      while ( v21 );
      v11 = 1;
      v14 -= v19 & (v14 - 1);
      goto LABEL_29;
    }
LABEL_19:
    v30 = 0;
    v24 = MI_READ_PTE_LOCK_FREE(v5);
    if ( (v24 & 1) != 0 )
    {
      v19 = (v24 >> 12) & 0xFFFFFFFFFFLL;
      v25 = 48 * v19 - 0x220000000000LL;
    }
    else
    {
      if ( (v24 & 0xC00) != 0x800 || (a4 & 2) != 0 || (v25 = MiLockTransitionLeafPageEx(v5, 0LL, 0)) == 0 )
      {
        v9 = 1;
LABEL_43:
        v4 = a1;
        goto LABEL_44;
      }
      v30 = 1;
      v19 = 0xAAAAAAAAAAAAAAABuLL * ((v25 + 0x220000000000LL) >> 4);
    }
    if ( !(unsigned int)MiCheckContiguityTradeEligible(v25) )
      v11 = 1;
    if ( v30 )
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_29:
    if ( v34 == -1 )
      v26 = ((v35 - 1) & v19) == 0;
    else
      v26 = v34 == v19;
    if ( !v26 )
    {
      v37 = 1;
      if ( !v31 )
        goto LABEL_43;
    }
    v27 = v19 + v14;
    v4 = a1;
    v34 = v27;
    if ( (v5 & 0x78) == 0 && MiWorkingSetIsContended(a1) || KeShouldYieldProcessor() )
    {
      if ( v7 )
      {
        MiUnlockPageTableInternal(a1, v7);
        v7 = 0LL;
      }
      MiUnlockWorkingSetShared(a1, v38);
      MiLockWorkingSetShared(a1);
    }
    v13 = v33;
    v5 += 8 * v14;
    if ( v5 > v33 )
      goto LABEL_44;
  }
  v9 = 1;
LABEL_44:
  if ( v7 )
    MiUnlockPageTableInternal(v4, v7);
  v12 = v38;
  v8 = v37;
LABEL_47:
  MiUnlockWorkingSetShared(v4, v12);
  if ( v9 )
  {
    return (unsigned int)(v11 != 0) + 2;
  }
  else if ( v8 )
  {
    return v11 != 0 ? 3 : 0;
  }
  return v10;
}
