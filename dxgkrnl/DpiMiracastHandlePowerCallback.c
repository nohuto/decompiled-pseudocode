/*
 * XREFs of DpiMiracastHandlePowerCallback @ 0x1C039A910
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C01C5790 (DxgkMiracastStopAllMiracastSessions.c)
 */

__int64 __fastcall DpiMiracastHandlePowerCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rax
  __int64 v5; // rax
  union _LARGE_INTEGER v7[2]; // [rsp+20h] [rbp-60h] BYREF
  int v8; // [rsp+30h] [rbp-50h] BYREF
  int v9; // [rsp+34h] [rbp-4Ch]
  __int128 v10; // [rsp+38h] [rbp-48h]
  __int64 v11; // [rsp+48h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-30h]
  __int64 v13; // [rsp+58h] [rbp-28h]
  __int128 v14; // [rsp+60h] [rbp-20h]

  v4 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
    v4 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
  if ( v4 )
  {
    v5 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_MONITOR_POWER_ON.Data1;
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_MONITOR_POWER_ON.Data1 )
      v5 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_MONITOR_POWER_ON.Data4;
    if ( !v5 )
    {
      if ( *Value )
      {
        if ( byte_1C013B499 && KeCancelTimer(&Timer) )
        {
          _InterlockedIncrement(&dword_1C013B8D8);
          v13 = 0LL;
          v8 = 6;
          v11 = 0LL;
          v10 = 0LL;
          v9 = 64;
          v12 = 0LL;
          LODWORD(v14) = 73;
          *(_QWORD *)((char *)&v14 + 4) = 2LL;
          HIDWORD(v14) = 0;
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v8, 0x200000000LL);
        }
        byte_1C013B499 = 0;
      }
      else
      {
        byte_1C013B499 = 1;
        if ( byte_1C013B497 && dword_1C013B8C0 )
        {
          v7[0].QuadPart = -300000000LL;
          KeSetTimer(&Timer, (LARGE_INTEGER)-300000000LL, &Dpc);
          v13 = 0LL;
          v8 = 6;
          v11 = 0LL;
          v10 = 0LL;
          v9 = 64;
          v12 = 0LL;
          v14 = 0x49uLL;
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v8, 0x200000000LL);
        }
      }
    }
  }
  else if ( *Value )
  {
    v7[0].QuadPart = -300000000LL;
    DxgkMiracastStopAllMiracastSessions(1, v7, 0x89u);
  }
  return 0LL;
}
