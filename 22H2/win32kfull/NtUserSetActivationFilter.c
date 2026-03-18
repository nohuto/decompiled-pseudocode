/*
 * XREFs of NtUserSetActivationFilter @ 0x1C0011E00
 * Callers:
 *     <none>
 * Callees:
 *     _SetActivationFilter @ 0x1C0011EB4 (_SetActivationFilter.c)
 *     IAMThreadAccessGranted @ 0x1C002731C (IAMThreadAccessGranted.c)
 *     IsIAMThread @ 0x1C003B1AC (IsIAMThread.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserSetActivationFilter(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rcx
  char v13; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v13);
  v4 = 0;
  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    v12 = 5LL;
    goto LABEL_8;
  }
  v5 = ValidateHwnd(a1);
  if ( !v5 || !(unsigned int)IsIAMThread(*(_QWORD *)(v5 + 16)) )
  {
    v12 = 87LL;
LABEL_8:
    UserSetLastError(v12);
    goto LABEL_5;
  }
  v4 = SetActivationFilter(v6, a2);
LABEL_5:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v13);
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v4;
}
