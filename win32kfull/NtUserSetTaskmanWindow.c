/*
 * XREFs of NtUserSetTaskmanWindow @ 0x1C00F23F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _SetTaskmanWindow @ 0x1C00F246C (_SetTaskmanWindow.c)
 */

__int64 __fastcall NtUserSetTaskmanWindow(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v6);
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
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v6);
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
