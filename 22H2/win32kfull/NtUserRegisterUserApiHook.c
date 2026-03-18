/*
 * XREFs of NtUserRegisterUserApiHook @ 0x1C00494C0
 * Callers:
 *     <none>
 * Callees:
 *     _RegisterUserApiHook @ 0x1C0048D78 (_RegisterUserApiHook.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserRegisterUserApiHook(ULONG64 a1, ULONG64 a2, ULONG64 a3, ULONG64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v14);
  v8 = (int)RegisterUserApiHook(a1, a2, a3, a4);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v14);
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v8;
}
