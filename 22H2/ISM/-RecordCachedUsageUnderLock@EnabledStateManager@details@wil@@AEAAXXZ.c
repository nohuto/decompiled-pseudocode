/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800665DC
 * Callers:
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18003B270 (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x180064E44 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180068C18 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ??9details_abi@wil@@YA_NAEBV?$heap_vector_iterator@UCachedFeaturePropertyData@EnabledStateManager@details@wil@@@01@0@Z @ 0x18003D9DC (--9details_abi@wil@@YA_NAEBV-$heap_vector_iterator@UCachedFeaturePropertyData@EnabledStateManage.c)
 *     wil_details_RecordCachedUsage @ 0x18003E344 (wil_details_RecordCachedUsage.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180068188 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  __int64 v2; // rcx
  unsigned int *v3; // rbx
  const char *v4; // [rsp+20h] [rbp-8h]
  unsigned int *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 7);
  v3 = (unsigned int *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)(v2 - (_QWORD)v3) >= 0x10 )
  {
    v6 = v2;
    while ( 1 )
    {
      v5 = v3;
      if ( !wil::details_abi::operator!=(&v5, &v6) )
        break;
      wil_details_RecordCachedUsage((wil::details *)*v3, *((_QWORD *)v3 + 1));
      v3 += 4;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, 0, v4);
  }
}
