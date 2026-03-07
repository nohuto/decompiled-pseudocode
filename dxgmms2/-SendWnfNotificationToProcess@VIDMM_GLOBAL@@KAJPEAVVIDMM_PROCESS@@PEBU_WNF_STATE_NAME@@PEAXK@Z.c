__int64 __fastcall VIDMM_GLOBAL::SendWnfNotificationToProcess(
        struct VIDMM_PROCESS *a1,
        struct _WNF_STATE_NAME *a2,
        void *a3)
{
  __int64 v4; // rcx
  NTSTATUS updated; // ebx
  struct _CLIENT_ID ClientId; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  void *ProcessHandle; // [rsp+B0h] [rbp+6Fh] BYREF

  ProcessHandle = a2;
  v4 = *((_QWORD *)a1 + 4);
  ProcessHandle = 0LL;
  if ( (*(_DWORD *)(v4 + 424) & 0x100) != 0 )
    return SendWnfNotificationToVmProcess(v4);
  ClientId.UniqueThread = 0LL;
  if ( (*(_BYTE *)(v4 + 424) & 1) != 0 )
    ClientId.UniqueProcess = (HANDLE)*((_QWORD *)g_pVidMmSystemProcess + 1);
  else
    ClientId.UniqueProcess = (HANDLE)*((_QWORD *)a1 + 1);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  updated = ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId);
  if ( updated < 0 )
  {
    WdLogSingleEntry1(1LL, ClientId.UniqueProcess);
    DxgkLogInternalTriageEvent((__int64)ClientId.UniqueProcess, 0x40000LL);
  }
  else
  {
    updated = ZwUpdateWnfStateData(&WNF_DX_VIDMM_TRIM_NOTIFICATION, a3, 24LL);
    if ( updated == -1073741431 )
      updated = 0;
    ZwClose(ProcessHandle);
  }
  return (unsigned int)updated;
}
