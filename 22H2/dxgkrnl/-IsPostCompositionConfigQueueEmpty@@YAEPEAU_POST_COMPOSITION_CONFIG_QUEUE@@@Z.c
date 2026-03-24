/*
 * XREFs of ?IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z @ 0x1C015FA38
 * Callers:
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C015F5C4 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C015FA00 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPostCompositionConfigQueueEmpty(struct _POST_COMPOSITION_CONFIG_QUEUE *a1, __int64 a2)
{
  bool v3; // zf
  int v4; // eax
  __int64 v6; // rax

  v3 = *(_DWORD *)a1 == -1;
  if ( *(_DWORD *)a1 == -1 )
  {
    v4 = -1;
    if ( *((_DWORD *)a1 + 1) != -1 )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v6 + 24) = 8915LL;
      WdLogEvent5_WdAssertion(v6);
      v4 = *(_DWORD *)a1;
    }
    return v4 == -1;
  }
  return v3;
}
