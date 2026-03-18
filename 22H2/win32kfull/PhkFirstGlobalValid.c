/*
 * XREFs of PhkFirstGlobalValid @ 0x1C0071C04
 * Callers:
 *     zzzCancelJournalling @ 0x1C006EED0 (zzzCancelJournalling.c)
 *     zzzUnhookWindowsHookEx @ 0x1C006F404 (zzzUnhookWindowsHookEx.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00717AC (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01BB72C (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01BBB54 (xxxCallJournalRecordHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C00719E4 (PhkNextValid.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C011716C (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 */

__int64 __fastcall PhkFirstGlobalValid(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  v3 = a2;
  LockRefactorStagingAssertAny(gDomainHookLock);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 8 * v3 + 48);
  if ( v4 && (*(_DWORD *)(v4 + 64) & 0x80u) != 0 )
    return PhkNextValid(v4);
  return v4;
}
