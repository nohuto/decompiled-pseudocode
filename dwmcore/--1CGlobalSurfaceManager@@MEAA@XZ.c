/*
 * XREFs of ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x1801B3FD8
 * Callers:
 *     ??_GCGlobalSurfaceManager@@MEAAPEAXI@Z @ 0x1801B4240 (--_GCGlobalSurfaceManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAXPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV12@AEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@0@@Z @ 0x1800CE2F0 (--$_Destroy_range@V-$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAXPEAVAdapterInf.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x1801B2538 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x1801B40A4 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 */

void __fastcall CGlobalSurfaceManager::~CGlobalSurfaceManager(CGlobalSurfaceManager *this)
{
  __int64 v2; // rcx
  char *v3; // rcx

  v2 = *((_QWORD *)this + 60);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<CGlobalSurfaceManager::AdapterInfo>>(v2, *((_QWORD *)this + 61));
    std::_Deallocate<16,0>(*((void **)this + 60), 8 * ((__int64)(*((_QWORD *)this + 62) - *((_QWORD *)this + 60)) >> 3));
    *((_QWORD *)this + 60) = 0LL;
    *((_QWORD *)this + 61) = 0LL;
    *((_QWORD *)this + 62) = 0LL;
  }
  v3 = (char *)*((_QWORD *)this + 59);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  CMmcssTask::UnloadRuntime((CGlobalSurfaceManager *)((char *)this + 384));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 384));
  CLegacySurfaceManager::~CLegacySurfaceManager((CGlobalSurfaceManager *)((char *)this + 152));
  CSurfaceManager::~CSurfaceManager(this);
}
