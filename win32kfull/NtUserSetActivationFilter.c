/*
 * XREFs of NtUserSetActivationFilter @ 0x1C0011060
 * Callers:
 *     <none>
 * Callees:
 *     _SetActivationFilter @ 0x1C0011114 (_SetActivationFilter.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     IsIAMThread @ 0x1C00967E0 (IsIAMThread.c)
 *     IAMThreadAccessGranted @ 0x1C009A2DC (IAMThreadAccessGranted.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserSetActivationFilter(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v9; // rcx
  char v10; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v10);
  v4 = 0;
  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    v9 = 5LL;
    goto LABEL_8;
  }
  v5 = ValidateHwnd(a1);
  if ( !v5 || !(unsigned int)IsIAMThread(*(_QWORD *)(v5 + 16)) )
  {
    v9 = 87LL;
LABEL_8:
    UserSetLastError(v9);
    goto LABEL_5;
  }
  v4 = SetActivationFilter(v6, a2);
LABEL_5:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v10);
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
