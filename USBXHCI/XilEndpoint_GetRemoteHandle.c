/*
 * XREFs of XilEndpoint_GetRemoteHandle @ 0x1C00391BC
 * Callers:
 *     TR_CreateSecureObject @ 0x1C004139C (TR_CreateSecureObject.c)
 * Callees:
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall XilEndpoint_GetRemoteHandle(__int64 a1, int a2, int a3, int a4)
{
  if ( *(_BYTE *)(a1 + 1344) )
    return *(_QWORD *)(a1 + 1320);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  return 0LL;
}
