/*
 * XREFs of ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C007A458
 * Callers:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C007A28C (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     SynthesizePTPMouseInput @ 0x1C00F4270 (SynthesizePTPMouseInput.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00F4B20 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     SynthesizeMouseInput @ 0x1C0218A60 (SynthesizeMouseInput.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C022C888 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     ?ContainsMotionData@MouseInputDataEx@CMouseProcessor@@QEBA_NXZ @ 0x1C007B140 (-ContainsMotionData@MouseInputDataEx@CMouseProcessor@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::MouseInputDataEx::MouseInputDataEx(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        int a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v7; // xmm1_8
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  __int64 v10; // rcx

  *(_DWORD *)(a1 + 72) = a4;
  v7 = *(_QWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)a5;
  v8 = *a3;
  *(_QWORD *)(a1 + 40) = v7;
  v9 = *((_QWORD *)a3 + 2);
  *(_OWORD *)(a1 + 48) = v8;
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 64) = v9;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  if ( !CMouseProcessor::MouseInputDataEx::ContainsMotionData((CMouseProcessor::MouseInputDataEx *)a1) )
    *(_DWORD *)(v10 + 72) |= 8u;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 == 1 || *(_DWORD *)a6 == 2 )
      *(_QWORD *)(a1 + 80) = *a6;
    else
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2161LL);
  }
  return a1;
}
