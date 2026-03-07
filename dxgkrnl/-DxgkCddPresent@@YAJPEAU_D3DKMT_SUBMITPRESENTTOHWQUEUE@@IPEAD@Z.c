__int64 __fastcall DxgkCddPresent(struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *a1, unsigned int a2, char *a3)
{
  ULONG v3; // r13d
  unsigned int v4; // r12d
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  D3DKMT_HANDLE hDevice; // edx
  __int64 v15; // rcx
  DXGCONTEXT *v16; // rsi
  D3DKMT_HANDLE v17; // ebx
  __int64 CurrentProcess; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // rdi
  __int64 v23; // r9
  ULONG BroadcastContextCount; // ebx
  __int64 v25; // rbx
  _QWORD *Pool2; // rax
  __int64 v27; // rsi
  D3DKMT_HANDLE v28; // ebx
  unsigned int v29; // eax
  __int64 v30; // r8
  int v31; // ecx
  __int64 v32; // rbx
  PVOID v33; // rdx
  __int64 v34; // r8
  struct DXGCONTEXT *v35; // rbx
  __int64 v36; // r9
  int v37; // eax
  int v38; // ebx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r8
  struct DXGCONTEXT *v43; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v44; // [rsp+58h] [rbp-A8h]
  int v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h]
  char v47; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h]
  _BYTE v49[32]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v50; // [rsp+A0h] [rbp-60h]
  char *v51; // [rsp+A8h] [rbp-58h]
  _BYTE v52[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-48h]
  char v54; // [rsp+C0h] [rbp-40h]
  _BYTE v55[16]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v56[16]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v57[7]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v58[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v59[64]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v60[88]; // [rsp+168h] [rbp+68h] BYREF

  v45 = -1;
  v3 = 0;
  v4 = a2;
  v51 = a3;
  v44 = a2;
  v46 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v47 = 1;
    v45 = 3008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3008);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v45, 3008);
  Current = DXGPROCESS::GetCurrent(v6);
  v9 = (__int64)Current;
  if ( Current )
  {
    hDevice = a1->PrivatePresentData.hDevice;
    v43 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v56, hDevice, Current, &v43, 0, 1);
    v16 = v43;
    if ( !v43 )
    {
      v17 = a1->PrivatePresentData.hDevice;
      CurrentProcess = PsGetCurrentProcess(v15);
      LODWORD(v11) = -1073741811;
      WdLogSingleEntry3(2LL, -1073741811LL, CurrentProcess, v17);
      v19 = a1->PrivatePresentData.hDevice;
      v21 = PsGetCurrentProcess(v20);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid context handle 0x%I64x 0x%I64x 0x%I64x",
        -1073741811LL,
        v21,
        v19,
        0LL,
        0LL);
LABEL_50:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v56);
      goto LABEL_51;
    }
    v22 = (__int64 *)((char *)v43 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
      (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v55,
      *((struct DXGDEVICE **)v43 + 2));
    BroadcastContextCount = a1->PrivatePresentData.BroadcastContextCount;
    if ( BroadcastContextCount > 0x40 )
    {
      LODWORD(v11) = -1073741811;
      WdLogSingleEntry2(3LL, v16, -1073741811LL);
LABEL_49:
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v55);
      goto LABEL_50;
    }
    v25 = BroadcastContextCount + 1;
    P = 0LL;
    v50 = 0;
    if ( (unsigned int)v25 <= 4 )
    {
      Pool2 = v49;
      P = v49;
      if ( (_DWORD)v25 )
      {
        memset(v49, 0, 8LL * (unsigned int)v25);
        Pool2 = P;
      }
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v25 < 8 )
        goto LABEL_17;
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v25, 1265072196LL);
      P = Pool2;
    }
    v50 = v25;
    if ( Pool2 )
    {
      *Pool2 = v16;
      if ( a1->PrivatePresentData.BroadcastContextCount )
      {
        while ( 1 )
        {
          v27 = v3;
          v28 = a1->PrivatePresentData.BroadcastContext[v3];
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v9 + 248));
          v29 = (v28 >> 6) & 0xFFFFFF;
          if ( v29 < *(_DWORD *)(v9 + 296)
            && (v30 = *(_QWORD *)(v9 + 280), ((v28 >> 25) & 0x60) == (*(_BYTE *)(v30 + 16LL * v29 + 8) & 0x60))
            && (*(_DWORD *)(v30 + 16LL * v29 + 8) & 0x2000) == 0
            && (v31 = *(_DWORD *)(v30 + 16LL * v29 + 8) & 0x1F) != 0 )
          {
            if ( v31 == 7 )
            {
              v32 = *(_QWORD *)(v30 + 16LL * v29);
            }
            else
            {
              WdLogSingleEntry1(2LL, 267LL);
              v32 = 0LL;
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
            }
          }
          else
          {
            v32 = 0LL;
          }
          _InterlockedDecrement((volatile signed __int32 *)(v9 + 264));
          ExReleasePushLockSharedEx(v9 + 248, 0LL);
          KeLeaveCriticalRegion();
          *((_QWORD *)P + ++v3) = v32;
          v33 = P;
          v34 = *((_QWORD *)P + v3);
          if ( !v34 || *(_QWORD *)(v34 + 16) != *v22 )
            break;
          if ( v3 >= a1->PrivatePresentData.BroadcastContextCount )
          {
            v16 = v43;
            v4 = v44;
            goto LABEL_33;
          }
        }
        v35 = v43;
        LODWORD(v11) = -1073741811;
        WdLogSingleEntry4(2LL, v43, a1->PrivatePresentData.BroadcastContext[v27], v27, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
          (__int64)v35,
          a1->PrivatePresentData.BroadcastContext[v27],
          v27,
          -1073741811LL,
          0LL);
      }
      else
      {
        v33 = P;
LABEL_33:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
          (__int64)v57,
          v33,
          v50,
          v23,
          1);
        if ( v57[0] )
        {
          v53 = *(_QWORD *)(*(_QWORD *)(*v22 + 16) + 16LL);
          v54 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v58, *v22, 2, v36, 0);
          v37 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v58, v51);
          v38 = v37;
          if ( v37 >= 0 )
          {
            v39 = DXGCONTEXT::PresentFromCdd(
                    v16,
                    a1,
                    v4,
                    (struct COREDEVICEACCESS *)v58,
                    (struct DXGADAPTERSTOPRESETLOCKSHARED *)v52,
                    (struct DXGCONTEXT **)P);
            v11 = v39;
            if ( v39 < 0 )
            {
              if ( v39 == -1071775482 )
              {
                WdLogSingleEntry3(4LL, -1071775482LL, v16, v9);
              }
              else if ( v39 != -1071774910 )
              {
                WdLogSingleEntry3(2LL, v39, v16, v9);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"0x%I64x PresentFromCdd failed 0x%I64x 0x%I64x",
                  v11,
                  (__int64)v16,
                  v9,
                  0LL,
                  0LL);
              }
            }
          }
          else
          {
            WdLogSingleEntry3(4LL, v37, v16, v9);
            LODWORD(v11) = v38;
          }
          COREACCESS::~COREACCESS((COREACCESS *)v60);
          COREACCESS::~COREACCESS((COREACCESS *)v59);
          if ( v54 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
        }
        else
        {
          WdLogSingleEntry1(3LL, 2286LL);
          LODWORD(v11) = -1073741801;
        }
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v57);
      }
      goto LABEL_45;
    }
LABEL_17:
    WdLogSingleEntry1(3LL, 2247LL);
    LODWORD(v11) = -1073741801;
LABEL_45:
    if ( P != v49 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v50 = 0;
    goto LABEL_49;
  }
  v10 = PsGetCurrentProcess(v8);
  LODWORD(v11) = -1073741811;
  WdLogSingleEntry2(2LL, -1073741811LL, v10);
  v13 = PsGetCurrentProcess(v12);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
    -1073741811LL,
    v13,
    0LL,
    0LL,
    0LL);
LABEL_51:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
  if ( v47 )
  {
    LOBYTE(v40) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v45);
  }
  return (unsigned int)v11;
}
