/*
 * XREFs of ??0CGlobalSurfaceManager@@IEAA@XZ @ 0x1800CBB24
 * Callers:
 *     ?Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z @ 0x1800CB5F8 (-Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z.c)
 * Callees:
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800CBEC8 (--0CMmcssTask@@QEAA@XZ.c)
 *     ??0CLegacySurfaceManager@@QEAA@XZ @ 0x1800CBF08 (--0CLegacySurfaceManager@@QEAA@XZ.c)
 */

CGlobalSurfaceManager *__fastcall CGlobalSurfaceManager::CGlobalSurfaceManager(CGlobalSurfaceManager *this)
{
  CGlobalSurfaceManager *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = &CCompositionSurfaceManager::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 24),
    CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::AllocTableData,
    CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::FreeTableData,
    0LL);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_BYTE *)this + 144) = 0;
  CLegacySurfaceManager::CLegacySurfaceManager((CGlobalSurfaceManager *)((char *)this + 152));
  *(_QWORD *)this = &CGlobalSurfaceManager::`vftable'{for `CMILRefCountBaseT<IMILRefCount>'};
  *((_QWORD *)this + 2) = &CGlobalSurfaceManager::`vftable'{for `CCompositionSurfaceManager'};
  *((_QWORD *)this + 19) = &CGlobalSurfaceManager::`vftable';
  CMmcssTask::CMmcssTask((CGlobalSurfaceManager *)((char *)this + 384));
  result = this;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  return result;
}
