/*
 * XREFs of ?RemovePath@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C03B73AC
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F5F2C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C01BD614 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C03B78B0 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RemovePath(void **this, unsigned int a2)
{
  unsigned int i; // ebx
  _WORD *v5; // rcx

  if ( a2 < *((unsigned __int16 *)this[8] + 10) )
  {
    CCD_TOPOLOGY::ClearModalitySetId(this);
    for ( i = a2 + 1; ; ++i )
    {
      v5 = this[8];
      if ( i >= (unsigned __int16)v5[10] )
        break;
      CCD_TOPOLOGY::SwapPathsDescriptors((CCD_TOPOLOGY *)this, i - 1, i);
    }
    --v5[10];
  }
  return 0LL;
}
