/*
 * XREFs of ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C011F92C
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C011ED74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     UmfdQueryFontData @ 0x1C011EFA0 (UmfdQueryFontData.c)
 *     UmfdHostLifeTimeManager::ExecuteCallbackIfUmfdHostIsReady__lambda_eef90ce73a6a62b5089d029612c95735___ @ 0x1C011F3C4 (UmfdHostLifeTimeManager--ExecuteCallbackIfUmfdHostIsReady__lambda_eef90ce73a6a62b5089d029612c957.c)
 *     _lambda_eef90ce73a6a62b5089d029612c95735_::operator() @ 0x1C011F5B4 (_lambda_eef90ce73a6a62b5089d029612c95735_--operator().c)
 *     ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@PEBIPEA_N@Z @ 0x1C011F820 (-WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@P.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    EngFreeMem(v1);
}
