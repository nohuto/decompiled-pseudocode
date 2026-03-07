__int64 __fastcall DxgEscapeEvictWorker(struct _D3DKMT_VIDMM_ESCAPE *a1, struct DXGPROCESS *a2)
{
  __int64 v3; // rsi
  unsigned __int64 AllocationHandle; // rbx
  struct _D3DKMT_VIDMM_ESCAPE::$F71FBFF045A0A72058B1464E93A2F307::$89DCDCB0DE9DB815B09DCB9DFFC9DFC4 *p_EvictByNtHandle; // rax
  char *v7; // rdi
  char v8; // r12
  __int64 v9; // r13
  struct _EX_RUNDOWN_REF *Count; // r14
  __int64 Current; // rax
  __int64 v12; // r9
  DXGDEVICE *v13; // rbx
  int v14; // eax
  _QWORD *v15; // r8
  int v16; // eax
  __int64 v17; // rbx
  const wchar_t *v18; // r9
  int v19; // eax
  unsigned int v20; // ebx
  unsigned int HostProcess; // eax
  unsigned __int64 NtHandle_low; // rdi
  unsigned int v23; // r13d
  __int64 v24; // r9
  unsigned int v25; // edx
  int v26; // edx
  struct _EX_RUNDOWN_REF *v27; // rdx
  ULONG_PTR v28; // rdx
  signed __int64 v29; // rax
  signed __int64 v30; // rtt
  __int64 v31; // r8
  unsigned int v32; // ecx
  unsigned __int64 v33; // r14
  struct _EX_RUNDOWN_REF *v34; // rbx
  _QWORD *v35; // rdi
  int v36; // eax
  __int64 v37; // rdx
  unsigned int v38; // ecx
  __int64 v39; // r14
  ULONG_PTR v40; // rcx
  struct DXGADAPTER *v41; // rcx
  unsigned __int8 *v42; // rsi
  struct _D3DKMT_VIDMM_ESCAPE::$F71FBFF045A0A72058B1464E93A2F307::$89DCDCB0DE9DB815B09DCB9DFFC9DFC4 *v43; // rax
  unsigned int v44; // edi
  unsigned int v45; // eax
  int v46; // eax
  ULONG_PTR v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned int v50; // ecx
  __int64 v51; // r14
  ULONG_PTR v52; // rcx
  unsigned int v53; // ebx
  __int64 v54; // r10
  int v55; // edx
  struct _EX_RUNDOWN_REF *v56; // rdx
  ULONG_PTR v57; // rdx
  signed __int64 v58; // rax
  signed __int64 v59; // rtt
  unsigned int v60; // r14d
  __int64 v61; // rdx
  unsigned int v62; // ecx
  struct _EX_RUNDOWN_REF *v63; // rbx
  _QWORD *v64; // r13
  __int64 v65; // rdi
  int v66; // eax
  const wchar_t *v67; // r9
  unsigned int v68; // edi
  unsigned int v69; // eax
  ULONG_PTR v70; // rdi
  int v71; // eax
  __int64 v72; // rdx
  unsigned int v73; // ecx
  __int64 v74; // rdi
  ULONG_PTR v75; // rcx
  unsigned int NtHandle; // [rsp+50h] [rbp-B0h]
  unsigned int v77; // [rsp+54h] [rbp-ACh]
  unsigned int v78; // [rsp+54h] [rbp-ACh]
  struct _EX_RUNDOWN_REF *v79; // [rsp+58h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v80; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGADAPTER *v81; // [rsp+68h] [rbp-98h]
  struct _EX_RUNDOWN_REF *v82; // [rsp+70h] [rbp-90h] BYREF
  struct _D3DKMT_VIDMM_ESCAPE::$F71FBFF045A0A72058B1464E93A2F307::$89DCDCB0DE9DB815B09DCB9DFFC9DFC4 *v83; // [rsp+78h] [rbp-88h]
  unsigned __int8 *v84; // [rsp+80h] [rbp-80h]
  struct _EX_RUNDOWN_REF *v85[2]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v86[24]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v87[32]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v88[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v89[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v90[88]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v91[144]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v92[144]; // [rsp+200h] [rbp+100h] BYREF

  v84 = (unsigned __int8 *)a1;
  LODWORD(v3) = 0;
  if ( !a2 )
  {
    LODWORD(v3) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v3;
  }
  AllocationHandle = a1->Evict.AllocationHandle;
  p_EvictByNtHandle = &a1->EvictByNtHandle;
  v83 = &a1->EvictByNtHandle;
  if ( (_DWORD)AllocationHandle )
  {
    v83 = &a1->EvictByNtHandle;
  }
  else if ( !LODWORD(p_EvictByNtHandle->NtHandle) )
  {
    v7 = (char *)a2 + 216;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v7, 0LL);
    v8 = 0;
    *((_QWORD *)v7 + 1) = KeGetCurrentThread();
    v9 = 0LL;
    Count = (struct _EX_RUNDOWN_REF *)*((_QWORD *)a2 + 40);
    v85[0] = (struct _EX_RUNDOWN_REF *)((char *)a2 + 320);
    while ( 1 )
    {
      v85[1] = Count;
      Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v85);
      v13 = (DXGDEVICE *)Current;
      if ( !Current )
        break;
      if ( (*(_BYTE *)(Current + 1901) & 1) != 0 )
      {
        v8 = 1;
        v9 = *(_QWORD *)(*(_QWORD *)(Current + 16) + 16LL);
      }
      else
      {
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v88, Current, 0, v12, 0);
        v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v88, 0LL);
        LODWORD(v3) = v14;
        if ( v14 < 0 )
        {
          v17 = v14;
          WdLogSingleEntry1(2LL, v14);
          v18 = L"Failed to acquire coredeviceaccess shared lock, returning 0x%I64x";
          goto LABEL_19;
        }
        v15 = (_QWORD *)*((_QWORD *)v13 + 2);
        if ( *(int *)(v15[2] + 2820LL) < 2000 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v88);
          v19 = DXGDEVICE::EvictAllAllocations(v13);
          LODWORD(v3) = v19;
          if ( v19 < 0 )
          {
            v17 = v19;
            WdLogSingleEntry1(2LL, v19);
            v18 = L"Failed to Evict All Allocations, returning 0x%I64x";
            goto LABEL_19;
          }
        }
        else
        {
          v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v15[95] + 8LL) + 872LL))(
                  v15[96],
                  *((_QWORD *)v13 + 99),
                  0LL,
                  0LL);
          LODWORD(v3) = v16;
          if ( v16 < 0 )
          {
            v17 = v16;
            WdLogSingleEntry1(2LL, v16);
            v18 = L"VIDMM_GLOBAL::EvictionTest reported failure, returning 0x%I64x";
LABEL_19:
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, v17, 0LL, 0LL, 0LL, 0LL);
            COREACCESS::~COREACCESS((COREACCESS *)v90);
            COREACCESS::~COREACCESS((COREACCESS *)v89);
            goto LABEL_22;
          }
        }
        COREACCESS::~COREACCESS((COREACCESS *)v90);
        COREACCESS::~COREACCESS((COREACCESS *)v89);
      }
      Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    }
    if ( v8 )
    {
      v20 = *(_DWORD *)(v9 + 4560);
      HostProcess = DXGPROCESS::GetHostProcess(a2);
      LODWORD(v3) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                      (DXG_GUEST_VIRTUALGPU_VMBUS *)(v9 + 4472),
                      HostProcess,
                      v20,
                      0,
                      0,
                      D3DKMT_ESCAPE_VIDMM,
                      0,
                      0x440u,
                      v84);
    }
LABEL_22:
    *((_QWORD *)v7 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v3;
  }
  NtHandle_low = LODWORD(p_EvictByNtHandle->NtHandle);
  NtHandle = p_EvictByNtHandle->NtHandle;
  if ( (_DWORD)AllocationHandle )
  {
    v79 = 0LL;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v86, a2);
    v23 = ((unsigned int)AllocationHandle >> 6) & 0xFFFFFF;
    if ( v23 < *((_DWORD *)a2 + 74) )
    {
      v24 = *((_QWORD *)a2 + 35);
      v25 = *(_DWORD *)(v24 + 16LL * v23 + 8);
      if ( (unsigned int)AllocationHandle >> 30 == ((v25 >> 5) & 3) && (v25 & 0x2000) == 0 )
      {
        v26 = v25 & 0x1F;
        if ( v26 )
        {
          if ( v26 == 5 )
          {
            v27 = *(struct _EX_RUNDOWN_REF **)(v24 + 16LL * v23);
            goto LABEL_32;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v27 = 0LL;
LABEL_32:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v85, v27);
    DXGALLOCATIONREFERENCE::MoveAssign(&v79, v85);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v85);
    if ( !v79 || (v28 = v79[1].Count) == 0 )
    {
LABEL_38:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v86);
      LODWORD(v3) = -1073741811;
LABEL_39:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v79);
      return (unsigned int)v3;
    }
    _m_prefetchw((const void *)(v28 + 64));
    v29 = *(_QWORD *)(v28 + 64);
    do
    {
      if ( !v29 )
        goto LABEL_38;
      v30 = v29;
      v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 64), v29 + 1, v29);
    }
    while ( v30 != v29 );
    v77 = (unsigned int)AllocationHandle >> 30;
    if ( v23 < *((_DWORD *)a2 + 74) )
    {
      v31 = *((_QWORD *)a2 + 35);
      v32 = *(_DWORD *)(v31 + 16LL * v23 + 8);
      if ( (unsigned int)AllocationHandle >> 30 == ((v32 >> 5) & 3) && (v32 & 0x2000) == 0 && (v32 & 0x1F) != 0 )
        *(_DWORD *)(v31 + 16 * ((AllocationHandle >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    v33 = AllocationHandle;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v86);
    v34 = v79;
    v35 = *(_QWORD **)(v79[1].Count + 16);
    if ( !v35 )
    {
LABEL_63:
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 248));
      if ( v23 < *((_DWORD *)a2 + 74) )
      {
        v49 = *((_QWORD *)a2 + 35);
        v50 = *(_DWORD *)(v49 + 16LL * v23 + 8);
        if ( v77 == ((v50 >> 5) & 3) && (v50 & 0x1F) != 0 )
        {
          v51 = 2 * ((v33 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v49 + 8 * v51 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 217LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              217LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*((_QWORD *)a2 + 35) + 8 * v51 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)a2 + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)a2 + 248, 0LL);
      KeLeaveCriticalRegion();
      v52 = v34[1].Count;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v52 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v52 + 16), (struct DXGDEVICE *)v52);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v79);
      NtHandle_low = NtHandle;
      goto LABEL_72;
    }
    v81 = (struct DXGADAPTER *)v35[2];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v92, v81, 0LL);
    v36 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v92, 0LL);
    v3 = v36;
    if ( v36 < 0 )
    {
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 248));
      if ( v23 < *((_DWORD *)a2 + 74) )
      {
        v37 = *((_QWORD *)a2 + 35);
        v38 = *(_DWORD *)(v37 + 16LL * v23 + 8);
        if ( v77 == ((v38 >> 5) & 3) && (v38 & 0x1F) != 0 )
        {
          v39 = 2 * ((v33 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v37 + 8 * v39 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 217LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              217LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*((_QWORD *)a2 + 35) + 8 * v39 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)a2 + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)a2 + 248, 0LL);
      KeLeaveCriticalRegion();
      v40 = v34[1].Count;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v40 + 16), (struct DXGDEVICE *)v40);
      WdLogSingleEntry1(2LL, v3);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire CoreAdapterAccess shared lock, returning 0x%I64x",
        v3,
        0LL,
        0LL,
        0LL,
        0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v92);
      goto LABEL_39;
    }
    v41 = v81;
    if ( *((_BYTE *)v81 + 209) )
    {
      v42 = v84;
      *((_DWORD *)v84 + 3) = HIDWORD(v34[2].Ptr);
      v43 = v83;
      *((_QWORD *)v42 + 2) = 0LL;
      LODWORD(v43->NtHandle) = 0;
      v44 = *((_DWORD *)v41 + 1140);
      v45 = DXGPROCESS::GetHostProcess(a2);
      v46 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
              (struct DXGADAPTER *)((char *)v81 + 4472),
              v45,
              v44,
              0,
              0,
              D3DKMT_ESCAPE_VIDMM,
              0,
              0x440u,
              v42);
    }
    else
    {
      v47 = v34[1].Count;
      v48 = v35[95];
      if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v47 + 16) + 16LL) + 2820LL) < 2000 )
      {
        (*(void (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(v48 + 8) + 720LL))(
          v35[96],
          v34[3].Count,
          0LL,
          0LL);
        goto LABEL_62;
      }
      v46 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(v48 + 8) + 872LL))(
              v35[96],
              *(_QWORD *)(v47 + 792),
              v34[3].Count,
              0LL);
    }
    LODWORD(v3) = v46;
LABEL_62:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v92);
    goto LABEL_63;
  }
LABEL_72:
  if ( !(_DWORD)NtHandle_low )
    return (unsigned int)v3;
  v80 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v87, a2);
  v53 = ((unsigned int)NtHandle_low >> 6) & 0xFFFFFF;
  v78 = v53;
  if ( v53 >= *((_DWORD *)a2 + 74) )
    goto LABEL_79;
  v54 = *((_QWORD *)a2 + 35);
  if ( (((unsigned int)NtHandle_low >> 25) & 0x60) != (*(_BYTE *)(v54 + 16LL * v53 + 8) & 0x60) )
    goto LABEL_79;
  if ( (*(_DWORD *)(v54 + 16LL * v53 + 8) & 0x2000) != 0 )
    goto LABEL_79;
  v55 = *(_DWORD *)(v54 + 16LL * v53 + 8) & 0x1F;
  if ( !v55 )
    goto LABEL_79;
  if ( v55 != 4 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_79:
    v56 = 0LL;
    goto LABEL_80;
  }
  v56 = *(struct _EX_RUNDOWN_REF **)(v54 + 16LL * v53);
LABEL_80:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v82, v56);
  DXGRESOURCEREFERENCE::MoveAssign(&v80, &v82);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v82);
  if ( v80 )
  {
    v57 = v80[1].Count;
    if ( v57 )
    {
      _m_prefetchw((const void *)(v57 + 64));
      v58 = *(_QWORD *)(v57 + 64);
      while ( v58 )
      {
        v59 = v58;
        v58 = _InterlockedCompareExchange64((volatile signed __int64 *)(v57 + 64), v58 + 1, v58);
        if ( v59 == v58 )
        {
          v60 = (unsigned int)NtHandle_low >> 30;
          if ( v53 < *((_DWORD *)a2 + 74) )
          {
            v61 = *((_QWORD *)a2 + 35);
            v62 = *(_DWORD *)(v61 + 16LL * v53 + 8);
            if ( v60 == ((v62 >> 5) & 3) && (v62 & 0x2000) == 0 && (v62 & 0x1F) != 0 )
              *(_DWORD *)(v61 + 16LL * (((unsigned int)NtHandle_low >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v87);
          v63 = v80;
          v64 = *(_QWORD **)(v80[1].Count + 16);
          if ( v64 )
          {
            v65 = v64[2];
            v81 = (struct DXGADAPTER *)v65;
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v91, (struct DXGADAPTER *const)v65, 0LL);
            v66 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v91, 0LL);
            v3 = v66;
            if ( v66 >= 0 )
            {
              if ( *(_BYTE *)(v65 + 209) )
              {
                v3 = (__int64)v84;
                LODWORD(v83->NtHandle) = HIDWORD(v63[2].Ptr);
                *(_DWORD *)(v3 + 12) = 0;
                *(_QWORD *)(v3 + 16) = 0LL;
                v68 = *(_DWORD *)(v65 + 4560);
                v69 = DXGPROCESS::GetHostProcess(a2);
                LODWORD(v3) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                                (struct DXGADAPTER *)((char *)v81 + 4472),
                                v69,
                                v68,
                                0,
                                0,
                                D3DKMT_ESCAPE_VIDMM,
                                0,
                                0x440u,
                                (unsigned __int8 *)v3);
              }
              else
              {
                v70 = v63[3].Count;
                if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v63[1].Count + 16) + 16LL) + 2820LL) >= 2000 )
                {
                  while ( v70 )
                  {
                    v71 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v64[95] + 8LL) + 872LL))(
                            v64[96],
                            *(_QWORD *)(v63[1].Count + 792),
                            *(_QWORD *)(v70 + 24),
                            0LL);
                    v3 = v71;
                    if ( v71 < 0 )
                    {
                      WdLogSingleEntry1(2LL, v71);
                      v67 = L"VIDMM_GLOBAL::EvictionTest reported failure, returning 0x%I64x";
                      goto LABEL_95;
                    }
                    v70 = *(_QWORD *)(v70 + 64);
                  }
                }
                else
                {
                  while ( v70 )
                  {
                    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v64[95] + 8LL) + 720LL))(
                      v64[96],
                      *(_QWORD *)(v70 + 24),
                      0LL,
                      0LL);
                    v70 = *(_QWORD *)(v70 + 64);
                  }
                }
              }
            }
            else
            {
              WdLogSingleEntry1(2LL, v66);
              v67 = L"Failed to acquire CoreAdapterAccess shared lock, returning 0x%I64x";
LABEL_95:
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v67, v3, 0LL, 0LL, 0LL, 0LL);
            }
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
            NtHandle_low = NtHandle;
          }
          DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 248));
          if ( v78 < *((_DWORD *)a2 + 74) )
          {
            v72 = *((_QWORD *)a2 + 35);
            v73 = *(_DWORD *)(v72 + 16LL * v78 + 8);
            if ( v60 == ((v73 >> 5) & 3) && (v73 & 0x1F) != 0 )
            {
              v74 = 2 * ((NtHandle_low >> 6) & 0xFFFFFF);
              if ( (*(_DWORD *)(v72 + 8 * v74 + 8) & 0x2000) == 0 )
              {
                WdLogSingleEntry1(1LL, 217LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                  217LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              *(_DWORD *)(*((_QWORD *)a2 + 35) + 8 * v74 + 8) &= ~0x2000u;
            }
          }
          *((_QWORD *)a2 + 32) = 0LL;
          ExReleasePushLockExclusiveEx((char *)a2 + 248, 0LL);
          KeLeaveCriticalRegion();
          v75 = v63[1].Count;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v75 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v75 + 16), (struct DXGDEVICE *)v75);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v80);
          return (unsigned int)v3;
        }
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v87);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v80);
  return -1073741811LL;
}
