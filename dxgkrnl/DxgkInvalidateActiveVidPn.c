__int64 __fastcall DxgkInvalidateActiveVidPn(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct DXGADAPTER *Current; // rsi
  __int64 CurrentProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int active; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  bool v19; // sf
  struct DXGADAPTER *v21; // rsi
  size_t v22; // r12
  char *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r8
  bool v26; // [rsp+28h] [rbp-190h]
  int v27; // [rsp+50h] [rbp-168h] BYREF
  __int64 v28; // [rsp+58h] [rbp-160h]
  char v29; // [rsp+60h] [rbp-158h]
  DXGADAPTER *v30; // [rsp+68h] [rbp-150h] BYREF
  struct DXGADAPTER *v31[3]; // [rsp+78h] [rbp-140h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-128h]
  size_t Size; // [rsp+A0h] [rbp-118h]
  _QWORD v34[10]; // [rsp+B0h] [rbp-108h] BYREF
  _BYTE v35[144]; // [rsp+100h] [rbp-B8h] BYREF

  memset(v34, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v34[1]);
  v34[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v34[3]) = 44;
  LOBYTE(v34[6]) = -1;
  v27 = -1;
  v28 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2037;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2037);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 2037);
  Current = DXGPROCESS::GetCurrent(v4);
  v31[1] = Current;
  if ( Current )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_OWORD *)Src = *(_OWORD *)a1;
    Size = *(_QWORD *)(a1 + 16);
    v31[0] = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
      (DXGADAPTERBYHANDLE *)&v30,
      (unsigned int)Src[0],
      (struct _KTHREAD **)Current,
      v31,
      1);
    v10 = (int *)v31[0];
    if ( !v31[0] )
    {
      v11 = LODWORD(Src[0]);
      WdLogSingleEntry3(2LL, -1073741811LL, Current, LODWORD(Src[0]));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Status=0x%I64x DXGPROCESS=0x%I64x Invalid hAdapter (0x%I64x) specified",
        -1073741811LL,
        (__int64)Current,
        v11,
        0LL,
        0LL);
      goto LABEL_25;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v31[0], 0LL);
    active = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v35, 0LL);
    if ( (active & 0x80000000) != 0 )
      goto LABEL_12;
    if ( v10[705] > 1000 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v15, v16) + 24) = v10;
LABEL_24:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
LABEL_25:
      if ( v30 )
        DXGADAPTER::ReleaseReference(v30);
      goto LABEL_27;
    }
    v21 = 0LL;
    v22 = (unsigned int)Size;
    if ( (_DWORD)Size )
    {
      v23 = (char *)Src[1];
      if ( !Src[1] )
      {
        WdLogSingleEntry1(2LL, 6772LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver data size is not zero for a NULL driver data buffer.",
          6772LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_24;
      }
      v21 = (struct DXGADAPTER *)operator new[]((unsigned int)Size, 0x4B677844u, 256LL);
      v31[2] = v21;
      if ( !v21 )
      {
        active = -1073741801;
        WdLogSingleEntry1(3LL, -1073741801LL);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
        if ( v30 )
          DXGADAPTER::ReleaseReference(v30);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
        if ( !v29 )
          return active;
        LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
        v19 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
        goto LABEL_16;
      }
      if ( &v23[v22] < v23 || (unsigned __int64)&v23[v22] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v21, v23, v22);
    }
    active = DmmInvalidateActiveVidPn(
               (DXGADAPTER *)v10,
               DXGK_AVIR_USERMODE,
               v21,
               v22,
               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v34,
               v26);
    operator delete(v21);
LABEL_12:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
    if ( v30 )
      DXGADAPTER::ReleaseReference(v30);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( !v29 )
      return active;
    v19 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_16:
    if ( v19 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v27);
    return active;
  }
  CurrentProcess = PsGetCurrentProcess(v5);
  WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
  v9 = PsGetCurrentProcess(v8);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x 0x%I64x encountered exception",
    -1073741811LL,
    v9,
    0LL,
    0LL,
    0LL);
LABEL_27:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v27);
  }
  return 3221225485LL;
}
