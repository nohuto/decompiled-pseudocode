/*
 * XREFs of RtlpLookupDynamicFunctionEntry @ 0x18007CDD0
 * Callers:
 *     RtlLookupFunctionEntry @ 0x180032BE0 (RtlLookupFunctionEntry.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpLookupDynamicFunctionEntry(
        unsigned __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  _QWORD *v6; // rax
  int v7; // ebx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 result; // rax
  unsigned int *v13; // r14
  __int64 v14; // rbp
  unsigned int v15; // edx
  unsigned __int64 v16; // rsi
  __int64 (__fastcall *v17)(unsigned __int64, __int64); // rdi
  __int64 v18; // rbx
  int v19; // edx
  unsigned __int64 v20; // rsi
  unsigned int *v21; // rdi
  unsigned __int64 v22; // rcx
  int v23; // r8d
  int i; // r9d
  int v25; // edx

  RtlAcquireSRWLockShared(&RtlpDynamicFunctionTableLock, (unsigned __int64)a2, a3, a4);
  v6 = (_QWORD *)RtlpDynamicCallbackTableTreeMin;
  v7 = 0;
  while ( v6 )
  {
    if ( a1 < *(v6 - 7) )
    {
      v6 = (_QWORD *)*v6;
    }
    else
    {
      if ( a1 < *(v6 - 6) )
        break;
      v6 = (_QWORD *)v6[1];
    }
  }
  v8 = v6 - 11;
  if ( !v6 )
  {
    v9 = (_QWORD *)RtlpDynamicCallbackTableTreeMax;
    while ( v9 )
    {
      if ( a1 < *(v9 - 10) )
      {
        v9 = (_QWORD *)*v9;
      }
      else
      {
        if ( a1 < *(v9 - 9) )
          break;
        v9 = (_QWORD *)v9[1];
      }
    }
    v8 = v9 - 14;
    if ( !v9 )
    {
      v10 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
      while ( v10 )
      {
        if ( a1 < *(v10 - 7) )
        {
          v10 = (_QWORD *)*v10;
        }
        else
        {
          if ( a1 < *(v10 - 6) )
            break;
          v10 = (_QWORD *)v10[1];
        }
      }
      v8 = v10 - 11;
      if ( !v10 )
      {
        v11 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
        while ( v11 )
        {
          if ( a1 < *(v11 - 10) )
          {
            v11 = (_QWORD *)*v11;
          }
          else
          {
            if ( a1 < *(v11 - 9) )
              break;
            v11 = (_QWORD *)v11[1];
          }
        }
        v8 = v11 - 14;
        if ( !v11 )
          goto LABEL_29;
      }
    }
  }
  v13 = (unsigned int *)v8[2];
  v14 = v8[6];
  if ( !*((_DWORD *)v8 + 20) || *((_DWORD *)v8 + 20) == 3 )
  {
    v19 = *((_DWORD *)v8 + 21);
    if ( !v19 )
      goto LABEL_50;
    v20 = a1 - v14;
    v21 = &v13[3 * (v19 - 1)];
    v22 = *v21;
    if ( v20 < v22 )
    {
      v23 = v19 - 2;
      for ( i = 0; v23 >= i; LODWORD(v22) = *v21 )
      {
        v25 = (v23 + i) >> 1;
        v21 = &v13[3 * v25];
        if ( v20 >= *v21 )
        {
          LODWORD(v22) = *v21;
          if ( v20 < v21[3] )
            break;
          i = v25 + 1;
        }
        else
        {
          v23 = v25 - 1;
        }
      }
    }
    if ( v20 < (unsigned int)v22 || v20 >= v21[1] )
LABEL_50:
      v21 = 0LL;
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    if ( v21 )
      *a2 = v14;
    return (__int64)v21;
  }
  else if ( *((_DWORD *)v8 + 20) == 1 )
  {
    v15 = *((_DWORD *)v8 + 21);
    v16 = a1 - v14;
    if ( !v15 )
    {
LABEL_29:
      RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
      return 0LL;
    }
    while ( v16 < *v13 || v16 >= v13[1] )
    {
      v13 += 3;
      if ( ++v7 >= v15 )
        goto LABEL_29;
    }
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    result = (__int64)v13;
    *a2 = v14;
  }
  else
  {
    v17 = (__int64 (__fastcall *)(unsigned __int64, __int64))v8[7];
    v18 = v8[8];
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    *a2 = v14;
    return v17(a1, v18);
  }
  return result;
}
