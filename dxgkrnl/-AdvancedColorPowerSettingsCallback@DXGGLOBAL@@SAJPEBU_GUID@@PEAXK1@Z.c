/*
 * XREFs of ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1C0207BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1C030E7EC (-HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::AdvancedColorPowerSettingsCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        PVOID Context)
{
  __int64 v6; // rax
  char v7; // bl
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v10; // rcx
  char v11; // [rsp+70h] [rbp+18h] BYREF

  if ( ValueLength < 4 )
  {
    WdLogSingleEntry1(1LL, 7171LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ValueLength >= sizeof(DWORD)", 7171LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *Value >= 2u )
  {
    WdLogSingleEntry1(1LL, 7172LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(*(DWORD*)pValue == 0) || (*(DWORD*)pValue == 1)",
      7172LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_ADVANCED_COLOR_QUALITY_BIAS.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_ADVANCED_COLOR_QUALITY_BIAS.Data1 )
    v6 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_ADVANCED_COLOR_QUALITY_BIAS.Data4;
  if ( !v6 )
  {
    v7 = *Value != 0;
    if ( v7 != *((_BYTE *)DXGGLOBAL::GetGlobal() + 304780) )
    {
      *((_BYTE *)DXGGLOBAL::GetGlobal() + 304780) = v7;
      v11 = 0;
      Global = DXGGLOBAL::GetGlobal();
      if ( (unsigned int)DXGGLOBAL::IterateAdaptersWithCallback(
                           (__int64)Global,
                           (__int64 (__fastcall *)(_QWORD *, __int64))FindDisplayModeResetNeededDueToHdrPowerPolicy,
                           (__int64)&v11,
                           1) == -2147483622 )
      {
        if ( v11 )
        {
          DXGGLOBAL::GetGlobal();
          DXGGLOBAL::HdrPowerPolicyChangeCallout(v10);
        }
      }
    }
  }
  return 0LL;
}
