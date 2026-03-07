__int64 __fastcall MiDeleteEmptyPageTableTail(_QWORD *a1)
{
  unsigned __int64 *v2; // r14
  unsigned __int64 v3; // rsi
  _QWORD *v4; // r13
  unsigned __int64 v6; // r12
  int i; // ebp
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r10
  unsigned __int64 j; // r8
  _QWORD *v11; // rbx
  __int64 k; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r10
  __int64 *v16; // r8
  _QWORD *v17; // rax
  __int64 m; // r9
  unsigned __int64 v19; // r9
  __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  unsigned __int64 n; // rax
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rax
  __int64 v27; // r8

  MiFlushTbList(a1[2]);
  v2 = (unsigned __int64 *)a1[21];
  v3 = 0LL;
  v4 = v2 + 5;
  if ( *v2 )
  {
    v6 = *v2 & 0xFFFFFFFFFFFFF000uLL;
    for ( i = 0; ; i = 1 )
    {
      while ( 1 )
      {
        v8 = 0LL;
        do
        {
          v9 = v8 & -(__int64)(v8 < 0x200);
          for ( j = 511LL; ; j = v27 - 1 )
          {
            if ( j - v9 == -1LL )
              goto LABEL_39;
            v11 = &v4[v9 >> 6];
            for ( k = ~*v11 | ((1LL << (v9 & 0x3F)) - 1); k == -1; k = ~*v11 )
            {
              if ( ++v11 > &v4[j >> 6] )
                goto LABEL_39;
            }
            _BitScanForward64(&v13, ~k);
            v14 = v13 + ((v11 - v4) << 6);
            if ( v14 > j )
            {
LABEL_39:
              v14 = -1LL;
            }
            else if ( v14 != -1LL )
            {
              break;
            }
            if ( !v9 )
              break;
            v27 = v8 + 1;
            v9 = 0LL;
            if ( v8 + 1 > 0x200 )
              v27 = 512LL;
          }
          if ( v14 < v8 || v14 == -1LL )
            break;
          if ( v14 < 0x200 )
          {
            v15 = (unsigned __int64)(v2 + 12);
            v16 = &v4[v14 >> 6];
            v17 = v16 + 1;
            for ( m = ((1LL << (v14 & 0x3F)) - 1) | *v16; ; m = *v16 )
            {
              v19 = ~m;
              if ( v19 )
                break;
              if ( (unsigned __int64)v17 > v15 )
                goto LABEL_41;
              ++v16;
              ++v17;
            }
            _BitScanForward64((unsigned __int64 *)&v20, v19);
            v21 = (unsigned int)v20 + ((v16 - v4) << 6);
            if ( v21 > 0x200 )
            {
LABEL_41:
              v21 = 512LL;
              goto LABEL_27;
            }
            for ( n = ~(v19 | ((1LL << v20) - 1)); !n; n = *v23 )
            {
              v23 = (unsigned __int64 *)(v16 + 1);
              if ( (unsigned __int64)(v16 + 1) > v15 )
              {
                n = 64LL;
                goto LABEL_24;
              }
              ++v16;
            }
            _BitScanForward64(&n, n);
LABEL_24:
            v24 = n + ((v16 - v4) << 6);
            if ( v24 > 0x200 )
              v24 = 512LL;
            v3 = v24 - v21;
LABEL_27:
            if ( v3 )
              continue;
          }
          v21 = 512LL;
          v25 = v21 - v14;
          v26 = v6 + 8 * v14;
          *v2 = v26;
          v2[1] = v26 + 8 * v25 - 8;
          if ( i )
            MiDeleteEmptyPageTableCommit(a1);
          else
            MiDeletePteRun(a1[3], (__int64)v2);
          v8 = v25 + v3 + v14;
          v3 = 0LL;
        }
        while ( v8 < 0x200 );
        if ( !i )
          break;
        if ( (unsigned int)++i >= 2 )
          goto LABEL_33;
      }
      if ( !v2[14] )
        break;
      MiReleaseWalkLocks(a1);
    }
LABEL_33:
    *v2 = 0LL;
    v2[1] = 0LL;
    memset(v2 + 5, 0, 0x40uLL);
  }
  return 0LL;
}
