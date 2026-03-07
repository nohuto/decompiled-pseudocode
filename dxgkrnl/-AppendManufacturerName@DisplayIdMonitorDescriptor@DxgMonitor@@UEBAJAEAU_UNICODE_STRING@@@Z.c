__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::AppendManufacturerName(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  NTSTATUS ManufacturerName; // eax
  __int64 v4; // rbx
  NTSTATUS appended; // eax
  WCHAR Source[4]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]
  __int16 v9; // [rsp+2Ch] [rbp-1Ch]

  *(_QWORD *)Source = 0LL;
  v8 = 0;
  v9 = 0;
  ManufacturerName = DisplayID_GetManufacturerName(
                       (DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24),
                       Source);
  v4 = ManufacturerName;
  if ( ManufacturerName >= 0 )
  {
    appended = RtlAppendUnicodeToString(a2, Source);
    v4 = appended;
    if ( appended >= 0 )
      return 0LL;
  }
  WdLogSingleEntry1(2LL, v4);
  return (unsigned int)v4;
}
