__int64 __fastcall MiAddRangeToPartitionTree(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rsi
  char v7; // r10
  __int64 v8; // rax
  int v9; // r9d
  unsigned __int64 v10; // r12
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  _QWORD *Pool; // rbx
  _QWORD *v14; // rbp
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rbp
  unsigned __int64 v19; // rbp
  PVOID v20; // rax
  __int64 v21; // rcx
  bool v22; // r8
  _QWORD *v23; // rdx
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 *v30; // r8
  __int64 v31; // r9
  __int64 *v32; // rdx
  bool v33; // zf
  bool j; // zf
  unsigned __int64 i; // [rsp+20h] [rbp-88h]
  __int64 v37; // [rsp+28h] [rbp-80h]
  unsigned __int64 *v38; // [rsp+B0h] [rbp+8h]
  __int64 v39; // [rsp+B8h] [rbp+10h]
  int v40; // [rsp+C0h] [rbp+18h]

  v39 = a2;
  v38 = a1;
  v4 = 0;
  v5 = 0LL;
  v40 = 0;
  v7 = a4;
  v8 = a2 & 0x3FFFFFFFFFFC0000LL;
  v9 = 0;
  v37 = a2 & 0x3FFFFFFFFFFC0000LL;
  v10 = 0LL;
  while ( 2 )
  {
    v11 = a2;
    v5 = v8 | v5 & 0xC000000000000000uLL;
    v12 = (a2 + a3 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
    for ( i = v12; ; v12 = i )
    {
      if ( !a3 )
      {
        LOBYTE(v4) = v9 == 0;
        return v4;
      }
      Pool = (_QWORD *)*a1;
      v14 = 0LL;
      if ( *a1 )
      {
        v15 = v5 & 0x3FFFFFFFFFFFFFFFLL;
        while ( 1 )
        {
          v16 = Pool[3];
          if ( v15 >= (v16 & 0x3FFFFFFFFFFFFFFFuLL) )
          {
            v17 = (__int64)(Pool + 4);
            if ( v15 < Pool[4] + (v16 & 0x3FFFFFFFFFFFFFFFuLL) )
            {
              if ( (v16 & 0x4000000000000000LL) == 0 || (v7 & 1) == 0 )
                Pool[3] = v16 & 0xBFFFFFFFFFFFFFFFuLL;
              goto LABEL_33;
            }
            Pool = (_QWORD *)Pool[1];
          }
          else
          {
            v14 = Pool;
            Pool = (_QWORD *)*Pool;
          }
          if ( !Pool )
          {
            v12 = i;
            break;
          }
        }
      }
      v18 = v14 ? v14[3] & 0x3FFFFFFFFFFFFFFFLL : v12;
      Pool = MiAllocatePool(64, 0x30uLL, 0x7070694Du);
      if ( !Pool )
        break;
      if ( (a4 & 2) != 0 )
        v19 = v18 - (v5 & 0x3FFFFFFFFFFFFFFFLL);
      else
        v19 = 0x40000LL;
      v20 = MiAllocatePool(64, 8 * ((v19 >> 6) + ((v19 & 0x3F) != 0)), 0x6270694Du);
      if ( !v20 )
      {
        ExFreePoolWithTag(Pool, 0);
        break;
      }
      v17 = (__int64)(Pool + 4);
      Pool[4] = v19;
      Pool[5] = v20;
      v21 = Pool[3] ^ (Pool[3] ^ v5) & 0x3FFFFFFFFFFFFFFFLL;
      Pool[3] = v21;
      if ( (a4 & 1) != 0 )
      {
        v21 |= 0x4000000000000000uLL;
        Pool[3] = v21;
      }
      v22 = 0;
      v23 = (_QWORD *)*v38;
      if ( *v38 )
      {
        v24 = v21 & 0x3FFFFFFFFFFFFFFFLL;
        while ( 1 )
        {
          if ( v24 >= (v23[3] & 0x3FFFFFFFFFFFFFFFuLL) )
          {
            v25 = (_QWORD *)v23[1];
            if ( !v25 )
            {
              v22 = 1;
              break;
            }
          }
          else
          {
            v25 = (_QWORD *)*v23;
            if ( !*v23 )
              break;
          }
          v23 = v25;
        }
      }
      RtlAvlInsertNodeEx(v38, (unsigned __int64)v23, v22, (unsigned __int64)Pool);
      v9 = v40;
      v7 = a4;
LABEL_33:
      v26 = Pool[3] & 0x3FFFFFFFFFFFFFFFLL;
      v27 = v26 + Pool[4] - v11;
      if ( v27 > a3 )
        v27 = a3;
      if ( (v7 & 4) == 0 )
      {
        v28 = v11 - v26;
        if ( v9 )
        {
          RtlClearBitsEx(v17, v28, v27);
          Pool[3] &= ~0x8000000000000000uLL;
          goto LABEL_57;
        }
        RtlSetBitsEx(v17, v28, v27);
        if ( v11 == (Pool[3] & 0x3FFFFFFFFFFFFFFFLL) && v27 == Pool[4] )
        {
          Pool[3] |= 0x8000000000000000uLL;
          goto LABEL_57;
        }
        v29 = Pool[4];
        if ( !*(_QWORD *)v17 )
          goto LABEL_57;
        if ( v29 > 1 )
        {
          if ( *(_QWORD *)v17 < v29 )
            goto LABEL_57;
          v30 = *(__int64 **)(v17 + 8);
          v31 = *v30;
          v32 = &v30[(v29 - 1) >> 6];
          if ( v30 != v32 )
          {
            for ( j = v31 == -1; j; j = *v30 == -1 )
            {
              if ( ++v30 == v32 )
              {
                v33 = (*v30 & (0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v29 - 1))) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v29 - 1);
                goto LABEL_53;
              }
            }
            goto LABEL_57;
          }
          v33 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v29)) & v31) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v29);
LABEL_53:
          if ( !v33 )
          {
LABEL_57:
            v7 = a4;
            goto LABEL_58;
          }
        }
        else if ( v29 != 1 || !_bittest64(*(const signed __int64 **)(v17 + 8), 0) )
        {
          goto LABEL_57;
        }
        Pool[3] |= 0x8000000000000000uLL;
        goto LABEL_57;
      }
LABEL_58:
      v9 = v40;
      v11 += v27;
      a1 = v38;
      a3 -= v27;
      v10 += v27;
      v5 ^= (v11 ^ v5) & 0x3FFFFFFFFFFFFFFFLL;
    }
    v9 = 1;
    v40 = 1;
    if ( v10 )
    {
      a1 = v38;
      a3 = v10;
      v7 = a4;
      a2 = v39;
      v8 = v37;
      continue;
    }
    return 0LL;
  }
}
