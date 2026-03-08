/*
 * XREFs of ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B50C8
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008E1D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00B4FC4 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001414 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C0001754 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C001BC86 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008E1D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0098CB8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?VidMmiInitializeAdlForMdl@@YAXPEAU_DXGK_ADL@@PEAU_MDL@@_K@Z @ 0x1C00B467C (-VidMmiInitializeAdlForMdl@@YAXPEAU_DXGK_ADL@@PEAU_MDL@@_K@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::RecommitVirtualAddressRanges(
        struct _KTHREAD **this,
        __int64 a2,
        DXGK_MULTIPLANE_OVERLAY_PLANE3 **a3)
{
  CVirtualAddressAllocator *i; // rsi
  __int64 v5; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // r12
  unsigned __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // r8d
  __int64 v12; // rax
  struct _MDL *v13; // r15
  void *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 VidMmGlobalAllocFromOwner; // rax
  _QWORD *v19; // r14
  int v20; // r9d
  VIDMM_SEGMENT *v21; // rcx
  int v22; // eax
  struct _MDL *FullMDL; // rax
  unsigned __int64 LogicalAddress; // rax
  _OWORD v25[5]; // [rsp+70h] [rbp-58h] BYREF
  char v26; // [rsp+D0h] [rbp+8h]
  __int64 v27; // [rsp+D8h] [rbp+10h]
  int v29; // [rsp+E8h] [rbp+20h]

  v27 = a2;
  v26 = 0;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    a2 = v27;
    v26 = 1;
  }
  for ( i = this[3]; i != (CVirtualAddressAllocator *)(this + 3); i = *(CVirtualAddressAllocator **)i )
  {
    v5 = 0LL;
    if ( *((_DWORD *)this[11] + 1754) )
    {
      while ( 1 )
      {
        if ( _bittest64(&a2, (unsigned int)v5) )
        {
          v7 = (_QWORD *)((char *)i + 16 * v5 + 8 * v5 + 56);
          v8 = (_QWORD *)*v7;
          if ( (_QWORD *)*v7 != v7 )
            break;
        }
LABEL_7:
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= *((_DWORD *)this[11] + 1754) )
          goto LABEL_8;
      }
      while ( 2 )
      {
        v9 = 0LL;
        v29 = 0;
        LODWORD(v10) = 0;
        v11 = (int)(*((_DWORD *)v8 + 14) << 28) >> 28;
        v25[0] = 0LL;
        switch ( v11 )
        {
          case 1:
            goto LABEL_26;
          case 2:
            v17 = v8[6];
            v13 = *(struct _MDL **)(v17 + 56);
            v14 = *(void **)(v17 + 64);
            break;
          case 3:
          case 4:
          case 5:
LABEL_26:
            VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v11, v8[6]);
            v19 = (_QWORD *)VidMmGlobalAllocFromOwner;
            if ( *(_DWORD *)(VidMmGlobalAllocFromOwner + 112) == v20 )
              goto LABEL_32;
            v21 = *(VIDMM_SEGMENT **)(VidMmGlobalAllocFromOwner + 120);
            if ( (*((_DWORD *)v21 + 20) & 0x1001) == 0 )
            {
              v22 = VIDMM_SEGMENT::DriverId(v21);
              v9 = v19[16];
              v10 = v19[2];
              v29 = v22;
              goto LABEL_22;
            }
            FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)VidMmGlobalAllocFromOwner, 0LL);
            v14 = (void *)v19[66];
            v13 = FullMDL;
            v9 = 0LL;
            LODWORD(v10) = 0;
            break;
          case 6:
            v29 = -2;
LABEL_22:
            *((_QWORD *)&v25[0] + 1) = v9 >> 12;
            DWORD1(v25[0]) = 1;
            LODWORD(v25[0]) = (unsigned int)v10 >> 12;
            goto LABEL_23;
          case 7:
            v12 = v8[6];
            v13 = *(struct _MDL **)(v12 + 72);
            v14 = *(void **)(v12 + 80);
            break;
          default:
LABEL_32:
            v8 = (_QWORD *)*v8;
            if ( v8 == (_QWORD *)((char *)i + 16 * v5 + 8 * v5 + 56) )
            {
              a2 = v27;
              goto LABEL_7;
            }
            continue;
        }
        break;
      }
      if ( !v13 )
        goto LABEL_22;
      LogicalAddress = SysMmGetLogicalAddress(v14);
      VidMmiInitializeAdlForMdl((struct _DXGK_ADL *)v25, v13, LogicalAddress);
LABEL_23:
      v15 = CVirtualAddressAllocator::CommitVirtualAddressRange(
              (__int64)this,
              (__int64)(v8 - 1),
              v5,
              v29,
              v8[8],
              (struct _DXGK_ADL *)v25,
              0,
              a3,
              0LL);
      if ( v15 < 0 )
      {
        WdLogSingleEntry4(1LL, v15, v8[11], v8[12], (unsigned int)v5);
        DxgkLogInternalTriageEvent(v16, 0x40000LL);
        break;
      }
      goto LABEL_32;
    }
LABEL_8:
    ;
  }
  if ( v26 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
