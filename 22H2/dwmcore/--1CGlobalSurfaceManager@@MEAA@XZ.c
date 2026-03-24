/*
 * XREFs of ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x180163D7C
 * Callers:
 *     ??_GCGlobalSurfaceManager@@MEAAPEAXI@Z @ 0x180164150 (--_GCGlobalSurfaceManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180030E04 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$_Destroy_range@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAXPEAVAdapterInfo@CGlobalSurfaceManager@@0AEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@0@@Z @ 0x180031148 (--$_Destroy_range@V-$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAXPEAVAdapterInf.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x180163524 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180163FA8 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 */

void __fastcall CGlobalSurfaceManager::~CGlobalSurfaceManager(CGlobalSurfaceManager *this)
{
  HANDLE *v1; // rbx
  const void *v3; // rcx
  void *v4; // rsi
  char *v5; // rcx
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rcx
  struct _RTL_GENERIC_TABLE *v9; // rdi
  PVOID v10; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *((_BYTE *)this + 496) = 1;
  *(_QWORD *)this = &CGlobalSurfaceManager::`vftable'{for `CMILRefCountBase'};
  v1 = (HANDLE *)((char *)this + 416);
  *((_QWORD *)this + 2) = &CGlobalSurfaceManager::`vftable'{for `CCompositionSurfaceManager'};
  *((_QWORD *)this + 12) = &CGlobalSurfaceManager::`vftable';
  if ( (unsigned __int64)(*((_QWORD *)this + 52) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    SetEvent(*((HANDLE *)this + 53));
    WaitForSingleObject(*v1, 0xFFFFFFFF);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v1,
      0LL);
  }
  v3 = (const void *)*((_QWORD *)this + 57);
  if ( v3 )
    UnmapViewOfFile(v3);
  v4 = (void *)*((_QWORD *)this + 59);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<CGlobalSurfaceManager::AdapterInfo>>(
      *((_QWORD *)this + 59),
      *((_QWORD *)this + 60));
    std::_Deallocate<16,0>(v4, 24 * ((*((_QWORD *)this + 61) - (_QWORD)v4) / 24LL));
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 60) = 0LL;
    *((_QWORD *)this + 61) = 0LL;
  }
  v5 = (char *)*((_QWORD *)this + 56);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  v6 = (char *)*((_QWORD *)this + 55);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  v7 = (char *)*((_QWORD *)this + 54);
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  v8 = (char *)*((_QWORD *)this + 53);
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v8);
  if ( (char *)*v1 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(*v1);
  CMmcssTask::UnloadRuntime((CGlobalSurfaceManager *)((char *)this + 328));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 328));
  CLegacySurfaceManager::~CLegacySurfaceManager((CGlobalSurfaceManager *)((char *)this + 96));
  *((_QWORD *)this + 2) = &CCompositionSurfaceManager::`vftable';
  v9 = (struct _RTL_GENERIC_TABLE *)((char *)this + 24);
  while ( 1 )
  {
    RestartKey = 0LL;
    v10 = RtlEnumerateGenericTableWithoutSplaying(v9, &RestartKey);
    if ( !v10 )
      break;
    if ( !RtlDeleteElementGenericTable(v9, v10) )
      RaiseFailFastException(0LL, 0LL, 1u);
  }
}
