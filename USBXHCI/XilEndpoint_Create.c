/*
 * XREFs of XilEndpoint_Create @ 0x1C000B114
 * Callers:
 *     Endpoint_Create @ 0x1C006D624 (Endpoint_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0038E80 (XilEndpoint_CreateSecureObject.c)
 *     XilEndpoint_FreeResources @ 0x1C0039144 (XilEndpoint_FreeResources.c)
 */

__int64 __fastcall XilEndpoint_Create(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  int v6; // r8d
  int SecureObject; // edi
  unsigned int v9; // r8d
  int v10; // edx
  int v11; // r8d
  int v12; // r9d

  v4 = a1 + 1320;
  *(_QWORD *)(a1 + 1352) = a1;
  v6 = *(_DWORD *)(*(_QWORD *)a1 + 604LL);
  if ( v6 )
  {
    v9 = v6 - 1;
    if ( v9 < 2 )
    {
      *(_BYTE *)(a1 + 1344) = 1;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, *(_QWORD *)a1, v9, a4);
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
  }
  else
  {
    *(_BYTE *)(a1 + 1344) = 0;
  }
  if ( !*(_BYTE *)(v4 + 24) )
  {
    *(_QWORD *)v4 = a1;
    *(_BYTE *)(v4 + 8) = 0;
    return 0;
  }
  SecureObject = XilEndpoint_CreateSecureObject(v4);
  if ( SecureObject >= 0 )
  {
    *(_BYTE *)(v4 + 16) = *(_BYTE *)(v4 + 24);
    *(_QWORD *)(v4 + 8) = a1;
    return 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v10, v11, v12);
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  XilEndpoint_FreeResources(v4);
  return (unsigned int)SecureObject;
}
