/*
 * XREFs of UserSetMITInputCallbacks @ 0x1C00A9568
 * Callers:
 *     NtMITSetInputCallbacks @ 0x1C00A9360 (NtMITSetInputCallbacks.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x1C00547BC (-DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C00A9698 (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserSetMITInputCallbacks(__int64 a1, __int64 a2, __int64 a3)
{
  InputExtensibilityCallout *v4; // rcx
  char v5; // bl
  InputExtensibilityCallout *v6; // rdi
  __int64 v7; // rax
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // edi

  v4 = (InputExtensibilityCallout *)WPP_GLOBAL_Control;
  v5 = 1;
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
      24,
      (__int64)&WPP_165f3abe42b33c15c83f02aac2ca9a71_Traceguids);
  if ( !gDWMCapable )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, a3);
  v6 = gpInputExtensibilityCallout;
  if ( *(_QWORD *)gpInputExtensibilityCallout )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, a3);
  v7 = *((_QWORD *)v6 + 3);
  *(_QWORD *)v6 = a1;
  if ( !v7 )
  {
    InputExtensibilityCallout::CreateCoreMsgPort(v4);
    if ( !*((_QWORD *)v6 + 3) )
      KeBugCheck(0x164u);
  }
  if ( CInputThreadBase::DeclareThreadAsInput(gpInputThread) )
  {
    v10 = 1;
  }
  else
  {
    v10 = 0;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        3,
        25,
        (__int64)&WPP_165f3abe42b33c15c83f02aac2ca9a71_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v5 = 0;
  if ( (_BYTE)v8 || v5 )
  {
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      26,
      (__int64)&WPP_165f3abe42b33c15c83f02aac2ca9a71_Traceguids);
  }
  return v10;
}
