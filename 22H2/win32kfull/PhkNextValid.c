/*
 * XREFs of PhkNextValid @ 0x1C00719E4
 * Callers:
 *     fnHkINLPCWPEXSTRUCT @ 0x1C000A110 (fnHkINLPCWPEXSTRUCT.c)
 *     xxxCallNextHookEx @ 0x1C000A1E4 (xxxCallNextHookEx.c)
 *     zzzSetDesktop @ 0x1C006A860 (zzzSetDesktop.c)
 *     zzzCancelJournalling @ 0x1C006EED0 (zzzCancelJournalling.c)
 *     zzzUnhookWindowsHookEx @ 0x1C006F404 (zzzUnhookWindowsHookEx.c)
 *     PhkFirstValid @ 0x1C0071984 (PhkFirstValid.c)
 *     PhkFirstGlobalValid @ 0x1C0071C04 (PhkFirstGlobalValid.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0116EA4 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     GetJournallingQueue @ 0x1C01170F0 (GetJournallingQueue.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C011F720 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     fnHkINLPCWPRETEXSTRUCT @ 0x1C01577C0 (fnHkINLPCWPRETEXSTRUCT.c)
 *     zzzUnhookWindowsHook @ 0x1C01BBC8C (zzzUnhookWindowsHook.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C011716C (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 */

__int64 __fastcall PhkNextValid(__int64 a1)
{
  LockRefactorStagingAssertAny(gDomainHookLock);
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 40) )
    {
      a1 = *(_QWORD *)(a1 + 40);
      goto LABEL_4;
    }
    if ( (*(_DWORD *)(a1 + 64) & 1) != 0 )
      return 0LL;
    a1 = *(_QWORD *)(*((_QWORD *)PtiCurrentShared() + 58) + 8LL * *(int *)(a1 + 48) + 48);
    if ( !a1 )
      return a1;
LABEL_4:
    if ( (*(_DWORD *)(a1 + 64) & 0x80u) == 0 )
      return a1;
  }
}
