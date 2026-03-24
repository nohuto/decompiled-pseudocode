/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00AB69C
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1C0059D40 (NtDCompositionBeginFrame.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C005D370 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C005D470 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C005D6A0 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetConnectionBatch @ 0x1C007BF60 (NtDCompositionGetConnectionBatch.c)
 *     NtDCompositionDiscardFrame @ 0x1C007FF50 (NtDCompositionDiscardFrame.c)
 *     NtDCompositionRetireFrame @ 0x1C00800A0 (NtDCompositionRetireFrame.c)
 *     DCompositionSessionUninitialize @ 0x1C00AB5BC (DCompositionSessionUninitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C00AB6C4 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::`scalar deleting destructor'(
        DirectComposition::CConnection *this)
{
  DirectComposition::CConnection::~CConnection(this);
  Win32FreePool((__int64)this);
  return this;
}
