/*
 * XREFs of NtUserRegisterDManipHook @ 0x1C00DD680
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _RegisterDManipHook @ 0x1C00DD6D0 (_RegisterDManipHook.c)
 */

__int64 NtUserRegisterDManipHook()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v3);
  v0 = (int)RegisterDManipHook();
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v3);
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
