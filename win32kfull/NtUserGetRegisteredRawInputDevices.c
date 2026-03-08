/*
 * XREFs of NtUserGetRegisteredRawInputDevices @ 0x1C01D4D90
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _GetRegisteredRawInputDevices @ 0x1C01AB428 (_GetRegisteredRawInputDevices.c)
 */

__int64 __fastcall NtUserGetRegisteredRawInputDevices(struct tagRAWINPUTDEVICE *a1, unsigned int *a2, __int64 a3)
{
  int v3; // ebx
  unsigned int RegisteredRawInputDevices; // ebx
  __int64 v7; // rcx
  char v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = a3;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v9);
  if ( v3 == 16 )
  {
    RegisteredRawInputDevices = GetRegisteredRawInputDevices(a1, a2);
  }
  else
  {
    RegisteredRawInputDevices = -1;
    UserSetLastError(87);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v9);
  UserSessionSwitchLeaveCrit(v7);
  return RegisteredRawInputDevices;
}
