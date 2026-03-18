/*
 * XREFs of ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C000C9A4
 * Callers:
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C000B750 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C000BA78 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?EmitUpdate@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000BBDC (-EmitUpdate@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_J_NPEAVCEvent@2@PEAW4DeferReason@12@@Z @ 0x1C000C38C (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_J_NPEAVCEvent@2@PEAW4DeferReason@12@@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C000C59C (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C000C784 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C000D084 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0012700 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0013470 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C009549C (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?ClearSynchronizationEvents@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAAXXZ @ 0x1C00BBF58 (-ClearSynchronizationEvents@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAAXXZ.c)
 *     ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x1C02150C4 (-VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CEvent *__fastcall DirectComposition::CEvent::`scalar deleting destructor'(
        DirectComposition::CEvent *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
    ObfDereferenceObject(v2);
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    this);
  return this;
}
