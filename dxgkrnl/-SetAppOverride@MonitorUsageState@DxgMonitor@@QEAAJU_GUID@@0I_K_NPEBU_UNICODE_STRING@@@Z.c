__int64 __fastcall DxgMonitor::MonitorUsageState::SetAppOverride(
        __int64 **this,
        GUID *Guid,
        struct _GUID *a3,
        int a4,
        unsigned __int64 a5,
        bool a6,
        const struct _UNICODE_STRING *a7)
{
  __int64 v8; // rax
  __int64 v11; // rax
  NTSTATUS AppOverrideKey; // ebx
  unsigned __int64 v13; // r15
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  NTSTATUS v18; // eax
  HANDLE Handle; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 p_GuidString; // [rsp+38h] [rbp-28h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+40h] [rbp-20h] BYREF
  void (__stdcall *v22)(PUNICODE_STRING); // [rsp+50h] [rbp-10h] BYREF

  v8 = *(_QWORD *)&Guid->Data1 - *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1;
  if ( *(_QWORD *)&Guid->Data1 == *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1 )
    v8 = *(_QWORD *)Guid->Data4 - *(_QWORD *)GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data4;
  if ( !v8 )
  {
    v11 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_SPM_DEFAULT.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_SPM_DEFAULT.Data1 )
      v11 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_SPM_DEFAULT.Data4;
    if ( !v11 && (!a7 || a7->Length) )
    {
      GuidString = 0LL;
      AppOverrideKey = RtlStringFromGUID(Guid, &GuidString);
      if ( AppOverrideKey < 0 )
        goto LABEL_24;
      p_GuidString = 0LL;
      AppOverrideKey = DxgMonitor::MonitorUsageState::_GetAppOverrideKey(
                         (DxgMonitor::MonitorUsageState *)this,
                         &GuidString,
                         &p_GuidString);
      if ( AppOverrideKey < 0 )
        goto LABEL_24;
      v13 = p_GuidString;
      if ( !a6 && p_GuidString != a5 )
      {
        AppOverrideKey = -1073741811;
LABEL_24:
        v22 = RtlFreeUnicodeString;
        p_GuidString = (unsigned __int64)&GuidString;
        wistd::invoke<void (*)(_UNICODE_STRING *),_UNICODE_STRING * &>(
          (__int64 (__fastcall **)(_QWORD))&v22,
          &p_GuidString);
        return (unsigned int)AppOverrideKey;
      }
      v14 = this[1];
      v15 = *v14;
      Handle = 0LL;
      AppOverrideKey = (*(__int64 (__fastcall **)(__int64 *, _QWORD, HANDLE *))(v15 + 8))(v14, 0LL, &Handle);
      if ( AppOverrideKey >= 0 )
      {
        if ( a4 )
        {
          (*(void (__fastcall **)(__int64 *, HANDLE, wchar_t *, unsigned __int64))(*this[1] + 112))(
            this[1],
            Handle,
            GuidString.Buffer,
            v13);
LABEL_17:
          v16 = *(_QWORD *)&Guid->Data1 - *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1;
          if ( *(_QWORD *)&Guid->Data1 == *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1 )
            v16 = *(_QWORD *)Guid->Data4 - *(_QWORD *)GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data4;
          if ( !v16 )
          {
            *((_BYTE *)this + 20) = 0;
            *((_BYTE *)this + 21) = a4 != 0;
            *((_DWORD *)this + 4) = a4 != 0 ? 2 : 0;
          }
          AppOverrideKey = 0;
          goto LABEL_22;
        }
        v18 = ZwDeleteValueKey(Handle, &GuidString);
        AppOverrideKey = v18;
        if ( v18 >= 0 )
          goto LABEL_17;
        WdLogSingleEntry2(2LL, this, v18);
      }
LABEL_22:
      if ( Handle )
        ZwClose(Handle);
      goto LABEL_24;
    }
  }
  return 3221225485LL;
}
