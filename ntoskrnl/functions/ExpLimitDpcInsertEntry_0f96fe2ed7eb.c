unsigned __int64 __fastcall ExpLimitDpcInsertEntry(signed __int64 *a1)
{
  signed __int64 v1; // rsi
  int v2; // r12d
  unsigned __int64 v4; // r8
  int v5; // r10d
  unsigned __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  ULONG_PTR v16; // rax
  unsigned __int64 result; // rax
  __int64 v18; // rbp
  __int64 *v19; // rbx
  signed __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 i; // r9
  char *v26; // rcx
  unsigned __int64 v27; // rax

  v1 = *a1;
  v2 = 0;
  v4 = (unsigned int)PoolTrackTableMask & ((40543 * *(_DWORD *)(*a1 + 8)) ^ ((40543
                                                                            * (unsigned __int64)*(unsigned int *)(*a1 + 8)) >> 32));
  v5 = PoolTrackTableMask & ((40543 * *(_DWORD *)(*a1 + 8)) ^ ((40543 * (unsigned __int64)*(unsigned int *)(*a1 + 8)) >> 32));
  LODWORD(v6) = 0;
  do
  {
    v7 = 80LL * (unsigned int)v4;
    v8 = *(unsigned int *)((char *)ExPoolTagTables + v7);
    if ( v8 == *(_QWORD *)(v1 + 8) )
    {
      v2 = 1;
      v6 = 0xCCCCCCCCCCCCCCCDuLL * (v7 >> 4);
LABEL_22:
      v18 = 0LL;
      v19 = a1 + 1;
      v20 = v1 - (_QWORD)a1;
      while ( 1 )
      {
        if ( !*(__int64 *)((char *)v19 + v20 + 8) )
        {
          v21 = *(__int64 *)((char *)v19 + v20 + 16);
          v22 = *v19;
          if ( !v21 && (v22 || v19[1]) )
          {
            v23 = 0LL;
            goto LABEL_33;
          }
          v24 = *v19;
          if ( !v21 )
            goto LABEL_32;
        }
        v22 = *v19;
        v24 = *v19;
        if ( !*v19 && v19[1] == v22 )
        {
          v23 = (unsigned int)(v22 + 1);
        }
        else
        {
LABEL_32:
          v23 = 2LL;
          v22 = v24;
        }
LABEL_33:
        *(__int64 *)((char *)v19 + v20 + 8) = v22;
        result = v19[1];
        *(__int64 *)((char *)v19 + v20 + 16) = result;
        if ( v2 )
        {
          if ( (_DWORD)v23 == 2 )
            goto LABEL_50;
          v4 = v1 + 24 * v18;
          if ( (_DWORD)v23 )
            *(_QWORD *)(v4 + 32) = 1LL;
          else
            *(_QWORD *)(v4 + 32) = 0LL;
          result = (unsigned int)KeNumberProcessors_0;
          for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
          {
            v26 = (char *)*(&ExPoolTagTables + i) + 80 * (unsigned int)v6;
            if ( *(_DWORD *)v26 )
            {
              if ( !*((_QWORD *)v26 + 9) )
                _InterlockedCompareExchange64((volatile signed __int64 *)v26 + 9, v1, 0LL);
              if ( (_DWORD)v18 )
                v27 = *((_QWORD *)v26 + 1);
              else
                v27 = *((_QWORD *)v26 + 4);
              if ( (_DWORD)v23 )
              {
                *(_QWORD *)&v26[8 * v18 + 56] = 1LL;
              }
              else
              {
                *(_QWORD *)&v26[8 * v18 + 56] = v27;
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 32), v27);
              }
            }
            result = (unsigned int)KeNumberProcessors_0;
          }
          if ( (_DWORD)v23 != 1 )
          {
LABEL_50:
            result = *(__int64 *)((char *)v19 + v20 + 16);
            if ( result )
            {
              if ( result < *(__int64 *)((char *)v19 + v20 + 24) )
                result = ExpTrackRaiseLimitNotification(v1, v23, v4);
            }
          }
        }
        v18 = (unsigned int)(v18 + 1);
        v19 += 3;
        if ( (int)v18 >= 2 )
          return result;
      }
    }
    if ( !(_DWORD)v8 )
      break;
    v9 = PoolTrackTableMask & (v4 + 1);
    v4 = v9;
  }
  while ( v9 != v5 );
  if ( !PoolTrackTableExpansion )
    goto LABEL_22;
  v10 = 0;
  if ( !PoolTrackTableExpansionSize )
    goto LABEL_22;
  v11 = 0LL;
  while ( 1 )
  {
    v12 = 10 * v11;
    if ( !*(_DWORD *)(PoolTrackTableExpansion + 80 * v11) )
      goto LABEL_22;
    if ( *(_DWORD *)(PoolTrackTableExpansion + 80 * v11) == *(_DWORD *)(v1 + 8) )
      break;
    v11 = ++v10;
    if ( v10 >= (unsigned __int64)PoolTrackTableExpansionSize )
      goto LABEL_22;
  }
  v13 = 0LL;
  *(_QWORD *)(PoolTrackTableExpansion + 80 * v11 + 72) = v1;
  do
  {
    v14 = 3 * v13;
    *(_QWORD *)(v1 + 8 * v14 + 16) = a1[3 * v13 + 1];
    v15 = a1[3 * v13 + 2];
    v16 = PoolTrackTableExpansion;
    *(_QWORD *)(v1 + 8 * v14 + 24) = v15;
    if ( v13 )
      result = *(_QWORD *)(v16 + 8 * v12 + 8);
    else
      result = *(_QWORD *)(v16 + 8 * v12 + 32);
    *(_QWORD *)(v1 + 24 * v13 + 32) = result;
    if ( v15 && v15 < result )
      result = ExpTrackRaiseLimitNotification(v1, v15, v4);
    ++v13;
  }
  while ( v13 < 2 );
  return result;
}
