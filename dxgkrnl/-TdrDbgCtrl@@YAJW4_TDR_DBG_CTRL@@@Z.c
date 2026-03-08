/*
 * XREFs of ?TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z @ 0x1C030A184
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 * Callees:
 *     ?_TdrIsTestMode@@YA_NXZ @ 0x1C030ACDC (-_TdrIsTestMode@@YA_NXZ.c)
 */

__int64 __fastcall TdrDbgCtrl(int a1)
{
  int v2; // ebx
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  __int32 v7; // eax

  if ( !_TdrIsTestMode() )
    return 3221225659LL;
  if ( !a1 )
  {
    _InterlockedExchange(&g_TdrForceTimeout, 1);
    return 0LL;
  }
  v2 = a1 - 1;
  if ( !v2 )
  {
    _InterlockedExchange(&g_TdrDebugMode, 0);
    return 0LL;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v7 = 2;
    goto LABEL_13;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v7 = 3;
LABEL_13:
    _InterlockedExchange(&g_TdrDebugMode, v7);
    return 0LL;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return 0LL;
  v6 = v5 - 1;
  if ( !v6 )
  {
    _InterlockedExchange(&g_TdrForceDodPresentTimeout, 1);
    return 0LL;
  }
  if ( v6 == 1 )
  {
    _InterlockedExchange(&g_TdrForceDodVSyncTimeout, 1);
    return 0LL;
  }
  return 3221225659LL;
}
