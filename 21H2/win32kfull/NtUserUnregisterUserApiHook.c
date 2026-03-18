/*
 * XREFs of NtUserUnregisterUserApiHook @ 0x1C01FFEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _UnregisterUserApiHook @ 0x1C01220B0 (_UnregisterUserApiHook.c)
 */

__int64 NtUserUnregisterUserApiHook()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v6);
  v1 = (int)UnregisterUserApiHook(v0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v6, v2, v3);
  UserSessionSwitchLeaveCrit(v4);
  return v1;
}
