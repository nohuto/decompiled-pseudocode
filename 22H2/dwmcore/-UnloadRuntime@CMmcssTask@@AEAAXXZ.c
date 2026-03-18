/*
 * XREFs of ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x1801B5738
 * Callers:
 *     ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x1800CEEC0 (-LoadRuntime@CMmcssTask@@AEAAJXZ.c)
 *     ??1CGlobalMit@@UEAA@XZ @ 0x1801B1494 (--1CGlobalMit@@UEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801B3CEC (--1CComposition@@MEAA@XZ.c)
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x1801B71D8 (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 *     ??1CGlobalManipulationManager@@EEAA@XZ @ 0x1802834D8 (--1CGlobalManipulationManager@@EEAA@XZ.c)
 *     ??_GCMmcssTask@@QEAAPEAXI@Z @ 0x180285B88 (--_GCMmcssTask@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CMmcssTask::UnloadRuntime(CMmcssTask *this)
{
  __int64 v2; // rcx
  void (*v3)(void); // rax
  HMODULE v4; // rcx

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    v3 = (void (*)(void))*((_QWORD *)this + 8);
    if ( v3 && *(_QWORD *)(v2 + 136) )
    {
      v3();
      *(_DWORD *)(*((_QWORD *)this + 5) + 128LL) = 0;
    }
    operator delete(*((void **)this + 5));
    *((_QWORD *)this + 5) = 0LL;
  }
  v4 = (HMODULE)*((_QWORD *)this + 6);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  FreeLibrary(v4);
  *((_QWORD *)this + 6) = 0LL;
}
