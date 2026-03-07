__int64 __fastcall InitializeInputComponents(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  NSInstrumentation::CLeakTrackingAllocator *v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  NSInstrumentation::CLeakTrackingAllocator *v20; // rdi
  int v21; // eax
  __int64 v22; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  unsigned int *v26; // rdi
  __int64 v27; // rcx
  CInputSystemMetrics *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *Pool2; // rax
  _QWORD *v36; // rax
  unsigned int *v37; // rax
  struct InputVirtualization::RootSynthesizedMouseList *Instance; // rax
  unsigned __int64 v39; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v44; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v45; // [rsp+68h] [rbp-98h]
  __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  __int64 v48; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v49[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v50; // [rsp+A0h] [rbp-60h]
  int v51; // [rsp+B0h] [rbp-50h]
  PVOID BackTrace[20]; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v53[20]; // [rsp+160h] [rbp+60h] BYREF
  PVOID v54[26]; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v55; // [rsp+2E0h] [rbp+1E0h] BYREF
  unsigned int v56; // [rsp+2E8h] [rbp+1E8h] BYREF
  unsigned int v57; // [rsp+2F0h] [rbp+1F0h] BYREF
  unsigned __int64 v58; // [rsp+2F8h] [rbp+1F8h] BYREF

  if ( *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 16048) )
  {
    v55 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 451LL);
  }
  v7 = gpLeakTrackingAllocator;
  v55 = 1883524675;
  v8 = 872LL;
  v41 = 260LL;
  v46 = 872LL;
  v9 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v9 != 1 )
    {
      if ( v9 != 2 )
        goto LABEL_50;
      v58 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x70444E43u, &v58) )
      {
        v44 = &v41;
        v45 = &v55;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v7,
                                                                                           (__int64)&v44,
                                                                                           &v46);
        goto LABEL_6;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         888LL,
                                                                                         1883524675LL);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_50;
      _InterlockedIncrement64((volatile signed __int64 *)v7 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                v7,
                                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                v58,
                                BackTrace) )
          goto LABEL_7;
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                   v7,
                                   UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                   v58,
                                   BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_6;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v7 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_50;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70444E43u) )
      goto LABEL_50;
    Pool2 = (_QWORD *)ExAllocatePool2(v41 & 0xFFFFFFFFFFFFFFFDuLL, 888LL, v55);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v7 + 14),
          *Pool2 = 1883524675LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v7 + 1),
        (const void *)0x70444E43);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       872LL,
                                                                                       1883524675LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v7 + 14);
  }
LABEL_6:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_7:
    memset((void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64, 0, 0x368uLL);
    *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) = 0LL;
    *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = 0LL;
    *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 24) = 0LL;
    memset((void *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 32), 0, 0x348uLL);
    goto LABEL_8;
  }
LABEL_50:
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
LABEL_8:
  *(_QWORD *)(SGDGetUserSessionState(v8, v4, v5, v6) + 16048) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  if ( !*(_QWORD *)(SGDGetUserSessionState(v12, v11, v13, v14) + 16048) )
  {
    InputExtensibilityCallout::UnInitialize(v16, v15, v17, v18);
LABEL_66:
    v19 = -1073741801;
    goto LABEL_30;
  }
  v19 = CActivationObjectManager::Initialize();
  if ( v19 < 0 )
    goto LABEL_30;
  v19 = CInputGlobals::Initialize();
  if ( v19 < 0 )
    goto LABEL_30;
  v19 = CCursorClip::Initialize();
  if ( v19 < 0 )
    goto LABEL_30;
  v19 = CMasterInputThread::Initialize();
  if ( v19 < 0 )
    goto LABEL_30;
  if ( WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
  {
    v56 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 273LL);
  }
  v20 = gpLeakTrackingAllocator;
  v56 = 1884574539;
  v42 = 260LL;
  v47 = 144LL;
  v21 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v21 != 1 )
    {
      if ( v21 != 2 )
        goto LABEL_65;
      v39 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x7054534Bu, &v39) )
      {
        v49[0] = &v42;
        v49[1] = &v56;
        v22 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v20,
                (__int64)v49,
                &v47);
        goto LABEL_18;
      }
      v22 = ExAllocatePool2(260LL, 160LL, 1884574539LL);
      if ( !v22 )
        goto LABEL_65;
      _InterlockedIncrement64((volatile signed __int64 *)v20 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(v53);
      if ( (unsigned __int64)(v22 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                v20,
                                v22,
                                v39,
                                v53) )
          goto LABEL_19;
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                   v20,
                                   v22,
                                   v39,
                                   v53) )
      {
        v22 += 16LL;
        goto LABEL_18;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v20 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v22);
      goto LABEL_65;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x7054534Bu) )
      goto LABEL_65;
    v36 = (_QWORD *)ExAllocatePool2(v42 & 0xFFFFFFFFFFFFFFFDuLL, 160LL, v56);
    v22 = (__int64)v36;
    if ( !v36
      || (_InterlockedIncrement64((volatile signed __int64 *)v20 + 14),
          *v36 = 1884574539LL,
          v22 = (__int64)(v36 + 2),
          v36 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v20 + 1),
        (const void *)0x7054534B);
    }
  }
  else
  {
    v22 = ExAllocatePool2(260LL, 144LL, 1884574539LL);
    if ( v22 )
      _InterlockedIncrement64((volatile signed __int64 *)v20 + 14);
  }
LABEL_18:
  if ( !v22 )
  {
LABEL_65:
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    goto LABEL_66;
  }
LABEL_19:
  memset((void *)v22, 0, 0x90uLL);
  *(_QWORD *)(v22 + 24) = 0LL;
  *(_QWORD *)(v22 + 32) = 0LL;
  *(_QWORD *)(v22 + 40) = 0LL;
  *(_QWORD *)(v22 + 48) = 0LL;
  *(_QWORD *)v22 = &CKernelSensorThread::`vftable';
  *(_QWORD *)(v22 + 8) = 0LL;
  *(_QWORD *)(v22 + 16) = 0LL;
  *(_OWORD *)(v22 + 56) = 0LL;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = (PVOID)v22;
  *(_OWORD *)(v22 + 72) = 0LL;
  *(_QWORD *)(v22 + 88) = 0LL;
  *(_QWORD *)(v22 + 96) = 0LL;
  *(_QWORD *)(v22 + 104) = 0LL;
  *(_BYTE *)(v22 + 112) = 0;
  *(_DWORD *)(v22 + 116) = 0;
  *(_QWORD *)(v22 + 120) = 0LL;
  *(_DWORD *)(v22 + 128) = 100;
  *(_DWORD *)(v22 + 132) = 300;
  *(_BYTE *)(v22 + 136) = 1;
  v19 = CInputConfig::Initialize();
  if ( v19 < 0 )
    goto LABEL_30;
  v50 = 0LL;
  v51 = 0;
  InputDelegation::CInputDelegationInfo::gInstance = 0LL;
  dword_1C02D1848 = 0;
  v19 = CFrameIdGenerator::Initialize();
  if ( v19 < 0 )
    goto LABEL_30;
  if ( gpInputSystemMetrics )
  {
    v57 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 18LL);
  }
  v23 = gpLeakTrackingAllocator;
  v57 = 1699576147;
  v43 = 260LL;
  v48 = 12LL;
  v24 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v24 != 1 )
    {
      if ( v24 != 2 )
        goto LABEL_80;
      v40 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x654D7953u, &v40) )
      {
        v44 = &v43;
        v45 = &v57;
        v26 = (unsigned int *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                (__int64)v23,
                                (__int64)&v44,
                                &v48);
        goto LABEL_26;
      }
      v26 = (unsigned int *)ExAllocatePool2(260LL, 28LL, 1699576147LL);
      if ( !v26 )
        goto LABEL_80;
      _InterlockedIncrement64((volatile signed __int64 *)v23 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(v54);
      if ( (unsigned __int64)((unsigned __int16)v26 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                v23,
                                v26,
                                v40,
                                v54) )
          goto LABEL_27;
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                   v23,
                                   v26,
                                   v40,
                                   v54) )
      {
        v26 += 4;
        goto LABEL_26;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v23 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(v26);
      goto LABEL_80;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x654D7953u) )
      goto LABEL_80;
    v37 = (unsigned int *)ExAllocatePool2(v43 & 0xFFFFFFFFFFFFFFFDuLL, 28LL, v57);
    v26 = v37;
    if ( !v37
      || (_InterlockedIncrement64((volatile signed __int64 *)v23 + 14),
          *(_QWORD *)v37 = 1699576147LL,
          v26 = v37 + 4,
          v37 == (unsigned int *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v23 + 1),
        (const void *)0x654D7953);
    }
  }
  else
  {
    v26 = (unsigned int *)ExAllocatePool2(260LL, 12LL, 1699576147LL);
    if ( v26 )
      _InterlockedIncrement64((volatile signed __int64 *)v23 + 14);
  }
LABEL_26:
  if ( !v26 )
  {
LABEL_80:
    gpInputSystemMetrics = 0LL;
    goto LABEL_66;
  }
LABEL_27:
  gpInputSystemMetrics = v26;
  *(_QWORD *)v26 = 0LL;
  *(_QWORD *)(v26 + 1) = 0LL;
  v26[2] = 0;
  *v26 = 0;
  CInputSystemMetrics::WriteSystemMetricsKey(v25, 0LL, 0LL);
  CInputSystemMetrics::WriteSystemMetricsKey(v27, 0LL, 1LL);
  CInputSystemMetrics::WritePointerDevicePresenceKey(v28, v26[1]);
  if ( isChildPartition() )
  {
    Instance = InputVirtualization::RootSynthesizedMouseList::GetInstance();
    *((_QWORD *)Instance + 1) = Instance;
    *(_QWORD *)Instance = Instance;
  }
  InputObjectMap::s_hashTable = 0LL;
  Buffer = 0LL;
  InputObjectMap::s_hashTableLock = 0LL;
  v33 = SGDGetUserSessionState(v30, v29, v31, v32);
  v19 = 0;
  *(_QWORD *)(v33 + 3600) = 0LL;
  *(_QWORD *)(v33 + 3608) = 0LL;
LABEL_30:
  CDesktopInputSink::GetInstance();
  CContentRects::GetInstance();
  RegisterCoreMsgProviderPreferences(
    20,
    1,
    2,
    0,
    (__int64)lambda_7336048acd17859272a6f98208d72592_::_lambda_invoker_cdecl_);
  return (unsigned int)v19;
}
