/*
 * XREFs of VfNotifyVerifierOfEvent @ 0x1409C7050
 * Callers:
 *     KeBugCheck2 @ 0x140516D10 (KeBugCheck2.c)
 *     IoShutdownSystem @ 0x1409ABD08 (IoShutdownSystem.c)
 *     KdEnterDebugger @ 0x1409B8028 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1409B8190 (KdExitDebugger.c)
 *     Phase1InitializationIoReady @ 0x140A4D104 (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x140A67E8C (IoInitSystem.c)
 * Callees:
 *     VfClearVerifierSettings @ 0x1405A0510 (VfClearVerifierSettings.c)
 *     VfUtilDbgPrint @ 0x1405A0924 (VfUtilDbgPrint.c)
 *     VfNotifyDifPlugins @ 0x1409C99A8 (VfNotifyDifPlugins.c)
 *     VfNotifyVerifierExtensions @ 0x1409C9A88 (VfNotifyVerifierExtensions.c)
 *     VfInitializeBranchTracing @ 0x1409D9394 (VfInitializeBranchTracing.c)
 *     VfStartBranchTracing @ 0x1409D952C (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x1409D95B8 (VfStopBranchTracing.c)
 */

void __fastcall VfNotifyVerifierOfEvent(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int started; // eax
  __int32 v6; // r9d
  int v7; // eax

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( !v2 )
      {
        _InterlockedAdd(&dword_140C1D528, 1u);
        _InterlockedExchange(&ViKeTrackIrqlDisabled, 1);
        VfStopBranchTracing();
        _InterlockedExchange(&ViFaultsDisabled, v6);
        return;
      }
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( v4 == 1 )
          {
            _InterlockedAdd(&dword_140C1D534, 1u);
            started = VfStartBranchTracing();
            if ( started < 0 && (MmVerifierData & 0x8000000) != 0 )
              VfUtilDbgPrint("Failed to start branch tracing. <Status == 0x%08X>\n", started);
            if ( (VfOptionFlags & 0x10) != 0 )
            {
              VfUtilDbgPrint("Driver Verifier: VERIFIER_OPTION_ONEBOOT set before boot. Clearing Verifier options from Registry.\n");
              VfClearVerifierSettings();
            }
            VfNotifyVerifierExtensions(0LL, 2LL);
            VfNotifyDifPlugins(0LL, 0LL);
          }
        }
        else
        {
          _InterlockedAdd(&dword_140C1D530, 1u);
          VfStartBranchTracing();
        }
        return;
      }
      _InterlockedAdd(&dword_140C1D52C, 1u);
    }
    else
    {
      _InterlockedAdd(&dword_140C1D524, 1u);
    }
    VfStopBranchTracing();
    return;
  }
  _InterlockedAdd(&ViNotifyEvent, 1u);
  v7 = VfInitializeBranchTracing();
  if ( v7 < 0 && (MmVerifierData & 0x8000000) != 0 )
    VfUtilDbgPrint("Failed to initialize branch tracing. <Status == 0x%08X>\n", v7);
}
