/*
 * XREFs of ??$lower_bound@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@std@@_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@0@V10@V10@AEB_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@Z @ 0x1800AAE64
 * Callers:
 *     ?SetApplicationId@CChannelContext@@QEAAJPEBG@Z @ 0x1800AAAEC (-SetApplicationId@CChannelContext@@QEAAJPEBG@Z.c)
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x1800AAD08 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ??_GCProcessAttribution@@UEAAPEAXI@Z @ 0x1800AC160 (--_GCProcessAttribution@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z @ 0x1800F3DD8 (-IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z.c)
 */

const struct CProcessAttributionManager::ProcessAttributionRecord ***__fastcall std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
        const struct CProcessAttributionManager::ProcessAttributionRecord ***a1,
        const struct CProcessAttributionManager::ProcessAttributionRecord **a2,
        __int64 a3,
        __int64 *a4)
{
  const struct CProcessAttributionManager::ProcessAttributionRecord **v5; // rsi
  unsigned __int64 v6; // rbx
  const struct CProcessAttributionManager::ProcessAttributionRecord **v8; // r15
  const struct CProcessAttributionManager::ProcessAttributionRecord ***result; // rax

  v5 = a2;
  v6 = (a3 - (__int64)a2) >> 3;
  while ( (__int64)v6 > 0 )
  {
    v8 = &v5[v6 >> 1];
    if ( CProcessAttributionManager::ProcessAttributionRecord::IsLessThan(*v8, *a4) )
    {
      v5 = v8 + 1;
      v6 += -1LL - (v6 >> 1);
    }
    else
    {
      v6 >>= 1;
    }
  }
  result = a1;
  *a1 = v5;
  return result;
}
