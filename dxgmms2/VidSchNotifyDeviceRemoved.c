void __fastcall VidSchNotifyDeviceRemoved(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  int updated; // eax
  __int64 v5; // rbx
  _CLIENT_ID ClientId; // [rsp+50h] [rbp+7h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  int v8; // [rsp+B8h] [rbp+6Fh] BYREF
  void *ProcessHandle; // [rsp+C0h] [rbp+77h] BYREF

  ClientId.UniqueProcess = Context;
  ProcessHandle = 0LL;
  ClientId.UniqueThread = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId) >= 0 )
  {
    v8 = 1;
    updated = ZwUpdateWnfStateData(&WNF_DX_DEVICE_REMOVAL, &v8, 4LL);
    if ( updated < 0 )
    {
      v5 = updated;
      WdLogSingleEntry1(1LL, updated);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"UpdateWnfStateData failed in VidSchNotifyDeviceRemoved: 0x%x",
        v5,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, ClientId.UniqueProcess);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, HANDLE, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to open process handle for process id 0x%I64x",
      ClientId.UniqueProcess,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
