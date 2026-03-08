/*
 * XREFs of SepPrivilegeCheck @ 0x14030F080
 * Callers:
 *     SepAccessCheckEx @ 0x140206B24 (SepAccessCheckEx.c)
 *     SepAccessCheck @ 0x140266980 (SepAccessCheck.c)
 *     SePrivilegePolicyCheck @ 0x14033DD14 (SePrivilegePolicyCheck.c)
 *     SeCheckAuditPrivilege @ 0x140699908 (SeCheckAuditPrivilege.c)
 *     NtPrivilegeCheck @ 0x14070F230 (NtPrivilegeCheck.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     SePrivilegeCheck @ 0x1407B9710 (SePrivilegeCheck.c)
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
  if ( !a5 )
    return 1;
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
    return v5 == a3;
  return v5 != 0;
}
