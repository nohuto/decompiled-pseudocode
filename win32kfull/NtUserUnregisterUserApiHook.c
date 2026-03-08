/*
 * XREFs of NtUserUnregisterUserApiHook @ 0x1C01E03D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _UnregisterUserApiHook @ 0x1C00F56F0 (_UnregisterUserApiHook.c)
 */

__int64 NtUserUnregisterUserApiHook()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rcx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v4);
  v1 = (int)UnregisterUserApiHook(v0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v4);
  UserSessionSwitchLeaveCrit(v2);
  return v1;
}
