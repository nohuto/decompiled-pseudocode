/*
 * XREFs of ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E9808
 * Callers:
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00F9B1C (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00FDFA0 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001414 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     VidSchMarkDeviceAsError @ 0x1C0014AF0 (VidSchMarkDeviceAsError.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0015230 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008E1D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00AB510 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00E0A58 (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation(VIDMM_SEGMENT *this, VIDMM_SEGMENT **a2)
{
  VIDMM_SEGMENT *v2; // r15
  int v4; // eax
  __int64 v5; // rdx
  char *v6; // r12
  char *v7; // r14
  __int64 v8; // rcx
  char *v9; // rsi
  char *v10; // r13
  unsigned int v11; // ebx
  char v12; // bp
  bool v13; // zf
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  char *v15; // rax
  char *v16; // rsi
  unsigned __int64 v17; // r13
  char *v18; // r14
  __int64 **v19; // rbp
  __int64 *v20; // r15
  unsigned __int64 v21; // rsi
  int v22; // r8d
  int v23; // eax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned int v26; // esi
  unsigned __int64 v27; // r13
  CVirtualAddressAllocator *v28; // [rsp+50h] [rbp-98h]
  unsigned __int64 v29; // [rsp+58h] [rbp-90h]
  unsigned __int64 v30; // [rsp+60h] [rbp-88h] BYREF
  char *v31; // [rsp+68h] [rbp-80h]
  char *v32; // [rsp+70h] [rbp-78h]
  char *v33; // [rsp+78h] [rbp-70h]
  char *v34; // [rsp+80h] [rbp-68h]
  _DWORD v35[2]; // [rsp+88h] [rbp-60h] BYREF
  unsigned __int64 v36; // [rsp+90h] [rbp-58h]
  char v38; // [rsp+F8h] [rbp+10h]
  char v39; // [rsp+100h] [rbp+18h]
  int v40; // [rsp+108h] [rbp+20h]

  v2 = this;
  v4 = VIDMM_SEGMENT::DriverId(a2[15]);
  v6 = (char *)(v5 + 272);
  v40 = v4;
  v7 = *(char **)(v5 + 272);
  while ( v7 != v6 )
  {
    v8 = *((_QWORD *)v2 + 1);
    v9 = v7;
    v28 = 0LL;
    v10 = 0LL;
    v29 = -1LL;
    v11 = 0;
    v30 = 0LL;
    v12 = 0;
    v13 = (*(_BYTE *)(v8 + 40936) & 4) == 0;
    v7 = *(char **)v7;
    v34 = v7;
    v32 = 0LL;
    v39 = 0;
    v38 = 0;
    if ( !v13 )
    {
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  *((VIDMM_PROCESS **)v9 - 6),
                                  *(_DWORD *)(*(_QWORD *)(v8 + 24) + 240LL),
                                  *((_DWORD *)a2 + 17) & 0x3F);
      v28 = VirtualAddressAllocator;
      v10 = (char *)VirtualAddressAllocator + 56;
      v32 = (char *)VirtualAddressAllocator + 56;
      if ( *((struct _KTHREAD **)VirtualAddressAllocator + 8) != KeGetCurrentThread() )
      {
        DXGPUSHLOCK::AcquireExclusive((struct CVirtualAddressAllocator *)((char *)VirtualAddressAllocator + 56));
        v39 = 1;
      }
    }
    v15 = v9 - 16;
    v16 = (char *)*((_QWORD *)v9 - 2);
    v31 = v15;
    if ( v16 != v15 )
    {
      v17 = -1LL;
      v18 = v15;
      do
      {
        v13 = (*((_DWORD *)a2 + 17) & 0x10000000) == 0;
        v19 = (__int64 **)(v16 - 40);
        v16 = *(char **)v16;
        v33 = v16;
        if ( !v13 )
          VIDMM_GLOBAL::BuildInitContextAllocation(*((ADAPTER_RENDER ***)v2 + 1), v19);
        if ( (*(_BYTE *)(*((_QWORD *)v2 + 1) + 40936LL) & 4) != 0 && *((_BYTE *)v19 + 26) )
        {
          v35[0] = *((_DWORD *)a2 + 4) >> 12;
          v36 = (unsigned __int64)a2[16] >> 12;
          v20 = v19[16];
          v35[1] = 1;
          if ( v20 != (__int64 *)(v19 + 16) )
          {
            v21 = v30;
            do
            {
              v22 = *((_DWORD *)a2 + 17) & 0x3F;
              v30 = 0LL;
              v23 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                      (__int64)v28,
                      (__int64)(v20 - 3),
                      v22,
                      v40,
                      0LL,
                      (struct _DXGK_ADL *)v35,
                      0,
                      (DXGK_MULTIPLANE_OVERLAY_PLANE3 **)&v30,
                      0LL);
              if ( v23 >= 0 )
              {
                v24 = v20[10];
                v38 = 1;
                v11 |= 1 << ((*((_DWORD *)v20 + 10) >> 4) & 0x3F);
                v25 = v20[9];
                if ( v17 < v25 )
                  v25 = v17;
                v17 = v25;
                if ( v21 > v24 )
                  v24 = v21;
                v21 = v24;
              }
              else
              {
                WdLogSingleEntry2(3LL, v19, v23);
                VidSchMarkDeviceAsError(v19[1][4]);
              }
              v20 = (__int64 *)*v20;
            }
            while ( v20 != (__int64 *)(v19 + 16) );
            v18 = v31;
            v30 = v21;
            v16 = v33;
            v29 = v17;
          }
          v2 = this;
        }
      }
      while ( v16 != v18 );
      v7 = v34;
      v6 = (char *)(a2 + 34);
      v10 = v32;
      v12 = v38;
    }
    if ( v39 )
    {
      *((_QWORD *)v10 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v12 )
    {
      v26 = 0;
      if ( v11 )
      {
        v27 = v30;
        do
        {
          if ( (v11 & 1) != 0 )
            CVirtualAddressAllocator::FlushGpuVaTlb(v28, v26, v29, v27);
          ++v26;
          v11 >>= 1;
        }
        while ( v11 );
        v6 = (char *)(a2 + 34);
      }
    }
  }
}
