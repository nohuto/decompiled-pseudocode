/*
 * XREFs of ?SetProximityBlocking@@YAXXZ @ 0x1C015A7C0
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C015A9DC (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     PowerOffMonitor @ 0x1C015BA60 (PowerOffMonitor.c)
 * Callees:
 *     <none>
 */

void __fastcall SetProximityBlocking(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9

  if ( !*(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 2976) )
  {
    *(_QWORD *)(SGDGetUserSessionState(v5, v4, v6, v7) + 760) = -1LL;
    v12 = SGDGetUserSessionState(v9, v8, v10, v11);
    ++*(_DWORD *)(v12 + 768);
    SGDGetUserSessionState(v14, v13, v15, v16);
    *(_DWORD *)(SGDGetUserSessionState(v18, v17, v19, v20) + 2976) = 1;
  }
}
