/*
 * XREFs of NtUserSetActivationFilter @ 0x1C0004220
 * Callers:
 *     <none>
 * Callees:
 *     _SetActivationFilter @ 0x1C00042D4 (_SetActivationFilter.c)
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     IsIAMThread @ 0x1C00A9A2C (IsIAMThread.c)
 */

__int64 __fastcall NtUserSetActivationFilter(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
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
  if ( !v5 || !(unsigned int)IsIAMThread(*(_QWORD *)(v5 + 16), v6, v5) )
  {
    v9 = 87LL;
LABEL_8:
    UserSetLastError(v9);
    goto LABEL_5;
  }
  v4 = SetActivationFilter(v7, a2);
LABEL_5:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v10);
  UserSessionSwitchLeaveCrit();
  return v4;
}
