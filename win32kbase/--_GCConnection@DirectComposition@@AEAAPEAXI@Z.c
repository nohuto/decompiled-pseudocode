/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0099D20
 * Callers:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C005E51C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     NtDCompositionGetFrameStatistics @ 0x1C00776D0 (NtDCompositionGetFrameStatistics.c)
 *     NtDCompositionConfirmFrame @ 0x1C008F990 (NtDCompositionConfirmFrame.c)
 *     NtDCompositionBeginFrame @ 0x1C0098F20 (NtDCompositionBeginFrame.c)
 *     DCompositionSessionUninitialize @ 0x1C0099C08 (DCompositionSessionUninitialize.c)
 *     NtDCompositionGetConnectionBatch @ 0x1C009B800 (NtDCompositionGetConnectionBatch.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C009E280 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C009E710 (NtDCompositionGetFrameSurfaceUpdates.c)
 * Callees:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C009846C (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::`scalar deleting destructor'(
        DirectComposition::CConnection *this)
{
  DirectComposition::CConnection::~CConnection(this);
  if ( this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
