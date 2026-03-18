/*
 * XREFs of rimDeviceResetApc @ 0x1C01B88C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C004763C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C0047C7C (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C00BEAB0 (RIMDeliverDeviceResetRequest.c)
 *     ?CompleteDeviceResetRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01B882C (-CompleteDeviceResetRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 */

void __fastcall rimDeviceResetApc(PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, __int64 Reserved)
{
  int v5; // edx
  int v6; // r8d
  __int64 v7; // rsi
  int v8; // eax
  char v9; // [rsp+60h] [rbp+8h] BYREF

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v9, 1LL, Reserved);
  InputTraceLogging::RIM::CompleteDeviceResetRequest((const struct RIMDEV *)ApcContext);
  LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      v6,
      (_DWORD)gRimLog,
      4,
      1,
      12,
      (__int64)&WPP_65d7bcb466db3ec3acd35854a27b9a54_Traceguids,
      (char)ApcContext);
  }
  if ( IoStatusBlock->Status >= 0 )
  {
    v7 = *((_QWORD *)ApcContext + 42);
    RIMLockExclusive(v7 + 104);
    v8 = *((_DWORD *)ApcContext + 46);
    if ( (v8 & 0x200000) == 0 )
    {
      *((_DWORD *)ApcContext + 46) = v8 | 0x200000;
      ZwSetEvent(*(HANDLE *)(v7 + 344), 0LL);
    }
    RIMDeliverDeviceResetRequest((char *)ApcContext);
    *(_QWORD *)(v7 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 104, 0LL);
    KeLeaveCriticalRegion();
  }
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v9);
}
