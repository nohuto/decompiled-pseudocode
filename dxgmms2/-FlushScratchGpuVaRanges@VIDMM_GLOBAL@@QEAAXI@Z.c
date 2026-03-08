/*
 * XREFs of ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00E3514
 * Callers:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C00920C0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B7F80 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C00E2EAC (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C00E5604 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F7AD0 (-ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x1C00016D0 (VidSchIsMonitoredFenceSignaled.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00897A0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0090130 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

void __fastcall VIDMM_GLOBAL::FlushScratchGpuVaRanges(VIDMM_GLOBAL *this, unsigned int a2)
{
  __int64 v3; // r13
  __int64 v4; // rcx
  char v5; // bp
  char v6; // al
  struct _KTHREAD **v7; // r15
  char v8; // r12
  _QWORD **v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rax
  _QWORD *v13; // rcx
  struct VIDMM_VAD *v14; // r14
  bool v15; // zf
  __int64 v16; // [rsp+70h] [rbp+8h]

  v3 = a2;
  v4 = 1616LL * a2;
  v16 = v4;
  if ( (*(_BYTE *)(*((_QWORD *)this + 5028) + v4 + 444) & 1) != 0 )
  {
    v5 = 0;
    if ( *((_QWORD *)this + a2 + 143) )
    {
      if ( *((_DWORD *)this + 2) )
      {
        v6 = *((_BYTE *)this + 40937);
        if ( (v6 & 4) == 0 )
        {
          *((_BYTE *)this + 40937) = v6 | 4;
          v7 = (struct _KTHREAD **)*((_QWORD *)this + a2 + 5052);
          while ( 1 )
          {
            v8 = 0;
            while ( 1 )
            {
              v9 = (_QWORD **)(*((_QWORD *)this + 5028) + 472LL + v4);
              v10 = *v9;
              if ( *v9 == v9 || !VidSchIsMonitoredFenceSignaled(*((_QWORD *)this + v3 + 749), v10[2]) )
                break;
              v12 = *v10;
              if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v13 = (_QWORD *)v10[1], (_QWORD *)*v13 != v10) )
                __fastfail(3u);
              *v13 = v12;
              *(_QWORD *)(v12 + 8) = v13;
              *v10 = 0LL;
              v10[1] = 0LL;
              if ( VIDMM_GLOBAL::_Config >= 0 )
              {
                v8 = 1;
                CVirtualAddressAllocator::UncommitVirtualAddressRange(
                  *((CVirtualAddressAllocator **)this + v3 + 5052),
                  (struct VIDMM_MAPPED_VA_RANGE *)(v10 - 3),
                  0LL,
                  1);
              }
              v14 = (struct VIDMM_VAD *)*(v10 - 3);
              if ( v7[8] != KeGetCurrentThread() )
              {
                DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v7 + 7));
                v5 = 1;
              }
              CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)v7, v14, v11);
              v4 = v16;
              v15 = v5 == 0;
              v5 = 0;
              if ( !v15 )
              {
                v7[8] = 0LL;
                ExReleasePushLockExclusiveEx(v7 + 7, 0LL);
                KeLeaveCriticalRegion();
                v4 = v16;
              }
            }
            if ( !v8 )
              break;
            VIDMM_GLOBAL::FlushPagingBufferInternal(this, v3, 0, 0LL, 0LL, 0, 0);
            v4 = v16;
          }
          *((_BYTE *)this + 40937) &= ~4u;
        }
      }
    }
  }
}
