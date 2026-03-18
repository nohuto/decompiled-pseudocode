/*
 * XREFs of VfSuspectApplyDifVolatileVerification @ 0x140A9A468
 * Callers:
 *     VfDriverApplyDifVerification @ 0x140A898F0 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140A89AB0 (VfDriverEnableVerifier.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     VfTargetReplaceIoCallbacks @ 0x1405FEF58 (VfTargetReplaceIoCallbacks.c)
 *     VfDifCallbackReplacementRequested @ 0x1405FFD94 (VfDifCallbackReplacementRequested.c)
 *     VfDriverLock @ 0x140A89D58 (VfDriverLock.c)
 *     VfNotifyVerifierExtensions @ 0x140A89F08 (VfNotifyVerifierExtensions.c)
 *     VfTargetDriversDisableVerifier @ 0x140A8AAE0 (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140A8AB50 (VfTargetDriversEnableVerifier.c)
 *     VfThunkApplyPristineToAllSession @ 0x140A93644 (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140A937C4 (VfThunkApplyWdmThunkToAllSession.c)
 */

__int64 __fastcall VfSuspectApplyDifVolatileVerification(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  int v5; // edi

  v2 = *(_QWORD *)(a1 + 48);
  VfDriverLock();
  if ( (unsigned int)VfTargetDriversEnableVerifier(v2, a2) )
  {
    v5 = VfThunkApplyWdmThunkToAllSession(a1);
    if ( v5 >= 0 )
    {
      if ( VfDifCallbackReplacementRequested() && (v5 = VfTargetReplaceIoCallbacks(v2), v5 < 0) )
      {
        VfThunkApplyPristineToAllSession(a1);
        VfTargetDriversDisableVerifier();
      }
      else
      {
        ++dword_140C29FF4;
        ++*(_DWORD *)(a2 + 16);
        if ( VfXdvEnabled )
          VfNotifyVerifierExtensions(1, a1);
      }
    }
  }
  else
  {
    v5 = -1073741801;
  }
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  if ( v5 >= 0 )
    *(_DWORD *)(a1 + 104) |= 0x2000000u;
  return (unsigned int)v5;
}
