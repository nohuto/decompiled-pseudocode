/*
 * XREFs of NtUserRegisterUserApiHook @ 0x1C00DD1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _RegisterUserApiHook @ 0x1C00DD234 (_RegisterUserApiHook.c)
 */

__int64 __fastcall NtUserRegisterUserApiHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // rcx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v11);
  v8 = (int)RegisterUserApiHook(a1, a2, a3, a4);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v11);
  UserSessionSwitchLeaveCrit(v9);
  return v8;
}
