/*
 * XREFs of ?EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionFrameRateBoostCandidateEvent@InputHelper@@@Z @ 0x1C00B944C
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C007A654 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C01FF664 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C020E0C0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     Feature_InputDrivenDynamicRefreshRate__private_ReportDeviceUsage @ 0x1C00E1388 (Feature_InputDrivenDynamicRefreshRate__private_ReportDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x1C02328BC (-BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z.c)
 */

void __fastcall CCompositionRefreshRateBooster::EvaluateEventForCompositionFrameRateBoost(
        CCompositionRefreshRateBooster *this,
        const struct InputHelper::CompositionFrameRateBoostCandidateEvent *a2)
{
  __int64 v4; // rdx
  _DWORD *v5; // rdx

  if ( *((_BYTE *)this + 40) )
  {
    Feature_InputDrivenDynamicRefreshRate__private_ReportDeviceUsage();
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        if ( (*((_WORD *)a2 + 4) & 0xC00) == 0 )
        {
          if ( !*((_BYTE *)a2 + 10) )
            return;
          v4 = 0LL;
          goto LABEL_13;
        }
      }
      else if ( *(_DWORD *)a2 != 2 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 622LL);
        return;
      }
LABEL_12:
      v4 = 1LL;
LABEL_13:
      CCompositionRefreshRateBooster::BoostRefreshRateForInput(this, v4);
      return;
    }
    v5 = (_DWORD *)*((_QWORD *)a2 + 1);
    if ( (*v5 == 2 || *v5 == 3) && (v5[3] & 4) != 0 )
      goto LABEL_12;
  }
}
