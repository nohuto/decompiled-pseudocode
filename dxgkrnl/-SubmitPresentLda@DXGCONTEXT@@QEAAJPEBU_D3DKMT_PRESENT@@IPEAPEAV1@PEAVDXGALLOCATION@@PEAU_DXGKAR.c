__int64 __fastcall DXGCONTEXT::SubmitPresentLda(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT *a2,
        int a3,
        struct _EX_RUNDOWN_REF *a4,
        struct DXGALLOCATION *a5,
        struct _DXGKARG_PRESENT *a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7)
{
  struct _EX_RUNDOWN_REF *v7; // r14
  __int64 *v8; // rsi
  DXGPROCESS *v9; // r12
  __int64 v10; // r13
  PVOID v11; // r8
  struct _EX_RUNDOWN_REF *Pool2; // r15
  __int64 v13; // rcx
  unsigned int v14; // r8d
  ULONG_PTR Count; // rax
  unsigned int v16; // edx
  __int64 v17; // rbx
  const wchar_t *v18; // r9
  int v19; // esi
  struct _EX_RUNDOWN_REF *v20; // r14
  D3DKMT_HANDLE *v21; // rdx
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 *v25; // r14
  char *v26; // r9
  unsigned int v27; // edx
  __int64 v28; // r10
  int v29; // r8d
  char *v30; // rdx
  ULONG_PTR v31; // rcx
  bool v32; // al
  __int64 v33; // r8
  __int64 v34; // r8
  char *v35; // rdx
  __int64 v36; // r10
  char *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  DXGK_ALLOCATIONLIST *v40; // rdx
  struct _DXGKARG_PRESENT *v41; // r8
  void *v42; // rdx
  unsigned int i; // r14d
  struct _KTHREAD **v44; // rcx
  unsigned int v45; // ebx
  struct _EX_RUNDOWN_REF *v46; // rdi
  unsigned int v47; // r12d
  __int64 v49; // [rsp+28h] [rbp-1D0h]
  __int64 *v50; // [rsp+50h] [rbp-1A8h]
  unsigned int v51; // [rsp+58h] [rbp-1A0h]
  struct _EX_RUNDOWN_REF *v52; // [rsp+60h] [rbp-198h] BYREF
  int v53; // [rsp+68h] [rbp-190h] BYREF
  unsigned int v54; // [rsp+6Ch] [rbp-18Ch]
  struct _EX_RUNDOWN_REF *v55; // [rsp+70h] [rbp-188h]
  unsigned int v56; // [rsp+78h] [rbp-180h]
  DXGK_ALLOCATIONLIST *v57; // [rsp+80h] [rbp-178h]
  struct _EX_RUNDOWN_REF *v58; // [rsp+88h] [rbp-170h]
  __int64 v59; // [rsp+90h] [rbp-168h]
  __int64 v60; // [rsp+98h] [rbp-160h] BYREF
  DXGCONTEXT *v61; // [rsp+A0h] [rbp-158h]
  int v62; // [rsp+A8h] [rbp-150h]
  struct DXGALLOCATION *v63; // [rsp+B0h] [rbp-148h]
  const struct _D3DKMT_PRESENT *v64; // [rsp+B8h] [rbp-140h]
  DXGPROCESS *v65; // [rsp+C0h] [rbp-138h]
  struct _EX_RUNDOWN_REF *v66[3]; // [rsp+C8h] [rbp-130h] BYREF
  struct _DXGKARG_PRESENT *v67; // [rsp+E0h] [rbp-118h]
  PVOID P; // [rsp+E8h] [rbp-110h]
  _BYTE v69[32]; // [rsp+F0h] [rbp-108h] BYREF
  int v70; // [rsp+110h] [rbp-E8h]
  PVOID v71; // [rsp+120h] [rbp-D8h] BYREF
  char v72; // [rsp+128h] [rbp-D0h] BYREF
  int v73; // [rsp+1A8h] [rbp-50h]

  v7 = a4;
  v55 = a4;
  v64 = a2;
  v61 = this;
  v66[2] = a4;
  v63 = a5;
  v67 = a6;
  v8 = (__int64 *)((char *)this + 16);
  v50 = (__int64 *)((char *)this + 16);
  v9 = *(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL);
  v65 = v9;
  v10 = (unsigned int)(a3 + 1);
  v54 = 0;
  v71 = 0LL;
  v73 = 0;
  PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements((__int64 *)&v71, a3 + 1);
  v11 = v71;
  v57 = (DXGK_ALLOCATIONLIST *)v71;
  Pool2 = 0LL;
  P = 0LL;
  v70 = 0;
  if ( (unsigned int)v10 <= 4 )
  {
    Pool2 = (struct _EX_RUNDOWN_REF *)v69;
    P = v69;
    if ( !(_DWORD)v10 )
    {
LABEL_7:
      v70 = v10;
      goto LABEL_8;
    }
    memset(v69, 0, 8LL * (unsigned int)v10);
    Pool2 = (struct _EX_RUNDOWN_REF *)P;
LABEL_6:
    v11 = v57;
    goto LABEL_7;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v10 >= 8 )
  {
    Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(256LL, 8 * v10, 1265072196LL);
    P = Pool2;
    goto LABEL_6;
  }
LABEL_8:
  v66[1] = Pool2;
  if ( v11 && Pool2 )
  {
    if ( *(_QWORD *)(*v8 + 1880) != *(_QWORD *)(*(_QWORD *)(*v8 + 16) + 16LL) || DXGPROCESS::IsRemoteConnection(v9) )
      *((_DWORD *)a7 + 29) = 0;
    *(_DWORD *)a7 |= 0xC00u;
    *((_DWORD *)a7 + 35) = v10;
    v13 = *((_BYTE *)a7 + 356) != 0 ? 0x68 : 0;
    *(_DWORD *)((char *)a7 + v13 + 496) = *(_DWORD *)((_BYTE *)a7 + v13 + 496) & 0xFFFFFC00 | 1;
    v14 = 0;
    v51 = 0;
    while ( v14 < (unsigned int)v10 )
    {
      v59 = v14;
      Count = v7[v14].Count;
      v16 = *(_DWORD *)(Count + 400);
      v56 = v16;
      v52 = 0LL;
      if ( !*(_BYTE *)(Count + 438) )
      {
        v17 = 8613LL;
        WdLogSingleEntry1(2LL, 8613LL);
        v18 = L"WDDMv2 LDA present must be on contexts, which support GpuVa";
LABEL_17:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, v17, 0LL, 0LL, 0LL, 0LL);
LABEL_18:
        v19 = -1073741811;
LABEL_19:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v52);
        goto LABEL_80;
      }
      if ( v14 )
      {
        if ( v16 <= *(_DWORD *)(v7[v14 - 1].Count + 400) )
        {
          v17 = 8629LL;
          WdLogSingleEntry1(2LL, 8629LL);
          v18 = L"WDDMv2 LDA present contexts must be submitted in the order if increasing physical adapter index";
          goto LABEL_17;
        }
        v21 = &v64->BroadcastSrcAllocation[v14 - 1];
        if ( v21 + 1 < v21 || (unsigned __int64)(v21 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        LODWORD(v58) = *v21;
        v62 = (int)v58;
        AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                      (__int64)v65,
                                                      (DXGALLOCATIONREFERENCE *)v66,
                                                      (unsigned int)v58);
        DXGALLOCATIONREFERENCE::MoveAssign(&v52, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v66);
        v20 = v52;
        if ( !v52 )
        {
          v23 = (unsigned int)v58;
          v19 = -1073741811;
          WdLogSingleEntry2(2LL, (unsigned int)v58, -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid allocation handle in Present 0x%I64x. Returning 0x%I64x",
            v23,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_19;
        }
        v24 = *v8;
        if ( *(_QWORD *)(*(_QWORD *)(v52[1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(*v8 + 16) + 16LL) )
        {
          v19 = -1073741811;
          WdLogSingleEntry3(2LL, v24, v52, -1073741811LL);
          v49 = (__int64)v20;
          v25 = v50;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
            *v50,
            v49,
            -1073741811LL,
            0LL,
            0LL);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v52);
          goto LABEL_81;
        }
        v14 = v51;
        v16 = v56;
      }
      else
      {
        v20 = (struct _EX_RUNDOWN_REF *)v63;
      }
      if ( ((LODWORD(v20[9].Count) >> 12) & 0x3F) != v16 )
      {
        WdLogSingleEntry1(2LL, v20);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Physical adapter index for context and allocation must be the same. DXGALLOCATION 0x%I64x",
          (__int64)v20,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_18;
      }
      if ( *((_BYTE *)a7 + 356) )
        v26 = (char *)a7
            + 64 * (unsigned __int64)(v14 * *((_DWORD *)a7 + 151))
            + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
            + 648;
      else
        v26 = (char *)a7 + 504;
      v58 = (struct _EX_RUNDOWN_REF *)v26;
      v19 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v8 + 16) + 760LL)
                                                                             + 8LL)
                                                                 + 408LL))(
              *(_QWORD *)(*v8 + 792),
              v20[3].Count,
              v26);
      if ( v19 < 0 )
        goto LABEL_19;
      v27 = v54;
      Pool2[v54] = (struct _EX_RUNDOWN_REF)v58->Count;
      v54 = v27 + 1;
      v53 = 0;
      v60 = 0LL;
      v8 = v50;
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*v50 + 16) + 16LL)) )
      {
        v29 = 0xFFFF;
        v53 = 0xFFFF;
        v60 = -1LL;
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v28 + 760) + 8LL)
                                                                         + 208LL))(
          *(_QWORD *)(v28 + 768),
          *(_QWORD *)(v20[6].Count + 8),
          &v53,
          &v60,
          0LL);
        v29 = v53;
      }
      if ( *((_BYTE *)a7 + 356) )
        *(_WORD *)((char *)a7
                 + 64 * (unsigned __int64)(v51 * *((_DWORD *)a7 + 151))
                 + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
                 + 632) = v29;
      else
        *((_DWORD *)a7 + 139) ^= (*((_DWORD *)a7 + 139) ^ (v29 << 17)) & 0x3E0000;
      if ( *((_BYTE *)a7 + 356) )
        v30 = (char *)a7
            + 64 * (unsigned __int64)(v51 * *((_DWORD *)a7 + 151))
            + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
            + 640;
      else
        v30 = (char *)a7 + 520;
      *(_QWORD *)v30 = v60;
      v31 = v20[5].Count;
      if ( v31 )
        v32 = (*(_DWORD *)(v31 + 4) & 8) != 0;
      else
        v32 = 0;
      if ( v32 )
        v33 = *(_QWORD *)(*(_QWORD *)(v31 + 56) + 184LL);
      else
        v33 = 0LL;
      if ( *((_BYTE *)a7 + 356) )
        *(_QWORD *)((char *)a7
                  + 64 * (unsigned __int64)(v51 * *((_DWORD *)a7 + 151))
                  + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
                  + 656) = v33;
      else
        *((_QWORD *)a7 + 72) = v33;
      v34 = *(_QWORD *)(v20[6].Count + 16);
      if ( *((_BYTE *)a7 + 356) )
        v35 = (char *)a7
            + 64 * (unsigned __int64)(v51 * *((_DWORD *)a7 + 151))
            + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
            + 624;
      else
        v35 = (char *)a7 + 512;
      *(_QWORD *)v35 = v34;
      v36 = v59;
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v50 + 16) + 16LL) + 2874LL) )
      {
        v34 = *(_QWORD *)(v55[v59].Count + 184);
        if ( *((_BYTE *)a7 + 356) )
          v37 = (char *)a7
              + 64 * (unsigned __int64)(v51 * *((_DWORD *)a7 + 151))
              + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
              + 616;
        else
          v37 = (char *)a7 + 568;
        *(_QWORD *)v37 = v34;
      }
      if ( *((_BYTE *)a7 + 356) )
        *((_DWORD *)a7 + 160) = -1;
      v59 = 32 * v36;
      *(struct _EX_RUNDOWN_REF *)((char *)&v57->hDeviceSpecificAllocation + v59) = v20[4];
      LOBYTE(v34) = *((_BYTE *)v61 + 439);
      v38 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v50 + 16)
                                                                                                  + 760LL)
                                                                                      + 8LL)
                                                                          + 240LL))(
              *(_QWORD *)(*(_QWORD *)(*v50 + 16) + 768LL),
              v20[3].Count,
              v34,
              v56);
      v39 = v59;
      v40 = v57;
      *(_QWORD *)((char *)&v57->8 + v59) = v38;
      *(LONGLONG *)((char *)&v40->PhysicalAddress.QuadPart + v39) = v60;
      *(_WORD *)((char *)&v40[1].hDeviceSpecificAllocation + v39) = v53;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v52);
      v14 = ++v51;
      v7 = v55;
    }
    v41 = v67;
    v67->NumSrcAllocations = v10;
    v41->pAllocationList = v57;
    v42 = 0LL;
    if ( (v41->Flags.Value & 1) != 0 || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v8 + 16) + 16LL) + 2874LL) )
      v42 = (void *)*((_QWORD *)v61 + 23);
    v19 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(*v8 + 16), v42, v41);
    if ( v19 >= 0 )
    {
      for ( i = 0; i < (unsigned int)v10; ++i )
      {
        v44 = (struct _KTHREAD **)v55[i].Count;
        if ( v44[57] != KeGetCurrentThread() )
        {
          WdLogSingleEntry1(1LL, 8799LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
            8799LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v44 = (struct _KTHREAD **)v55[i].Count;
        }
        if ( (*((_DWORD *)v61 + 101) & 0x10) != 0 )
          DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues((DXGCONTEXT *)v44, 0LL, 0, 0, a7, 0);
        v19 = DXGCONTEXT::SubmitCommandToImplicitQueue((DXGCONTEXT *)v55[i].Count, a7);
        if ( v19 < 0 )
          break;
        *(_DWORD *)a7 &= ~0x800u;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, 8573LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocated ReferencedAllocationArray",
      8573LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v19 = -1073741801;
  }
LABEL_80:
  v25 = v50;
LABEL_81:
  if ( v19 < 0 )
  {
    v45 = 0;
    v46 = v55;
    v47 = v54;
    while ( v45 < v47 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v25 + 16) + 760LL)
                                                                            + 8LL)
                                                                + 424LL))(
        *(_QWORD *)(*(_QWORD *)(*v25 + 16) + 768LL),
        (unsigned int)(1 << *(_DWORD *)(v46[v45].Count + 400)),
        Pool2[v45].Count,
        0LL);
      ++v45;
    }
  }
  if ( P != v69 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v70 = 0;
  if ( v71 != &v72 && v71 )
    ExFreePoolWithTag(v71, 0);
  return (unsigned int)v19;
}
