/*
 * XREFs of ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1800FF310
 * Callers:
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x180050EE0 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     ??_GCProcessAttribution@@UEAAPEAXI@Z @ 0x1800AC160 (--_GCProcessAttribution@@UEAAPEAXI@Z.c)
 *     ??1CProcessAttributionManager@@AEAA@XZ @ 0x1801CED80 (--1CProcessAttributionManager@@AEAA@XZ.c)
 *     _lambda_73f2a4da0cca98f221385d01cc2cbc64_::operator() @ 0x1801CEEA8 (_lambda_73f2a4da0cca98f221385d01cc2cbc64_--operator().c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18003EDBC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CProcessAttributionManager::Record *__fastcall CProcessAttributionManager::Record::`scalar deleting destructor'(
        CProcessAttributionManager::Record *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 16);
  operator delete(this, 0xA8uLL);
  return this;
}
