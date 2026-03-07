__int64 __fastcall PipEnumeratePersistedMemoryCallback(__int64 a1, __int64 a2, __int64 *a3)
{
  int *v3; // r15
  int matched; // ebx
  __int64 v8; // r12
  __int64 v9; // r13
  _DWORD *Pool2; // rax
  _WORD *v11; // rdi
  __int64 v12; // r8
  __int16 v13; // ax
  __int16 *v14; // r14
  char v15; // cl
  unsigned int v17; // [rsp+40h] [rbp-20h] BYREF
  int v18; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  char v21; // [rsp+B0h] [rbp+50h] BYREF
  __int16 v22; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 0LL;
  v22 = 0;
  v18 = 0;
  v17 = 0;
  if ( a3[3] )
  {
    v8 = a3[1];
    v9 = a3[2];
    v20 = *a3;
    v19 = a3[4];
    KsrQueryMetadata(a1, a2, 0LL, 0LL, &v17);
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, v17, 1634758224LL);
    v11 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *Pool2 = 0;
    matched = KsrQueryMetadata(a1, a2, Pool2, v17, &v17);
    if ( matched < 0 )
      goto LABEL_17;
    if ( v17 >= 2 )
    {
      v13 = *v11;
      v14 = 0LL;
      v21 = 0;
      if ( v13 == 2 )
      {
        matched = PipMatchPersistentMemory(v8, v9, 0, (_DWORD)v11, 1, (__int64)&v21);
        if ( matched >= 0 )
        {
          v15 = v21;
          if ( v21 )
          {
            v14 = &v22;
            v22 = v11[8];
            v3 = &v18;
            v18 = *((_DWORD *)v11 + 5);
            goto LABEL_14;
          }
        }
        goto LABEL_17;
      }
      if ( v13 == 1 )
      {
        LOBYTE(v12) = 1;
        matched = PipMatchPersistentMemoryV1(v8, v11, v12, &v21);
        if ( matched >= 0 )
        {
          v15 = v21;
LABEL_14:
          if ( v15 )
            matched = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int16 *, int *, __int64))a3[3])(
                        v20,
                        v8,
                        v9,
                        v14,
                        v3,
                        v19);
        }
LABEL_17:
        ExFreePoolWithTag(v11, 0x61706E50u);
        return (unsigned int)matched;
      }
    }
    matched = -1073741637;
    goto LABEL_17;
  }
  return (unsigned int)-1073741811;
}
