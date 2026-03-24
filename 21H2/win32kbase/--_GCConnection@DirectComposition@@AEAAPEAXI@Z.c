/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00AB19C
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1C0058D40 (NtDCompositionBeginFrame.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C005C370 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C005C470 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C005C6A0 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetConnectionBatch @ 0x1C007A880 (NtDCompositionGetConnectionBatch.c)
 *     NtDCompositionDiscardFrame @ 0x1C007ECC0 (NtDCompositionDiscardFrame.c)
 *     NtDCompositionRetireFrame @ 0x1C007EE10 (NtDCompositionRetireFrame.c)
 *     DCompositionSessionUninitialize @ 0x1C00AB0BC (DCompositionSessionUninitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C00AB1C4 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::`scalar deleting destructor'(
        DirectComposition::CConnection *this)
{
  DirectComposition::CConnection::~CConnection(this);
  Win32FreePool((__int64)this);
  return this;
}
