void __fastcall DpiSetDriverVersion(__int64 a1, int a2, _WORD *Data, _WORD *a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v7; // rax
  void *v8; // rbp
  NTSTATUS v9; // eax
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v5 = -1LL;
  *(_DWORD *)(*(_QWORD *)(v4 + 40) + 28LL) = a2;
  if ( *Data )
  {
    v7 = -1LL;
    v8 = *(void **)(v4 + 4832);
    do
      ++v7;
    while ( Data[v7] );
    v9 = IoSetDevicePropertyData(
           *(PDEVICE_OBJECT *)(v4 + 152),
           &DEVPKEY_Device_DeviceDesc,
           0,
           0,
           0x12u,
           2 * v7 + 2,
           Data);
    if ( v9 < 0 )
    {
LABEL_11:
      WdLogSingleEntry1(2LL, v9);
      return;
    }
    if ( (int)DpiGetDevicePropertyString(
                *(PDEVICE_OBJECT *)(v4 + 152),
                DevicePropertyDeviceDescription,
                64LL,
                (_QWORD *)(v4 + 4832),
                &v10) >= 0
      && v8 )
    {
      ExFreePoolWithTag(v8, 0);
    }
  }
  if ( *a4 )
  {
    do
      ++v5;
    while ( a4[v5] );
    v9 = IoSetDevicePropertyData(*(PDEVICE_OBJECT *)(v4 + 152), &DEVPKEY_Device_InstanceId, 0, 0, 0x12u, 2 * v5 + 2, a4);
    if ( v9 < 0 )
      goto LABEL_11;
  }
}
