/*
 * XREFs of ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C02DC8EC
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C001BC7C (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
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
