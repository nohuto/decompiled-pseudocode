/*
 * XREFs of ?_SetAppOverride@DXGMONITOR@@QEAAJU_GUID@@I_K@Z @ 0x1C02F6C80
 * Callers:
 *     MonitorSetAppOverride @ 0x1C02F4D98 (MonitorSetAppOverride.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C018464C (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 *     ?_GetAppOverrideKey@DXGMONITOR@@QEAAJAEBU_UNICODE_STRING@@PEA_K@Z @ 0x1C02F5C88 (-_GetAppOverrideKey@DXGMONITOR@@QEAAJAEBU_UNICODE_STRING@@PEA_K@Z.c)
 */

int __fastcall DXGMONITOR::_SetAppOverride(DXGMONITOR *this, GUID *Guid, int a3, __int64 a4)
{
  __int64 v5; // rax
  int result; // eax
  NTSTATUS v10; // eax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-79h] BYREF
  unsigned __int64 Data; // [rsp+38h] [rbp-71h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v19[128]; // [rsp+50h] [rbp-59h] BYREF

  v5 = *(_QWORD *)&Guid->Data1 - *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1;
  if ( *(_QWORD *)&Guid->Data1 == *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1 )
    v5 = *(_QWORD *)Guid->Data4 - *(_QWORD *)GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data4;
  if ( v5 )
    return -1073741811;
  memset(v19, 0, sizeof(v19));
  *(_QWORD *)&GuidString.Length = 0x800000LL;
  GuidString.Buffer = (wchar_t *)v19;
  result = RtlStringFromGUID(Guid, &GuidString);
  if ( result < 0 )
    return result;
  Data = 0LL;
  result = DXGMONITOR::_GetAppOverrideKey(this, &GuidString, &Data);
  if ( result < 0 )
    return result;
  if ( Data != a4 )
    return -1073741811;
  KeyHandle = 0LL;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 0LL, &KeyHandle);
  if ( result >= 0 )
  {
    if ( a3 )
      v10 = ZwSetValueKey(KeyHandle, &GuidString, 0, 0xBu, &Data, 8u);
    else
      v10 = ZwDeleteValueKey(KeyHandle, &GuidString);
    v11 = v10;
    ZwClose(KeyHandle);
    if ( v11 >= 0 )
    {
      v15 = *(_QWORD *)&Guid->Data1 - *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1;
      if ( *(_QWORD *)&Guid->Data1 == *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1 )
        v15 = *(_QWORD *)Guid->Data4 - *(_QWORD *)GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data4;
      if ( !v15 )
        *((_DWORD *)this + 10) = *((_DWORD *)this + 10) & 0xFFFFEFFF | (a3 != 0 ? 0x1000 : 0);
      return 0;
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v14 + 32) = v11;
      *(_QWORD *)(v14 + 24) = this;
      WdLogEvent5_WdError(v14);
      return v11;
    }
  }
  return result;
}
