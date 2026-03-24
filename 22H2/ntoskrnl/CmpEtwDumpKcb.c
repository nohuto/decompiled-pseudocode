/*
 * XREFs of CmpEtwDumpKcb @ 0x14086A6C8
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1405EE874 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1405EF650 (CmpCreateKeyControlBlock.c)
 *     CmpLinkHiveToMaster @ 0x14071D600 (CmpLinkHiveToMaster.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140206F68 (CmpFreeTransientPoolWithTag.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     CmpConstructNameWithStatus @ 0x1405F2FF0 (CmpConstructNameWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpEtwDumpKcb(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  void (__fastcall *v4)(__int64, _OWORD *, _QWORD, _QWORD, __int64, void *); // rsi
  char v5; // bp
  __int64 v7; // rcx
  void *v8; // rbx
  __int64 result; // rax
  void *v10; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v11[3]; // [rsp+48h] [rbp-70h] BYREF
  _OWORD v12[2]; // [rsp+78h] [rbp-40h] BYREF

  v4 = *(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, __int64, void *))((char *)&NlsMbCodePageTag + 7);
  v5 = a2;
  memset(v12, 0, sizeof(v12));
  memset(v11, 0, sizeof(v11));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    CmpAttachToRegistryProcess((__int64)v11, a2, a3, a4);
    v10 = 0LL;
    CmpConstructNameWithStatus(a1, &v10);
    v8 = v10;
    if ( v10 )
    {
      LOBYTE(v7) = v5;
      v4(v7, v12, 0LL, 0LL, a1, v10);
      CmpFreeTransientPoolWithTag(v8, 0x624E4D43u);
    }
    return KiUnstackDetachProcess((__int64)v11, 0);
  }
  return result;
}
