__int64 __fastcall DxgMonitor::MonitorDescriptorState::_UpdateMonitorEDIDRegistryForGDI(
        DxgMonitor::MonitorDescriptorState *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  NTSTATUS v7; // eax
  PVOID v8; // rcx
  __int64 v10; // rdx
  ULONG ValueLength; // [rsp+40h] [rbp+10h] BYREF
  PCWSTR Path; // [rsp+48h] [rbp+18h] BYREF
  PVOID ValueData; // [rsp+50h] [rbp+20h] BYREF

  v2 = *((_QWORD *)this + 16);
  if ( !v2 )
    return 3223126017LL;
  ValueLength = 0;
  (*(void (__fastcall **)(__int64, PVOID *, ULONG *))(*(_QWORD *)v2 + 232LL))(v2, &ValueData, &ValueLength);
  v3 = (__int64 *)*((_QWORD *)this + 15);
  v4 = *v3;
  Path = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, PCWSTR *))(v4 + 16))(v3, 0LL, 1LL, &Path);
  v6 = v5;
  if ( v5 < 0 )
  {
    v10 = v5;
  }
  else
  {
    if ( ValueLength )
    {
      RtlDeleteRegistryValue(0x40000000u, Path, L"BAD_EDID");
      v7 = RtlWriteRegistryValue(0x40000000u, Path, L"EDID", 3u, ValueData, ValueLength);
    }
    else
    {
      RtlDeleteRegistryValue(0x40000000u, Path, L"EDID");
      v7 = RtlWriteRegistryValue(0x40000000u, Path, L"BAD_EDID", 3u, 0LL, 0);
    }
    v6 = v7;
    if ( v7 >= 0 )
      goto LABEL_6;
    v10 = v7;
  }
  WdLogSingleEntry1(2LL, v10);
LABEL_6:
  if ( Path )
    ZwClose((HANDLE)Path);
  v8 = ValueData;
  ValueData = 0LL;
  if ( v8 )
    operator delete(v8);
  return v6;
}
