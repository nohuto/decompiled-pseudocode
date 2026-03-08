/*
 * XREFs of ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C00AB790
 * Callers:
 *     ?VidMmFlushPagingQueue@@YAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0011B30 (-VidMmFlushPagingQueue@@YAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C00A9A98 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 *     ?Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C00AB650 (-Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?VidMmTerminateCompanionContext@VIDMM_GLOBAL@@SAXPEAUVIDMM_COMPANION_CONTEXT@@@Z @ 0x1C00EAABC (-VidMmTerminateCompanionContext@VIDMM_GLOBAL@@SAXPEAUVIDMM_COMPANION_CONTEXT@@@Z.c)
 * Callees:
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C00A5350 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::Flush(VIDMM_PAGING_QUEUE *this)
{
  __int64 v2; // rbx
  int v3; // eax
  bool v4; // bl
  __int64 v5; // rcx

  if ( *((_QWORD *)this + 10) )
  {
    VIDMM_DEVICE::EnsureSchedulable(*((VIDMM_DEVICE **)this + 17), 0);
    while ( 1 )
    {
      v2 = *((_QWORD *)this + 10);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v2 + 144, 0LL);
      *(_QWORD *)(v2 + 152) = KeGetCurrentThread();
      v3 = *((_DWORD *)this + 28);
      v4 = !v3 || v3 == 2 && *((VIDMM_PAGING_QUEUE **)this + 4) == (VIDMM_PAGING_QUEUE *)((char *)this + 32);
      v5 = *((_QWORD *)this + 10) + 144LL;
      *(_QWORD *)(v5 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v5, 0LL);
      KeLeaveCriticalRegion();
      if ( v4 )
        break;
      KeWaitForSingleObject(*((PVOID *)this + 15), Executive, 0, 0, 0LL);
    }
  }
}
