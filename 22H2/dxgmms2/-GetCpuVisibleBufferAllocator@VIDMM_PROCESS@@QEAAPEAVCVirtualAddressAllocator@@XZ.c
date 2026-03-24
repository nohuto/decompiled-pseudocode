/*
 * XREFs of ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00B8B20
 * Callers:
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00B8B20 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00B8DB4 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x1C00B8F24 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00B93F4 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001B54 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0001BCC (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001D2C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001FC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00834DC (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ??0CVirtualAddressAllocator@@QEAA@XZ @ 0x1C0083714 (--0CVirtualAddressAllocator@@QEAA@XZ.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C0083F24 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0084888 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00B8B20 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 */

struct CVirtualAddressAllocator *__fastcall VIDMM_PROCESS::GetCpuVisibleBufferAllocator(VIDMM_PROCESS *this)
{
  __int64 v2; // rcx
  VIDMM_PROCESS *v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  CVirtualAddressAllocator *v8; // rax
  CVirtualAddressAllocator *v9; // rcx
  __int64 v10; // rdx
  char v11; // al
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int8 v16; // r9
  CVirtualAddressAllocator *v17; // rcx
  _BYTE v18[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v19; // [rsp+48h] [rbp-20h]
  int v20; // [rsp+50h] [rbp-18h]
  unsigned __int64 v21; // [rsp+70h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 4);
  if ( (*(_BYTE *)(v2 + 347) & 0x20) == 0 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18, (struct _KTHREAD **)this + 28, 0);
    DXGPUSHLOCK::AcquireExclusive(v19);
    v6 = *((_QWORD *)this + 27);
    v7 = 0LL;
    v20 = 2;
    if ( !v6 )
    {
      v8 = (CVirtualAddressAllocator *)operator new[](0x98uLL, 0x4B677844u, PagedPool);
      if ( v8 )
        v9 = CVirtualAddressAllocator::CVirtualAddressAllocator(v8);
      else
        v9 = 0LL;
      *((_QWORD *)this + 27) = v9;
      if ( !v9 )
        goto LABEL_17;
      v10 = *((_QWORD *)this + 4);
      v11 = *(_BYTE *)(v10 + 347);
      if ( (v11 & 0x20) != 0 )
        v12 = *(_QWORD *)(v10 + 496);
      else
        v12 = v10 & -(__int64)((v11 & 0x10) != 0);
      v13 = CVirtualAddressAllocator::InitializeVaAllocator(
              v9,
              *(_QWORD *)(*(_QWORD *)(v12 + 496) + 224LL),
              0,
              0LL,
              0LL);
      v17 = (CVirtualAddressAllocator *)*((_QWORD *)this + 27);
      if ( v13 < 0 )
      {
        CVirtualAddressAllocator::DestroyVaAllocator(v17, v14, v15, v16);
        *((_QWORD *)this + 27) = 0LL;
LABEL_17:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
        return (struct CVirtualAddressAllocator *)v7;
      }
      CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
        (struct _KTHREAD **)v17,
        0x1000uLL,
        v15,
        0LL,
        0LL,
        0x1000u,
        &v21);
      v6 = *((_QWORD *)this + 27);
    }
    v7 = v6;
    goto LABEL_17;
  }
  v3 = 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 496) + 64LL);
  if ( v4 )
    v3 = *(VIDMM_PROCESS **)(v4 + 8);
  return VIDMM_PROCESS::GetCpuVisibleBufferAllocator(v3);
}
