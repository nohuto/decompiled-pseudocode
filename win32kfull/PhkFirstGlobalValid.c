/*
 * XREFs of PhkFirstGlobalValid @ 0x1C001D640
 * Callers:
 *     zzzCancelJournalling @ 0x1C001D3F4 (zzzCancelJournalling.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C001D504 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     zzzUnhookWindowsHookEx @ 0x1C009C50C (zzzUnhookWindowsHookEx.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01BC8CC (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01BCCF4 (xxxCallJournalRecordHook.c)
 * Callees:
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C003794C (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     PhkNextValid @ 0x1C0039A4C (PhkNextValid.c)
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
