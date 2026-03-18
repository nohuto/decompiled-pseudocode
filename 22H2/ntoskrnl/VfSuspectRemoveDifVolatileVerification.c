/*
 * XREFs of VfSuspectRemoveDifVolatileVerification @ 0x140ADBC74
 * Callers:
 *     VfDriverRemoveAllDifVerification @ 0x1405CEF30 (VfDriverRemoveAllDifVerification.c)
 *     VfDriverRemoveDifVerification @ 0x140ACB778 (VfDriverRemoveDifVerification.c)
 * Callees:
 *     VfTargetRecoverIoCallbacks @ 0x1405CF294 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetDriversDisableVerifier @ 0x140ACC410 (VfTargetDriversDisableVerifier.c)
 *     VfSuspectDifRemoveEntry @ 0x140ADB34C (VfSuspectDifRemoveEntry.c)
 *     VfThunkApplyPristineToAllSession @ 0x140ADC2CC (VfThunkApplyPristineToAllSession.c)
 */

__int64 __fastcall VfSuspectRemoveDifVolatileVerification(__int64 a1)
{
  int v2; // edi

  VfTargetRecoverIoCallbacks(*(_QWORD *)(a1 + 48));
  v2 = VfThunkApplyPristineToAllSession(a1);
  if ( v2 >= 0 )
  {
    VfTargetDriversDisableVerifier();
    VfSuspectDifRemoveEntry((const UNICODE_STRING *)(a1 + 88));
    ++dword_140C13998;
    *(_DWORD *)(a1 + 104) &= ~0x2000000u;
  }
  return (unsigned int)v2;
}
