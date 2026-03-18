/*
 * XREFs of ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02263C8
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020B538 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0003734 (_tlgKeywordOn.c)
 *     Feature_36371531__private_IsEnabledDeviceUsage @ 0x1C0027128 (Feature_36371531__private_IsEnabledDeviceUsage.c)
 *     Feature_AutoColorManagementEnabled__private_ReportDeviceUsage @ 0x1C0027244 (Feature_AutoColorManagementEnabled__private_ReportDeviceUsage.c)
 *     Feature_DisplayHdr_Inf_Certification__private_ReportDeviceUsage @ 0x1C00272A8 (Feature_DisplayHdr_Inf_Certification__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C006CBD8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWr.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C019DDDC (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 *     ?IsAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C01E62E0 (-IsAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 *     ?SetAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1C0226818 (-SetAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?SetAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1C03CDEB8 (-SetAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@AEA_N@Z @ 0x1C03CE20C (-_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HD.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnFunctionDriverArrival(
        DxgMonitor::MonitorColorState *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v4; // r14d
  int v5; // r14d
  bool v6; // di
  __int64 v7; // rcx
  char v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // di
  char v17; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // [rsp+40h] [rbp-10h] BYREF
  __int64 v23; // [rsp+48h] [rbp-8h] BYREF
  bool v24; // [rsp+90h] [rbp+40h] BYREF
  __int16 v25; // [rsp+A0h] [rbp+50h] BYREF
  int v26; // [rsp+A8h] [rbp+58h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 80LL))(*(_QWORD *)this) )
    return;
  if ( DxgMonitor::MonitorColorState::EdidSupportsHDR(this) )
  {
    LOBYTE(v25) = 0;
    Feature_DisplayHdr_Inf_Certification__private_ReportDeviceUsage();
    v4 = -(*((_BYTE *)this + 341) != 0);
    v26 = 0;
    v5 = v4 & 0x40000;
    DxgMonitor::MonitorColorState::_ReadDisplayHdrSupportFromPnpRegistry(
      this,
      (enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *)&v26,
      (bool *)&v25);
    v6 = v26 >= 0 && ((v26 & 0x40000000) != 0 || (v26 & 0x20000000) != 0);
    v7 = *((_QWORD *)this + 1);
    v24 = 0;
    *((_DWORD *)this + 99) = v26 | v5;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, const wchar_t *, bool *))(*(_QWORD *)v7 + 104LL))(
           v7,
           2LL,
           L"AdvancedColorEnabled",
           &v24) )
    {
      DxgMonitor::MonitorColorState::SetAdvancedColorEnabled(this, v24);
LABEL_21:
      if ( *((_DWORD *)this + 99) && (_BYTE)v25 && (unsigned int)dword_1C013F918 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C013F918, 0x400000200000LL) )
        {
          v26 = v6;
          v22 = v15;
          v25 = 2;
          v23 = 0x2000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v13,
            byte_1C00AAF81,
            v14,
            v15,
            (__int64)&v23,
            (__int64)&v25,
            (__int64)&v22,
            (__int64)&v26);
        }
      }
      return;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(**((_QWORD **)this + 1) + 56LL))(
             *((_QWORD *)this + 1),
             1LL,
             L"EnableIntegratedPanelHdrByDefault",
             0LL);
      if ( !DxgMonitor::MonitorColorState::IsAdvancedColorEnabled(this) && v8 )
      {
        DxgMonitor::MonitorColorState::SetAdvancedColorEnabled(this, 1);
        v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
        (*(void (__fastcall **)(__int64, _QWORD, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))(*(_QWORD *)v9 + 112LL))(
          v9,
          0LL,
          a2);
      }
      goto LABEL_19;
    }
    if ( v6 )
    {
      DxgMonitor::MonitorColorState::SetAdvancedColorEnabled(this, 1);
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
      (*(void (__fastcall **)(__int64, _QWORD, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))(*(_QWORD *)v10 + 112LL))(
        v10,
        0LL,
        a2);
      v11 = 10LL;
    }
    else
    {
      if ( !*((_DWORD *)this + 99) )
        goto LABEL_19;
      v11 = 11LL;
    }
    WdDiagNotifyUser(0LL, v11, 0LL, 0LL);
LABEL_19:
    if ( *((_BYTE *)this + 341) )
    {
      DxgMonitor::MonitorColorState::SetAdvancedColorEnabled(this, 1);
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
      (*(void (__fastcall **)(__int64, _QWORD, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))(*(_QWORD *)v12 + 112LL))(
        v12,
        0LL,
        a2);
      WdDiagNotifyUser(0LL, 10LL, 0LL, 0LL);
    }
    goto LABEL_21;
  }
  Feature_AutoColorManagementEnabled__private_ReportDeviceUsage();
  v16 = 0;
  v17 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this)
    && (v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(**((_QWORD **)this + 1) + 56LL))(
                *((_QWORD *)this + 1),
                1LL,
                L"MicrosoftApprovedAcmSupport",
                0LL)) != 0 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(**((_QWORD **)this + 1) + 56LL))(
            *((_QWORD *)this + 1),
            1LL,
            L"EnableIntegratedPanelAcmByDefault",
            0LL);
  }
  else
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
    if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18) >= 3000 )
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *))(**((_QWORD **)this + 1) + 56LL))(
              *((_QWORD *)this + 1),
              8LL,
              L"EnableAcmSupportDeveloperPreview");
  }
  if ( (unsigned int)Feature_36371531__private_IsEnabledDeviceUsage() )
  {
    if ( !v16 )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19) >= 3000 )
        v16 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 72LL))(*(_QWORD *)this) == 0;
    }
  }
  DxgMonitor::MonitorColorState::SetAutoColorManagementSupported(this, v16);
  if ( v16 )
  {
    v20 = *((_QWORD *)this + 1);
    v24 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, const wchar_t *, bool *))(*(_QWORD *)v20 + 104LL))(
           v20,
           2LL,
           L"AdvancedColorEnabled",
           &v24) )
    {
      DxgMonitor::MonitorColorState::SetAdvancedColorEnabled(this, v24);
    }
    else if ( v17 )
    {
      DxgMonitor::MonitorColorState::SetAdvancedColorEnabled(this, 1);
      v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
      (*(void (__fastcall **)(__int64, _QWORD, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))(*(_QWORD *)v21 + 112LL))(
        v21,
        0LL,
        a2);
    }
  }
  else
  {
    *((_BYTE *)this + 384) = 0;
  }
}
