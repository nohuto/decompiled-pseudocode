/*
 * XREFs of ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x1C01FC68C
 * Callers:
 *     ?EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionFrameRateBoostCandidateEvent@InputHelper@@@Z @ 0x1C00A783C (-EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionF.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C009C3B0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ArmOrRearmRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@AEAAXI@Z @ 0x1C01FC578 (-ArmOrRearmRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@AEAAXI@Z.c)
 *     ?CompositionRefreshRateBoost@Win32k@InputTraceLogging@@SAXI@Z @ 0x1C01FC75C (-CompositionRefreshRateBoost@Win32k@InputTraceLogging@@SAXI@Z.c)
 *     DCompositionBoostCompositionClockForInput @ 0x1C0208FE0 (DCompositionBoostCompositionClockForInput.c)
 */

void __fastcall CCompositionRefreshRateBooster::BoostRefreshRateForInput(__int64 a1, int a2)
{
  unsigned int v3; // edi
  char v4; // si

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v3 = *(_DWORD *)(a1 + 36);
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 535);
      v3 = *(_DWORD *)(a1 + 36);
    }
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 32);
  }
  v4 = 0;
  CPushLock::AcquireLockExclusive((CPushLock *)a1);
  if ( *(_BYTE *)(a1 + 16) )
  {
    v4 = 1;
  }
  else
  {
    if ( (int)DCompositionBoostCompositionClockForInput(1) >= 0 )
    {
      *(_BYTE *)(a1 + 16) = 1;
      v4 = 1;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 547);
    }
    InputTraceLogging::Win32k::CompositionRefreshRateBoost(v3);
  }
  CPushLock::ReleaseLock((CPushLock *)a1);
  if ( v4 )
    CCompositionRefreshRateBooster::ArmOrRearmRefreshRateUnboostTimer((CCompositionRefreshRateBooster *)a1, v3);
}
