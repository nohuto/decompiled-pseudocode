/*
 * XREFs of MonitorRebuildMonitorModeListCache @ 0x1C03BFEEC
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C001BFA0 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1C01CF5C0 (-DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03BEF88 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorRebuildMonitorModeListCache(
        struct DXGADAPTER *a1,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned int i; // edx
  int NextVideoPresentTarget; // eax
  unsigned int v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v7 = 0;
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = 4294967293LL;
  if ( a1 )
  {
    if ( *((_QWORD *)a1 + 365) )
    {
      v11 = 0;
      for ( i = -1; ; i = v11 )
      {
        NextVideoPresentTarget = DmmGetNextVideoPresentTarget(a1, i, &v11);
        if ( NextVideoPresentTarget < 0 )
          break;
        RebuildMonitorModeListCacheHelper(a1, v11, a3);
      }
      if ( NextVideoPresentTarget != -1073741275 )
        return (unsigned int)NextVideoPresentTarget;
    }
    return v7;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
}
