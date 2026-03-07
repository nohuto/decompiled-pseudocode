__int64 __fastcall DxgkCreateHwQueueInternal(struct _D3DKMT_CREATEHWQUEUE *a1, char a2, __int64 a3)
{
  struct _D3DKMT_CREATEHWQUEUE *v4; // rsi
  ULONG64 v5; // rcx
  PVOID v6; // r15
  __int128 *v7; // rax
  unsigned int *p_PrivateDriverDataSize; // r12
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 Elements; // rax
  size_t PrivateDriverDataSize; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  char *pPrivateDriverData; // rdx
  PVOID v17; // r10
  __int64 v18; // rcx
  struct DXGPROCESS *Current; // r8
  __int64 CurrentProcess; // rax
  __int64 v21; // rcx
  DXGCONTEXT *v22; // r13
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGDEVICE *v25; // rbx
  __int64 v26; // r9
  int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct DXGHWQUEUE *v30; // rdx
  _OWORD *p_hHwContext; // rax
  __int64 v32; // rax
  size_t v33; // r8
  void *v34; // rcx
  ULONG64 v35; // rax
  __int64 v36; // [rsp+20h] [rbp-1C8h]
  int v38; // [rsp+58h] [rbp-190h] BYREF
  __int64 v39; // [rsp+60h] [rbp-188h]
  char v40; // [rsp+68h] [rbp-180h]
  struct DXGCONTEXT *v41; // [rsp+70h] [rbp-178h] BYREF
  _QWORD v42[2]; // [rsp+78h] [rbp-170h] BYREF
  struct _D3DKMT_CREATEHWQUEUE *v43; // [rsp+88h] [rbp-160h]
  PVOID v44; // [rsp+90h] [rbp-158h]
  struct DXGHWQUEUE *v45; // [rsp+98h] [rbp-150h] BYREF
  _BYTE v46[16]; // [rsp+A0h] [rbp-148h] BYREF
  struct _D3DKMT_CREATEHWQUEUE *v47; // [rsp+B0h] [rbp-138h]
  __int128 v48; // [rsp+B8h] [rbp-130h] BYREF
  __int128 v49; // [rsp+C8h] [rbp-120h]
  __int128 v50; // [rsp+D8h] [rbp-110h]
  __int64 v51; // [rsp+E8h] [rbp-100h]
  char *v52; // [rsp+F0h] [rbp-F8h]
  PVOID v53; // [rsp+F8h] [rbp-F0h]
  PVOID P; // [rsp+100h] [rbp-E8h] BYREF
  _BYTE v55[16]; // [rsp+108h] [rbp-E0h] BYREF
  int v56; // [rsp+118h] [rbp-D0h]
  _BYTE v57[160]; // [rsp+120h] [rbp-C8h] BYREF

  v4 = a1;
  v47 = a1;
  v38 = -1;
  v39 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v40 = 1;
    v38 = 2153;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2153);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 2153);
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v43 = 0LL;
  P = 0LL;
  v56 = 0;
  v6 = 0LL;
  v44 = 0LL;
  if ( a2 )
  {
    v5 = MmUserProbeAddress;
    v7 = (__int128 *)v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v7 = (__int128 *)MmUserProbeAddress;
    v48 = *v7;
    v49 = v7[1];
    v50 = v7[2];
    v4 = (struct _D3DKMT_CREATEHWQUEUE *)&v48;
  }
  v43 = v4;
  p_PrivateDriverDataSize = &v4->PrivateDriverDataSize;
  if ( v4->pPrivateDriverData )
  {
    if ( *p_PrivateDriverDataSize )
      goto LABEL_20;
LABEL_13:
    WdLogSingleEntry1(3LL, 843LL);
    if ( P != v55 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v56 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v38);
    return 3221225485LL;
  }
  if ( *p_PrivateDriverDataSize )
    goto LABEL_13;
LABEL_20:
  if ( *p_PrivateDriverDataSize )
  {
    if ( a2 )
    {
      Elements = PagedPoolZeroedArray<unsigned char,16>::AllocateElements((__int64 *)&P, *p_PrivateDriverDataSize);
      PrivateDriverDataSize = v4->PrivateDriverDataSize;
      if ( !Elements )
      {
        WdLogSingleEntry3(3LL, v4->hHwContext, PrivateDriverDataSize, -1073741801LL);
        if ( P != v55 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v56 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
        if ( v40 )
        {
          LOBYTE(v14) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v38);
        }
        return 3221225495LL;
      }
      v51 = v4->PrivateDriverDataSize;
      pPrivateDriverData = (char *)v4->pPrivateDriverData;
      v52 = pPrivateDriverData;
      v17 = P;
      v53 = P;
      if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
        || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v17, pPrivateDriverData, PrivateDriverDataSize);
      v6 = P;
      v44 = P;
    }
    else
    {
      v6 = v4->pPrivateDriverData;
      v44 = v6;
    }
  }
  Current = DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v18);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    v36 = PsGetCurrentProcess(v21);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x, returning 0x%I64x",
      v36,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_46:
    if ( P != v55 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v56 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v38);
    return 3221225485LL;
  }
  if ( (v4->Flags.Value & 8) != 0 && !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry1(2LL, 894LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"NoKmdAccess can be used only with testsigning",
      894LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_46;
  }
  v41 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v46, v4->hHwContext, Current, &v41, 0, 1);
  v22 = v41;
  if ( !v41 )
  {
    WdLogSingleEntry2(2LL, v4->hHwContext, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hHwContext (0x%I64x) specified, returning 0x%I64x",
      v4->hHwContext,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_45:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v46);
    goto LABEL_46;
  }
  if ( (*((_DWORD *)v41 + 101) & 0x10) == 0 )
  {
    WdLogSingleEntry1(2LL, v4->hHwContext);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot create HW queue on context (0x%x) that doesn't support hardware queues.",
      v4->hHwContext,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_45;
  }
  v25 = (struct DXGDEVICE *)*((_QWORD *)v41 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42, v25);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, (__int64)v25, 0, v26, 0);
  v27 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v57, 0LL);
  if ( v27 >= 0 )
  {
    v45 = 0LL;
    v27 = DXGCONTEXT::CreateHwQueue(v22, v4, v6, &v45);
    if ( v27 >= 0 )
    {
      v30 = v45;
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v45 + 2) + 16LL) + 16LL) + 16LL) + 209LL)
        && (v4->Flags.Value & 0x10) == 0 )
      {
        v4->hHwQueueProgressFence = *(_DWORD *)(*((_QWORD *)v45 + 6) + 40LL);
        v4->HwQueueProgressFenceCPUVirtualAddress = *(void **)(*((_QWORD *)v30 + 6) + 56LL);
        v4->HwQueueProgressFenceGPUVirtualAddress = *(_QWORD *)(*((_QWORD *)v30 + 6) + 48LL);
      }
      v4->hHwQueue = *((_DWORD *)v30 + 6);
      if ( a2 )
      {
        p_hHwContext = &v47->hHwContext;
        if ( (unsigned __int64)v47 >= MmUserProbeAddress )
          p_hHwContext = (_OWORD *)MmUserProbeAddress;
        *p_hHwContext = *(_OWORD *)&v4->hHwContext;
        p_hHwContext[1] = *(_OWORD *)&v4->pPrivateDriverData;
        p_hHwContext[2] = *(_OWORD *)&v4->HwQueueProgressFenceCPUVirtualAddress;
        v32 = *p_PrivateDriverDataSize;
        if ( (_DWORD)v32 )
        {
          v33 = (unsigned int)v32;
          v34 = v4->pPrivateDriverData;
          v35 = (ULONG64)v34 + v32;
          if ( v35 > MmUserProbeAddress || v35 <= (unsigned __int64)v34 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v34, v6, v33);
        }
      }
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
  if ( v42[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v46);
  if ( P != v55 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v56 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v38);
  return (unsigned int)v27;
}
