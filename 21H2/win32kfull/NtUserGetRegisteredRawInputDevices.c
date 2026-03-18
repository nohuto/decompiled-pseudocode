/*
 * XREFs of NtUserGetRegisteredRawInputDevices @ 0x1C01F6840
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _GetRegisteredRawInputDevices @ 0x1C01D134C (_GetRegisteredRawInputDevices.c)
 */

__int64 __fastcall NtUserGetRegisteredRawInputDevices(struct tagRAWINPUTDEVICE *a1, unsigned int *a2, __int64 a3)
{
  int v3; // ebx
  __int64 v6; // rdx
  unsigned int RegisteredRawInputDevices; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  char v12; // [rsp+40h] [rbp+18h] BYREF

  v3 = a3;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v12);
  if ( v3 == 16 )
  {
    RegisteredRawInputDevices = GetRegisteredRawInputDevices(a1, a2);
  }
  else
  {
    RegisteredRawInputDevices = -1;
    UserSetLastError(87LL, v6);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v12, v8, v9);
  UserSessionSwitchLeaveCrit(v10);
  return RegisteredRawInputDevices;
}
