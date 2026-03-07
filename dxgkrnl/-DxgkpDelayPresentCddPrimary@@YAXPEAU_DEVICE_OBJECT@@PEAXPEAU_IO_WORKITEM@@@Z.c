void __fastcall DxgkpDelayPresentCddPrimary(PVOID IoObject, struct _LUID *Context, PIO_WORKITEM IoWorkItem)
{
  struct DXGGLOBAL *Global; // rax
  unsigned __int8 v5; // dl
  struct DXGSESSIONDATA *v6; // rax
  struct DXGSESSIONDATA *v7; // r13
  int CddDeviceAndContextForCurrentSession; // eax
  struct DXGDEVICE *v9; // rsi
  DXGADAPTER **v10; // r14
  __int64 v11; // r9
  __int64 v12; // r9
  volatile signed __int64 *v13; // r15
  int v14; // eax
  struct DXGGLOBAL *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rbx
  const wchar_t *v18; // r9
  int v19; // eax
  __int64 v20; // rbx
  struct DXGCONTEXT *v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r9
  char *v25; // rdx
  __int64 LowPart; // [rsp+28h] [rbp-E0h]
  __int64 v27; // [rsp+30h] [rbp-D8h]
  __int64 v28; // [rsp+38h] [rbp-D0h]
  struct DXGCONTEXT *v29; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGDEVICE *v30; // [rsp+60h] [rbp-A8h]
  _QWORD v31[2]; // [rsp+68h] [rbp-A0h] BYREF
  char v32; // [rsp+78h] [rbp-90h]
  _BYTE v33[8]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v34; // [rsp+90h] [rbp-78h]
  char v35; // [rsp+98h] [rbp-70h]
  _QWORD v36[2]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v37[16]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v38[7]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v39[8]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v40[64]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v41[88]; // [rsp+140h] [rbp+38h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+198h] [rbp+90h] BYREF
  char v43; // [rsp+1C8h] [rbp+C0h]
  _BYTE v44[8]; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v45[64]; // [rsp+1E0h] [rbp+D8h] BYREF
  _BYTE v46[88]; // [rsp+220h] [rbp+118h] BYREF

  v30 = 0LL;
  v29 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v6 = DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 118), v5);
  v7 = v6;
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, 295LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire console session mode change shared lock.",
      295LL,
      0LL,
      0LL,
      0LL,
      0LL);
    operator delete(Context);
    return;
  }
  v43 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)v6 + 2331));
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(Context, 0);
  v9 = v30;
  if ( CddDeviceAndContextForCurrentSession >= 0 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v37, v30);
    v10 = *(DXGADAPTER ***)(*((_QWORD *)v30 + 235) + 2920LL);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v38,
      &v29,
      1u,
      v11,
      1);
    v31[1] = v10[2];
    v32 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v39, (__int64)v9, 1, v12, 0);
    v13 = (volatile signed __int64 *)v29;
    if ( v38[0] )
    {
      v14 = COREDEVICEACCESS::AcquireExclusive((__int64)v39, 1LL);
      if ( v14 < 0 )
      {
        v17 = v14;
        WdLogSingleEntry2(2LL, v9, v14);
        v18 = L"Failed to acquire device core access shared on device 0x%I64x (Status = 0x%I64x).";
        v28 = 0LL;
        v27 = v17;
        LowPart = (__int64)v9;
      }
      else
      {
        if ( !DXGADAPTER::UsingSetTimingsFromVidPn(v10[2])
          || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)v10, Context[1].LowPart)
          && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)v10, Context[1].LowPart) != 3 )
        {
          goto LABEL_10;
        }
        if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)v10, Context[1].LowPart, 0) )
          goto LABEL_10;
        if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v10, Context[1].LowPart) )
          goto LABEL_10;
        if ( ADAPTER_DISPLAY::IsVidPnSourceVisible((ADAPTER_DISPLAY *)v10, Context[1].LowPart) )
          goto LABEL_10;
        v19 = ADAPTER_DISPLAY::PresentCddPrimary(
                (ADAPTER_DISPLAY *)v10,
                (struct DXGCONTEXT *)v13,
                Context[1].LowPart,
                (struct COREDEVICEACCESS *)v39);
        if ( v19 >= 0 )
          goto LABEL_10;
        v20 = v19;
        WdLogSingleEntry3(2LL, Context[1].LowPart, v10[2], v19);
        v18 = L"PresentFromCdd failed to present the existing Cdd Primary on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).";
        v28 = v20;
        v27 = (__int64)v10[2];
        LowPart = Context[1].LowPart;
      }
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, LowPart, v27, v28, 0LL, 0LL);
    }
    else
    {
      WdLogSingleEntry1(6LL, 345LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of memory - could not initialize context array lock exclusive.",
        345LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_10:
    COREACCESS::~COREACCESS((COREACCESS *)v41);
    COREACCESS::~COREACCESS((COREACCESS *)v40);
    if ( v32 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v38);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v37);
    goto LABEL_13;
  }
  v16 = CddDeviceAndContextForCurrentSession;
  WdLogSingleEntry3(2LL, Context->HighPart, Context->LowPart, CddDeviceAndContextForCurrentSession);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to get CDD device and context for adapter 0x%I64x%08I64x in console session (Status = 0x%I64x).",
    Context->HighPart,
    Context->LowPart,
    v16,
    0LL,
    0LL);
  v13 = (volatile signed __int64 *)v29;
LABEL_13:
  v15 = DXGGLOBAL::GetGlobal();
  DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)v15 + 118), v7);
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd64(v13 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v21 = v29;
      v22 = *((_QWORD *)v29 + 2);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v36,
        (struct DXGDEVICE *)v22);
      v23 = *((_QWORD *)v21 + 2);
      v35 = 0;
      v34 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, v22, 2, v24, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v44, v25);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v22, v29, (struct COREDEVICEACCESS *)v44);
      COREACCESS::~COREACCESS((COREACCESS *)v46);
      COREACCESS::~COREACCESS((COREACCESS *)v45);
      if ( v35 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
      if ( v36[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v22 + 16), (struct DXGDEVICE *)v22);
    }
    v9 = v30;
  }
  if ( v9 && _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
  operator delete(Context);
  if ( v43 )
    KeUnstackDetachProcess(&ApcState);
}
