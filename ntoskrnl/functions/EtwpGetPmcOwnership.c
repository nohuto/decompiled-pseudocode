__int64 __fastcall EtwpGetPmcOwnership(_DWORD *a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v7; // edi
  _DWORD *Pool2; // rax
  _DWORD *v9; // rsi
  int v10; // edi
  unsigned int v11; // ecx
  unsigned int v12; // r10d
  __int64 v13; // r9
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // [rsp+50h] [rbp+18h] BYREF

  v18 = 0;
  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, 1) )
    return 3221225569LL;
  if ( PsIsCurrentThreadInServerSilo(v5, v4) )
    return 3221225506LL;
  if ( *a2 < 8 )
    return 3221225507LL;
  if ( *a1 > (unsigned int)KeNumberProcessors_0 )
    return 3221225485LL;
  v7 = 16 * *(_DWORD *)((char *)&NlsMbCodePageTag + 6) + 8;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, v7, 1953985605LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = *a1;
    v10 = ((__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, int *))off_140C020E8[0])(52LL, v7, Pool2, &v18);
    if ( v10 < 0 )
    {
LABEL_29:
      ExFreePoolWithTag(v9, 0);
      return (unsigned int)v10;
    }
    v11 = v9[1];
    if ( v11 <= *(_DWORD *)((char *)&NlsMbCodePageTag + 6) )
    {
      v10 = 0;
      a1[1] = v11;
    }
    else
    {
      a1[1] = *(_DWORD *)((char *)&NlsMbCodePageTag + 6);
      v10 = -2147483643;
      v11 = *(_DWORD *)((char *)&NlsMbCodePageTag + 6);
    }
    v12 = 12 * v11 + 8;
    if ( *a2 < v12 )
    {
      v10 = -1073741789;
      goto LABEL_29;
    }
    v13 = 0LL;
    if ( !v11 )
    {
LABEL_28:
      *a2 = v12;
      goto LABEL_29;
    }
    while ( 1 )
    {
      v14 = v9[4 * (unsigned int)v13 + 2];
      if ( !v14 )
      {
        a1[3 * v13 + 2] = 0;
        goto LABEL_27;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
LABEL_25:
        a1[3 * v13 + 2] = 3;
        a1[3 * v13 + 4] = v9[4 * (unsigned int)v13 + 5];
        a1[3 * v13 + 3] = v9[4 * (unsigned int)v13 + 4];
        goto LABEL_27;
      }
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( !v17 )
        {
          a1[3 * v13 + 2] = 2;
          a1[3 * v13 + 4] = v9[4 * (unsigned int)v13 + 4];
          goto LABEL_27;
        }
        if ( v17 == 1 )
          goto LABEL_25;
      }
      a1[3 * v13 + 2] = 1;
LABEL_27:
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= a1[1] )
        goto LABEL_28;
    }
  }
  return (unsigned int)-1073741801;
}
