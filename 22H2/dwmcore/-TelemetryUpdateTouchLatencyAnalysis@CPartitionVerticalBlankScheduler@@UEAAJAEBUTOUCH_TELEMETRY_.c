/*
 * XREFs of ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1800228B0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18001DA58 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x180022A9C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z @ 0x180030FC4 (-GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8944 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x1800EC588 (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?DeleteTouchInfo@InteractionTraceProvider@@SAXAEBUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@_K@Z @ 0x180153C4C (-DeleteTouchInfo@InteractionTraceProvider@@SAXAEBUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis.c)
 *     ?IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x18015FD4C (-IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x180161374 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@P.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::TelemetryUpdateTouchLatencyAnalysis(
        CPartitionVerticalBlankScheduler *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2)
{
  __int64 v3; // rdx
  unsigned int v5; // r12d
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  CDisplayManager *v8; // rcx
  unsigned __int64 *v9; // r10
  int updated; // eax
  unsigned int v11; // ecx
  __int64 v12; // r10
  __int64 v13; // rcx
  unsigned int v14; // edx
  struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v16; // rdi
  unsigned __int64 v17; // r14
  unsigned int v18; // [rsp+20h] [rbp-E0h]
  struct IDXGIAdapter1 *v19; // [rsp+50h] [rbp-B0h] BYREF
  struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v20; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[296]; // [rsp+70h] [rbp-90h] BYREF
  struct _LUID v23; // [rsp+198h] [rbp+98h] BYREF
  int v24; // [rsp+1A0h] [rbp+A0h]

  v3 = *((_QWORD *)this + 629);
  v5 = 0;
  if ( v3 )
  {
    v6 = *(_DWORD *)(v3 + 200);
    v7 = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        v16 = *(struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*(_QWORD *)(v3 + 176) + 8LL * v7);
        if ( v16 )
        {
          if ( *(_QWORD *)v16 == *(_QWORD *)a2 )
            break;
        }
        if ( ++v7 >= v6 )
          goto LABEL_3;
      }
      v17 = *(_QWORD *)v3;
      if ( !CTelemetryTouchLatencyAnalysis::IsManipulationStateChange(
              (CPartitionVerticalBlankScheduler *)((char *)this + 5952),
              a2,
              *(_QWORD *)v3) )
      {
        CTelemetryTouchLatencyAnalysis::UpdateLastTelemetryInfo(
          (CPartitionVerticalBlankScheduler *)((char *)this + 5952),
          a2,
          v16,
          v17);
        return v5;
      }
      InteractionTraceProvider::DeleteTouchInfo(v16, v17);
      DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt(*((_QWORD *)this + 629) + 176LL, v7);
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v16);
    }
LABEL_3:
    memset_0(v22, 0, 0x138uLL);
    v19 = 0LL;
    if ( (int)CDisplayManager::GetPrimaryAdapter(v8, &v19) >= 0 )
      ((void (__fastcall *)(struct IDXGIAdapter1 *, _BYTE *))v19->lpVtbl->GetDesc1)(v19, v22);
    v9 = (unsigned __int64 *)*((_QWORD *)this + 629);
    v20 = 0LL;
    v21 = 10000000 * (v9[36] / g_qpcFrequency.QuadPart)
        + 10000000 * (v9[36] % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    updated = CTelemetryTouchLatencyAnalysis::UpdateInteractionProgress(
                (CPartitionVerticalBlankScheduler *)((char *)this + 5952),
                a2,
                *v9,
                *((_DWORD *)this + 2795) != 0,
                &v21,
                2 - (*(_BYTE *)(*((_QWORD *)g_pComposition + 11) + 129LL) != 0),
                &v23,
                (v24 & 2) != 0,
                &v20);
    v5 = updated;
    if ( updated < 0 )
    {
      v18 = 2114;
    }
    else
    {
      if ( !v20 )
        goto LABEL_10;
      v12 = *((_QWORD *)this + 629);
      v13 = *(unsigned int *)(v12 + 200);
      v14 = v13 + 1;
      if ( (int)v13 + 1 < (unsigned int)v13 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024362, 0xB5u, 0LL);
        goto LABEL_10;
      }
      if ( v14 <= *(_DWORD *)(v12 + 196) )
      {
        *(_QWORD *)(*(_QWORD *)(v12 + 176) + 8 * v13) = v20;
        *(_DWORD *)(v12 + 200) = v14;
        goto LABEL_10;
      }
      updated = DynArrayImpl<0>::AddMultipleAndSet(v12 + 176, 8LL, 1LL, &v20);
      if ( updated >= 0 )
      {
LABEL_10:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
        return v5;
      }
      v18 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, updated, v18, 0LL);
    goto LABEL_10;
  }
  return v5;
}
