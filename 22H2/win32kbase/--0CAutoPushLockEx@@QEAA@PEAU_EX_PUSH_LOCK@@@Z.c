/*
 * XREFs of ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00660CC
 * Callers:
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C0064DF0 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C00652C0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z @ 0x1C0065CC0 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z.c)
 *     ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0065E10 (-UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x1C0065FE8 (-OnProcessTermination@InputObjectMap@@SAXXZ.c)
 *     ?applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z @ 0x1C00AC5F8 (-applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1C012CBB4 (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x1C023123C (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 *     ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1C0231C24 (-AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z.c)
 *     ?GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C02321A0 (-GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x1C023224C (-RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z.c)
 * Callees:
 *     <none>
 */

CAutoPushLockEx *__fastcall CAutoPushLockEx::CAutoPushLockEx(CAutoPushLockEx *this, struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(*(_QWORD *)this, 0LL);
  return this;
}
