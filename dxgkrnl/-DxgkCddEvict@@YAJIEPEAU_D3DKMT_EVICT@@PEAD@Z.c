__int64 __fastcall DxgkCddEvict(__int64 a1, char a2, struct _D3DKMT_EVICT *a3, char *a4)
{
  __int64 v5; // rdi
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KTHREAD **Current; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 CurrentProcess; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  struct DXGDEVICE *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rbx
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  const D3DKMT_HANDLE *v26; // rbx
  D3DKMT_HANDLE v27; // edi
  unsigned int v28; // eax
  __int64 v29; // r8
  int v30; // ecx
  struct _EX_RUNDOWN_REF *v31; // rdx
  ULONG_PTR Count; // r8
  UINT v33; // edx
  __int64 i; // r8
  __int64 v35; // rcx
  struct DXGDEVICE *v36; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v37; // [rsp+58h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+68h] [rbp-98h] BYREF
  __int64 v40; // [rsp+70h] [rbp-90h]
  char v41; // [rsp+78h] [rbp-88h]
  _BYTE v42[16]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v43[3]; // [rsp+90h] [rbp-70h] BYREF
  UINT v44; // [rsp+A8h] [rbp-58h]
  char v45[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v46[64]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v47[88]; // [rsp+F8h] [rbp-8h] BYREF

  v39 = -1;
  v5 = (unsigned int)a1;
  v40 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v41 = 1;
    v39 = 3061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 3061);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 3061);
  v43[0] = 0LL;
  v44 = 0;
  if ( !a2 )
    goto LABEL_4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8);
  v15 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v14);
    v9 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v18 = PsGetCurrentProcess(v17);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v18,
      0LL,
      0LL,
      0LL);
    goto LABEL_5;
  }
  v37 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v36, v5, Current, &v37);
  v19 = v37;
  if ( v37 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v42, v37);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, (__int64)v19, 0, v22, 0);
    v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v45, 0LL);
    v9 = v23;
    if ( v23 < 0 )
    {
      WdLogSingleEntry3(4LL, v23, v19, v15);
LABEL_41:
      COREACCESS::~COREACCESS((COREACCESS *)v47);
      COREACCESS::~COREACCESS((COREACCESS *)v46);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v42);
      goto LABEL_42;
    }
    v24 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL);
    if ( *(int *)(v24 + 2552) < 0x2000 )
      v25 = 1LL;
    else
      v25 = *(unsigned int *)(v24 + 288);
    PagedPoolArray<unsigned int,4>::AllocateElements(v43, v25);
    v26 = (const D3DKMT_HANDLE *)v43[0];
    if ( !v43[0] )
    {
      WdLogSingleEntry1(2LL, 3597LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to allocation allocation array",
        3597LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v9 = -1073741801;
      goto LABEL_41;
    }
    v27 = *a3->AllocationList;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v15 + 248));
    v28 = (v27 >> 6) & 0xFFFFFF;
    if ( v28 < *(_DWORD *)(v15 + 296) )
    {
      v29 = *(_QWORD *)(v15 + 280);
      if ( ((v27 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16LL * v28 + 8) & 0x60)
        && (*(_DWORD *)(v29 + 16LL * v28 + 8) & 0x2000) == 0 )
      {
        v30 = *(_DWORD *)(v29 + 16LL * v28 + 8) & 0x1F;
        if ( v30 )
        {
          if ( v30 == 5 )
          {
            v31 = *(struct _EX_RUNDOWN_REF **)(v29 + 16LL * v28);
            goto LABEL_27;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v31 = 0LL;
LABEL_27:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v38, v31);
    _InterlockedDecrement((volatile signed __int32 *)(v15 + 264));
    ExReleasePushLockSharedEx(v15 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( v38 )
    {
      Count = v38[5].Count;
      v33 = 0;
      if ( !Count )
      {
LABEL_36:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v38);
        COREACCESS::~COREACCESS((COREACCESS *)v47);
        COREACCESS::~COREACCESS((COREACCESS *)v46);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v42);
        if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
LABEL_4:
        v9 = DxgkEvictInternal(a3, 0, a4);
        goto LABEL_5;
      }
      for ( i = *(_QWORD *)(Count + 24); ; i = *(_QWORD *)(i + 64) )
      {
        if ( !i )
        {
          a3->AllocationList = v26;
          a3->NumAllocations = v33;
          goto LABEL_36;
        }
        if ( v33 >= v44 )
          break;
        v35 = v33++;
        v26[v35] = *(_DWORD *)(i + 16);
      }
      WdLogSingleEntry1(2LL, 3623LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Allocation index exceeds number of allocations in the array",
        3623LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v9 = -1073741811;
    }
    else
    {
      v9 = -1073741811;
      WdLogSingleEntry2(3LL, *a3->AllocationList, -1073741811LL);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v38);
    goto LABEL_41;
  }
  v20 = v5;
  v21 = v5;
  v9 = -1073741811;
  WdLogSingleEntry3(2LL, -1073741811LL, v20, v15);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
    -1073741811LL,
    v21,
    v15,
    0LL,
    0LL);
LABEL_42:
  if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
LABEL_5:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v43);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 )
  {
    LOBYTE(v10) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v39);
  }
  return v9;
}
