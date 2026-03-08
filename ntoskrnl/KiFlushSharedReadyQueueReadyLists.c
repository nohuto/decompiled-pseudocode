/*
 * XREFs of KiFlushSharedReadyQueueReadyLists @ 0x14057BA1C
 * Callers:
 *     KiParkCurrentProcessor @ 0x14057BAA4 (KiParkCurrentProcessor.c)
 * Callees:
 *     MmGetMinWsPagePriority @ 0x140242D60 (MmGetMinWsPagePriority.c)
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledWithReporting @ 0x14040AF98 (Feature_Servicing_SoftParkFixes__private_IsEnabledWithReporting.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiFlushReadyLists @ 0x14057B934 (KiFlushReadyLists.c)
 */

void __fastcall KiFlushSharedReadyQueueReadyLists(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi

  v4 = 0LL;
  MmGetMinWsPagePriority();
  if ( (unsigned int)Feature_Servicing_SoftParkFixes__private_IsEnabledWithReporting(0) )
  {
    v4 = a1;
  }
  else
  {
    *(_QWORD *)(a1 + 712) = 0LL;
    *(_DWORD *)(a1 + 704) = 0;
    memset((void *)(a1 + 784), 0, 0x388uLL);
  }
  KiFlushReadyLists(a1 + 16, (unsigned int *)(a1 + 8), a2, v4);
  *(_DWORD *)(a1 + 672) = 0;
  *(_QWORD *)(a1 + 680) = 0LL;
}
