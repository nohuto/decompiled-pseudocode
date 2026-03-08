/*
 * XREFs of XilCommand_Create @ 0x1C001A6B4
 * Callers:
 *     Command_Create @ 0x1C006FF64 (Command_Create.c)
 * Callees:
 *     XilCommand_CreateSecureObject @ 0x1C0031548 (XilCommand_CreateSecureObject.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall XilCommand_Create(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // dl
  int SecureObject; // ebx
  int v6; // edx
  int v7; // r8d
  int v8; // r9d

  v2 = a1 + 136;
  *(_QWORD *)(v2 + 8) = a1;
  v3 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 601LL);
  *(_BYTE *)v2 = v3;
  if ( v3 )
  {
    SecureObject = XilCommand_CreateSecureObject();
    if ( SecureObject < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8);
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
  }
  else
  {
    *(_QWORD *)(v2 + 32) = a1;
    return 0;
  }
  return (unsigned int)SecureObject;
}
