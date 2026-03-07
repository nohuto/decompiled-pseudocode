__int64 __fastcall DXGDEVICE::CreateVidMmAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct _DXGK_ALLOCATIONINFO *a4,
        struct DXGALLOCATION *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        char a7)
{
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  bool v8; // r12
  struct _D3DDDI_ALLOCATIONINFO2 *v9; // r11
  struct _D3DKMT_CREATEALLOCATION *v10; // rdi
  DXGDEVICE *v11; // r10
  __int64 v12; // r15
  bool v13; // dl
  __int64 v14; // rcx
  struct DXGALLOCATION *v15; // r14
  UINT v16; // ecx
  HANDLE hSection; // r12
  PVOID v18; // r13
  __int64 v19; // rdi
  __int64 v20; // rcx
  struct _DXGK_ALLOCATIONINFO *v21; // rsi
  unsigned int v22; // ebx
  struct _D3DKMT_CREATEALLOCATION *v23; // r9
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D Value; // r8d
  D3DKMT_CREATEALLOCATIONFLAGS v25; // ecx
  const struct _D3DKM_CREATESTANDARDALLOCATION *v26; // r8
  __int64 v27; // rcx
  char v28; // dl
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rax
  DXGDEVICE *v33; // r13
  __int64 MaximumRenamingListLength; // r9
  unsigned int v35; // eax
  int v36; // ecx
  __int64 v37; // rax
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D v38; // ecx
  int v39; // edx
  __int64 v41; // rcx
  int v42; // ecx
  __int64 v43; // rax
  unsigned int v44; // edx
  __int64 v45; // rax
  int v46; // eax
  int v47; // ecx
  int v48; // ecx
  __int64 v49; // rdx
  __int64 v50; // rax
  void *v51; // rcx
  NTSTATUS v52; // eax
  int v53; // eax
  __int64 v54; // rdx
  unsigned __int64 Size; // rdx
  void *v56; // rax
  void *v57; // rax
  __int64 v58; // rdx
  int v59; // ecx
  HANDLE v60; // r15
  bool v61; // zf
  __int64 v62; // rdi
  int v63; // eax
  __int64 v64; // rdx
  int v65; // ecx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  _DWORD *v69; // rcx
  _DWORD *v70; // rcx
  _DWORD *v71; // rcx
  _DWORD *v72; // rcx
  __int64 v73; // rax
  UINT v74; // ebx
  struct DXGALLOCATION *v75; // rsi
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rax
  const wchar_t *v79; // r9
  int Object; // [rsp+20h] [rbp-99h]
  PVOID *Objecta; // [rsp+20h] [rbp-99h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-91h]
  __int64 v83; // [rsp+30h] [rbp-89h]
  __int64 v84; // [rsp+38h] [rbp-81h]
  __int64 v85; // [rsp+40h] [rbp-79h]
  __int64 v86; // [rsp+48h] [rbp-71h]
  __int64 v87; // [rsp+50h] [rbp-69h]
  char v88; // [rsp+60h] [rbp-59h]
  char v89; // [rsp+61h] [rbp-58h] BYREF
  char v90; // [rsp+62h] [rbp-57h]
  char v91; // [rsp+63h] [rbp-56h]
  int v92; // [rsp+64h] [rbp-55h]
  int v93; // [rsp+68h] [rbp-51h] BYREF
  UINT v94; // [rsp+6Ch] [rbp-4Dh]
  __int64 v95; // [rsp+70h] [rbp-49h] BYREF
  __int64 v96; // [rsp+78h] [rbp-41h] BYREF
  PVOID v97; // [rsp+80h] [rbp-39h] BYREF
  SIZE_T v98; // [rsp+88h] [rbp-31h]
  __int64 v99; // [rsp+90h] [rbp-29h] BYREF
  __int64 v100; // [rsp+98h] [rbp-21h] BYREF
  __int64 v101; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v102; // [rsp+A8h] [rbp-11h] BYREF
  struct _DXGK_ALLOCATIONINFO *v106; // [rsp+118h] [rbp+5Fh]
  char v108; // [rsp+138h] [rbp+7Fh]
  struct COREDEVICEACCESS *v109; // [rsp+138h] [rbp+7Fh]

  v106 = a4;
  Flags = a2->Flags;
  v92 = 0;
  v8 = 1;
  v90 = 1;
  v9 = a3;
  v10 = a2;
  v11 = this;
  LODWORD(v12) = 0;
  if ( (*(_DWORD *)&Flags & 0x10000) != 0 && a6 )
  {
    LODWORD(v12) = -1073741811;
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Can not create StandardAllocation from UserMode and Kernel simultaneously,               "
                "              returning 0x%I64x",
      (__int64)this,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v12;
  }
  v13 = (*(_DWORD *)&Flags & 0x40000) == 0;
  v88 = v13;
  if ( (*(_WORD *)&Flags & 0x400) != 0 )
  {
    v13 = 1;
    v88 = 1;
  }
  v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v14 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v14 + 168)) )
    {
      WdLogSingleEntry1(1LL, 4048LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
        4048LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v9 = a3;
    v11 = this;
    a4 = v106;
    v13 = v88;
  }
  v15 = a5;
  v16 = 0;
  v94 = 0;
  if ( !v10->NumAllocations )
  {
LABEL_47:
    v10->Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v10->Flags & 0xFFFFBFFF | (v8 << 14));
    return (unsigned int)v12;
  }
  while ( 1 )
  {
    v95 = 0LL;
    hSection = 0LL;
    v96 = 0LL;
    v18 = 0LL;
    v19 = v16;
    v20 = *((_QWORD *)v15 + 6);
    v89 = v13;
    v21 = &a4[v19];
    v22 = (LODWORD(v21->Size) + 4095) & 0xFFFFF000;
    if ( (*(_DWORD *)(v20 + 4) & 0x200F) != 0 )
      v89 = 1;
    v23 = a2;
    if ( !*(_QWORD *)(v20 + 16) && (*(_DWORD *)&a2->Flags & 0x100000) == 0 )
    {
      WdLogSingleEntry1(1LL, 4076LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pAllocation->m_pAllocation->m_hDriverAllocation != NULL || pKMTCreateAllocation->Flags.NoKmdAccess",
        4076LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v23 = a2;
      v11 = this;
      v9 = a3;
    }
    Value = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v21->Flags.Value;
    if ( (*(_WORD *)&Value & 0x4000) != 0 )
    {
      v49 = 344LL * ((*((_DWORD *)v15 + 18) >> 12) & 0x3F);
      v50 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 2928LL) + 16LL) + 2808LL);
      v12 = *(_QWORD *)(v49 + v50 + 40);
      if ( !*((_BYTE *)v11 + 1896) || !v12 )
      {
        v33 = this;
        WdLogSingleEntry2(2LL, this, *(_QWORD *)(v49 + v50 + 40));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver asking for history buffer, but device history buffer creation is disabled, or adapter does not"
                    " have precision data. Device=0x%I64x, PrecisionData=%I64X",
          (__int64)this,
          v12,
          0LL,
          0LL,
          0LL);
        v10 = a2;
        LODWORD(v12) = -1073741823;
        goto LABEL_142;
      }
    }
    if ( a7 )
    {
      v41 = *(_QWORD *)(*((_QWORD *)v15 + 5) + 56LL);
      if ( v41 )
        hSection = *(HANDLE *)(v41 + 192);
      v10 = a2;
      if ( (*(_DWORD *)&a2->Flags & 0x80u) != 0 )
        v92 = 1;
      goto LABEL_33;
    }
    v25 = v23->Flags;
    v91 = 0;
    if ( (*(_DWORD *)&v25 & 0x10000) != 0 )
    {
      if ( (*(_BYTE *)&v25 & 0x20) != 0 )
      {
        hSection = v9[v19].hSection;
        v21->Flags.Value = *(_DWORD *)&Value | 0x10;
        goto LABEL_18;
      }
      if ( (*(_DWORD *)&v25 & 0x20000) == 0 )
        goto LABEL_18;
      v109 = (struct COREDEVICEACCESS *)(&v9->hSection + 12 * v19);
      v51 = *(void **)v109;
      v97 = 0LL;
      v52 = ObReferenceObjectByHandle(v51, 0x20000u, MmSectionObjectType, 1, &v97, 0LL);
      v18 = v97;
      v12 = v52;
      if ( v52 < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)v109, v52);
        v78 = *(_QWORD *)v109;
        v79 = L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x";
LABEL_156:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v79, v78, v12, 0LL, 0LL, 0LL);
        goto LABEL_140;
      }
      v21->Flags.Value |= 0x400000u;
      v53 = ProcessSectionAttributes(v18, v21);
      v12 = v53;
      if ( v53 < 0 )
      {
        WdLogSingleEntry2(2LL, this, v53);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to query section attributes. Device=0x%I64x, Status=%I64X",
          (__int64)this,
          v12,
          0LL,
          0LL,
          0LL);
        goto LABEL_139;
      }
      v54 = *(_QWORD *)(*((_QWORD *)v15 + 5) + 56LL);
      *(_DWORD *)(v54 + 12) |= 0x400u;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 5) + 56LL) + 192LL) = v18;
      *(_DWORD *)(v54 + 204) = v21->Alignment;
      *(_DWORD *)(v54 + 12) ^= (*(_DWORD *)(v54 + 12) ^ (v21->Flags.Value << 9)) & 0x800;
LABEL_100:
      v9 = a3;
LABEL_101:
      v11 = this;
      v23 = a2;
      goto LABEL_18;
    }
    if ( (*(_BYTE *)&v25 & 0x20) != 0 )
    {
      if ( (*((_DWORD *)DXGPROCESS::GetCurrent() + 106) & 0x100) != 0 )
      {
        v9 = a3;
        hSection = a3[v19].hSection;
        v21->Flags.Value |= 0x10u;
        *(_DWORD *)(*((_QWORD *)v15 + 6) + 4LL) |= 0x20000000u;
      }
      else
      {
        Size = v21->Size;
        if ( Size > v22 )
        {
          v12 = -1073741811LL;
          WdLogSingleEntry2(2LL, Size, -1073741811LL);
          v78 = v21->Size;
          v79 = L"Overflow rounding allocation size 0x%I64x to next page boundary returning 0x%I64x";
          goto LABEL_156;
        }
        v21->Size = v22;
        v56 = (void *)(*((__int64 (__fastcall **)(_QWORD, _QWORD))a6 + 4))(*((_QWORD *)a6 + 5), v22);
        hSection = v56;
        if ( !v56 )
        {
          WdLogSingleEntry1(2LL, 4195LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot allocate memory allocation for existing sys mem.",
            4195LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_160;
        }
        v9 = a3;
        a3[v19].hSection = v56;
      }
      goto LABEL_101;
    }
    if ( (*(_BYTE *)&Value & 0x10) != 0 )
    {
      hSection = v9[v19].hSection;
      goto LABEL_18;
    }
    if ( (*(_DWORD *)&Value & 0x400000) != 0 )
    {
      if ( v23->NumAllocations != 1 || (*(_DWORD *)&Value & 0x2000000) == 0 || !a6 || !*((_QWORD *)a6 + 4) )
      {
        WdLogSingleEntry1(1LL, 4214LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pKMTCreateAllocation->NumAllocations == 1) && (pDriverAllocations[i].Flags.DoDPrimary) && (pCreateSt"
                    "andardAllocation != NULL) && (pCreateStandardAllocation->pfnAllocateSysMem != NULL)",
          4214LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v18 = (PVOID)(*((__int64 (__fastcall **)(_QWORD, _QWORD))a6 + 4))(*((_QWORD *)a6 + 5), v22);
      if ( !v18 )
      {
        WdLogSingleEntry1(2LL, 4220LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot create section object for DoD primary backing store.",
          4220LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_160;
      }
      v91 = 1;
      goto LABEL_100;
    }
LABEL_18:
    v26 = a6;
    if ( !a6 || (*(_DWORD *)a6 & 0x40) == 0 )
      goto LABEL_19;
    if ( *((_QWORD *)a6 + 41) )
    {
      v57 = (void *)*((_QWORD *)a6 + 42);
      if ( !v57 )
      {
        v21->Flags.Value |= 0x400000u;
        ObfReferenceObject(*((PVOID *)a6 + 41));
        v26 = a6;
        v23 = a2;
        v11 = this;
        v58 = *(_QWORD *)(*((_QWORD *)v15 + 5) + 56LL);
        v18 = (PVOID)*((_QWORD *)a6 + 41);
        v9 = a3;
        v59 = *(_DWORD *)(v58 + 12) | 0x400;
        *(_DWORD *)(v58 + 12) = v59;
        *(_QWORD *)(v58 + 192) = *((_QWORD *)a6 + 41);
        goto LABEL_106;
      }
    }
    else
    {
      if ( !*((_QWORD *)a6 + 42) )
      {
        WdLogSingleEntry1(2LL, 4242LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Section object or SystemMem is not supplied for a cross adapter allocation.",
          4242LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_160:
        LODWORD(v12) = -1073741823;
        goto LABEL_140;
      }
      v57 = (void *)*((_QWORD *)a6 + 42);
    }
    v21->Flags.Value |= 0x10u;
    hSection = v57;
    v58 = *(_QWORD *)(*((_QWORD *)v15 + 5) + 56LL);
    v59 = *(_DWORD *)(v58 + 12) | 0x200;
    *(_QWORD *)(v58 + 192) = v57;
    *(_DWORD *)(v58 + 12) = v59;
LABEL_106:
    *(_DWORD *)(v58 + 204) = *((_DWORD *)v26 + 98);
    *(_DWORD *)(v58 + 12) = v59 ^ ((unsigned __int16)v59 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)v26 << 7)) & 0x800;
LABEL_19:
    if ( (v9[v19].Flags.Value & 4) != 0 )
    {
      v21->AllocationPriority = v9[v19].Priority;
    }
    else if ( !v21->AllocationPriority )
    {
      WdLogSingleEntry1(2LL, 4288LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"KMD should set a non-zero initial priority for allocations.",
        4288LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v23 = a2;
      v11 = this;
    }
    v27 = *((_QWORD *)v15 + 5);
    v28 = 0;
    v108 = 0;
    if ( v27 )
    {
      if ( (v21->Flags.Value & 0x100000) != 0 )
      {
        v28 = 1;
        v108 = 1;
        if ( !*(_QWORD *)(*(_QWORD *)(v27 + 56) + 184LL) )
        {
          v60 = 0LL;
          v61 = (*(_DWORD *)&v23->Flags & 0x10000) == 0;
          v98 = 0LL;
          if ( !v61 && hSection )
          {
            v60 = hSection;
            v98 = v23->pStandardAllocation->ExistingHeapData.Size;
          }
          v62 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 760LL);
          LOBYTE(Object) = BYTE1(*((_DWORD *)DXGPROCESS::GetCurrent() + 106)) & 1;
          v63 = (*(__int64 (__fastcall **)(_QWORD, __int64, HANDLE, SIZE_T, int))(*(_QWORD *)(v62 + 8) + 1200LL))(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                  *(_QWORD *)(*((_QWORD *)v15 + 5) + 56LL) + 184LL,
                  v60,
                  v98,
                  Object);
          v12 = v63;
          if ( v63 < 0 )
          {
            WdLogSingleEntry1(2LL, v63);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to create VIDMM_CROSSADAPTER_ALLOC, returning 0x%I64x",
              v12,
              0LL,
              0LL,
              0LL,
              0LL);
            if ( v91 )
LABEL_139:
              ObfDereferenceObject(v18);
LABEL_140:
            v10 = a2;
LABEL_141:
            v33 = this;
            goto LABEL_142;
          }
          v28 = 1;
          v11 = this;
        }
      }
    }
    v10 = a2;
    if ( (*(_DWORD *)&a2->Flags & 0x10020) == 0x10020 )
    {
      if ( (*((_BYTE *)v11 + 1901) & 1) == 0 )
      {
        if ( (*((_DWORD *)DXGPROCESS::GetCurrent() + 106) & 0x10) == 0 )
        {
          LODWORD(v12) = ProcessSysMemAttributes(hSection, v22, v21);
          if ( (int)v12 < 0 )
            goto LABEL_141;
        }
        v11 = this;
        v28 = v108;
      }
      if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
      {
        v64 = *(_QWORD *)(*((_QWORD *)v15 + 5) + 56LL);
        v65 = *(_DWORD *)(v64 + 12) | 0x200;
        *(_QWORD *)(v64 + 192) = hSection;
        *(_DWORD *)(v64 + 12) = v65;
        *(_DWORD *)(v64 + 204) = v21->Alignment;
        *(_DWORD *)(v64 + 12) = v65 ^ ((unsigned __int16)v65 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v21->Flags.0 << 9)) & 0x800;
        v28 = v108;
      }
    }
    if ( hSection )
    {
      if ( (*(_DWORD *)&a2->Flags & 0x80u) != 0 )
      {
        v66 = *((_QWORD *)v15 + 6);
        v92 = 1;
        *(_DWORD *)(v66 + 4) |= 0x8000000u;
        v67 = *((_QWORD *)v15 + 5);
        if ( v67 )
        {
          v68 = *(_QWORD *)(v67 + 56);
          if ( v68 )
            *(_DWORD *)(v68 + 12) |= 0x1000u;
        }
      }
    }
    if ( v28 )
      v29 = *(_QWORD *)(*((_QWORD *)v15 + 5) + 56LL) + 184LL;
    else
      v29 = 0LL;
    LODWORD(v12) = (*(__int64 (__fastcall **)(_QWORD, struct _DXGK_ALLOCATIONINFO *, _QWORD, PVOID, __int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 760LL) + 8LL) + 112LL))(
                     *((_QWORD *)v11 + 99),
                     v21,
                     *((_QWORD *)v15 + 6),
                     v18,
                     v29,
                     &v95);
    if ( v91 )
      ObfDereferenceObject(v18);
    if ( (int)v12 < 0 )
      goto LABEL_141;
    v31 = v95;
    if ( !v95 )
    {
      WdLogSingleEntry1(1LL, 4390LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidMmMultiGlobalAlloc", 4390LL, 0LL, 0LL, 0LL, 0LL);
      v31 = v95;
    }
    *(_QWORD *)(*((_QWORD *)v15 + 6) + 8LL) = v31;
    if ( a6 )
    {
      v42 = *((_DWORD *)a6 + 4);
      if ( v42 == 4 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v72 = (_DWORD *)*((_QWORD *)a6 + 3);
          LODWORD(v87) = v72[5];
          LODWORD(v86) = v72[4];
          LODWORD(v85) = v72[3];
          LODWORD(v84) = v72[2];
          LODWORD(v83) = v72[1];
          LODWORD(HandleInformation) = *v72;
          LODWORD(Objecta) = *(_DWORD *)a6;
          McTemplateK0pqqqqqqq_EtwWriteTransfer(
            (__int64)v72,
            &EventCddStandardAllocationGdiSurface,
            v30,
            *((_QWORD *)v15 + 6),
            Objecta,
            HandleInformation,
            v83,
            v84,
            v85,
            v86,
            v87);
        }
      }
      else
      {
        v47 = v42 - 1;
        if ( v47 )
        {
          v48 = v47 - 1;
          if ( v48 )
          {
            if ( v48 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              v69 = (_DWORD *)*((_QWORD *)a6 + 3);
              LODWORD(v84) = v69[2];
              LODWORD(v83) = v69[1];
              LODWORD(HandleInformation) = *v69;
              LODWORD(Objecta) = *(_DWORD *)a6;
              McTemplateK0pqtqq_EtwWriteTransfer(
                (__int64)v69,
                &EventCddStandardAllocationStagingSurface,
                v30,
                *((_QWORD *)v15 + 6),
                Objecta,
                HandleInformation,
                v83,
                v84);
            }
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            v70 = (_DWORD *)*((_QWORD *)a6 + 3);
            LODWORD(v85) = v70[3];
            LODWORD(v84) = v70[2];
            LODWORD(v83) = v70[1];
            LODWORD(HandleInformation) = *v70;
            LODWORD(Objecta) = *(_DWORD *)a6;
            McTemplateK0pqqqqq_EtwWriteTransfer(
              (__int64)v70,
              &EventCddStandardAllocationShadowSurface,
              v30,
              *((_QWORD *)v15 + 6),
              Objecta,
              HandleInformation,
              v83,
              v84,
              v85);
          }
        }
        else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v71 = (_DWORD *)*((_QWORD *)a6 + 3);
          LODWORD(v87) = v71[5];
          LODWORD(v86) = v71[4];
          LODWORD(v85) = v71[3];
          LODWORD(v84) = v71[2];
          LODWORD(v83) = v71[1];
          LODWORD(HandleInformation) = *v71;
          LODWORD(Objecta) = *(_DWORD *)a6;
          McTemplateK0pqqqqqqq_EtwWriteTransfer(
            (__int64)v71,
            &EventCddStandardAllocationSharedPrimarySurface,
            v30,
            *((_QWORD *)v15 + 6),
            Objecta,
            HandleInformation,
            v83,
            v84,
            v85,
            v86,
            v87);
        }
      }
    }
LABEL_33:
    v32 = *((_QWORD *)v15 + 6);
    v33 = this;
    MaximumRenamingListLength = v21->MaximumRenamingListLength;
    v93 = 0;
    LODWORD(HandleInformation) = v92;
    LODWORD(v12) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, HANDLE, POBJECT_HANDLE_INFORMATION, struct DXGALLOCATION *, __int64 *, int *, char *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 128LL))(
                     *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                     *((_QWORD *)this + 99),
                     *(_QWORD *)(v32 + 8),
                     MaximumRenamingListLength,
                     hSection,
                     HandleInformation,
                     v15,
                     &v96,
                     &v93,
                     &v89);
    v8 = v89 && v90;
    v35 = *((_DWORD *)v15 + 18) & 0xFFFC0FFF;
    v90 = v8;
    v36 = v93 & 0x3F;
    *((_DWORD *)v15 + 18) = v35 | (v36 << 12);
    *(_DWORD *)(*((_QWORD *)v15 + 6) + 4LL) = (v36 << 21) | *(_DWORD *)(*((_QWORD *)v15 + 6) + 4LL) & 0xF81FFFFF;
    if ( (int)v12 < 0 )
      goto LABEL_142;
    v37 = v96;
    if ( !v96 )
    {
      WdLogSingleEntry1(1LL, 4495LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidMmMultiAlloc", 4495LL, 0LL, 0LL, 0LL, 0LL);
      v37 = v96;
    }
    *((_QWORD *)v15 + 3) = v37;
    v38 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v21->Flags.Value;
    if ( (*(_WORD *)&v38 & 0x100) != 0 )
      goto LABEL_128;
    v39 = *(_DWORD *)(*((_QWORD *)v15 + 6) + 4LL);
    if ( (v39 & 0x20) == 0 && (*(_DWORD *)&v38 & 0x20200) == 0 )
    {
      if ( (v39 & 0x4000) == 0 )
        goto LABEL_43;
LABEL_128:
      if ( (v21->Flags.Value & 0x100) != 0 )
        *(_DWORD *)(*((_QWORD *)v15 + 6) + 4LL) |= 8u;
    }
    if ( (v21->Flags.Value & 0x200) != 0 )
      *(_DWORD *)(*((_QWORD *)v15 + 6) + 4LL) |= 0x20u;
    if ( (v21->Flags.Value & 0x20000) != 0 )
      *(_DWORD *)(*((_QWORD *)v15 + 6) + 4LL) |= 0x4000u;
    LODWORD(v12) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                                                             + 216LL))(
                     *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                     *((_QWORD *)v15 + 3),
                     0LL,
                     0LL,
                     0LL,
                     0LL);
    if ( (int)v12 < 0 )
      goto LABEL_142;
    v73 = *((_QWORD *)v15 + 6);
    *((_DWORD *)v15 + 18) |= 0x800u;
    if ( (*(_DWORD *)(v73 + 4) & 0x4000) != 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 224LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
        *((_QWORD *)v15 + 3));
      *((_DWORD *)v15 + 18) &= ~0x800u;
    }
LABEL_43:
    if ( DXGDEVICE::UmdManagesResidency(this) && a6 && *((_DWORD *)a6 + 4) == 2 )
    {
      v43 = *((_QWORD *)this + 2);
      v44 = *((_DWORD *)v15 + 18);
      v99 = 0LL;
      v101 = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v43 + 760) + 8LL) + 976LL))(
        *((_QWORD *)this + 99),
        (v44 >> 12) & 0x3F,
        &v99,
        &v101);
      v45 = *((_QWORD *)this + 2);
      v100 = 0LL;
      v102 = 0LL;
      v46 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v45 + 760) + 8LL) + 768LL))(
              *(_QWORD *)(v45 + 768),
              v99,
              (__int64)v15 + 24,
              1LL,
              3,
              &v100,
              &v102);
      v12 = v46;
      if ( v46 < 0 )
      {
        WdLogSingleEntry1(2LL, v46);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to make shadow allocation resident. Status = 0x%I64x",
          v12,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_142;
      }
      if ( v46 == 259 )
      {
        (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 760LL)
                                                                                  + 8LL)
                                                                      + 984LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
          &v101,
          &v100,
          1LL);
        LODWORD(v12) = 0;
      }
    }
    v15 = (struct DXGALLOCATION *)*((_QWORD *)v15 + 8);
    v16 = v94 + 1;
    v94 = v16;
    if ( v16 >= v10->NumAllocations )
      break;
    v13 = v88;
    a4 = v106;
    v11 = this;
    v9 = a3;
  }
  if ( (int)v12 >= 0 )
    goto LABEL_47;
LABEL_142:
  v74 = 0;
  if ( v10->NumAllocations )
  {
    v75 = a5;
    do
    {
      if ( (*((_DWORD *)v75 + 18) & 0x800) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v33 + 2) + 760LL) + 8LL) + 224LL))(
          *(_QWORD *)(*((_QWORD *)v33 + 2) + 768LL),
          *((_QWORD *)v75 + 3));
        *((_DWORD *)v75 + 18) &= ~0x800u;
      }
      v76 = *((_QWORD *)v75 + 6);
      if ( *(_QWORD *)(v76 + 8)
        && !a7
        && (!*((_DWORD *)v33 + 116) && (*(_DWORD *)(v76 + 4) & 1) != 0 || (*(_DWORD *)(v76 + 4) & 2) != 0) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v33 + 2) + 760LL) + 8LL) + 184LL))(*(_QWORD *)(*((_QWORD *)v33 + 2) + 768LL));
        *(_DWORD *)(*((_QWORD *)v75 + 6) + 4LL) |= 0x10u;
      }
      v77 = *((_QWORD *)v75 + 3);
      if ( v77 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v33 + 2) + 760LL)
                                                                             + 8LL)
                                                                 + 152LL))(
          *(_QWORD *)(*((_QWORD *)v33 + 2) + 768LL),
          v77,
          0LL,
          1LL);
        *((_QWORD *)v75 + 3) = 0LL;
      }
      else
      {
        DXGDEVICE::TraceCloseParavirtualizedAllocation(v33, v75);
      }
      if ( !a7 )
        DXGDEVICE::DestroyAdapterAllocation(v33, *((struct DXGADAPTERALLOCATION **)v75 + 6));
      v75 = (struct DXGALLOCATION *)*((_QWORD *)v75 + 8);
      ++v74;
    }
    while ( v74 < v10->NumAllocations );
  }
  return (unsigned int)v12;
}
