/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0083E50
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1C0021CE0 (NtDCompositionBeginFrame.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C002602C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     NtDCompositionGetFrameStatistics @ 0x1C004BB10 (NtDCompositionGetFrameStatistics.c)
 *     DCompositionSessionUninitialize @ 0x1C0083D38 (DCompositionSessionUninitialize.c)
 *     NtDCompositionConfirmFrame @ 0x1C0085100 (NtDCompositionConfirmFrame.c)
 *     NtDCompositionGetConnectionBatch @ 0x1C008BB80 (NtDCompositionGetConnectionBatch.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0090220 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C0090510 (NtDCompositionGetFrameSurfaceUpdates.c)
 * Callees:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C0083968 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::`scalar deleting destructor'(
        DirectComposition::CConnection *this)
{
  DirectComposition::CConnection::~CConnection(this);
  if ( this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
