__int64 __fastcall SePrivilegePolicyCheck(_DWORD *a1, _DWORD *a2, __int64 *a3, __int64 a4, __int64 a5, char a6)
{
  char v6; // r13
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  unsigned int v12; // r8d
  char v13; // r14
  char v14; // r12
  unsigned int v16; // r8d
  int v17; // r8d
  unsigned int *Pool2; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // [rsp+38h] [rbp-60h] BYREF
  int v23; // [rsp+40h] [rbp-58h]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( a3 )
  {
    a4 = *a3;
    if ( !*a3 )
      a4 = a3[2];
  }
  v12 = 1;
  if ( (*a1 & 0x1000000) != 0 )
  {
    v23 = 0;
    v22 = (__int64)SeSecurityPrivilege;
    if ( !SepPrivilegeCheck(a4, (__int64)&v22, 1u, 1, a6) )
      return 3221225569LL;
    *a1 &= ~0x1000000u;
    v8 = v12;
    *a2 |= 0x1000000u;
    v6 = v12;
  }
  if ( (*a1 & 0x80000) == 0 )
    goto LABEL_4;
  v23 = 0;
  v22 = SeTakeOwnershipPrivilege;
  if ( SepPrivilegeCheck(a4, (__int64)&v22, v12, v12, a6) )
  {
    *a1 &= ~0x80000u;
    v8 += v16;
    *a2 |= 0x80000u;
    v14 = v16;
    v13 = 0;
    goto LABEL_5;
  }
  v23 = 0;
  v22 = SeRelabelPrivilege;
  if ( SepPrivilegeCheck(a4, (__int64)&v22, v16, v16, a6) )
  {
    *a1 &= ~0x80000u;
    v8 += v17;
    *a2 |= 0x80000u;
    v13 = v17;
    v14 = 0;
  }
  else
  {
LABEL_4:
    v13 = 0;
    v14 = 0;
  }
LABEL_5:
  if ( !v8 )
    return 0LL;
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, 12 * v8 + 8, 1917871443LL);
  *(_QWORD *)a5 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = v8;
    *(_DWORD *)(*(_QWORD *)a5 + 4LL) = 0;
    if ( v14 )
    {
      v7 = 1;
      *(_QWORD *)(*(_QWORD *)a5 + 8LL) = SeTakeOwnershipPrivilege;
      *(_DWORD *)(*(_QWORD *)a5 + 16LL) = 0x80000000;
    }
    if ( v6 )
    {
      v19 = v7++;
      v20 = 3 * v19;
      *(LUID *)(*(_QWORD *)a5 + 4 * v20 + 8) = SeSecurityPrivilege;
      *(_DWORD *)(*(_QWORD *)a5 + 4 * v20 + 16) = 0x80000000;
    }
    if ( v13 )
    {
      v21 = 3LL * v7;
      *(_QWORD *)(*(_QWORD *)a5 + 4 * v21 + 8) = SeRelabelPrivilege;
      *(_DWORD *)(*(_QWORD *)a5 + 4 * v21 + 16) = 0x80000000;
    }
    return 0LL;
  }
  return 3221225626LL;
}
