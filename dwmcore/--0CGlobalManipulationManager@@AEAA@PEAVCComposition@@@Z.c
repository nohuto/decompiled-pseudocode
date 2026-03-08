/*
 * XREFs of ??0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x1800CBC08
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800AE4F0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800CBEC8 (--0CMmcssTask@@QEAA@XZ.c)
 *     ??0CManipulationManager@@IEAA@PEAVCComposition@@@Z @ 0x1800CBFC0 (--0CManipulationManager@@IEAA@PEAVCComposition@@@Z.c)
 */

CGlobalManipulationManager *__fastcall CGlobalManipulationManager::CGlobalManipulationManager(
        CGlobalManipulationManager *this,
        struct CComposition *a2)
{
  __int64 v3; // rdx
  CGlobalManipulationManager *result; // rax

  CManipulationManager::CManipulationManager(this, a2);
  *(_QWORD *)this = &CGlobalManipulationManager::`vftable';
  CMmcssTask::CMmcssTask((CGlobalManipulationManager *)((char *)this + 312));
  v3 = ((unsigned __int64)(2000 * g_qpcFrequency.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  result = this;
  *((_QWORD *)this + 34) = (v3 + ((unsigned __int64)(2000 * g_qpcFrequency.QuadPart - v3) >> 1)) >> 9;
  return result;
}
