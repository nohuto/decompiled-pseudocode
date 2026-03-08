/*
 * XREFs of CmpEtwDumpKcb @ 0x1408A6EE6
 * Callers:
 *     CmpLinkHiveToMaster @ 0x140731250 (CmpLinkHiveToMaster.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1407AF820 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1407AFAA0 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     CmpConstructNameWithStatus @ 0x1407AF2E0 (CmpConstructNameWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpEtwDumpKcb(__int64 a1, char a2)
{
  void (__fastcall *v2)(__int64, _OWORD *, _QWORD, _QWORD, __int64, void *); // rsi
  __int64 v5; // r8
  __int64 v6; // rcx
  void *v7; // rbx
  __int64 result; // rax
  void *v9; // [rsp+40h] [rbp-78h] BYREF
  struct _KAPC_STATE v10; // [rsp+48h] [rbp-70h] BYREF
  _OWORD v11[2]; // [rsp+78h] [rbp-40h] BYREF

  v2 = (void (__fastcall *)(__int64, _OWORD *, _QWORD, _QWORD, __int64, void *))CmpTraceRoutine;
  memset(v11, 0, sizeof(v11));
  memset(&v10, 0, sizeof(v10));
  if ( CmpTraceRoutine )
  {
    CmpAttachToRegistryProcess(&v10);
    v9 = 0LL;
    CmpConstructNameWithStatus(a1, &v9, v5);
    v7 = v9;
    if ( v9 )
    {
      LOBYTE(v6) = a2;
      v2(v6, v11, 0LL, 0LL, a1, v9);
      CmpFreeTransientPoolWithTag(v7, 0x624E4D43u);
    }
    return CmpDetachFromRegistryProcess(&v10);
  }
  return result;
}
