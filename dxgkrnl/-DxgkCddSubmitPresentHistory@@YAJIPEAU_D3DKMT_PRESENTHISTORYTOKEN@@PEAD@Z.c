__int64 __fastcall DxgkCddSubmitPresentHistory(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, char *a3)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v8; // rdi
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // r13
  __int64 v11; // rdi
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // rdi
  unsigned int v18; // ecx
  int v19; // ecx
  __int64 v20; // rdi
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  __int64 v23; // r14
  struct _KEVENT *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  volatile signed __int64 *v28; // rcx
  volatile signed __int64 *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // ebx
  struct DXGADAPTER *v33; // rcx
  struct DXGADAPTER *v34; // rcx
  char *v35; // rcx
  DXGGLOBAL **v36; // rcx
  unsigned int v37; // esi
  __int64 v38; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // r9d
  __int64 v47; // rcx
  __int64 v48; // r8
  int v49; // r9d
  int v50; // eax
  char *v51; // rcx
  __int64 v52; // r14
  __int64 v53; // rax
  __int64 v54; // r9
  char *v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v61; // [rsp+70h] [rbp-98h] BYREF
  struct DXGADAPTER *v62; // [rsp+78h] [rbp-90h]
  char v63; // [rsp+80h] [rbp-88h]
  int v64; // [rsp+88h] [rbp-80h] BYREF
  __int64 v65; // [rsp+90h] [rbp-78h]
  char v66; // [rsp+98h] [rbp-70h]
  union _LARGE_INTEGER v67; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v68[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-58h]
  char v70; // [rsp+B8h] [rbp-50h]
  _QWORD v71[3]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v72[8]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v73[8]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v74; // [rsp+E8h] [rbp-20h]
  struct DXGADAPTER *v75; // [rsp+F0h] [rbp-18h]
  char v76; // [rsp+F8h] [rbp-10h]
  char *v77; // [rsp+100h] [rbp-8h]
  char v78[24]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v79[8]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v80; // [rsp+128h] [rbp+20h]
  struct DXGADAPTER *v81; // [rsp+130h] [rbp+28h]
  char v82; // [rsp+138h] [rbp+30h]
  __int64 v83; // [rsp+140h] [rbp+38h]
  __int64 v84; // [rsp+160h] [rbp+58h]
  char v85; // [rsp+168h] [rbp+60h]
  _BYTE v86[8]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v87[64]; // [rsp+180h] [rbp+78h] BYREF
  _BYTE v88[88]; // [rsp+1C0h] [rbp+B8h] BYREF

  v64 = -1;
  v4 = (unsigned int)a1;
  v65 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v66 = 1;
    v64 = 3036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 3036);
  }
  else
  {
    v66 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v64, 3036);
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess
    || (v9 = *(_DWORD *)(ProcessDxgProcess + 424) >> 7, (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0) )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v10 )
        goto LABEL_6;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v10 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v10 )
        goto LABEL_6;
      WdLogSingleEntry1(2LL, 2923LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v10 = v8;
  if ( !v8 )
  {
    v43 = PsGetCurrentProcess(v9);
    v37 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, v43);
    v45 = PsGetCurrentProcess(v44);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v45,
      0LL,
      0LL,
      0LL);
    goto LABEL_62;
  }
LABEL_6:
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v10 + 248));
  v11 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  v12 = (unsigned int)v4 >> 30;
  if ( (unsigned int)v11 < *((_DWORD *)v10 + 74) )
  {
    v15 = *((_QWORD *)v10 + 35);
    v16 = *(_DWORD *)(v15 + 16LL * (unsigned int)v11 + 8);
    if ( v12 == ((v16 >> 5) & 3)
      && (v16 & 0x2000) == 0
      && (v16 & 0x1F) != 0
      && (*(_BYTE *)(v15 + 16LL * (((unsigned int)v4 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 7 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)v10 + 66);
  ExReleasePushLockSharedEx((char *)v10 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( v10 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v10 + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1453LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v10 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v46 = *((_DWORD *)v10 + 68);
      if ( v46 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (const EVENT_DESCRIPTOR *)"g", v14, v46);
    }
    ExAcquirePushLockSharedEx((char *)v10 + 248, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)v10 + 66);
  if ( (unsigned int)v11 >= *((_DWORD *)v10 + 74) )
    goto LABEL_105;
  v17 = *((_QWORD *)v10 + 35) + 16 * v11;
  v18 = *(_DWORD *)(v17 + 8);
  if ( v12 != ((v18 >> 5) & 3) )
    goto LABEL_105;
  if ( (v18 & 0x2000) != 0 )
    goto LABEL_105;
  v19 = v18 & 0x1F;
  if ( !v19 )
    goto LABEL_105;
  if ( v19 != 7 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_105:
    _InterlockedDecrement((volatile signed __int32 *)v10 + 66);
    ExReleasePushLockSharedEx((char *)v10 + 248, 0LL);
    KeLeaveCriticalRegion();
    v57 = PsGetCurrentProcess(v56);
    v37 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v57, v4);
    v59 = PsGetCurrentProcess(v58);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid context handle 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      v59,
      v4,
      0LL,
      0LL);
    goto LABEL_62;
  }
  v20 = *(_QWORD *)v17;
  if ( !v20 )
    goto LABEL_105;
  _m_prefetchw((const void *)(v20 + 32));
  v21 = *(_QWORD *)(v20 + 32);
  if ( !v21 )
    goto LABEL_105;
  while ( 1 )
  {
    v22 = v21;
    v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 32), v21 + 1, v21);
    if ( v22 == v21 )
      break;
    if ( !v21 )
      goto LABEL_105;
  }
  _InterlockedDecrement((volatile signed __int32 *)v10 + 66);
  ExReleasePushLockSharedEx((char *)v10 + 248, 0LL);
  KeLeaveCriticalRegion();
  v23 = *(_QWORD *)(v20 + 16);
  v24 = *(struct _KEVENT **)(v23 + 16);
  if ( !KeReadStateEvent(v24 + 5) )
    KeWaitForSingleObject(&v24[5], Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v47, (const EVENT_DESCRIPTOR *)"g", v48, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
  }
  if ( v20 != -448 && *(struct _KTHREAD **)(v20 + 456) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1453LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v20 + 448, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v49 = *(_DWORD *)(v20 + 472);
      if ( v49 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, (const EVENT_DESCRIPTOR *)"g", v26, v49);
    }
    ExAcquirePushLockExclusiveEx(v20 + 448, 0LL);
  }
  *(_QWORD *)(v20 + 456) = KeGetCurrentThread();
  v62 = *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v62 + 3);
  v61 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v62 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v62 + 38);
  v63 = 1;
  v27 = *(_QWORD *)(v20 + 16);
  v28 = *(volatile signed __int64 **)(*(_QWORD *)(v27 + 16) + 16LL);
  v75 = (struct DXGADAPTER *)v28;
  v76 = 0;
  v77 = 0LL;
  if ( v28 )
  {
    _InterlockedIncrement64(v28 + 3);
    v74 = -1LL;
  }
  v29 = *(volatile signed __int64 **)(*(_QWORD *)(v27 + 16) + 16LL);
  v81 = (struct DXGADAPTER *)v29;
  v82 = 0;
  v83 = 0LL;
  if ( v29 )
  {
    _InterlockedIncrement64(v29 + 3);
    v80 = -1LL;
  }
  v84 = v27;
  v85 = 0;
  if ( v76 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v73, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v75 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v75 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, (const EVENT_DESCRIPTOR *)"g", v31, 72);
      KeWaitForSingleObject((char *)v75 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v75, a3);
  }
  v77 = 0LL;
  if ( a3 )
  {
    v50 = RtlStringCbCopyA(v78, 17LL, a3);
    v51 = v78;
    if ( v50 < 0 )
      v51 = v77;
    v77 = v51;
  }
  v76 = 1;
  if ( *(_DWORD *)(v84 + 608) == 1 )
  {
    v67.QuadPart = -100000LL;
    v32 = SubmitPresentHistoryToken(
            a2,
            (struct COREDEVICEACCESS *)v72,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v61,
            0LL,
            0,
            &v67,
            0LL,
            0LL,
            (struct DXGCONTEXT *)v20,
            0LL,
            a3);
  }
  else
  {
    COREACCESS::Release((COREACCESS *)v73);
    if ( v85 )
      COREACCESS::Release((COREACCESS *)v79);
    v32 = -1073741130;
    WdLogSingleEntry3(4LL, -1073741130LL, v20, v10);
  }
  v33 = v81;
  if ( v81 )
  {
    if ( v82 )
    {
      COREACCESS::Release((COREACCESS *)v79);
      v33 = v81;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v33 + 2), v33);
  }
  v34 = v75;
  if ( v75 )
  {
    if ( v76 )
    {
      v76 = 0;
      v34 = v75;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v75 + 23) )
      {
        DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v75, v77);
        v34 = v75;
      }
      v77 = 0LL;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v34 + 2), v34);
  }
  if ( v63 )
  {
    v35 = (char *)v62 + 136;
    v63 = 0;
    _InterlockedDecrement((volatile signed __int32 *)v62 + 38);
    ExReleasePushLockSharedEx(v35, 0LL);
    KeLeaveCriticalRegion();
    v36 = (DXGGLOBAL **)v62;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v36[2], (struct DXGADAPTER *)v36);
  }
  *(_QWORD *)(v20 + 456) = 0LL;
  ExReleasePushLockExclusiveEx(v20 + 448, 0LL);
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(v23 + 136));
  KeLeaveCriticalRegion();
  v37 = v32;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v52 = *(_QWORD *)(v20 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v71,
      (struct DXGDEVICE *)v52);
    v53 = *(_QWORD *)(v20 + 16);
    v70 = 0;
    v69 = *(_QWORD *)(*(_QWORD *)(v53 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v68);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v86, v52, 2, v54, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v86, v55);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v52 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v52, (struct DXGCONTEXT *)v20, (struct COREDEVICEACCESS *)v86);
    COREACCESS::~COREACCESS((COREACCESS *)v88);
    COREACCESS::~COREACCESS((COREACCESS *)v87);
    if ( v70 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v68);
    if ( v71[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v71);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v52 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v52 + 16), (struct DXGDEVICE *)v52);
  }
LABEL_62:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
  if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v38, v64);
  return v37;
}
