/*
 * XREFs of ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C00A9698
 * Callers:
 *     UserSetMITInputCallbacks @ 0x1C00A9568 (UserSetMITInputCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     CoreMsgCreatePort @ 0x1C00A9770 (CoreMsgCreatePort.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::CreateCoreMsgPort(
        InputExtensibilityCallout *this,
        __int64 a2,
        __int64 a3)
{
  InputExtensibilityCallout *v3; // rbx
  char v4; // di
  int Port; // esi
  int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r8d
  int v11; // edx
  int v12; // edx
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = this;
  v3 = gpInputExtensibilityCallout;
  if ( *((_QWORD *)gpInputExtensibilityCallout + 3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  P = 0LL;
  v4 = 1;
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
      v4 = 0;
    }
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 11;
      LOBYTE(v12) = v4;
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v6,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        3,
        11,
        (__int64)&WPP_eb9c0a0a317e3692f40fce5598b6b648_Traceguids,
        Port);
    }
  }
  else
  {
    RIMLockExclusive((__int64)v3 + 8);
    Port = CoreMsgCreatePort(v7, P, v8, (char *)v3 + 24);
    if ( Port < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v4 = 0;
      }
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = 10;
        LOBYTE(v11) = v4;
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v9,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          3,
          10,
          (__int64)&WPP_eb9c0a0a317e3692f40fce5598b6b648_Traceguids,
          Port);
      }
    }
    *((_QWORD *)v3 + 2) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v3 + 8, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)Port;
}
