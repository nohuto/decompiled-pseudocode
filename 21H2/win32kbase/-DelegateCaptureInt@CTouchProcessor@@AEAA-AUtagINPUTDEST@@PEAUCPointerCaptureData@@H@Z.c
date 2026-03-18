/*
 * XREFs of ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C01C4158
 * Callers:
 *     ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01C3E28 (-DelegateCapture@CTouchProcessor@@AEAA-AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C01C4010 (-DelegateCapture@CTouchProcessor@@QEAA-AUtagINPUTDEST@@GKH@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C01D447C (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCaptureInt(__int64 a1, _OWORD *a2, __int64 a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0

  memset(a2, 0, 0x70uLL);
  if ( *(struct _KTHREAD **)(a1 + 40) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  v11 = *(_DWORD *)(a3 + 304);
  v12 = 4LL;
  if ( (v11 & 4) != 0 || (v11 & 8) != 0 )
  {
    if ( a4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, 4LL);
  }
  else
  {
    v13 = (-(__int64)(*(_DWORD *)(a3 + 40) != 0) & 0xFFFFFFFFFFFFFF78uLL) + 176;
    v14 = *(_OWORD *)(v13 + a3 + 16);
    *a2 = *(_OWORD *)(v13 + a3);
    v15 = *(_OWORD *)(v13 + a3 + 32);
    a2[1] = v14;
    v16 = *(_OWORD *)(v13 + a3 + 48);
    a2[2] = v15;
    v17 = *(_OWORD *)(v13 + a3 + 64);
    a2[3] = v16;
    v18 = *(_OWORD *)(v13 + a3 + 80);
    a2[4] = v17;
    v19 = *(_OWORD *)(v13 + a3 + 96);
    a2[5] = v18;
    a2[6] = v19;
    if ( !a4 )
      v12 = 3LL;
    CTouchProcessor::SetDelegateActionInt(v13, a3, v12);
  }
  return a2;
}
