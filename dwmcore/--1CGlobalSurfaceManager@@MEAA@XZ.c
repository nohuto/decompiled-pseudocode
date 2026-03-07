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
