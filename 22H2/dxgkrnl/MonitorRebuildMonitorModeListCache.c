/*
 * XREFs of MonitorRebuildMonitorModeListCache @ 0x1C02F475C
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C00205E0 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1C013DCAC (-DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F1F44 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorRebuildMonitorModeListCache(
        struct DXGADAPTER *a1,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 i; // rdx
  int NextVideoPresentTarget; // eax
  unsigned int v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  v5 = WdLogNewEntry5_WdTrace(a1, a2);
  v7 = 0;
  *(_QWORD *)(v5 + 24) = a1;
  *(_QWORD *)(v5 + 32) = 4294967293LL;
  if ( a1 )
  {
    if ( *((_QWORD *)a1 + 337) )
    {
      v12 = 0;
      for ( i = 0xFFFFFFFFLL; ; i = v12 )
      {
        NextVideoPresentTarget = DmmGetNextVideoPresentTarget(a1, i, &v12);
        if ( NextVideoPresentTarget < 0 )
          break;
        RebuildMonitorModeListCacheHelper(a1, v12, a3);
      }
      if ( NextVideoPresentTarget != -1073741275 )
        return (unsigned int)NextVideoPresentTarget;
    }
    return v7;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(4294967293LL, v6);
    *(_QWORD *)(v8 + 24) = 0LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
}
