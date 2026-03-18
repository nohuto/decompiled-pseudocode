/*
 * XREFs of UserDeactivateMITInputProcessingHelper @ 0x1C01EBD40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     CleanupSensorExplicitly @ 0x1C004AB10 (CleanupSensorExplicitly.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0059DF0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     IOCPDispatcher_Destroy @ 0x1C005A7F0 (IOCPDispatcher_Destroy.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserDeactivateMITInputProcessingHelper(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  IOCPDispatcher *v4; // rcx
  int *v5; // rdi
  __int64 v6; // rsi
  int v7; // eax
  __int64 result; // rax
  int v9; // edx
  int v10; // r8d

  v3 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      22,
      (__int64)&WPP_165f3abe42b33c15c83f02aac2ca9a71_Traceguids);
  v4 = gpIOCPDispatcher;
  if ( gpIOCPDispatcher )
    IOCPDispatcher::Close((HANDLE *)gpIOCPDispatcher, 1);
  v5 = (int *)&unk_1C0288010;
  v6 = 3LL;
  do
  {
    v7 = *v5;
    if ( *v5 == 1 )
      goto LABEL_17;
    if ( v7 != 2 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, a3);
      v7 = *v5;
LABEL_17:
      if ( v7 != 2 )
        goto LABEL_19;
    }
    CleanupSensorExplicitly((unsigned int)v5[4], a2, a3);
LABEL_19:
    v5 += 12;
    --v6;
  }
  while ( v6 );
  result = (__int64)IOCPDispatcher_Destroy((__int64)v4, a2);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 2) == 0)
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v3 = 0;
  if ( (_BYTE)v9 || v3 )
  {
    LOBYTE(v10) = v3;
    return WPP_RECORDER_AND_TRACE_SF_(
             WPP_GLOBAL_Control->AttachedDevice,
             v9,
             v10,
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             2,
             23,
             (__int64)&WPP_165f3abe42b33c15c83f02aac2ca9a71_Traceguids);
  }
  return result;
}
