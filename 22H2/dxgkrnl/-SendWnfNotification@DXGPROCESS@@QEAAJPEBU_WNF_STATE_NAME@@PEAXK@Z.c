/*
 * XREFs of ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C0286400
 * Callers:
 *     ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C0257004 (-Reset@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0257220 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPROCESS::SendWnfNotification(DXGPROCESS *this, const struct _WNF_STATE_NAME *a2, void *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  NTSTATUS updated; // ebx
  __int64 v7; // rax
  struct _CLIENT_ID ClientId; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *ProcessHandle; // [rsp+98h] [rbp+18h] BYREF

  ProcessHandle = 0LL;
  ClientId.UniqueThread = 0LL;
  if ( *((_BYTE *)this + 344) )
    ClientId.UniqueProcess = PsGetProcessId(PsInitialSystemProcess);
  else
    ClientId.UniqueProcess = *(HANDLE *)(*((_QWORD *)this + 8) + 72LL);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  updated = ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId);
  if ( updated >= 0 )
  {
    updated = ZwUpdateWnfStateData(&WNF_DX_DEVICE_REMOVAL, a3, 4LL, 0LL, ProcessHandle, 0, 0);
    if ( updated == -1073741431 )
      updated = 0;
    ZwClose(ProcessHandle);
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = ClientId.UniqueProcess;
    WdLogEvent5_WdError(v7);
  }
  return (unsigned int)updated;
}
