/*
 * XREFs of SePrivilegePolicyCheck @ 0x14026C3B0
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14026AA50 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406922C0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x14026A3F0 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SePrivilegePolicyCheck(int *a1, _DWORD *a2, __int64 *a3, __int64 a4, __int64 a5, char a6)
{
  unsigned int v6; // ebp
  char v7; // r13
  int v11; // ebx
  int v12; // eax
  char v13; // si
  char v14; // r14
  unsigned int v16; // r8d
  char v17; // r8
  _DWORD *PoolWithTag; // rax
  int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // [rsp+30h] [rbp-68h] BYREF
  int v24; // [rsp+38h] [rbp-60h]

  v6 = 0;
  v7 = 0;
  v11 = 0;
  if ( a3 )
  {
    a4 = *a3;
    if ( !*a3 )
      a4 = a3[2];
  }
  v12 = *a1;
  if ( (*a1 & 0x1000000) != 0 )
  {
    v23 = (__int64)SeSecurityPrivilege;
    v24 = 0;
    if ( !SepPrivilegeCheck(a4, (__int64)&v23, 1u, 1, a6) )
      return 3221225569LL;
    *a1 &= ~0x1000000u;
    v11 = v19;
    *a2 |= 0x1000000u;
    v7 = v19;
    v12 = *a1;
  }
  if ( (v12 & 0x80000) == 0 )
    goto LABEL_4;
  v23 = SeTakeOwnershipPrivilege;
  v24 = 0;
  if ( SepPrivilegeCheck(a4, (__int64)&v23, 1u, 1, a6) )
  {
    *a1 &= ~0x80000u;
    ++v11;
    *a2 |= 0x80000u;
    v14 = v16;
    v13 = 0;
    goto LABEL_6;
  }
  v23 = SeRelabelPrivilege;
  v24 = 0;
  if ( SepPrivilegeCheck(a4, (__int64)&v23, v16, v16, a6) )
  {
    *a1 &= ~0x80000u;
    ++v11;
    *a2 |= 0x80000u;
    v13 = v17;
  }
  else
  {
LABEL_4:
    v13 = 0;
  }
  v14 = 0;
LABEL_6:
  if ( !v11 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(12 * v11 + 8), 0x72506553u);
  *(_QWORD *)a5 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = v11;
    *(_DWORD *)(*(_QWORD *)a5 + 4LL) = 0;
    if ( v14 )
    {
      v6 = 1;
      *(_QWORD *)(*(_QWORD *)a5 + 8LL) = SeTakeOwnershipPrivilege;
      *(_DWORD *)(*(_QWORD *)a5 + 16LL) = 0x80000000;
    }
    if ( v7 )
    {
      v20 = v6++;
      v21 = 12 * v20;
      *(LUID *)(v21 + *(_QWORD *)a5 + 8) = SeSecurityPrivilege;
      *(_DWORD *)(v21 + *(_QWORD *)a5 + 16) = 0x80000000;
    }
    if ( v13 )
    {
      v22 = 12LL * v6;
      *(_QWORD *)(v22 + *(_QWORD *)a5 + 8) = SeRelabelPrivilege;
      *(_DWORD *)(v22 + *(_QWORD *)a5 + 16) = 0x80000000;
    }
    return 0LL;
  }
  return 3221225626LL;
}
