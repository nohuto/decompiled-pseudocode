/*
 * XREFs of VfSuspectRemoveDifVolatileVerification @ 0x140AD7C74
 * Callers:
 *     VfDriverRemoveAllDifVerification @ 0x1405CCA80 (VfDriverRemoveAllDifVerification.c)
 *     VfDriverRemoveDifVerification @ 0x140AC7778 (VfDriverRemoveDifVerification.c)
 * Callees:
 *     VfTargetRecoverIoCallbacks @ 0x1405CCDE4 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetDriversDisableVerifier @ 0x140AC8410 (VfTargetDriversDisableVerifier.c)
 *     VfSuspectDifRemoveEntry @ 0x140AD734C (VfSuspectDifRemoveEntry.c)
 *     VfThunkApplyPristineToAllSession @ 0x140AD82CC (VfThunkApplyPristineToAllSession.c)
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
    ++dword_140C13858;
    *(_DWORD *)(a1 + 104) &= ~0x2000000u;
  }
  return (unsigned int)v2;
}
