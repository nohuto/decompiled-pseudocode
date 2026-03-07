__int64 __fastcall DxgkInvalidateCache(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rsi
  struct DXGDEVICE *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // r9
  int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // r14
  ULONG_PTR Count; // rdx
  ULONG_PTR v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGDEVICE *v21; // [rsp+50h] [rbp-128h] BYREF
  int v22; // [rsp+58h] [rbp-120h] BYREF
  __int64 v23; // [rsp+60h] [rbp-118h]
  char v24; // [rsp+68h] [rbp-110h]
  struct DXGDEVICE *v25; // [rsp+70h] [rbp-108h] BYREF
  struct _EX_RUNDOWN_REF *v26; // [rsp+78h] [rbp-100h] BYREF
  _BYTE v27[16]; // [rsp+80h] [rbp-F8h] BYREF
  unsigned int v28[4]; // [rsp+90h] [rbp-E8h]
  __int64 v29; // [rsp+A0h] [rbp-D8h]
  _BYTE v30[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v3 = a1;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2122;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2122);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2122);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, 34LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 34LL, 0LL, 0LL, 0LL, 0LL);
LABEL_29:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v22);
    }
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v28 = *(_OWORD *)v3;
  v29 = *(_QWORD *)(v3 + 16);
  v25 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v21, v28[0], Current, &v25);
  v6 = v25;
  if ( !v25 )
  {
    v7 = v28[0];
    WdLogSingleEntry1(2LL, v28[0]);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_26:
    if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
    goto LABEL_29;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v27,
    v25);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v6, 0, v8, 0);
  v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30, 0LL);
  if ( v9 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v27);
    if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v22);
    return (unsigned int)v9;
  }
  v13 = v28[1];
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v26, v28[1]);
  if ( !v26 )
  {
    WdLogSingleEntry2(3LL, v6, (unsigned int)v13);
LABEL_25:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v26);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v27);
    goto LABEL_26;
  }
  Count = v26[1].Count;
  if ( (struct DXGDEVICE *)Count != v6 )
  {
    WdLogSingleEntry2(2LL, Count, v6);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Mismatch between allocation device 0x%p and paging queue device 0x%p",
      v26[1].Count,
      (__int64)v6,
      0LL,
      0LL,
      0LL);
    goto LABEL_25;
  }
  v15 = v26[3].Count;
  if ( !v15 )
  {
    WdLogSingleEntry3(3LL, v6, v13, v26);
    goto LABEL_25;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, ULONG_PTR, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 760LL)
                                                                                                  + 8LL)
                                                                                      + 1056LL))(
          *(_QWORD *)(*((_QWORD *)v6 + 2) + 768LL),
          0LL,
          0LL,
          v15,
          *(_QWORD *)&v28[2],
          v29);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v26);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v27);
  if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v22);
  return v18;
}
