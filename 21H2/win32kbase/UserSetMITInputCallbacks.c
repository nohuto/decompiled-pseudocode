/*
 * XREFs of UserSetMITInputCallbacks @ 0x1C0074670
 * Callers:
 *     NtMITSetInputCallbacks @ 0x1C00753B0 (NtMITSetInputCallbacks.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C007459C (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 *     ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C009DE98 (-DeclareThreadAsInput@CInputThread@@QEAA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall UserSetMITInputCallbacks(InputExtensibilityCallout *a1)
{
  InputExtensibilityCallout *v1; // rdi
  InputExtensibilityCallout *v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // ebx

  v1 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = (InputExtensibilityCallout *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        27,
        (__int64)&WPP_df1c4b029be03b6c5997ec023b76ba85_Traceguids);
  }
  v2 = gpInputExtensibilityCallout;
  if ( *(_QWORD *)gpInputExtensibilityCallout )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 46LL);
  v3 = *((_QWORD *)v2 + 3);
  *(_QWORD *)v2 = v1;
  if ( !v3 )
  {
    InputExtensibilityCallout::CreateCoreMsgPort(a1);
    if ( !*((_QWORD *)v2 + 3) )
      KeBugCheck(0x164u);
  }
  if ( CInputThread::DeclareThreadAsInput(a1) )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 2, 3, 28, (__int64)&WPP_df1c4b029be03b6c5997ec023b76ba85_Traceguids);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      29,
      (__int64)&WPP_df1c4b029be03b6c5997ec023b76ba85_Traceguids);
  return v4;
}
