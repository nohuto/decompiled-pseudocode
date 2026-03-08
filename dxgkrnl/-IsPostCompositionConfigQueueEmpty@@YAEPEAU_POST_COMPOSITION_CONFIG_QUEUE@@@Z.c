/*
 * XREFs of ?IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z @ 0x1C017684C
 * Callers:
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C01767E8 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01D779C (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

bool __fastcall IsPostCompositionConfigQueueEmpty(struct _POST_COMPOSITION_CONFIG_QUEUE *a1)
{
  if ( *(_DWORD *)a1 == -1 && *((_DWORD *)a1 + 1) != -1 )
  {
    WdLogSingleEntry1(1LL, 9155LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
      9155LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *(_DWORD *)a1 == -1;
}
