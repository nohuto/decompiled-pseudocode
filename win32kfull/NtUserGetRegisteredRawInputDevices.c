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
