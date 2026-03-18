/*
 * XREFs of ??0CMmcssTask@@QEAA@XZ @ 0x1800CC928
 * Callers:
 *     ??0CGlobalMit@@IEAA@PEAVCComposition@@@Z @ 0x1800CC1B4 (--0CGlobalMit@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@@Z @ 0x1800CC21C (--0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrame.c)
 *     ??0CGlobalSurfaceManager@@IEAA@XZ @ 0x1800CC584 (--0CGlobalSurfaceManager@@IEAA@XZ.c)
 *     ??0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x1800CC668 (--0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x1800CC854 (-InitializeMmcssTask@CKst@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

CMmcssTask *__fastcall CMmcssTask::CMmcssTask(CMmcssTask *this)
{
  InitializeCriticalSection((LPCRITICAL_SECTION)this);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 80) = 0;
  return this;
}
