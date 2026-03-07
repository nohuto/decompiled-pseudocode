__int64 __fastcall DxgkCddEnable(
        __int64 a1,
        int a2,
        const struct _CDDDXGK_INTERFACE *a3,
        unsigned int a4,
        const struct _D3DKMT_DISPLAYMODE *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int *a8)
{
  unsigned int v10; // r14d
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  volatile signed __int32 *v15; // rdi
  int v16; // r15d
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // r9
  int v21; // eax
  unsigned int v22; // edi
  __int64 v23; // rdi
  unsigned int CddShadowPitch; // eax
  unsigned int v25; // ebx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // r12
  const wchar_t *v30; // rax
  __int64 v31; // r13
  __int64 CurrentProcess; // rax
  __int64 v33; // rcx
  int v34; // edx
  void **v35; // rsi
  ADAPTER_DISPLAY *v36; // rcx
  void *DoDCddShadowSection; // rax
  unsigned __int64 v38; // rcx
  unsigned int v39; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A0h]
  char v42; // [rsp+68h] [rbp-98h]
  void **v43; // [rsp+70h] [rbp-90h]
  unsigned int *v44; // [rsp+78h] [rbp-88h]
  struct _CDDDXGK_INTERFACE *v45; // [rsp+80h] [rbp-80h]
  char v46[8]; // [rsp+90h] [rbp-70h] BYREF
  char v47[64]; // [rsp+98h] [rbp-68h] BYREF
  char v48[88]; // [rsp+D8h] [rbp-28h] BYREF

  v40 = -1;
  v41 = 0LL;
  v10 = a1;
  v43 = a6;
  v44 = a8;
  v45 = a3;
  v39 = a1;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v42 = 1;
    v40 = 3002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 3002);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 3002);
  if ( (a2 & 0x40000000) != 0 )
  {
    v29 = 450LL;
    WdLogSingleEntry1(1LL, 450LL);
    v30 = L"(OLD_MODE_CHANGE & Win32kCommand) == 0";
    v25 = -1073741637;
    v31 = 0LL;
    v16 = 262146;
LABEL_25:
    v14 = 0LL;
LABEL_30:
    DxgkLogInternalTriageEvent(0LL, v16, -1, (__int64)v30, v29, v31, v14, 0LL, 0LL);
    goto LABEL_17;
  }
  Current = DXGPROCESS::GetCurrent(v11);
  v14 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v13);
    v25 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v16 = 0x40000;
    v29 = -1073741811LL;
    v31 = PsGetCurrentProcess(v33);
    v30 = L"0x%I64x Unexpected process 0x%I64x";
    goto LABEL_25;
  }
  v15 = (volatile signed __int32 *)((char *)Current + 248);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v16 = 0x40000;
  v17 = (v10 >> 6) & 0xFFFFFF;
  if ( v17 >= *(_DWORD *)(v14 + 296) )
    goto LABEL_9;
  v18 = *(_QWORD *)(v14 + 280);
  if ( ((v39 >> 25) & 0x60) != (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0x60) )
    goto LABEL_9;
  if ( (*(_DWORD *)(v18 + 16LL * v17 + 8) & 0x2000) != 0 )
    goto LABEL_9;
  v34 = *(_DWORD *)(v18 + 16LL * v17 + 8) & 0x1F;
  if ( !v34 )
    goto LABEL_9;
  if ( v34 != 3 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
    v19 = 0LL;
    goto LABEL_10;
  }
  v19 = *(_QWORD *)(v18 + 16LL * v17);
LABEL_10:
  _InterlockedDecrement(v15 + 4);
  ExReleasePushLockSharedEx(v15, 0LL);
  KeLeaveCriticalRegion();
  if ( !v19 )
  {
    v31 = v39;
    v25 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v39, v14);
    v30 = L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x";
    v29 = -1073741811LL;
    goto LABEL_30;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v46, v19, 1, v20, 0);
  v21 = COREDEVICEACCESS::AcquireExclusive((__int64)v46, 2LL);
  v22 = v21;
  if ( v21 < 0 )
  {
    WdLogSingleEntry3(4LL, v21, v19, v14);
    v25 = v22;
  }
  else
  {
    v23 = *(_QWORD *)(v19 + 1880);
    if ( !v23 || !*(_QWORD *)(v23 + 2920) )
    {
      WdLogSingleEntry1(1LL, 486LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
        486LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_QWORD *)(v19 + 1880) != *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) )
    {
      v35 = v43;
      if ( !*v43 && (*(_BYTE *)(v19 + 1901) & 1) == 0 )
      {
        if ( !a7 )
        {
          WdLogSingleEntry1(1LL, 504LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(ppDoDShadowSession != NULL) && (pDoDShadowSize != NULL)",
            504LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( ADAPTER_DISPLAY::IsIdenticalMode(*(ADAPTER_DISPLAY **)(v23 + 2920), a4) )
        {
          v36 = *(ADAPTER_DISPLAY **)(v23 + 2920);
          v39 = 0;
          DoDCddShadowSection = ADAPTER_DISPLAY::GetDoDCddShadowSection(v36, a4, &v39);
          v38 = v39;
          if ( *a7 > v39 )
          {
            if ( DoDCddShadowSection )
              ObfDereferenceObject(DoDCddShadowSection);
          }
          else
          {
            *v35 = DoDCddShadowSection;
            *a7 = v38;
          }
        }
      }
    }
    CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v23 + 2920), a4);
    *v44 = CddShadowPitch;
    ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v23 + 2920), a4, 1u);
    ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v23 + 2920), a4, v45);
    v25 = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v48);
  COREACCESS::~COREACCESS((COREACCESS *)v47);
LABEL_17:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 )
  {
    LOBYTE(v26) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v40);
  }
  return v25;
}
