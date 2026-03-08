/*
 * XREFs of ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x1C01D7898
 * Callers:
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01D779C (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?UpdateIndependentFlipStateUnsafe@DISPLAY_SOURCE@@QEAAXIE@Z @ 0x1C02BB578 (-UpdateIndependentFlipStateUnsafe@DISPLAY_SOURCE@@QEAAXIE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

bool __fastcall IsDisplayPlaneConfigQueueEmpty(struct _DISPLAY_PLANE_CONFIG_QUEUE *a1)
{
  if ( *(_DWORD *)a1 == -1 && *((_DWORD *)a1 + 1) != -1 )
  {
    WdLogSingleEntry1(1LL, 9141LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
      9141LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *(_DWORD *)a1 == -1;
}
