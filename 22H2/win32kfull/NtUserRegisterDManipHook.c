/*
 * XREFs of NtUserRegisterDManipHook @ 0x1C0049760
 * Callers:
 *     <none>
 * Callees:
 *     _RegisterDManipHook @ 0x1C00497B0 (_RegisterDManipHook.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

__int64 NtUserRegisterDManipHook()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  char v6; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v6);
  v0 = (int)RegisterDManipHook();
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v6);
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}
