/*
 * XREFs of PhkNextValid @ 0x1C00EA754
 * Callers:
 *     fnHkINLPCWPEXSTRUCT @ 0x1C0001210 (fnHkINLPCWPEXSTRUCT.c)
 *     zzzUnhookWindowsHookEx @ 0x1C002468C (zzzUnhookWindowsHookEx.c)
 *     PhkFirstGlobalValid @ 0x1C004DAB0 (PhkFirstGlobalValid.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0053590 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxCallNextHookEx @ 0x1C00EA54C (xxxCallNextHookEx.c)
 *     PhkFirstValid @ 0x1C00EA6F4 (PhkFirstValid.c)
 *     zzzCancelJournalling @ 0x1C011886C (zzzCancelJournalling.c)
 *     fnHkINLPCWPRETEXSTRUCT @ 0x1C016E3F0 (fnHkINLPCWPRETEXSTRUCT.c)
 *     zzzUnhookWindowsHook @ 0x1C01E1508 (zzzUnhookWindowsHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C004DBCC (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 */

__int64 __fastcall PhkNextValid(__int64 a1)
{
  LockRefactorStagingAssertAny((PERESOURCE *)gDomainHookLock);
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 40) )
    {
      a1 = *(_QWORD *)(a1 + 40);
      goto LABEL_4;
    }
    if ( (*(_DWORD *)(a1 + 64) & 1) != 0 )
      return 0LL;
    a1 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464)
                   + 8LL * *(int *)(a1 + 48)
                   + 48);
    if ( !a1 )
      return a1;
LABEL_4:
    if ( (*(_DWORD *)(a1 + 64) & 0x80u) == 0 )
      return a1;
  }
}
