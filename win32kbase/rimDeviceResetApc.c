void __fastcall rimDeviceResetApc(PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  __int64 v5; // r8
  int v6; // edx
  int v7; // r8d
  __int64 v8; // rsi
  int v9; // eax
  _BYTE v10[16]; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v11[208]; // [rsp+60h] [rbp-E8h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v11);
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v10, 1LL, v5);
  InputTraceLogging::RIM::CompleteDeviceResetRequest((const struct RIMDEV *)ApcContext);
  LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      (_DWORD)gRimLog,
      4,
      1,
      12,
      (__int64)&WPP_62af42fa4e0f3c4768c5349c123bf845_Traceguids,
      (char)ApcContext);
  }
  if ( IoStatusBlock->Status >= 0 )
  {
    v8 = *((_QWORD *)ApcContext + 42);
    RIMLockExclusive(v8 + 104);
    v9 = *((_DWORD *)ApcContext + 46);
    if ( (v9 & 0x200000) == 0 )
    {
      *((_DWORD *)ApcContext + 46) = v9 | 0x200000;
      ZwSetEvent(*(HANDLE *)(v8 + 344), 0LL);
    }
    RIMDeliverDeviceResetRequest((char *)ApcContext);
    *(_QWORD *)(v8 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 104, 0LL);
    KeLeaveCriticalRegion();
  }
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v10);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v11);
}
