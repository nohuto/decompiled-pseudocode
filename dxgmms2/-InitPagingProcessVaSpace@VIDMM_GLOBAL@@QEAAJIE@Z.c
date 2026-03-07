__int64 __fastcall VIDMM_GLOBAL::InitPagingProcessVaSpace(VIDMM_GLOBAL *this, unsigned int a2, char a3)
{
  __int64 v3; // r13
  __int64 v5; // rdi
  __int64 v6; // r15
  char v7; // si
  int HwQueue; // esi
  CVirtualAddressAllocator *v9; // r12
  unsigned int v10; // eax
  unsigned __int64 v11; // rdi
  __int64 *v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdi
  int v24; // eax
  unsigned __int64 v25; // rcx
  __int64 *v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // ecx
  int v33; // edx
  __int64 *v34; // rax
  __int64 v35; // r12
  volatile signed __int32 *v36; // rax
  __int64 v37; // rsi
  unsigned __int64 LogicalAddress; // rdi
  struct _MDL *FullMDL; // rax
  CVirtualAddressAllocator *v40; // r12
  unsigned int v41; // edx
  int v42; // eax
  int v43; // edi
  __int64 v44; // rcx
  VIDMM_MAPPED_VA_RANGE *v45; // [rsp+70h] [rbp-90h]
  unsigned __int64 v46; // [rsp+78h] [rbp-88h] BYREF
  DXGK_MULTIPLANE_OVERLAY_PLANE3 *v47; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v48; // [rsp+88h] [rbp-78h]
  DXGK_MULTIPLANE_OVERLAY_PLANE3 *v49; // [rsp+90h] [rbp-70h] BYREF
  __int128 v50; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v51[10]; // [rsp+B0h] [rbp-50h] BYREF
  DXGK_MULTIPLANE_OVERLAY_PLANE3 *v52; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v53; // [rsp+168h] [rbp+68h] BYREF
  char v54; // [rsp+170h] [rbp+70h]
  CVirtualAddressAllocator *v55; // [rsp+178h] [rbp+78h] BYREF

  v54 = a3;
  v3 = a2;
  v5 = a2;
  v6 = *((_QWORD *)this + 5028) + 1616LL * a2;
  v7 = 0;
  LOBYTE(v53) = 0;
  if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
  {
    v7 = *(_BYTE *)(*((_QWORD *)this + 2) + 1880LL);
    LOBYTE(v53) = v7;
  }
  if ( (*(_BYTE *)(v6 + 444) & 0x30) != 0x30
    && (!*(_BYTE *)(*((_QWORD *)this + 3) + 2856LL) || (*(_BYTE *)(v6 + 444) & 1) == 0)
    && *(_DWORD *)(v6 + 432) != 1
    && !v7
    || (!(unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() || (*(_BYTE *)(v6 + 444) & 1) != 0)
    && *(char *)(v6 + 444) >= 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)(dword_1C0076458 - 1) > 0x3D )
  {
    WdLogSingleEntry1(1LL, 7191LL);
    goto LABEL_38;
  }
  HwQueue = 0;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
  {
    *((_BYTE *)this + 40936) |= 0x40u;
    v9 = (CVirtualAddressAllocator *)*((_QWORD *)this + v3 + 5052);
    v55 = v9;
    if ( !(unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() || (*(_BYTE *)(v6 + 444) & 1) != 0 )
    {
      if ( v54 )
        CVirtualAddressAllocator::EvictRootPageTable(v9, v3, 0);
      if ( !*((_QWORD *)this + 5119) )
      {
        v10 = *((_DWORD *)this + 926);
        v11 = 0LL;
        LOBYTE(v52) = 0;
        if ( v10 )
        {
          v12 = (__int64 *)*((_QWORD *)this + 464);
          v13 = v10;
          do
          {
            v14 = *v12;
            if ( (*(_DWORD *)(*v12 + 80) & 0x1001) == 0 )
            {
              v15 = *(_QWORD *)(v14 + 48);
              if ( v15 <= v11 )
                v15 = v11;
              v11 = v15;
              if ( *(_DWORD *)(v14 + 376) == 0x10000 )
                LOBYTE(HwQueue) = 1;
            }
            ++v12;
            --v13;
          }
          while ( v13 );
          LOBYTE(v52) = HwQueue;
        }
        v16 = v11 >> 2;
        if ( 1LL << dword_1C0076458 < v16 )
          v16 = 1LL << dword_1C0076458;
        if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
        {
          if ( !v16 )
            v16 = 0x800000LL;
          if ( (_BYTE)v53 )
            v16 += 0x8000000LL;
        }
        v17 = v16;
        if ( (_BYTE)HwQueue )
        {
          v18 = (*(_QWORD *)(*((_QWORD *)this + 5028) + 184LL) << 12) - 1LL;
          v16 = ~v18 & (v18 + v16);
          v17 = 2 * v16;
        }
        if ( v17 > *((_QWORD *)v55 + 2) )
        {
          *((_BYTE *)this + 40936) &= ~0x40u;
          WdLogSingleEntry2(1LL, v17, 7299LL);
LABEL_38:
          DxgkLogInternalTriageEvent(v19, 0x40000LL);
          return 3221225485LL;
        }
        HwQueue = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
                    (struct _KTHREAD **)v55,
                    v17,
                    (__int64)v55,
                    0LL,
                    0LL,
                    (_BYTE)HwQueue != 0 ? 0x10000 : 4096,
                    (unsigned __int64 *)this + 5118);
        if ( HwQueue < 0 )
        {
          WdLogSingleEntry1(1LL, v17);
          DxgkLogInternalTriageEvent(v21, 0x40000LL);
LABEL_41:
          *((_BYTE *)this + 40936) &= ~0x40u;
          return (unsigned int)HwQueue;
        }
        v9 = v55;
        CVirtualAddressAllocator::FreeVirtualAddressRange(v55, *((_QWORD *)this + 5118));
        v22 = v16 + *((_QWORD *)this + 5118);
        *((_QWORD *)this + 5119) = v22;
        if ( (_BYTE)v52 )
        {
          *((_QWORD *)this + 5120) = v22;
          *((_QWORD *)this + 5121) = v22 + v16;
        }
        v23 = v16 >> 2;
        if ( v23 > 0xFFFEFFFF )
          LODWORD(v23) = -65537;
        v24 = v23 + 0xFFFF;
        v5 = v3;
        *((_DWORD *)this + 10244) = v24 & 0xFFFF0000;
      }
    }
    v45 = 0LL;
    v25 = *(_QWORD *)(*((_QWORD *)this + 2) + 744LL);
    v46 = v25;
    if ( *(_BYTE *)(v25 + 55) )
    {
      v26 = (__int64 *)(*(_QWORD *)(v25 + 280) + 8 * v5);
      if ( !*v26 )
      {
        v27 = *(_QWORD *)(v25 + 272);
        memset(v51, 0, 48);
        HwQueue = VidSchCreateHwQueue(0LL, *(_QWORD *)(v27 + 8 * v5), (__int64)v51, v26);
        if ( HwQueue < 0 )
          goto LABEL_41;
        VidSchSetHwQueueProgressFenceObject(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL) + 280LL) + 8 * v5),
          *((_QWORD *)this + v5 + 749),
          0LL);
      }
    }
    LOBYTE(v53) = *(_BYTE *)(v6 + 445) & 8;
    if ( !(unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() || (*(_BYTE *)(v6 + 444) & 1) != 0 )
    {
      v28 = operator new(136LL, 0x35356956u, 256LL);
      if ( v28 )
        v29 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                v28,
                0LL,
                *((_QWORD *)this + 5118),
                *((_QWORD *)this + 5119),
                v3,
                0LL,
                0LL,
                0,
                0LL,
                0LL,
                0LL,
                0LL);
      else
        v29 = 0LL;
      v45 = (VIDMM_MAPPED_VA_RANGE *)v29;
      v47 = 0LL;
      HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                  (__int64)v9,
                  v29,
                  v3,
                  -1,
                  0LL,
                  (struct _DXGK_ADL *)&xmmword_1C004F0A8,
                  0,
                  &v47,
                  0LL);
      if ( HwQueue < 0 )
      {
        WdLogSingleEntry1(1LL, 7407LL);
LABEL_93:
        DxgkLogInternalTriageEvent(v30, 0x40000LL);
LABEL_94:
        if ( v45 )
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v45, v41);
        goto LABEL_41;
      }
      if ( (_BYTE)v53 )
      {
        v31 = *((_QWORD *)this + 5120);
        v52 = 0LL;
        *((_QWORD *)v45 + 12) = v31;
        *((_QWORD *)v45 + 13) = *((_QWORD *)this + 5121);
        v9 = v55;
        HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                    (__int64)v55,
                    (__int64)v45,
                    v3,
                    -3,
                    0LL,
                    (struct _DXGK_ADL *)&xmmword_1C004F0A8,
                    0,
                    &v52,
                    0LL);
        if ( HwQueue < 0 )
        {
          WdLogSingleEntry1(1LL, 7431LL);
          goto LABEL_93;
        }
      }
      HwQueue = VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
                  *(VIDMM_PAGE_DIRECTORY **)(32 * v5 + *((_QWORD *)v9 + 15)),
                  v9);
      if ( HwQueue < 0 )
      {
        WdLogSingleEntry1(1LL, 7441LL);
        goto LABEL_93;
      }
    }
    v32 = 0;
    v48 = (unsigned __int64)*((unsigned int *)this + v5 + 29) >> 12;
    v53 = 0;
    do
    {
      v33 = 0;
      v34 = (__int64 *)(*((_QWORD *)this + v5 + 79) + 96LL);
      v35 = *v34;
      while ( (__int64 *)v35 != v34 )
      {
        if ( v32 == v33 )
          goto LABEL_69;
        v35 = *(_QWORD *)v35;
        ++v33;
      }
      v35 = 0LL;
LABEL_69:
      v52 = *(DXGK_MULTIPLANE_OVERLAY_PLANE3 **)(v35 + 64);
      if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() && !v52 )
      {
        v40 = v55;
      }
      else
      {
        if ( !*(_QWORD *)(v35 + 96) )
        {
          v36 = CVirtualAddressAllocator::MapVirtualAddressRange(
                  (struct _KTHREAD **)v55,
                  v35,
                  0LL,
                  4,
                  v48 << 12,
                  0LL,
                  *((_QWORD *)this + 5118),
                  *((_QWORD *)this + 5119),
                  0x1000u,
                  (*((_DWORD *)this + 8) < 0x6000u) | 2LL,
                  0LL,
                  v3,
                  0LL,
                  0);
          if ( !v36 )
          {
            HwQueue = -1073741823;
            WdLogSingleEntry1(1LL, 7497LL);
            goto LABEL_93;
          }
          *(_QWORD *)(v35 + 96) = *((_QWORD *)v36 + 12);
        }
        v37 = *(_QWORD *)&v52->PlaneAttributes.DirtyRectCnt;
        v50 = 0LL;
        LogicalAddress = SysMmGetLogicalAddress(*(void *const *)(*(_QWORD *)(v35 + 56) + 528LL));
        FullMDL = VidMmGetFullMDL(*(struct _VIDMM_GLOBAL_ALLOC **)(v35 + 56), 0LL);
        VidMmiInitializeAdlForMdl((struct _DXGK_ADL *)&v50, FullMDL, LogicalAddress);
        v40 = v55;
        v49 = 0LL;
        HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                    (__int64)v55,
                    v37 - 24,
                    v3,
                    0,
                    0LL,
                    (struct _DXGK_ADL *)&v50,
                    0,
                    &v49,
                    0LL);
        if ( HwQueue < 0 )
        {
          WdLogSingleEntry1(1LL, 7521LL);
          goto LABEL_93;
        }
        v5 = v3;
      }
      v32 = v53 + 1;
      v53 = v32;
    }
    while ( v32 < 2 );
    if ( (**(_DWORD **)(*((_QWORD *)this + 3) + 2824LL) & 0x10000000) != 0 )
    {
      HwQueue = VidSchRecommitSchedulingLogs(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), v3);
      if ( HwQueue < 0 )
      {
        WdLogSingleEntry1(1LL, 7534LL);
        goto LABEL_93;
      }
    }
    if ( !*(_BYTE *)(v46 + 55) )
      goto LABEL_89;
    if ( *((_QWORD *)this + v5 + 813) )
    {
      v42 = VIDMM_GLOBAL::RecommitSystemFenceGpuVA(this, v3);
    }
    else
    {
      HwQueue = VIDMM_GLOBAL::MapGpuVA(
                  (struct VIDMM_DEVICE **)this,
                  *((struct VIDMM_DEVICE **)this + 5049),
                  0LL,
                  (VIDMM_FENCE_STORAGE_PAGE **)(*((_QWORD *)this + v5 + 749) + 56LL),
                  (unsigned __int64 *)this + v5 + 813,
                  1 << v3,
                  1);
      if ( HwQueue < 0 )
        goto LABEL_94;
      v42 = VIDMM_DEVICE::MapPagingQueueGpuVAs(*((VIDMM_DEVICE **)this + 5049), v3);
    }
    HwQueue = v42;
    if ( v42 >= 0 )
    {
LABEL_89:
      if ( !(unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() || (*(_BYTE *)(v6 + 444) & 1) != 0 )
      {
        v46 = 0LL;
        LODWORD(v52) = 0;
        v53 = 0;
        v55 = 0LL;
        CVirtualAddressAllocator::GetPageDirectoryData(
          v40,
          v3,
          &v46,
          (unsigned int *)&v52,
          &v53,
          (unsigned __int64 *)&v55);
        VidSchSetPagingNodePageDirectory(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), v3, (_DWORD)v52, v53, (__int64)v55);
      }
      *(_BYTE *)(v6 + 444) &= ~0x80u;
      *(_BYTE *)(v6 + 445) &= ~1u;
    }
    goto LABEL_94;
  }
  memset((char *)v51 + 8, 0, 0x50uLL);
  LODWORD(v51[0]) = 118;
  DWORD1(v51[0]) = v3;
  v43 = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v51, 1);
  if ( v43 >= 0 )
    return 0LL;
  WdLogSingleEntry1(1LL, 7206LL);
  DxgkLogInternalTriageEvent(v44, 0x40000LL);
  return (unsigned int)v43;
}
