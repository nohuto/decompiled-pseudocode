/*
 * XREFs of ?VidSchiValidatePageFaultFlags@@YAXW4_DXGK_PAGE_FAULT_FLAGS@@@Z @ 0x1C0043CF4
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000B040 (VidSchDdiNotifyInterruptWorker.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C0045608 (VidSchiProcessHwQueuePageFaultedDpc.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiValidatePageFaultFlags(unsigned int a1)
{
  if ( (a1 & 0x10) != 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 12LL, (int)a1, 0LL, 0LL);
    __debugbreak();
  }
  if ( (a1 & 0xC) == 0xC )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 13LL, (int)a1, 0LL, 0LL);
    __debugbreak();
  }
  if ( a1 >= 0x100 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 13LL, (int)a1, 0LL, 0LL);
    __debugbreak();
  }
}
