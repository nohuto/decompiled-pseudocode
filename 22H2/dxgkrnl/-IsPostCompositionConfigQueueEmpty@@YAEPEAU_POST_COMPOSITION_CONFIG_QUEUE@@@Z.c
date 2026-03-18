/*
 * XREFs of ?IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z @ 0x1C0172AB8
 * Callers:
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C0172A54 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01E8DF4 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 */

bool __fastcall IsPostCompositionConfigQueueEmpty(struct _POST_COMPOSITION_CONFIG_QUEUE *a1)
{
  if ( *(_DWORD *)a1 == -1 && *((_DWORD *)a1 + 1) != -1 )
  {
    WdLogSingleEntry1(1LL, 9162LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
      9162LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *(_DWORD *)a1 == -1;
}
