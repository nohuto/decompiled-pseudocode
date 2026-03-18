/*
 * XREFs of NtUserBlockInput @ 0x1C01F1680
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _BlockInput @ 0x1C01D448C (_BlockInput.c)
 */

__int64 __fastcall NtUserBlockInput(unsigned int a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  char v8; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v8);
  v3 = BlockInput(a1, v2);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v8, v4, v5);
  UserSessionSwitchLeaveCrit(v6);
  return v3;
}
