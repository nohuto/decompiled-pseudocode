/*
 * XREFs of NtUserSetTaskmanWindow @ 0x1C011DAA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _SetTaskmanWindow @ 0x1C011DB1C (_SetTaskmanWindow.c)
 */

__int64 __fastcall NtUserSetTaskmanWindow(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v8);
  v2 = 0;
  if ( !a1 )
  {
    v3 = 0LL;
    goto LABEL_3;
  }
  v3 = ValidateHwnd(a1);
  if ( v3 )
LABEL_3:
    v2 = SetTaskmanWindow(v3);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v8, v4, v5);
  UserSessionSwitchLeaveCrit(v6);
  return v2;
}
