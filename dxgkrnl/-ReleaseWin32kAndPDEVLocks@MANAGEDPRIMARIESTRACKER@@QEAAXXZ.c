/*
 * XREFs of ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C0178CDC
 * Callers:
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0178D4C (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018B2A0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks(MANAGEDPRIMARIESTRACKER *this)
{
  unsigned int v1; // edx
  struct DXGGLOBAL *Global; // rax

  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 1) + 88LL) + 200LL))(
      *(_QWORD *)(*(_QWORD *)this + 16LL),
      v1 >> 2);
    *((_DWORD *)this + 4) &= ~1u;
    Global = DXGGLOBAL::GetGlobal();
    *((_QWORD *)Global + 183) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Global + 1456, 0LL);
    KeLeaveCriticalRegion();
  }
}
