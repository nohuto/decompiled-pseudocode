/*
 * XREFs of SePrivilegePolicyCheck @ 0x1402FD4DC
 * Callers:
 *     SeAccessCheckByType @ 0x1402FBEC0 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140722B40 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x1402A70F0 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SePrivilegePolicyCheck(int *a1, _DWORD *a2, __int64 *a3, __int64 a4, __int64 a5, char a6)
{
  char v6; // r13
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  int v12; // eax
  unsigned int v13; // r8d
  char v14; // r14
  char v15; // r12
  unsigned int v17; // r8d
  int v18; // r8d
  _DWORD *Pool2; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // [rsp+38h] [rbp-60h] BYREF
  int v24; // [rsp+40h] [rbp-58h]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( a3 )
  {
    a4 = *a3;
    if ( !*a3 )
      a4 = a3[2];
  }
  v12 = *a1;
  v13 = 1;
  if ( (*a1 & 0x1000000) != 0 )
  {
    v24 = 0;
    v23 = (__int64)SeSecurityPrivilege;
    if ( !SepPrivilegeCheck(a4, (__int64)&v23, 1u, 1, a6) )
      return 3221225569LL;
    *a1 &= ~0x1000000u;
    v8 = v13;
    *a2 |= 0x1000000u;
    v6 = v13;
    v12 = *a1;
  }
  if ( (v12 & 0x80000) == 0 )
    goto LABEL_4;
  v24 = 0;
  v23 = SeTakeOwnershipPrivilege;
  if ( SepPrivilegeCheck(a4, (__int64)&v23, v13, v13, a6) )
  {
    *a1 &= ~0x80000u;
    v8 += v17;
    *a2 |= 0x80000u;
    v15 = v17;
    v14 = 0;
    goto LABEL_5;
  }
  v24 = 0;
  v23 = SeRelabelPrivilege;
  if ( SepPrivilegeCheck(a4, (__int64)&v23, v17, v17, a6) )
  {
    *a1 &= ~0x80000u;
    v8 += v18;
    *a2 |= 0x80000u;
    v14 = v18;
    v15 = 0;
  }
  else
  {
LABEL_4:
    v14 = 0;
    v15 = 0;
  }
LABEL_5:
  if ( !v8 )
    return 0LL;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 12 * v8 + 8, 1917871443LL);
  *(_QWORD *)a5 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = v8;
    *(_DWORD *)(*(_QWORD *)a5 + 4LL) = 0;
    if ( v15 )
    {
      v7 = 1;
      *(_QWORD *)(*(_QWORD *)a5 + 8LL) = SeTakeOwnershipPrivilege;
      *(_DWORD *)(*(_QWORD *)a5 + 16LL) = 0x80000000;
    }
    if ( v6 )
    {
      v20 = v7++;
      v21 = 3 * v20;
      *(LUID *)(*(_QWORD *)a5 + 4 * v21 + 8) = SeSecurityPrivilege;
      *(_DWORD *)(*(_QWORD *)a5 + 4 * v21 + 16) = 0x80000000;
    }
    if ( v14 )
    {
      v22 = 3LL * v7;
      *(_QWORD *)(*(_QWORD *)a5 + 4 * v22 + 8) = SeRelabelPrivilege;
      *(_DWORD *)(*(_QWORD *)a5 + 4 * v22 + 16) = 0x80000000;
    }
    return 0LL;
  }
  return 3221225626LL;
}
