void __fastcall Etw_StartDeviceFail(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // rdx
  struct _DEVICE_OBJECT *v6; // rax
  int v7; // edx
  int v8; // r8d
  unsigned __int16 Length; // cx
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v12[512]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = *a1;
  DestinationString.Buffer = (wchar_t *)v12;
  ResultLength = 0;
  *(_QWORD *)&DestinationString.Length = 33423360LL;
  v6 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 264))(
                                  WdfDriverGlobals,
                                  v3);
  if ( IoGetDeviceProperty(v6, DevicePropertyDeviceDescription, 0x1FCu, v12, &ResultLength) < 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"USB eXtensible Host Controller");
    Length = DestinationString.Length;
  }
  else
  {
    Length = ResultLength - 2;
    DestinationString.Length = ResultLength - 2;
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 4) != 0 )
    McTemplateK0pqzr1q_EtwWriteTransfer(
      ((unsigned __int64)Length + 2) >> 1,
      v7,
      v8,
      a1[1],
      ((unsigned __int64)Length + 2) >> 1,
      (__int64)DestinationString.Buffer,
      a3);
}
