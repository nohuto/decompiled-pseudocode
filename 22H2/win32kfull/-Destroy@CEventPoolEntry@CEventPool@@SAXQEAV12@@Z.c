/*
 * XREFs of ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C00B72BC
 * Callers:
 *     UmfdQueryFontData @ 0x1C0075AB0 (UmfdQueryFontData.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C007FC30 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ?Destroy@CEventPool@@SAXQEAV1@@Z @ 0x1C00B7264 (-Destroy@CEventPool@@SAXQEAV1@@Z.c)
 *     _CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy @ 0x1C015F524 (_CMultipleConsumerWorkQueue--WaitForCompletionAndReleaseWorkItem_--_2_--CEventPoolEntryAutoDestr.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C03073E8 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 *     ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@PEBIPEA_N@Z @ 0x1C0307510 (-WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@P.c)
 * Callees:
 *     ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x1C00B72F0 (-Destroy@CManualResetEvent@@SAXQEAV1@@Z.c)
 */

void __fastcall CEventPool::CEventPoolEntry::Destroy(_QWORD *pv)
{
  void *v2; // rcx

  v2 = (void *)pv[1];
  if ( v2 )
    CManualResetEvent::Destroy(v2);
  EngFreeMem(pv);
}
