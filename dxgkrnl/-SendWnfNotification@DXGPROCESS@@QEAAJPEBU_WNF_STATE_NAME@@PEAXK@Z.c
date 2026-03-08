/*
 * XREFs of ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C03412A4
 * Callers:
 *     ?Reset@DXGDEVICE@@QEAAXE@Z @ 0x1C02E84BC (-Reset@DXGDEVICE@@QEAAXE@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02E8704 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGPROCESS::SendWnfNotification(DXGPROCESS *this, struct _WNF_STATE_NAME *a2, void *a3)
{
  bool v4; // zf
  NTSTATUS updated; // ebx
  struct _CLIENT_ID ClientId; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  void *ProcessHandle; // [rsp+B0h] [rbp+6Fh] BYREF

  ProcessHandle = a2;
  v4 = (*((_BYTE *)this + 424) & 1) == 0;
  ProcessHandle = 0LL;
  ClientId.UniqueThread = 0LL;
  if ( v4 )
    ClientId.UniqueProcess = *(HANDLE *)(*((_QWORD *)this + 8) + 80LL);
  else
    ClientId.UniqueProcess = PsGetProcessId(PsInitialSystemProcess);
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
    WdLogSingleEntry1(2LL, ClientId.UniqueProcess);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to open process handle for process id 0x%I64x",
      (__int64)ClientId.UniqueProcess,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)updated;
}
