/*
 * XREFs of ??0CManipulationManager@@IEAA@PEAVCComposition@@@Z @ 0x1800B5C48
 * Callers:
 *     ??0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x1800B5BA8 (--0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x1800B60A8 (--0QpcTimeConverter@@QEAA@XZ.c)
 */

CManipulationManager *__fastcall CManipulationManager::CManipulationManager(
        CManipulationManager *this,
        struct CComposition *a2)
{
  char *v3; // rcx
  CManipulationManager *result; // rax

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CManipulationManager::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v3 = (char *)this + 104;
  *((_DWORD *)v3 + 4) = 0;
  v3[20] = 0;
  *((_QWORD *)v3 + 1) = v3;
  *(_QWORD *)v3 = v3;
  InitializeCriticalSection((LPCRITICAL_SECTION)(v3 + 24));
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  QpcTimeConverter::QpcTimeConverter((CManipulationManager *)((char *)this + 304));
  result = this;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  return result;
}
