__int64 __fastcall VIDMM_GLOBAL::Init(
        VIDMM_GLOBAL *this,
        struct ADAPTER_RENDER *a2,
        struct _DXGK_QUERYSEGMENTOUT4 *a3,
        unsigned int a4,
        char a5)
{
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  NTSTATUS VaAllocator; // esi
  unsigned __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  unsigned __int64 v15; // kr00_8
  bool v16; // cf
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned int v21; // ecx
  char v22; // cl
  char v23; // dl
  __int64 v24; // rcx
  char v25; // cl
  int v26; // ecx
  char v27; // al
  unsigned int v28; // r12d
  unsigned int v29; // r13d
  __int64 v30; // rbx
  __int64 v31; // r15
  UINT *p_PagingBufferSegmentId; // r14
  ADAPTER_RENDER *v33; // rcx
  const struct DXGADAPTER_GPUMMUCAPS *GpuMmuCaps; // rax
  __int64 v35; // r9
  __int64 v36; // rbp
  unsigned int v37; // ecx
  _DWORD *v38; // rcx
  int IsEnabledDeviceUsage; // eax
  __int64 v40; // r8
  char v41; // dl
  __int16 v42; // ax
  unsigned int v43; // ecx
  char v44; // al
  bool v45; // cl
  int v46; // ebx
  __int64 v47; // rax
  __int64 v48; // rax
  char *v49; // r14
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  wchar_t *v53; // r14
  __int64 v54; // rcx
  unsigned int v55; // ebx
  UCHAR **p_pSegmentDescriptor; // r15
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v57; // r9
  __int64 v58; // rbp
  int inited; // eax
  __int64 v60; // rax
  __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  bool v63; // zf
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  unsigned int v72; // ebx
  unsigned int v73; // ecx
  __int64 v74; // r14
  const struct DXGADAPTER_GPUMMUCAPS *v75; // r15
  unsigned int *v76; // rbp
  const struct DXGK_PHYSICALADAPTERINFO *v77; // r10
  unsigned int v78; // eax
  int v79; // eax
  VIDMM_WORKER_THREAD *v80; // rax
  VIDMM_WORKER_THREAD *v81; // rax
  struct _RTL_BALANCED_NODE *v82; // rax
  VIDMM_PARTITION *i; // r14
  int v84; // eax
  VIDMM_PARTITION **v85; // rax
  VIDMM_PARTITION *v86; // rcx
  VIDMM_PARTITION *v87; // rcx
  _QWORD *v88; // rax
  _QWORD *v89; // rdi
  __int64 v90; // rcx
  __int64 v91; // rcx
  _QWORD *v92; // rcx
  unsigned __int64 v93; // rbx
  void (__fastcall ***v94)(_QWORD, __int64); // r8
  PPCW_DATA Data; // [rsp+20h] [rbp-B8h]
  struct DXGK_PHYSICALADAPTERINFO *v96; // [rsp+28h] [rbp-B0h]
  unsigned int v97; // [rsp+50h] [rbp-88h] BYREF
  char *v98; // [rsp+58h] [rbp-80h]
  _BYTE *v99; // [rsp+60h] [rbp-78h]
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-70h] BYREF
  struct _PCW_DATA v101; // [rsp+78h] [rbp-60h] BYREF
  unsigned int v102; // [rsp+E0h] [rbp+8h]

  *((_QWORD *)this + 2) = a2;
  v6 = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 3) = v6;
  *((_DWORD *)this + 8) = a4;
  byte_1C00765A0 |= (*(_DWORD *)(v6 + 436) & 0x200) != 0;
  v8 = *((_QWORD *)this + 3);
  if ( !(unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
  {
    if ( (a5 & 1) != 0 )
    {
      *((_BYTE *)this + 40179) = 1;
      *((_BYTE *)this + 40181) = 1;
    }
    if ( (a5 & 2) != 0 )
    {
      if ( (*(_DWORD *)(v8 + 2284) & 0x4000) == 0 )
      {
        WdLogSingleEntry1(1LL, 1546LL);
LABEL_7:
        DxgkLogInternalTriageEvent(v9, 0x40000LL);
        return 3221225485LL;
      }
      *((_BYTE *)this + 40180) = 1;
    }
  }
  VaAllocator = 0;
  if ( a4 >= 0x6000 )
    *((_BYTE *)this + 40937) |= 0x10u;
  v12 = *(unsigned int *)(*((_QWORD *)this + 3) + 288LL);
  v102 = v12;
  *((_DWORD *)this + 1754) = v12;
  if ( (unsigned int)v12 > 0x40 )
  {
    WdLogSingleEntry1(1LL, 64LL);
    goto LABEL_7;
  }
  v13 = v12;
  v15 = v12;
  v14 = 1616 * v12;
  if ( !is_mul_ok(v15, 0x650uLL) )
    v14 = -1LL;
  v16 = __CFADD__(v14, 8LL);
  v17 = v14 + 8;
  if ( v16 )
    v17 = -1LL;
  v18 = operator new[](v17, 0x30356956u, 64LL);
  if ( v18 )
  {
    v19 = v18 + 8;
    *(_QWORD *)v18 = v13;
    `vector constructor iterator'(
      (char *)(v18 + 8),
      1616LL,
      v13,
      (void (__fastcall *)(char *))VIDMM_PHYSICAL_ADAPTER::VIDMM_PHYSICAL_ADAPTER);
  }
  else
  {
    v19 = 0LL;
  }
  *((_QWORD *)this + 5028) = v19;
  if ( !v19 )
  {
    _InterlockedIncrement(&dword_1C00767DC);
    WdLogSingleEntry1(6LL, 1579LL);
    DxgkLogInternalTriageEvent(v20, 262145LL);
    return 3221225495LL;
  }
  v21 = *(_DWORD *)(v8 + 2284);
  if ( (v21 & 0x20) != 0 )
  {
    v22 = *((_BYTE *)this + 40936) ^ (*((_BYTE *)this + 40936) ^ (v21 >> 5)) & 2;
    *((_BYTE *)this + 40936) = v22;
    *((_BYTE *)this + 40936) = v22 ^ (v22 ^ (*(_DWORD *)(v8 + 2284) >> 3)) & 0x10;
    if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
    {
      v24 = *((_QWORD *)this + 3);
      v97 = 0;
      SysMmQueryIommuState(
        *(const struct SYSMM_ADAPTER **)(v24 + 224),
        (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v97);
      v25 = *((_BYTE *)this + 40936) ^ (*((_BYTE *)this + 40936) ^ (8 * (v97 >> 2))) & 8;
      v23 = v25 & 0xFB | ((v25 & 0xA) != 0 ? 4 : 0);
    }
    else
    {
      v23 = *((_BYTE *)this + 40936) ^ (*((_BYTE *)this + 40936) ^ (2 * *((_BYTE *)this + 40936))) & 4;
    }
    *((_BYTE *)this + 40936) = v23;
    if ( (v23 & 0x10) != 0 )
    {
      if ( (VIDMM_GLOBAL::_Config & 0x20) != 0
        || (v26 = *(_DWORD *)(*((_QWORD *)this + 3) + 436LL), (v26 & 4) != 0)
        || (v27 = 32, (v26 & 8) != 0) )
      {
        v27 = 0;
      }
      *((_BYTE *)this + 40936) = v27 | v23 & 0xDF;
    }
    if ( a4 >= 0x5017 || (VIDMM_GLOBAL::_Config & 0x100) != 0 )
      *((_BYTE *)this + 40937) |= 2u;
  }
  if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() && (*((_BYTE *)this + 40936) & 8) == 0 )
  {
    if ( (a5 & 1) != 0 )
    {
      *((_BYTE *)this + 40179) = 1;
      *((_BYTE *)this + 40181) = 1;
    }
    if ( (a5 & 2) != 0 )
    {
      if ( (*(_DWORD *)(v8 + 2284) & 0x4000) == 0 )
      {
        WdLogSingleEntry1(1LL, 1623LL);
        goto LABEL_7;
      }
      *((_BYTE *)this + 40180) = 1;
    }
  }
  v28 = 0;
  v29 = 0;
  *((_BYTE *)this + 4640) = (*(_DWORD *)(v8 + 2280) & 0x20) == 0;
  *((_BYTE *)this + 40937) = *((_BYTE *)this + 40937) & 0x7F | ((unsigned __int8)(*(_DWORD *)(v8 + 2284) >> 14) << 7);
  if ( v102 )
  {
    v99 = (char *)this + 52;
    v30 = 0LL;
    v31 = 0LL;
    v98 = (char *)this + 372;
    p_PagingBufferSegmentId = &a3->PagingBufferSegmentId;
    while ( 1 )
    {
      VIDMM_GLOBAL::ReadPhysicalAdapterConfiguration(this, v29);
      v33 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
      *(_QWORD *)&DestinationString.Length = *(_QWORD *)(*((_QWORD *)this + 3) + 2808LL);
      GpuMmuCaps = ADAPTER_RENDER::GetGpuMmuCaps(v33, v29);
      v36 = *((_QWORD *)this + 5028);
      v101.Data = GpuMmuCaps;
      *(_DWORD *)(v30 + v36 + 28) = v28;
      *(_DWORD *)(v30 + v36 + 32) = *(p_PagingBufferSegmentId - 4);
      v37 = *(p_PagingBufferSegmentId - 4);
      if ( v37 > 0x20 )
        break;
      if ( *p_PagingBufferSegmentId > v37 )
      {
        WdLogSingleEntry1(1LL, 1657LL);
        goto LABEL_7;
      }
      v28 += v37;
      if ( v28 >= 0xFFFE )
      {
        WdLogSingleEntry1(1LL, 1664LL);
        goto LABEL_7;
      }
      *v99 = *(_BYTE *)p_PagingBufferSegmentId;
      v38 = v98;
      *((_DWORD *)v98 - 64) = p_PagingBufferSegmentId[1];
      *v38 = p_PagingBufferSegmentId[2];
      LOBYTE(v38) = *(_BYTE *)(v30 + v36 + 444) ^ (*(_BYTE *)(v30 + v36 + 444) ^ (2 * *(_BYTE *)(v31 + v35 + 16))) & 2;
      *(_BYTE *)(v30 + v36 + 444) = (_BYTE)v38;
      *(_BYTE *)(v30 + v36 + 444) = (unsigned __int8)v38 ^ ((unsigned __int8)v38 ^ (*(_DWORD *)(v31 + v35 + 16) >> 1)) & 1;
      IsEnabledDeviceUsage = Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage();
      v40 = *(_QWORD *)&DestinationString.Length;
      if ( IsEnabledDeviceUsage )
      {
        *(_BYTE *)(v30 + v36 + 444) ^= (*(_BYTE *)(v30 + v36 + 444) ^ (4
                                                                     * (*(_DWORD *)(v31
                                                                                  + *(_QWORD *)&DestinationString.Length
                                                                                  + 16) >> 6))) & 4;
        v41 = *(_BYTE *)(v30 + v36 + 444) & 0xF7 | ((*(_BYTE *)(v30 + v36 + 444) & 5) != 0 ? 8 : 0);
      }
      else
      {
        v41 = *(_BYTE *)(v30 + v36 + 444) ^ (*(_BYTE *)(v30 + v36 + 444) ^ (8 * *(_BYTE *)(v30 + v36 + 444))) & 8;
      }
      *(_BYTE *)(v30 + v36 + 444) = v41;
      if ( (v41 & 0xA) != 0 )
      {
        ++*(_DWORD *)(v30 + v36 + 32);
        v42 = v28++;
      }
      else
      {
        v42 = -1;
      }
      *(_WORD *)(v30 + v36 + 36) = v42;
      *(_DWORD *)(v30 + v36 + 24) = (1 << *(_DWORD *)(v30 + v36 + 32)) - 1;
      if ( v101.Data )
        *((_BYTE *)this + 40177) &= (*((_BYTE *)v101.Data + 20) & 1) == 0;
      v43 = *(_DWORD *)(v31 + v40 + 16);
      ++v29;
      v44 = *((_BYTE *)this + 40937);
      v98 += 4;
      v31 += 344LL;
      ++v99;
      v30 += 1616LL;
      p_PagingBufferSegmentId += 10;
      *((_BYTE *)this + 40937) = v44 ^ (v44 ^ (v44 | ((unsigned __int8)(v43 >> 5) << 6))) & 0x40;
      if ( v29 >= v102 )
        goto LABEL_61;
    }
    WdLogSingleEntry1(1LL, 1652LL);
    goto LABEL_7;
  }
LABEL_61:
  if ( dword_1C0076410 == 2 )
    v45 = (*(_DWORD *)(*((_QWORD *)this + 3) + 2268LL) & 4) != 0;
  else
    v45 = dword_1C0076410 == 1;
  *((_BYTE *)this + 7152) = v45;
  *((_QWORD *)this + 5581) = qword_1C0076518;
  v46 = dword_1C00763CC;
  if ( dword_1C00763CC )
  {
    v47 = 360LL * (unsigned int)dword_1C00763CC;
    if ( !is_mul_ok((unsigned int)dword_1C00763CC, 0x168uLL) )
      v47 = -1LL;
    v48 = operator new[](v47, 0x6D4D6956u, 64LL);
    *((_QWORD *)this + 985) = v48;
    if ( v48 )
    {
      *((_DWORD *)this + 1968) = v46;
      *((_QWORD *)this + 986) = 0LL;
    }
  }
  v49 = (char *)v28;
  v50 = 8LL * v28;
  *((_QWORD *)this + 878) = 0LL;
  v98 = (char *)v28;
  if ( !is_mul_ok(v28, 8uLL) )
    v50 = -1LL;
  v51 = operator new[](v50, 0x36306956u, 64LL);
  *((_QWORD *)this + 464) = v51;
  if ( v51 )
  {
    v53 = (wchar_t *)operator new[](520LL, 0x4B677844u, 258LL);
    if ( !v53 )
    {
      WdLogSingleEntry0(1LL);
LABEL_75:
      DxgkLogInternalTriageEvent(v54, 0x40000LL);
      VaAllocator = -1073741801;
      goto LABEL_143;
    }
    v55 = 0;
    if ( v102 )
    {
      p_pSegmentDescriptor = &a3->pSegmentDescriptor;
      while ( 1 )
      {
        v57 = (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)*p_pSegmentDescriptor;
        v58 = *((_QWORD *)this + 5028) + 1616LL * v55;
        *(_OWORD *)(v58 + 504) = 0LL;
        *(_OWORD *)(v58 + 520) = 0LL;
        *(_OWORD *)(v58 + 536) = 0LL;
        inited = VIDMM_GLOBAL::InitSegments(this, v55, (struct VIDMM_PHYSICAL_ADAPTER *)v58, v57);
        VaAllocator = inited;
        if ( inited < 0 )
          break;
        LODWORD(v96) = v55;
        DestinationString = 0LL;
        v60 = *((_QWORD *)a2 + 2);
        LODWORD(Data) = *(_DWORD *)(v60 + 404);
        VaAllocator = RtlStringCbPrintfW(
                        v53,
                        0x208uLL,
                        L"luid_0x%08X_0x%08X_phys_%u",
                        *(unsigned int *)(v60 + 408),
                        Data,
                        v96);
        if ( VaAllocator < 0
          || (RtlInitUnicodeString(&DestinationString, v53),
              v101.Data = (const void *)v58,
              v101.Size = 1616,
              VaAllocator = PcwCreateInstance(
                              (PPCW_INSTANCE *)(v58 + 1608),
                              GpuPerformanceCounterSetAdapterMemory,
                              &DestinationString,
                              1u,
                              &v101),
              VaAllocator < 0) )
        {
          WdLogSingleEntry0(1LL);
          DxgkLogInternalTriageEvent(v61, 0x40000LL);
          goto LABEL_86;
        }
        ++v55;
        p_pSegmentDescriptor += 5;
        if ( v55 >= v102 )
          goto LABEL_86;
      }
      WdLogSingleEntry1(3LL, inited);
    }
LABEL_86:
    operator delete(v53);
    if ( VaAllocator < 0 )
      goto LABEL_143;
    v62 = *((_QWORD *)this + 5594) + qword_1C0076288;
    v16 = v62 < *(_QWORD *)(*((_QWORD *)this + 3) + 2840LL);
    *((_DWORD *)this + 926) = v28;
    v63 = (*((_BYTE *)this + 40936) & 4) == 0;
    *((_BYTE *)this + 40176) = v16;
    if ( !v63 )
    {
      if ( dword_1C007645C )
      {
        v64 = 256LL;
        if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled )
        {
          if ( (unsigned int)dword_1C007645C <= 0x10000 )
            v64 = 64LL;
          DXGK_LOG::Initialize(
            (__int64)this + 41024,
            v62,
            v64,
            (unsigned int)dword_1C007645C,
            (unsigned int)dword_1C0076460);
        }
        else
        {
          v67 = (unsigned int)dword_1C007645C;
          v68 = 24LL * (unsigned int)dword_1C007645C;
          if ( !is_mul_ok((unsigned int)dword_1C007645C, 0x18uLL) )
            v68 = -1LL;
          v16 = __CFADD__(v68, 8LL);
          v69 = v68 + 8;
          if ( v16 )
            v69 = -1LL;
          v70 = (_QWORD *)operator new[](v69, 0x32356956u, 256LL);
          if ( v70 )
          {
            *v70 = v67;
            v71 = v70 + 1;
          }
          else
          {
            v71 = 0LL;
          }
          *((_QWORD *)this + 5123) = v71;
          if ( !v71 )
          {
            WdLogSingleEntry1(1LL, 1869LL);
            goto LABEL_75;
          }
        }
        v65 = 48LL * (unsigned int)dword_1C0076464;
        if ( !is_mul_ok((unsigned int)dword_1C0076464, 0x30uLL) )
          v65 = -1LL;
        v66 = operator new[](v65, 0x32356956u, 256LL);
        *((_QWORD *)this + 5132) = v66;
        if ( !v66 )
        {
          WdLogSingleEntry1(1LL, 1878LL);
          goto LABEL_75;
        }
      }
      *((_BYTE *)this + 40937) &= ~1u;
      v72 = 0;
      *((_BYTE *)this + 40936) &= ~1u;
      LOBYTE(v73) = 0;
      *((_DWORD *)this + 10233) = 0;
      if ( v102 )
      {
        v74 = 0LL;
        do
        {
          v75 = ADAPTER_RENDER::GetGpuMmuCaps(*((ADAPTER_RENDER **)this + 2), v72);
          v76 = (unsigned int *)(v74 + *((_QWORD *)this + 5028));
          VaAllocator = VIDMM_PHYSICAL_ADAPTER::InitializeGpuVaState(
                          (VIDMM_PHYSICAL_ADAPTER *)v76,
                          this,
                          v72,
                          (struct VIDMM_SEGMENT *const *)(*((_QWORD *)this + 464) + 8LL * v76[7]),
                          v75,
                          v77,
                          v76[8]);
          if ( VaAllocator < 0 )
            goto LABEL_143;
          v78 = v76[19];
          v73 = *((_DWORD *)this + 10233);
          if ( v78 > v73 )
          {
            *((_DWORD *)this + 10233) = v78;
            LOBYTE(v73) = v78;
          }
          if ( v76[109] == 1 )
            *((_BYTE *)this + 40937) |= 1u;
          if ( (*(_DWORD *)v75 & 0x40) != 0 )
            *((_BYTE *)this + 40936) |= 1u;
          ++v72;
          v74 += 1616LL;
        }
        while ( v72 < v102 );
      }
      if ( a4 >= 0x5023 )
        v79 = dword_1C0076468;
      else
        v79 = 4096 << v73;
      *((_DWORD *)this + 10245) = v79;
      VaAllocator = VIDMM_PAGING_PROCESS::CreateVaAllocator((VIDMM_GLOBAL *)((char *)this + 40384), this);
      if ( VaAllocator < 0 )
      {
LABEL_143:
        v49 = v98;
        goto LABEL_144;
      }
    }
    KeInitializeTimer((PKTIMER)((char *)this + 44784));
    KeInitializeThreadedDpc((PRKDPC)((char *)this + 44856), (PKDEFERRED_ROUTINE)VidMmDelayedEvictionDpc, this);
    v80 = (VIDMM_WORKER_THREAD *)operator new(3608LL, 0x37346956u, 256LL);
    if ( v80 )
    {
      v81 = VIDMM_WORKER_THREAD::VIDMM_WORKER_THREAD(v80, this);
      *(_QWORD *)this = v81;
      if ( v81 )
      {
        VaAllocator = VIDMM_WORKER_THREAD::Init(v81, (struct _KEVENT **)this + 5548);
        if ( VaAllocator >= 0 )
        {
          ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
          v82 = VIDMM_PARTITION::_PartitionTree;
          i = 0LL;
          while ( v82 )
          {
            i = (VIDMM_PARTITION *)v82;
            v82 = v82->Children[0];
          }
          while ( i )
          {
            v84 = VIDMM_PARTITION::EnsureAdapter(i, this);
            VaAllocator = v84;
            if ( v84 < 0 )
            {
              WdLogSingleEntry3(1LL, this, i, v84);
              DxgkLogInternalTriageEvent(v90, 0x40000LL);
              ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
              goto LABEL_143;
            }
            v85 = (VIDMM_PARTITION **)*((_QWORD *)i + 1);
            v86 = i;
            if ( v85 )
            {
              v87 = *v85;
              for ( i = (VIDMM_PARTITION *)*((_QWORD *)i + 1); v87; v87 = *(VIDMM_PARTITION **)v87 )
                i = v87;
            }
            else
            {
              while ( 1 )
              {
                i = (VIDMM_PARTITION *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !i || *(VIDMM_PARTITION **)i == v86 )
                  break;
                v86 = i;
              }
            }
          }
          ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
          *((_QWORD *)this + 989) = MEMORY[0xFFFFF78000000014];
          *((_QWORD *)this + 990) = MEMORY[0xFFFFF78000000014];
          DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
            (DXGAUTOEXPUSHLOCKEXCLUSIVE *)&v101,
            (struct _EX_PUSH_LOCK *const)&VIDMM_GLOBAL::_AdapterListLock);
          v88 = (_QWORD *)qword_1C0076948;
          v89 = (_QWORD *)((char *)this + 44768);
          if ( *(PVOID **)qword_1C0076948 != &VIDMM_GLOBAL::_AdapterListHead )
            __fastfail(3u);
          *v89 = &VIDMM_GLOBAL::_AdapterListHead;
          v89[1] = v88;
          *v88 = v89;
          qword_1C0076948 = (__int64)v89;
          DXGAUTOEXPUSHLOCKEXCLUSIVE::~DXGAUTOEXPUSHLOCKEXCLUSIVE((DXGAUTOEXPUSHLOCKEXCLUSIVE *)&v101);
          return (unsigned int)VaAllocator;
        }
        goto LABEL_142;
      }
    }
    else
    {
      *(_QWORD *)this = 0LL;
    }
    VaAllocator = -1073741801;
LABEL_142:
    WdLogSingleEntry1(1LL, 1952LL);
    DxgkLogInternalTriageEvent(v91, 0x40000LL);
    goto LABEL_143;
  }
  _InterlockedIncrement(&dword_1C0076814);
  WdLogSingleEntry1(6LL, 1766LL);
  DxgkLogInternalTriageEvent(v52, 262145LL);
  VaAllocator = -1073741801;
LABEL_144:
  v92 = (_QWORD *)*((_QWORD *)this + 464);
  if ( v92 )
  {
    v93 = 0LL;
    if ( v49 )
    {
      do
      {
        v94 = (void (__fastcall ***)(_QWORD, __int64))v92[v93];
        if ( v94 )
        {
          (**v94)(v92[v93], 1LL);
          v92 = (_QWORD *)*((_QWORD *)this + 464);
        }
        ++v93;
      }
      while ( v93 < (unsigned __int64)v49 );
    }
    operator delete(v92);
    *((_QWORD *)this + 464) = 0LL;
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40384));
  operator delete(*((void **)this + 878));
  *((_QWORD *)this + 878) = 0LL;
  return (unsigned int)VaAllocator;
}
