void __fastcall DxgkReleaseVidPnSourceOwnerAndRestartCdds(
        struct DXGDEVICE *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        char a3)
{
  __int64 v3; // rsi
  char v7; // r15
  int ProcessSessionId; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // r9
  char v16; // bl
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v18; // r9
  struct DXGDEVICE *v19; // rbx
  __int64 v20; // rax
  struct DXGDEVICE *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  char v25; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v26; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int8 v27[6]; // [rsp+52h] [rbp-AEh] BYREF
  struct DXGDEVICE *v28[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v29[24]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v30[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v31[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v32[88]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v33[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v34[64]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v35[88]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v36[432]; // [rsp+1C0h] [rbp+C0h] BYREF

  v3 = *((_QWORD *)a1 + 235);
  v26 = 0;
  v27[0] = 0;
  v7 = 0;
  if ( !v3 )
  {
    WdLogSingleEntry1(1LL, 2596LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 2596LL, 0LL, 0LL, 0LL, 0LL);
  }
  ProcessSessionId = PsGetProcessSessionId(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL));
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v10, v9, v11, v12) )
  {
    WdLogSingleEntry1(1LL, 2602LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsGetProcessSessionId(pDevice->GetProcess()->GetEProcess()) == PsGetCurrentProcessSessionId()",
      2602LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 2604LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      2604LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v3 + 2920) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 2605LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pDisplayAdapter->GetDisplayCore()->IsCoreResourceSharedOwner()",
      2605LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v36,
    *(struct ADAPTER_DISPLAY **)(v3 + 2920),
    *((struct DXGPROCESS **)a1 + 5));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (struct DXGFASTMUTEX *const)(*((_QWORD *)a1 + 5) + 376LL), 0);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v36);
  v25 = 0;
  v13 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v25, 1);
  if ( v13 >= 0 )
  {
    v28[0] = 0LL;
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v3 + 404),
                                             v28,
                                             0LL,
                                             0LL,
                                             0);
    if ( CddDeviceAndContextForCurrentSession < 0 )
      WdLogSingleEntry1(4LL, CddDeviceAndContextForCurrentSession);
    v19 = v28[0];
    if ( v28[0] )
    {
      v20 = *((_QWORD *)a1 + 2);
      if ( *((_QWORD *)v28[0] + 2) != v20 )
        v19 = 0LL;
      v28[0] = v19;
      if ( v19 )
      {
        if ( *((_QWORD *)v19 + 2) != v20 )
        {
          WdLogSingleEntry1(1LL, 2673LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pCddDevice == NULL) || (pCddDevice->GetRenderCore() == pDevice->GetRenderCore())",
            2673LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *((_BYTE *)v19 + 1937) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
      }
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)a1, 1, v18, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v30);
    v21 = v28[0];
    if ( *(_DWORD *)(v3 + 200) != 1 )
      goto LABEL_26;
    if ( !*(_QWORD *)(v3 + 2920) )
    {
      WdLogSingleEntry1(1LL, 2709LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
        2709LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2920), a1)
      || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2920), a1) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v36, (struct _KTHREAD **)a1, -1);
      ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(*(PERESOURCE ***)(v3 + 2920), a1);
      v7 = 1;
      if ( v21 )
        ADAPTER_DISPLAY::EnsureGdiOutput(
          *(ADAPTER_DISPLAY **)(v3 + 2920),
          v21,
          (struct COREDEVICEACCESS *)v30,
          &v26,
          v27,
          a2);
      MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v36, v26);
    }
    else
    {
LABEL_26:
      WdLogSingleEntry2(4LL, a1, v3);
    }
    if ( a3
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2920), a1)
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2920), a1)) )
    {
      ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 2920), a1);
    }
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v30);
    if ( v21 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
      *((_BYTE *)v21 + 1937) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v28[0] + 2), v28[0]);
    }
    v16 = v25;
    if ( v25 )
    {
      v16 = 0;
      DxgkReleaseSessionModeChangeLock();
    }
    if ( v26 )
    {
      if ( v27[0] )
      {
        v24 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 88LL);
        if ( v24 )
          (*(void (**)(void))(v24 + 192))();
      }
    }
    if ( v7 )
    {
      v28[1] = 0LL;
      v28[0] = (struct DXGDEVICE *)1;
      if ( (int)DxgkStatusChangeNotify((int *)v28, v22, v23) < 0 )
      {
        WdLogSingleEntry1(1LL, 2789LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 2789LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v32);
    COREACCESS::~COREACCESS((COREACCESS *)v31);
  }
  else
  {
    v14 = v13;
    WdLogSingleEntry1(2LL, v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      v14,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( a3 )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, (__int64)a1, 1, v15, 0);
      COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v33);
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2920), a1)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2920), a1) )
      {
        ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 2920), a1);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v35);
      COREACCESS::~COREACCESS((COREACCESS *)v34);
    }
    v16 = v25;
  }
  if ( v16 )
    DxgkReleaseSessionModeChangeLock();
  if ( v29[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v36);
}
