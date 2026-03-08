/*
 * XREFs of ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z @ 0x1C00A8B30
 * Callers:
 *     ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1C00A8AFC (-UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0011B70 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x1C0017980 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDRESS@@E@Z @ 0x1C0087130 (-VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDR.c)
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C00A610C (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00AB510 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C00ABBB0 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00E6E74 (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::UnmapGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_PROCESS *a3,
        unsigned int a4,
        bool a5)
{
  VIDMM_FENCE_STORAGE_PAGE *v9; // rax
  VIDMM_FENCE_STORAGE_PAGE *v10; // r14
  _QWORD *v11; // rcx
  _DWORD *v12; // rbx
  _QWORD *v13; // rsi
  struct VIDMM_PROCESS *v14; // r9
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  __int64 v17; // r10
  struct CVirtualAddressAllocator *v18; // r15
  D3DGPU_VIRTUAL_ADDRESS v19; // r12
  struct VIDMM_PROCESS *v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  VIDMM_FENCE_STORAGE_PAGE *v23; // rcx
  int v24; // eax
  bool v25; // r8
  _D3DKMT_FREEGPUVIRTUALADDRESS v26; // [rsp+28h] [rbp-51h] BYREF
  _BYTE v27[24]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v28[12]; // [rsp+58h] [rbp-21h] BYREF

  if ( (*((_BYTE *)a2 + 40936) & 4) != 0 )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v27,
      (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 72));
    v9 = (VIDMM_FENCE_STORAGE_PAGE *)*((_QWORD *)this + 7);
    while ( v9 != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 56) )
    {
      v10 = v9;
      v9 = *(VIDMM_FENCE_STORAGE_PAGE **)v9;
      if ( a2 == *((struct VIDMM_GLOBAL **)v10 + 6) )
      {
        v11 = (_QWORD *)*((_QWORD *)v10 + 4);
        if ( v11 != (_QWORD *)((char *)v10 + 32) )
        {
          while ( 1 )
          {
            v12 = v11 - 5;
            v13 = v11;
            v14 = (struct VIDMM_PROCESS *)*(v11 - 1);
            v11 = (_QWORD *)*v11;
            if ( a3 == v14 )
            {
              if ( !a5 )
                break;
              v24 = v12[15];
              if ( _bittest(&v24, a4) )
                break;
            }
            if ( v11 == (_QWORD *)((char *)v10 + 32) )
              goto LABEL_9;
          }
          if ( v12[14]-- == 1 )
          {
            if ( *((_BYTE *)v12 + 24) )
            {
              VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                          v14,
                                          *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL),
                                          a4);
              v18 = VirtualAddressAllocator;
              v19 = *(_QWORD *)v12;
              if ( *((_BYTE *)v12 + 25) == (_BYTE)v17 )
              {
                v20 = (struct VIDMM_PROCESS *)*((_QWORD *)VirtualAddressAllocator + 12);
                *(_QWORD *)&v26.hAdapter = v17;
                v26.BaseAddress = v19;
                v26.Size = 4096LL;
                VIDMM_GLOBAL::VidMmFreeGpuVirtualAddress(a2, v20, &v26, 1);
              }
              else
              {
                memset(v28, 0, 0x58uLL);
                LODWORD(v28[0]) = 120;
                v28[6] = v19;
                v28[7] = 1LL;
                v28[5] = v18;
                LOBYTE(v28[8]) = 1;
                VIDMM_GLOBAL::QueueLazySystemCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v28, v25);
              }
              VIDMM_PROCESS::CloseAdapter(*((VIDMM_PROCESS **)v12 + 4), a2);
            }
            v21 = *v13;
            if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v22 = (_QWORD *)v13[1], (_QWORD *)*v22 != v13) )
              __fastfail(3u);
            *v22 = v21;
            *(_QWORD *)(v21 + 8) = v22;
            ExFreePoolWithTag(v12, 0);
            VIDMM_FENCE_STORAGE_PAGE::ReleaseStoragePageGpuData(v23, (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***)v10);
          }
        }
        break;
      }
    }
LABEL_9:
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v27);
  }
}
