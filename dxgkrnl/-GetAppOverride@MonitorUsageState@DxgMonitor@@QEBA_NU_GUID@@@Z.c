bool __fastcall DxgMonitor::MonitorUsageState::GetAppOverride(DxgMonitor::MonitorUsageState *this, GUID *Guid)
{
  bool v3; // bl
  __int64 v4; // rcx
  unsigned __int64 p_GuidString; // [rsp+30h] [rbp-30h] BYREF
  __int64 v7; // [rsp+38h] [rbp-28h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+40h] [rbp-20h] BYREF
  void (__stdcall *v9)(PUNICODE_STRING); // [rsp+50h] [rbp-10h] BYREF

  GuidString = 0LL;
  v3 = 0;
  if ( RtlStringFromGUID(Guid, &GuidString) >= 0 )
  {
    v4 = *((_QWORD *)this + 1);
    v7 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, wchar_t *, __int64 *))(*(_QWORD *)v4 + 72LL))(
           v4,
           2LL,
           GuidString.Buffer,
           &v7) )
    {
      p_GuidString = 0LL;
      if ( DxgMonitor::MonitorUsageState::_GetAppOverrideKey(this, &GuidString, &p_GuidString) >= 0 )
        v3 = p_GuidString == v7;
    }
  }
  v9 = RtlFreeUnicodeString;
  p_GuidString = (unsigned __int64)&GuidString;
  wistd::invoke<void (*)(_UNICODE_STRING *),_UNICODE_STRING * &>((__int64 (__fastcall **)(_QWORD))&v9, &p_GuidString);
  return v3;
}
