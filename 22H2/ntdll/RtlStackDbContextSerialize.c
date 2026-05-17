/*
 * XREFs of RtlStackDbContextSerialize @ 0x18011855C
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x1801094F4 (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlStackDbContextSerialize(
        __int64 a1,
        __int64 (__fastcall *a2)(_DWORD *, __int64, unsigned __int64),
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  int v10; // ebx
  _QWORD *v11; // rsi
  _QWORD *v12; // rdi
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  _BYTE *i; // rcx
  _QWORD *v16; // rsi
  _QWORD *v17; // rdi
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  _BYTE *k; // rcx
  _QWORD **j; // rdx
  _QWORD **m; // rdx
  unsigned int v24; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v25; // [rsp+28h] [rbp-38h] BYREF
  _QWORD *v26; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int64 *v27; // [rsp+38h] [rbp-28h]
  _DWORD v28[4]; // [rsp+40h] [rbp-20h] BYREF

  RtlAcquireSRWLockExclusive(a1 + 32, (unsigned __int64)a2, a3, a4);
  v27 = (volatile signed __int64 *)(a1 + 40);
  RtlAcquireSRWLockExclusive(a1 + 40, v7, v8, v9);
  v28[0] = *(_DWORD *)a1;
  v28[1] = *(_DWORD *)(a1 + 16);
  v28[2] = 524289;
  v10 = a2(v28, 12LL, a3);
  if ( v10 >= 0 )
  {
    v11 = *(_QWORD **)(a1 + 8);
    v12 = v11;
    v13 = v11;
    if ( v11 )
    {
      v14 = (_QWORD *)*v11;
      if ( (*v11 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v14 = (_QWORD *)*v11;
      if ( ((unsigned __int8)v14 & 1) == 0 )
        goto LABEL_27;
      v13 = *(_QWORD **)(a1 + 8);
    }
    for ( i = v11 + 1; ; i += 8 )
    {
      if ( i >= (_BYTE *)&v13[(unsigned __int64)*(unsigned int *)(a1 + 4) >> 5] )
      {
LABEL_11:
        v14 = 0LL;
        goto LABEL_12;
      }
      if ( (*i & 1) == 0 )
        break;
    }
    v12 = *(_QWORD **)i;
    v11 = i;
LABEL_34:
    v14 = v12;
LABEL_12:
    while ( v14 )
    {
      v25 = v14;
      v24 = *((_DWORD *)v14 + 4);
      v10 = ((__int64 (__fastcall *)(unsigned int *, __int64, unsigned __int64, _QWORD))a2)(&v24, 4LL, a3, 0LL);
      if ( v10 < 0 )
        goto LABEL_41;
      v10 = a2(&v25, 8LL, a3);
      if ( v10 < 0 )
        goto LABEL_41;
      v10 = a2((_DWORD *)v25 + 6, 8LL * *((unsigned __int8 *)v25 + 19), a3);
      if ( v10 < 0 )
        goto LABEL_41;
      if ( !v12 )
        goto LABEL_28;
      v14 = (_QWORD *)*v12;
      if ( (*v12 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v14 = (_QWORD *)*v12;
      if ( ((unsigned __int8)v14 & 1) != 0 )
      {
LABEL_28:
        for ( j = (_QWORD **)(v11 + 1);
              (unsigned __int64)j < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
              ++j )
        {
          if ( (*(_BYTE *)j & 1) == 0 )
          {
            v12 = *j;
            v11 = j;
            goto LABEL_34;
          }
        }
        goto LABEL_11;
      }
LABEL_27:
      v12 = v14;
    }
    v16 = *(_QWORD **)(a1 + 24);
    v17 = v16;
    v18 = v16;
    if ( v16 )
    {
      v19 = (_QWORD *)*v16;
      if ( (*v16 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v19 = (_QWORD *)*v16;
      if ( ((unsigned __int8)v19 & 1) == 0 )
        goto LABEL_50;
      v18 = *(_QWORD **)(a1 + 24);
    }
    for ( k = v16 + 1; ; k += 8 )
    {
      if ( k >= (_BYTE *)&v18[(unsigned __int64)*(unsigned int *)(a1 + 20) >> 5] )
      {
LABEL_38:
        v19 = 0LL;
        goto LABEL_39;
      }
      if ( (*k & 1) == 0 )
        break;
    }
    v17 = *(_QWORD **)k;
    v16 = k;
LABEL_57:
    v19 = v17;
LABEL_39:
    while ( v19 )
    {
      v26 = v19;
      v24 = *((_DWORD *)v19 + 4);
      v10 = ((__int64 (__fastcall *)(unsigned int *, __int64, unsigned __int64, _QWORD))a2)(&v24, 4LL, a3, 0LL);
      if ( v10 < 0 )
        goto LABEL_41;
      v10 = a2(&v26, 8LL, a3);
      if ( v10 < 0 )
        goto LABEL_41;
      v10 = a2((_DWORD *)v26 + 6, (HIBYTE(v24) + 7) & 0xFFFFFFF8, a3);
      if ( v10 < 0 )
        goto LABEL_41;
      if ( !v17 )
        goto LABEL_51;
      v19 = (_QWORD *)*v17;
      if ( (*v17 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v19 = (_QWORD *)*v17;
      if ( ((unsigned __int8)v19 & 1) != 0 )
      {
LABEL_51:
        for ( m = (_QWORD **)(v16 + 1);
              (unsigned __int64)m < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
              ++m )
        {
          if ( (*(_BYTE *)m & 1) == 0 )
          {
            v17 = *m;
            v16 = m;
            goto LABEL_57;
          }
        }
        goto LABEL_38;
      }
LABEL_50:
      v17 = v19;
    }
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int64, _QWORD))a2)(0LL, 0LL, a3, 0LL);
  }
LABEL_41:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  RtlReleaseSRWLockExclusive(v27);
  return (unsigned int)v10;
}
