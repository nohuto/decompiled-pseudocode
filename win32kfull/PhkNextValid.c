/*
 * XREFs of PhkNextValid @ 0x1C0039A4C
 * Callers:
 *     fnHkINLPCWPEXSTRUCT @ 0x1C0009B90 (fnHkINLPCWPEXSTRUCT.c)
 *     xxxCallNextHookEx @ 0x1C0009C64 (xxxCallNextHookEx.c)
 *     zzzCancelJournalling @ 0x1C001D3F4 (zzzCancelJournalling.c)
 *     PhkFirstGlobalValid @ 0x1C001D640 (PhkFirstGlobalValid.c)
 *     zzzSetDesktop @ 0x1C0036340 (zzzSetDesktop.c)
 *     PhkFirstValid @ 0x1C00368A8 (PhkFirstValid.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C003768C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     GetJournallingQueue @ 0x1C00378D0 (GetJournallingQueue.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C006C010 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     zzzUnhookWindowsHookEx @ 0x1C009C50C (zzzUnhookWindowsHookEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C01098A8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     fnHkINLPCWPRETEXSTRUCT @ 0x1C014AAA0 (fnHkINLPCWPRETEXSTRUCT.c)
 *     zzzUnhookWindowsHook @ 0x1C01BCE2C (zzzUnhookWindowsHook.c)
 * Callees:
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C003794C (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
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
