/*
 * XREFs of ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C00C010C
 * Callers:
 *     UserSetMITInputCallbacks @ 0x1C00BFFC0 (UserSetMITInputCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     CoreMsgCreatePort @ 0x1C00C01E8 (CoreMsgCreatePort.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::CreateCoreMsgPort(InputExtensibilityCallout *this)
{
  char v2; // di
  int Port; // esi
  int v4; // r8d
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r8d
  int v9; // edx
  int v10; // edx
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 3) )
  {
    LODWORD(P) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 137LL);
  }
  P = 0LL;
  v2 = 1;
  Port = SeConvertStringSecurityDescriptorToSecurityDescriptor(
           L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)",
           1LL,
           &P);
  if ( Port < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v2 = 0;
    }
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 11;
      LOBYTE(v10) = v2;
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v4,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        3,
        11,
        (__int64)&WPP_46cff15625553895f5635fbb0ea0c21f_Traceguids,
        Port);
    }
  }
  else
  {
    RIMLockExclusive((__int64)this + 8);
    Port = CoreMsgCreatePort(v5, P, v6, (char *)this + 24);
    if ( Port < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v2 = 0;
      }
      if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 10;
        LOBYTE(v9) = v2;
        LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          v7,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          3,
          10,
          (__int64)&WPP_46cff15625553895f5635fbb0ea0c21f_Traceguids,
          Port);
      }
    }
    *((_QWORD *)this + 2) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 8, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)Port;
}
