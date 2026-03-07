NTSTATUS __fastcall ReadManifestAssignedValue(int *a1)
{
  NTSTATUS result; // eax
  unsigned __int16 v3; // r9
  NTSTATUS v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+28h] [rbp-10h]
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = 0LL;
  *a1 = 0;
  result = MyRegOpenKeyForRead(a1, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB", &Handle);
  if ( result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    v3 = 17;
    goto LABEL_4;
  }
  result = MyRegQueryUlong(Handle);
  if ( result >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = *a1;
      result = WPP_RECORDER_SF_d(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 4u,
                 1u,
                 0x13u,
                 (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
                 v5);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = 18;
LABEL_4:
    v4 = result;
    result = WPP_RECORDER_SF_d(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               2u,
               1u,
               v3,
               (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
               v4);
  }
LABEL_10:
  if ( Handle )
    return ZwClose(Handle);
  return result;
}
