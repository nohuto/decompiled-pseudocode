/*
 * XREFs of SepPrivilegeCheck @ 0x14026A3F0
 * Callers:
 *     SePrivilegePolicyCheck @ 0x14026C3B0 (SePrivilegePolicyCheck.c)
 *     SepAccessCheck @ 0x14035A160 (SepAccessCheck.c)
 *     SepAccessCheckEx @ 0x140373310 (SepAccessCheckEx.c)
 *     PfQuerySuperfetchInformation @ 0x140649630 (PfQuerySuperfetchInformation.c)
 *     SePrivilegeCheck @ 0x140649D60 (SePrivilegeCheck.c)
 *     SeCheckAuditPrivilege @ 0x1406936AC (SeCheckAuditPrivilege.c)
 *     NtPrivilegeCheck @ 0x1406975D0 (NtPrivilegeCheck.c)
 *     IopCheckBackupRestorePrivilege @ 0x14071A2D0 (IopCheckBackupRestorePrivilege.c)
 * Callees:
 *     <none>
 */

char __fastcall SepPrivilegeCheck(__int64 a1, __int64 a2, unsigned int a3, char a4, char a5)
{
  int v5; // r10d
  __int64 v7; // r9
  _DWORD *v8; // rax
  __int64 v9; // rdx
  int v10; // r11d
  unsigned __int8 v11; // cf
  __int64 v13; // [rsp+0h] [rbp-18h] BYREF
  __int64 v14; // [rsp+8h] [rbp-10h] BYREF

  v5 = 0;
  v14 = 0LL;
  v13 = 0LL;
  if ( a5 )
  {
    _InterlockedExchange64(&v14, *(_QWORD *)(a1 + 72));
    _InterlockedExchange64(&v13, *(_QWORD *)(a1 + 64));
    v7 = v14 & v13;
    _InterlockedOr((volatile signed __int32 *)&v13, 0);
    if ( a3 )
    {
      v8 = (_DWORD *)(a2 + 8);
      v9 = a3;
      do
      {
        v10 = *v8 & 0x7FFFFFFF;
        v11 = _bittest64(&v7, (unsigned int)*(v8 - 2));
        *v8 = v10;
        if ( v11 )
        {
          *v8 = v10 | 0x80000000;
          ++v5;
        }
        v8 += 3;
        --v9;
      }
      while ( v9 );
    }
    if ( (a4 & 1) != 0 )
    {
      if ( v5 != a3 )
        return 0;
    }
    else if ( !v5 )
    {
      return 0;
    }
  }
  return 1;
}
