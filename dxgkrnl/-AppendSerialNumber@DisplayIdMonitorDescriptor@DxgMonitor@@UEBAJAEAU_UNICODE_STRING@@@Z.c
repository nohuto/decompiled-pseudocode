__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::AppendSerialNumber(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  NTSTATUS SerialNumber; // eax
  __int64 v4; // rbx
  NTSTATUS appended; // eax
  WCHAR Source[8]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v8; // [rsp+30h] [rbp-18h]

  v8 = 0;
  *(_OWORD *)Source = 0LL;
  SerialNumber = DisplayID_GetSerialNumber((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), Source);
  v4 = SerialNumber;
  if ( SerialNumber >= 0 )
  {
    appended = RtlAppendUnicodeToString(a2, Source);
    v4 = appended;
    if ( appended >= 0 )
      return 0LL;
  }
  WdLogSingleEntry1(2LL, v4);
  return (unsigned int)v4;
}
