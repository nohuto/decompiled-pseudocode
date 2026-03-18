/*
 * XREFs of VfSuspectRemoveDifVolatileVerification @ 0x140A9AEC0
 * Callers:
 *     VfDriverRemoveAllDifVerification @ 0x1405FEBA0 (VfDriverRemoveAllDifVerification.c)
 *     VfDriverRemoveDifVerification @ 0x140A89D94 (VfDriverRemoveDifVerification.c)
 * Callees:
 *     VfTargetRecoverIoCallbacks @ 0x1405FEF04 (VfTargetRecoverIoCallbacks.c)
 *     VfNotifyVerifierExtensions @ 0x140A89F08 (VfNotifyVerifierExtensions.c)
 *     VfTargetDriversDisableVerifier @ 0x140A8AAE0 (VfTargetDriversDisableVerifier.c)
 *     VfThunkApplyPristineToAllSession @ 0x140A93644 (VfThunkApplyPristineToAllSession.c)
 *     VfSuspectDifRemoveEntry @ 0x140A9A540 (VfSuspectDifRemoveEntry.c)
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
    ++dword_140C29FF8;
    *(_DWORD *)(a1 + 104) &= ~0x2000000u;
    if ( VfXdvEnabled )
      VfNotifyVerifierExtensions(2, a1);
  }
  return (unsigned int)v2;
}
