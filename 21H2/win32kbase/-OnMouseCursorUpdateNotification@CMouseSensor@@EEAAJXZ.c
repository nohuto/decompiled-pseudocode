/*
 * XREFs of ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C003C740
 * Callers:
 *     <none>
 * Callees:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C003B30C (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C003C780 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseSensor::OnMouseCursorUpdateNotification(CMouseSensor *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx

  if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  v5 = *((_QWORD *)this + 223);
  if ( v5 )
    CMouseProcessor::MoveMouseWindowManagement(v5, 4);
  return 0LL;
}
