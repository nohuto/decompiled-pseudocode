/*
 * XREFs of ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1C022245C
 * Callers:
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C0222C18 (DxgkSubmitCommandToHwQueueInternal.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00012E4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C000148C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0046DC4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z @ 0x1C01D2574 (-DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$01@@QEAAPEAII@Z @ 0x1C0311B58 (-AllocateElements@-$PagedPoolZeroedArray@I$01@@QEAAPEAII@Z.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x1C031E10C (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 */

__int64 __fastcall DXGHWQUEUE::SubmitCommand(
        DXGHWQUEUE *this,
        const struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a2,
        char a3)
{
  __int64 v6; // rcx
  char v7; // r13
  UINT PrivateDriverDataSize; // eax
  UINT v9; // edx
  __int64 v11; // rcx
  __int64 v12; // rsi
  void *v13; // r12
  size_t v14; // r8
  const D3DKMT_HANDLE *WrittenPrimaries; // r9
  PVOID v16; // rcx
  struct _LOOKASIDE_LIST_EX *v17; // r14
  _DWORD *v18; // rax
  _DWORD *v19; // rcx
  UINT v20; // eax
  char *pPrivateDriverData; // r9
  size_t v22; // r8
  void *v23; // rcx
  __int64 v24; // r14
  __int64 v25; // rax
  UINT v26; // r14d
  ADAPTER_RENDER *v27; // r13
  __int64 v28; // r8
  int v29; // eax
  DXGHWQUEUE *v30; // rdx
  __int64 v31; // r8
  PVOID *v32; // r12
  __int64 v33; // rax
  int v34; // eax
  UINT i; // r12d
  __int64 v36; // r8
  __int64 v37; // rcx
  void *v38; // rcx
  __int64 v40; // [rsp+58h] [rbp-2D0h]
  _QWORD v41[2]; // [rsp+60h] [rbp-2C8h] BYREF
  void *v42; // [rsp+70h] [rbp-2B8h]
  DXGHWQUEUE *v43; // [rsp+78h] [rbp-2B0h]
  int v44; // [rsp+80h] [rbp-2A8h]
  const D3DKMT_HANDLE *v45; // [rsp+88h] [rbp-2A0h]
  PVOID v46; // [rsp+90h] [rbp-298h]
  __int64 v47; // [rsp+98h] [rbp-290h]
  char *v48; // [rsp+A0h] [rbp-288h]
  void *v49; // [rsp+A8h] [rbp-280h]
  struct _DXGKARG_VALIDATESUBMITCOMMAND v50; // [rsp+B0h] [rbp-278h] BYREF
  PVOID P; // [rsp+2E0h] [rbp-48h] BYREF
  char v52; // [rsp+2E8h] [rbp-40h] BYREF
  unsigned int v53; // [rsp+2F0h] [rbp-38h]

  v43 = this;
  LODWORD(v40) = 0x8000000;
  v6 = *((_QWORD *)this + 2);
  v44 = *(_DWORD *)(v6 + 404);
  v7 = (4 * v44) & 0x80;
  HIDWORD(v40) = (unsigned __int8)v7;
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  v9 = *(_DWORD *)(v6 + 208);
  if ( PrivateDriverDataSize > v9 )
  {
    WdLogSingleEntry2(1LL, PrivateDriverDataSize, v9);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PrivateDriverDataSize > m_ContextInfo.DmaBufferPrivateDataSize 0x%I64x, 0x%I64x",
      a2->PrivateDriverDataSize,
      *(unsigned int *)(*((_QWORD *)this + 2) + 208LL),
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL);
  v41[0] = 0LL;
  v41[1] = v11;
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v41);
  v12 = v41[0];
  if ( !v41[0] )
  {
    WdLogSingleEntry1(6LL, 1069LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate VidSchSubmitData",
      1069LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_55:
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v41);
    return 3221225495LL;
  }
  *(_QWORD *)v41[0] = v40;
  P = 0LL;
  v53 = 0;
  v13 = 0LL;
  v42 = 0LL;
  if ( a2->NumPrimaries )
  {
    if ( a3 )
    {
      if ( !PagedPoolZeroedArray<unsigned int,2>::AllocateElements(&P) )
      {
        WdLogSingleEntry1(6LL, 1086LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate WrittenPrimariesLocal",
          1086LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( P != &v52 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
        P = 0LL;
        v53 = 0;
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v41);
        return 3221225495LL;
      }
      v14 = v53;
      WrittenPrimaries = a2->WrittenPrimaries;
      v45 = WrittenPrimaries;
      v16 = P;
      v46 = P;
      if ( &WrittenPrimaries[v14] < WrittenPrimaries || (unsigned __int64)&WrittenPrimaries[v14] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v16, WrittenPrimaries, v14 * 4);
      v13 = P;
    }
    else
    {
      v13 = (void *)a2->WrittenPrimaries;
    }
    v42 = v13;
  }
  if ( a2->PrivateDriverDataSize )
  {
    v17 = *(struct _LOOKASIDE_LIST_EX **)(*((_QWORD *)this + 2) + 496LL);
    v18 = ExAllocateFromLookasideListEx(v17);
    v19 = v18;
    if ( !v18 )
    {
      if ( P != &v52 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v53 = 0;
      goto LABEL_55;
    }
    *(_QWORD *)(v12 + 16) = v18;
    v20 = a2->PrivateDriverDataSize;
    *(_QWORD *)v19 = v17;
    v19[2] = v20;
    v19[3] = 1;
    pPrivateDriverData = (char *)a2->pPrivateDriverData;
    v22 = a2->PrivateDriverDataSize;
    v23 = (void *)(*(_QWORD *)(v12 + 16) + 16LL);
    if ( a3 )
    {
      v47 = a2->PrivateDriverDataSize;
      v48 = pPrivateDriverData;
      v49 = v23;
      if ( &pPrivateDriverData[v22] < pPrivateDriverData
        || (unsigned __int64)&pPrivateDriverData[v22] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v23, pPrivateDriverData, v22);
    }
    else
    {
      memmove(v23, a2->pPrivateDriverData, v22);
    }
  }
  if ( v7 >= 0 )
  {
    v26 = a2->PrivateDriverDataSize;
    if ( v26 )
    {
      v27 = *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
      if ( *(_QWORD *)(*((_QWORD *)v27 + 2) + 1352LL) )
      {
        memset(&v50, 0, sizeof(v50));
        v50.Flags.Value = 1;
        v50.Commands = a2->CommandBuffer;
        v50.CommandLength = a2->CommandLength;
        v50.ContextCount = 1;
        v50.Context[0] = (HANDLE)*((_QWORD *)this + 4);
        v50.pPrivateDriverData = (void *)(*(_QWORD *)(v12 + 16) + 16LL);
        v50.PrivateDriverDataSize = v26;
        v50.UmdPrivateDataSize = v26;
        v50.HwQueueProgressFenceId = a2->HwQueueProgressFenceId;
        v29 = ADAPTER_RENDER::DdiValidateSubmitCommand(v27, &v50, v28);
        LODWORD(v24) = v29;
        if ( v29 < 0 )
        {
          v30 = (DXGHWQUEUE *)v29;
          v31 = 1170LL;
          goto LABEL_47;
        }
      }
    }
LABEL_31:
    *(_QWORD *)(v12 + 40) = a2->CommandBuffer;
    *(_DWORD *)(v12 + 52) = a2->CommandLength;
    *(_DWORD *)(v12 + 80) = a2->PrivateDriverDataSize;
    *(_QWORD *)(v12 + 496) = a2->HwQueueProgressFenceId;
    *(_DWORD *)(v12 + 504) = 1;
    *(_QWORD *)(v12 + 520) = *((_QWORD *)this + 7);
    *(_QWORD *)(v12 + 512) = *((_QWORD *)this + 8);
    v25 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
    LODWORD(v24) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, int, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v25 + 760) + 8LL) + 856LL))(
                     *(_QWORD *)(v25 + 768),
                     *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
                     a2->NumPrimaries,
                     v13,
                     1,
                     v12 + 200,
                     *((_QWORD *)this + 5),
                     0LL);
    if ( (int)v24 < 0 )
    {
      WdLogSingleEntry1(3LL, 1196LL);
      goto LABEL_48;
    }
    v32 = (PVOID *)(v12 + 16);
    v33 = *(_QWORD *)(v12 + 16);
    if ( v33 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v33 + 12));
      v12 = v41[0];
    }
    *(_QWORD *)(v12 + 544) = ++*((_QWORD *)this + 10);
    v34 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 16LL)
                                                                             + 736LL)
                                                                 + 8LL)
                                                     + 432LL))(
            *((_QWORD *)this + 5),
            v12);
    v24 = v34;
    if ( v34 >= 0 )
      goto LABEL_48;
    if ( *v32 )
      CRefCountedBuffer::RefCountedBufferRelease(*v32);
    for ( i = 0; i < a2->NumPrimaries; ++i )
    {
      v36 = *(_QWORD *)(v12 + 8LL * i + 208);
      if ( v36 )
      {
        v37 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v37 + 760) + 8LL) + 424LL))(
          *(_QWORD *)(v37 + 768),
          0LL,
          v36,
          0LL);
      }
    }
    v31 = v24;
    v30 = this;
LABEL_47:
    WdLogSingleEntry2(3LL, v30, v31);
    goto LABEL_48;
  }
  LODWORD(v24) = CheckNoKmdAccessPrivateData(
                   a2->PrivateDriverDataSize,
                   (void *)(*(_QWORD *)(v12 + 16) + 16LL),
                   0xFF000002);
  if ( (int)v24 >= 0 )
    goto LABEL_31;
LABEL_48:
  v38 = *(void **)(v12 + 16);
  if ( v38 )
    CRefCountedBuffer::RefCountedBufferRelease(v38);
  if ( P != &v52 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v53 = 0;
  CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v41);
  return (unsigned int)v24;
}
