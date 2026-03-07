NTSTATUS __fastcall GetConsoleHostProcess(int a1, void **a2)
{
  NTSTATUS v3; // edi
  int CurrentWin32kSessionId; // ebx
  NTSTATUS result; // eax
  HANDLE ThreadProcessId; // rbx
  NTSTATUS v7; // ebx
  void *v8; // rcx
  __int64 ProcessInformation; // [rsp+30h] [rbp-50h] BYREF
  _CLIENT_ID ClientId; // [rsp+38h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  PETHREAD Thread; // [rsp+B0h] [rbp+30h] BYREF
  void *ProcessHandle; // [rsp+B8h] [rbp+38h] BYREF

  Thread = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ProcessHandle = 0LL;
  ProcessInformation = 0LL;
  v3 = PsLookupThreadByThreadId((HANDLE)a1, &Thread);
  if ( v3 >= 0 )
  {
    CurrentWin32kSessionId = GetCurrentWin32kSessionId();
    if ( (unsigned int)PsGetThreadSessionId(Thread) != CurrentWin32kSessionId )
    {
      ObfDereferenceObject(Thread);
      return -1073741823;
    }
  }
  if ( v3 < 0 )
    return v3;
  ThreadProcessId = PsGetThreadProcessId(Thread);
  ObfDereferenceObject(Thread);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ClientId.UniqueThread = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ClientId.UniqueProcess = ThreadProcessId;
  result = ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
  if ( result >= 0 )
  {
    v7 = ZwQueryInformationProcess(ProcessHandle, ProcessIoPriority|ProcessUserModeIOPL, &ProcessInformation, 8u, 0LL);
    ZwClose(ProcessHandle);
    if ( v7 >= 0 )
    {
      if ( (ProcessInformation & 1) != 0 )
        v8 = (void *)(ProcessInformation & 0xFFFFFFFFFFFFFFFEuLL);
      else
        v8 = 0LL;
      *a2 = v8;
    }
    return v7;
  }
  return result;
}
