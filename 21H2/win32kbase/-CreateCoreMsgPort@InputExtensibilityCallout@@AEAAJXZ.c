/*
 * XREFs of ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C007459C
 * Callers:
 *     UserSetMITInputCallbacks @ 0x1C0074670 (UserSetMITInputCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     CoreMsgCreatePort @ 0x1C00744C8 (CoreMsgCreatePort.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::CreateCoreMsgPort(InputExtensibilityCallout *this)
{
  InputExtensibilityCallout *v1; // rbx
  int v2; // edx
  int Port; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // edx
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  P = this;
  v1 = gpInputExtensibilityCallout;
  if ( *((_QWORD *)gpInputExtensibilityCallout + 3) )
  {
    LODWORD(P) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 166LL);
  }
  P = 0LL;
  Port = SeConvertStringSecurityDescriptorToSecurityDescriptor(
           L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)",
           1LL,
           &P);
  if ( Port < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_d((_DWORD)gBaseLog, v2, 3, 11, (__int64)&WPP_ac405ce05974327b4be542fd5221b831_Traceguids, Port);
    }
  }
  else
  {
    RIMLockExclusive((__int64)v1 + 8);
    Port = CoreMsgCreatePort(v4, P, v5, (void **)v1 + 3);
    if ( Port < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d((_DWORD)gBaseLog, v6, 3, 10, (__int64)&WPP_ac405ce05974327b4be542fd5221b831_Traceguids, Port);
    }
    *((_QWORD *)v1 + 2) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v1 + 8, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)Port;
}
