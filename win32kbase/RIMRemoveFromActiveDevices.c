__int64 __fastcall RIMRemoveFromActiveDevices(__int64 a1, __int64 a2)
{
  int v4; // r8d
  __int64 v5; // rdx
  _QWORD *v6; // r15
  _QWORD *v7; // rdi
  __int64 LastDeviceFrame; // rax
  __int64 v9; // rbp
  unsigned int v10; // esi
  char *v11; // rbp
  _QWORD *v12; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  _QWORD *v20; // rax
  char v21; // [rsp+98h] [rbp+10h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v21, (struct _KTHREAD **)(a1 + 760));
  v5 = *(_QWORD *)(a2 + 16);
  v6 = (_QWORD *)(a1 + 448);
  v7 = *(_QWORD **)(a1 + 448);
  if ( v5 )
  {
    LastDeviceFrame = rimFindLastDeviceFrame(a1);
    v9 = LastDeviceFrame;
    if ( LastDeviceFrame )
    {
      v10 = 0;
      if ( *(_DWORD *)(LastDeviceFrame + 24) )
      {
        do
        {
          if ( (*(_DWORD *)(192LL * v10 + *(_QWORD *)(v9 + 232) + 28) & 0x2000006) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2571);
          ++v10;
        }
        while ( v10 != *(_DWORD *)(v9 + 24) );
        v6 = (_QWORD *)(a1 + 448);
      }
    }
  }
  if ( *(_QWORD *)(a1 + 480) == a2 )
    RIMUpdatePrimaryDevice(a1, 0LL);
  while ( v7 != v6 )
  {
    v11 = (char *)(v7 - 1);
    v12 = v7;
    v7 = (_QWORD *)*v7;
    if ( *(_QWORD *)v11 == a2 )
    {
      v14 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(v14 + 188) &= ~0x10u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v5) = 0;
      }
      if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v5,
          v4,
          (_DWORD)gRimLog,
          4,
          1,
          37,
          (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids,
          v14);
      }
      if ( (*((_DWORD *)v11 + 6) & 1) == 0 )
      {
        Feature_RIMUserCritOpt__private_ReportDeviceUsage();
        if ( IS_USERCRIT_OWNED_AT_ALL(v16, v15, v17, v18) )
          ApiSetPostPointerDeviceOutOfRangeMessage(a2);
        else
          rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem(a1, v14, 0LL);
      }
      v19 = *v12;
      if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v20 = (_QWORD *)v12[1], (_QWORD *)*v20 != v12) )
        __fastfail(3u);
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v11);
      if ( !*(_DWORD *)(a1 + 464) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2630);
      --*(_DWORD *)(a1 + 464);
      break;
    }
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v21);
  return 1LL;
}
