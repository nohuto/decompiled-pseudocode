/*
 * XREFs of Command_Initialize @ 0x1C001438C
 * Callers:
 *     Command_D0Entry @ 0x1C00148C8 (Command_D0Entry.c)
 *     Command_ControllerResetPostReset @ 0x1C002F8B4 (Command_ControllerResetPostReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C000A8E4 (Controller_IsControllerAccessible.c)
 *     XilCoreCommand_Initialize @ 0x1C0014418 (XilCoreCommand_Initialize.c)
 *     XilCommand_InitializeSecureResources @ 0x1C0031860 (XilCommand_InitializeSecureResources.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C00533B4 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

char __fastcall Command_Initialize(__int64 a1, int a2, int a3, int a4)
{
  char result; // al

  if ( *(_QWORD *)(a1 + 80) != a1 + 80 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    MicrosoftTelemetryAssertTriggeredMsgKM("PendingList is not empty on re-initialization of the command ring.");
  }
  if ( *(_QWORD *)(a1 + 96) != a1 + 96 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    MicrosoftTelemetryAssertTriggeredMsgKM("WaitingList is not empty on re-initialization of the command ring.");
  }
  result = Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8));
  if ( result )
  {
    if ( *(_BYTE *)(a1 + 136) )
      result = XilCommand_InitializeSecureResources();
    else
      result = XilCoreCommand_Initialize(a1 + 168);
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 64) = 1;
  }
  return result;
}
