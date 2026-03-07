__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        int a4,
        const struct _D3DKMT_CREATEALLOCATION *a5,
        struct _D3DDDI_ALLOCATIONINFO2 *a6,
        void **a7,
        void *a8,
        void *a9,
        char a10,
        unsigned __int8 a11,
        unsigned __int8 **a12)
{
  UINT PrivateRuntimeDataSize; // eax
  unsigned int v14; // r9d
  unsigned int v15; // esi
  unsigned int v16; // edx
  __int64 NumAllocations; // r8
  unsigned int v18; // eax
  unsigned int v19; // ecx
  int v20; // r15d
  __int64 v21; // rdi
  _DWORD *v23; // rsi
  __int64 v24; // r14
  D3DKMT_CREATEALLOCATIONFLAGS *p_Flags; // r9
  unsigned int *v26; // r8
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // ecx
  size_t v28; // rdx
  unsigned int v29; // ecx
  D3DKMT_CREATEALLOCATIONFLAGS v30; // eax
  unsigned int v31; // ecx
  __int64 v32; // rcx
  unsigned int v33; // esi
  unsigned int v34; // eax
  UINT *v35; // r14
  unsigned int v36; // r12d
  UINT v37; // r15d
  UINT *i; // rsi
  UINT *v39; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v40; // eax
  struct DXGGLOBAL *Global; // rax
  const void *v42; // rdx
  __int64 v43; // rdi
  _DWORD *v44; // r8
  UINT *v45; // rdx
  unsigned int *p_hAllocation; // r15
  UINT j; // edi
  D3DKMT_CREATEALLOCATIONFLAGS v48; // edx
  __int64 v49; // rcx
  _DWORD *v50; // rsi
  _DWORD *v51; // r12
  SIZE_T v52; // r13
  PMDL PagesForMdl; // rax
  struct _MDL *v54; // rdi
  __int64 *v55; // r15
  struct DXGGLOBAL *v56; // rax
  char v57; // r12
  void *v58; // rcx
  NTSTATUS v59; // eax
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 CurrentProcess; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  PVOID v64; // rdi
  struct DXGGLOBAL *v65; // rax
  struct _MDL *Mdl; // rdi
  PVOID v67; // rsi
  __int64 v68; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v69; // rax
  struct DXGKVMB_COMMAND_BASE *v70; // rdx
  int v71; // ecx
  int v72; // eax
  int v73; // eax
  unsigned int v74; // r13d
  DXG_VMBUS_CHANNEL_BASE *v75; // rdi
  struct DXGKVMB_COMMAND_BASE *v76; // rcx
  unsigned int v77; // r12d
  __int64 *v78; // rsi
  _QWORD *v79; // rdx
  unsigned int v80; // r15d
  int v81; // eax
  unsigned int k; // ecx
  __int64 v83; // rax
  int v84; // eax
  void *v85; // rsi
  MEMORY_CACHING_TYPE CacheTypea[2]; // [rsp+20h] [rbp-4A8h]
  struct _MDL *CacheTypeb; // [rsp+20h] [rbp-4A8h]
  struct _MDL *CacheType; // [rsp+20h] [rbp-4A8h]
  char v89; // [rsp+60h] [rbp-468h]
  int v90; // [rsp+64h] [rbp-464h]
  UINT v91; // [rsp+64h] [rbp-464h]
  unsigned int v92[2]; // [rsp+68h] [rbp-460h] BYREF
  PVOID VirtualAddress; // [rsp+70h] [rbp-458h] BYREF
  _DWORD *v94; // [rsp+78h] [rbp-450h]
  struct DXG_VMBUS_CHANNEL_BASE *v95; // [rsp+80h] [rbp-448h]
  struct _D3DDDI_ALLOCATIONINFO2 *v96; // [rsp+88h] [rbp-440h]
  UINT *p_NumAllocations; // [rsp+90h] [rbp-438h]
  _DWORD *v98; // [rsp+98h] [rbp-430h] BYREF
  UINT v99; // [rsp+A0h] [rbp-428h]
  void *v100; // [rsp+A8h] [rbp-420h]
  PVOID Object; // [rsp+B0h] [rbp-418h] BYREF
  void *Src; // [rsp+B8h] [rbp-410h]
  PVOID v103; // [rsp+C0h] [rbp-408h]
  _QWORD *v104; // [rsp+C8h] [rbp-400h]
  void **v105; // [rsp+D0h] [rbp-3F8h]
  void *v106; // [rsp+D8h] [rbp-3F0h]
  struct _MDL *v107; // [rsp+E0h] [rbp-3E8h] BYREF
  D3DKMT_CREATEALLOCATIONFLAGS *v108; // [rsp+E8h] [rbp-3E0h]
  _DWORD *v109; // [rsp+F0h] [rbp-3D8h]
  unsigned __int8 **v110; // [rsp+F8h] [rbp-3D0h]
  __int64 *v111; // [rsp+100h] [rbp-3C8h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v112; // [rsp+108h] [rbp-3C0h]
  char *v113; // [rsp+110h] [rbp-3B8h]
  struct DXGKVMB_COMMAND_BASE *v114[2]; // [rsp+120h] [rbp-3A8h] BYREF
  unsigned int v115; // [rsp+130h] [rbp-398h]
  struct DXGKVMB_COMMAND_BASE *v116[2]; // [rsp+240h] [rbp-288h] BYREF
  unsigned int v117; // [rsp+250h] [rbp-278h]
  __int128 v118; // [rsp+360h] [rbp-168h] BYREF
  int v119; // [rsp+370h] [rbp-158h]

  v95 = this;
  v112 = this;
  v96 = a6;
  v105 = a7;
  Object = a8;
  Src = a9;
  v110 = a12;
  *a12 = 0LL;
  if ( !a10 || (v89 = 1, (*(_DWORD *)&a5->Flags & 0x10000) != 0) )
    v89 = 0;
  v92[0] = *((_DWORD *)DXGGLOBAL::GetGlobal() + 442);
  PrivateRuntimeDataSize = a5->PrivateRuntimeDataSize;
  v14 = PrivateRuntimeDataSize + a5->PrivateDriverDataSize;
  if ( v14 < PrivateRuntimeDataSize )
    return 2147483653LL;
  v15 = 0;
  v16 = 0;
  p_NumAllocations = &a5->NumAllocations;
  NumAllocations = a5->NumAllocations;
  while ( v16 < (unsigned int)NumAllocations )
  {
    if ( v15 + a6[v16].PrivateDriverDataSize < v15 )
      return 2147483653LL;
    v15 += a6[v16++].PrivateDriverDataSize;
  }
  v18 = v15 + v14;
  if ( v15 + v14 < v14 )
    return 2147483653LL;
  v19 = v18 + 64;
  if ( v18 + 64 < v18 )
    return 2147483653LL;
  if ( (unsigned int)(NumAllocations - 1) > 0x71B || v15 > 0x20000 )
  {
    WdLogSingleEntry2(2LL, v15, NumAllocations);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid VM bus message size: 0x%I64x or invalid number of allocations: 0x%I64x",
      v15,
      a5->NumAllocations,
      0LL,
      0LL,
      0LL);
    return 2147483653LL;
  }
  v20 = 12 * NumAllocations;
  if ( (unsigned __int64)(12 * NumAllocations) > 0xFFFFFFFF )
    return 2147483653LL;
  LODWORD(v94) = v20 + v19;
  if ( v20 + v19 < v19 )
    return 2147483653LL;
  v90 = 0;
  v118 = 0LL;
  v119 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v118, v95, v20 + v19, 0LL, 0LL, 0LL);
  v21 = v118;
  if ( !(_QWORD)v118 )
  {
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v118);
    return 3221225495LL;
  }
  *(_QWORD *)v118 = 0LL;
  *(_DWORD *)(v21 + 8) = 0;
  *(_BYTE *)(v21 + 12) = 0;
  *(_DWORD *)(v21 + 12) &= 0x1FFu;
  *(_QWORD *)(v21 + 16) = 4LL;
  LODWORD(VirtualAddress) = (v15 + 72 * *p_NumAllocations + 23) & 0xFFFFFFF8;
  v23 = (_DWORD *)operator new[]((unsigned int)VirtualAddress, 0x4B677844u, 64LL);
  v100 = v23;
  if ( v23 )
  {
    *(_DWORD *)(v21 + 24) = a3;
    *(_DWORD *)(v21 + 8) = a2;
    p_Flags = &a5->Flags;
    v108 = &a5->Flags;
    v26 = (unsigned int *)(v21 + 44);
    v109 = (_DWORD *)(v21 + 44);
    Flags = a5->Flags;
    *(D3DKMT_CREATEALLOCATIONFLAGS *)(v21 + 44) = Flags;
    *(_DWORD *)(v21 + 28) = a4;
    *(_QWORD *)(v21 + 48) = a5->hPrivateRuntimeResourceHandle;
    *(_DWORD *)(v21 + 40) = *p_NumAllocations;
    v28 = a5->PrivateRuntimeDataSize;
    *(_DWORD *)(v21 + 32) = v28;
    *(_DWORD *)(v21 + 36) = a5->PrivateDriverDataSize;
    if ( v92[0] < 0x1E )
      *(_BYTE *)(v21 + 56) = a11;
    else
      *(_QWORD *)(v21 + 56) ^= (*(_DWORD *)(v21 + 56) ^ a11) & 1;
    v29 = *(_DWORD *)&Flags & 0xFFFEFFFF;
    *v26 = v29;
    if ( (*(_DWORD *)p_Flags & 0x20020) != 0 )
    {
      v29 &= 0xFFFFE7FF;
      *v26 = v29;
    }
    else if ( (v29 & 0x1000) != 0 )
    {
      WdLogSingleEntry1(2LL, 9839LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Open cross adapter allocation is not supported",
        9839LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v24) = -1073741811;
      goto LABEL_74;
    }
    v30 = *p_Flags;
    if ( (*(_DWORD *)p_Flags & 8) != 0 )
    {
      LOBYTE(v90) = 1;
      v31 = v29 & 0xFFFFFFF7;
LABEL_32:
      *v26 = v31 | 0x20;
      goto LABEL_33;
    }
    if ( (*(_BYTE *)&v30 & 0x20) != 0 )
    {
      LOBYTE(v90) = 2;
    }
    else if ( (*(_DWORD *)&v30 & 0x20000) != 0 )
    {
      LOBYTE(v90) = 2;
      v31 = v29 & 0xFFFDFFFF;
      goto LABEL_32;
    }
LABEL_33:
    v32 = (unsigned int)(v20 + 64);
    v33 = v32 + a5->PrivateRuntimeDataSize;
    if ( (_DWORD)v28 && Src )
      memmove((void *)(v21 + v32), Src, v28);
    v34 = *(_DWORD *)(v21 + 36);
    if ( v34 && Object )
      memmove((void *)(v21 + v33), Object, v34);
    v35 = (UINT *)(v21 + 64);
    v36 = v33 + *(_DWORD *)(v21 + 36);
    v37 = 0;
    for ( i = (UINT *)&v96->Flags; ; i += 24 )
    {
      v39 = p_NumAllocations;
      if ( v37 >= *p_NumAllocations )
        break;
      v40 = *v108;
      if ( *((_QWORD *)i - 3) )
      {
        if ( (*(_DWORD *)&v40 & 0x20000) == 0 )
        {
          *v109 |= 0x20u;
          LOBYTE(v90) = v90 | 2;
        }
      }
      else if ( (*(_BYTE *)&v40 & 0x20) != 0 )
      {
        LODWORD(v24) = -1073741811;
        WdLogSingleEntry1(2LL, 9925LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"pSysMem pointer is NULL: 0x%I64x",
          9925LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v23 = v100;
        goto LABEL_74;
      }
      *v35 = *i;
      if ( (*i & 1) != 0 && *v39 == 1 && v92[0] >= 0x1E )
      {
        v98 = 0LL;
        v99 = 0;
        Global = DXGGLOBAL::GetGlobal();
        if ( (int)REMOTEMONITORMAPPING::FindMappingFromGuestVidPnSourceId(
                    (struct _KTHREAD **)Global + 38104,
                    *(i - 1),
                    (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v98) >= 0
          && v98 == *(_DWORD **)(*((_QWORD *)v95 + 9) + 4572LL) )
        {
          v35[2] = v99;
          *(_QWORD *)(v21 + 56) |= 2uLL;
        }
        else
        {
          v35[2] = 0;
        }
      }
      else
      {
        v35[2] = *(i - 1);
      }
      if ( v36 + *(i - 2) > (unsigned int)v94 )
        WdLogSingleEntry5(0LL, 275LL, 2LL, 0LL, 0LL, 0LL);
      v35[1] = *(i - 2);
      if ( *(i - 2) )
      {
        if ( v89 )
          v42 = v105[v37];
        else
          v42 = (const void *)*((_QWORD *)i - 2);
        if ( v42 )
          memmove((void *)(v21 + v36), v42, *(i - 2));
        v36 += *(i - 2);
      }
      v35 += 3;
      ++v37;
    }
    v43 = (unsigned int)VirtualAddress;
    v92[0] = (unsigned int)VirtualAddress;
    v23 = v100;
    LODWORD(v24) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(v95, (struct DXGVMBUSMESSAGE *)&v118, v100, v92);
    if ( (int)v24 >= 0 )
    {
      LODWORD(v24) = -1073741823;
      if ( v92[0] >= (unsigned int)v43 )
      {
        LODWORD(v24) = 0;
        v44 = v23;
        v98 = v23;
        v23[3] = v90;
        v113 = (char *)v23 + v43;
        v45 = p_NumAllocations;
        v106 = &v23[18 * *p_NumAllocations + 4];
        p_hAllocation = &v96->hAllocation;
        for ( j = 0; ; ++j )
        {
          v91 = j;
          Src = p_hAllocation;
          if ( j >= *v45 )
            break;
          v48 = *v108;
          if ( ((*v109 & 0x20020) != 0 || (*(_DWORD *)v108 & 8) != 0) && (int)v24 >= 0 )
          {
            v49 = 9LL * j;
            v50 = &v44[18 * j];
            v94 = v50;
            v51 = v50 + 8;
            v104 = v50 + 8;
            v52 = *((_QWORD *)v50 + 4);
            if ( (*(_BYTE *)&v48 & 8) != 0 )
            {
              PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v52, MmCached, 4u);
              v54 = PagesForMdl;
              if ( !PagesForMdl )
              {
                LODWORD(v24) = -1073741801;
                WdLogSingleEntry1(6LL, 10026LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262145,
                  -1,
                  (__int64)L"Failed to allocate memory for protecter allocation",
                  10026LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                break;
              }
              v55 = (__int64 *)(p_hAllocation + 2);
              *v55 = (__int64)PagesForMdl;
              if ( (*((_BYTE *)DXGGLOBAL::GetGlobal() + 1776) & 1) == 0 )
              {
                v56 = DXGGLOBAL::GetGlobal();
                LODWORD(v24) = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromMdl(
                                 *((struct _KTHREAD ***)v56 + 214),
                                 v54,
                                 v50 + 7);
              }
            }
            else
            {
              VirtualAddress = 0LL;
              v103 = 0LL;
              v57 = 0;
              v55 = (__int64 *)(p_hAllocation + 2);
              v111 = v55;
              if ( (*(_DWORD *)&v48 & 0x20000) != 0 )
              {
                v58 = (void *)*v55;
                Object = 0LL;
                v59 = ObReferenceObjectByHandle(v58, 0x20000u, MmSectionObjectType, 1, &Object, 0LL);
                v24 = v59;
                v103 = Object;
                if ( v59 >= 0 )
                {
                  v107 = 0LL;
                  *(_QWORD *)v92 = *v104;
                  v61 = *(_QWORD *)v92;
                  CurrentProcess = PsGetCurrentProcess(v60);
                  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
                  *(_QWORD *)CacheTypea = v61;
                  v64 = v103;
                  LODWORD(v24) = (*((__int64 (__fastcall **)(PVOID, __int64, PVOID *, _QWORD, MEMORY_CACHING_TYPE *, struct _MDL **, unsigned int *, int, _DWORD, int))VirtualMemoryInterface
                                  + 3))(
                                   v103,
                                   CurrentProcess,
                                   &VirtualAddress,
                                   0LL,
                                   *(MEMORY_CACHING_TYPE **)CacheTypea,
                                   &v107,
                                   v92,
                                   2,
                                   0,
                                   4);
                  if ( (int)v24 >= 0 )
                  {
                    v57 = 1;
                  }
                  else
                  {
                    WdLogSingleEntry1(2LL, *(_QWORD *)v92);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Failed to map allocation view. Size: 0x%I64x",
                      *(__int64 *)v92,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    ObfDereferenceObject(v64);
                  }
                  v50 = v94;
                }
                else
                {
                  WdLogSingleEntry2(2LL, *v55, v59);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x",
                    *v55,
                    v24,
                    0LL,
                    0LL,
                    0LL);
                }
              }
              else
              {
                VirtualAddress = (PVOID)*v55;
              }
              if ( (int)v24 >= 0 )
              {
                if ( (*((_BYTE *)DXGGLOBAL::GetGlobal() + 1776) & 1) != 0 )
                {
                  Mdl = IoAllocateMdl(VirtualAddress, v52, 0, 0, 0LL);
                  v107 = Mdl;
                  if ( Mdl )
                  {
                    v50[6] &= ~0x200000u;
                    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
                    v50[6] |= 0x200000u;
                  }
                  else
                  {
                    LODWORD(v24) = -1073741801;
                    WdLogSingleEntry1(2LL, -1073741801LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Failed to allocate MDL for sysmem: 0x%I64x",
                      -1073741801LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  *v55 = (__int64)Mdl;
                }
                else
                {
                  v65 = DXGGLOBAL::GetGlobal();
                  LODWORD(v24) = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromBuffer(
                                   *((struct _KTHREAD ***)v65 + 214),
                                   VirtualAddress,
                                   v52,
                                   v50 + 7);
                }
              }
              if ( v57 )
              {
                v67 = VirtualAddress;
                v68 = PsGetCurrentProcess(v49);
                v69 = DxgkGetVirtualMemoryInterface();
                (*((void (__fastcall **)(__int64, PVOID))v69 + 4))(v68, v67);
                ObfDereferenceObject(v103);
              }
              v51 = v104;
              v50 = v94;
            }
            if ( (int)v24 >= 0 )
            {
              if ( (*((_BYTE *)DXGGLOBAL::GetGlobal() + 1776) & 1) != 0 )
              {
                v74 = (unsigned int)(*v51 + 4095) >> 12;
                *(_OWORD *)v114 = 0LL;
                v115 = 0;
                v75 = v95;
                DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v114, v95, 0x1EFF0u, 0LL, 0LL, 0LL);
                v76 = v114[0];
                if ( !v114[0] )
                {
                  LODWORD(v24) = -1073741801;
                  WdLogSingleEntry1(2LL, 10167LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Failed to allocate DXGKVMB_COMMAND_SETEXISTINGSYSMEMPAGES",
                    10167LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v76 = v114[0];
                }
                v77 = 0;
                v78 = (__int64 *)(*v55 + 48);
                while ( v77 < v74 && (int)v24 >= 0 )
                {
                  v79 = (_QWORD *)((char *)v76 + 40);
                  v80 = 15865;
                  if ( v74 - v77 < 0x3DF9 )
                    v80 = v74 - v77;
                  v81 = v94[4];
                  *(_QWORD *)v76 = 0LL;
                  *((_DWORD *)v76 + 2) = a2;
                  *((_BYTE *)v76 + 12) = 0;
                  *((_DWORD *)v76 + 3) &= 0x1FFu;
                  *((_QWORD *)v76 + 2) = 66LL;
                  *((_DWORD *)v76 + 6) = a3;
                  *((_DWORD *)v76 + 7) = v81;
                  *((_DWORD *)v76 + 8) = v80;
                  *((_DWORD *)v76 + 9) = v77;
                  for ( k = 0; k < v80; ++k )
                  {
                    v83 = *v78++;
                    *v79++ = v83;
                  }
                  v84 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                          v75,
                          (unsigned __int8 *)v114[1],
                          v114[0],
                          v115,
                          CacheType);
                  v24 = v84;
                  if ( v84 < 0 )
                  {
                    WdLogSingleEntry1(2LL, v84);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"DXGKVMB_COMMAND_SETEXISTINGSYSMEMPAGES failed: 0x%I64x",
                      v24,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    v75 = v95;
                  }
                  v77 += v80;
                  v76 = v114[0];
                }
                DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v114);
              }
              else
              {
                *(_OWORD *)v116 = 0LL;
                v117 = 0;
                DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v116, v95, 0x28u, 0LL, 0LL, 0LL);
                v70 = v116[0];
                v71 = v50[7];
                v72 = v50[4];
                *(_QWORD *)v116[0] = 0LL;
                *((_DWORD *)v70 + 2) = a2;
                *((_BYTE *)v70 + 12) = 0;
                *((_DWORD *)v70 + 3) &= 0x1FFu;
                *((_QWORD *)v70 + 2) = 45LL;
                *((_DWORD *)v70 + 6) = a3;
                *((_DWORD *)v70 + 7) = v72;
                *((_DWORD *)v70 + 8) = v71;
                v73 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                        v95,
                        (unsigned __int8 *)v116[1],
                        v116[0],
                        v117,
                        CacheTypeb);
                v24 = v73;
                if ( v73 < 0 )
                {
                  WdLogSingleEntry1(2LL, v73);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Failed to set existing sysmem Gpadl: 0x%I64x",
                    v24,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v116);
              }
            }
            else
            {
              WdLogSingleEntry1(2LL, (int)v24);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to allocate existing sysmem Gpadl: 0x%I64x",
                (int)v24,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            j = v91;
            p_hAllocation = &v96->hAllocation;
          }
          v85 = v106;
          if ( (char *)v106 + p_hAllocation[6] > v113 )
            WdLogSingleEntry5(0LL, 275LL, 2LL, 0LL, 0LL, 0LL);
          memmove(v105[j], v85, p_hAllocation[6]);
          v106 = (char *)v106 + p_hAllocation[6];
          p_hAllocation += 24;
          v96 = (struct _D3DDDI_ALLOCATIONINFO2 *)p_hAllocation;
          v44 = v98;
          v45 = p_NumAllocations;
        }
        *v110 = (unsigned __int8 *)v100;
        v23 = 0LL;
      }
    }
    goto LABEL_74;
  }
  LODWORD(v24) = -1073741801;
LABEL_74:
  operator delete(v23);
  if ( (int)v24 < 0 )
  {
    WdLogSingleEntry1(2LL, (int)v24);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendCreateAllocation failed: 0x%I64x",
      (int)v24,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v118);
  return (unsigned int)v24;
}
