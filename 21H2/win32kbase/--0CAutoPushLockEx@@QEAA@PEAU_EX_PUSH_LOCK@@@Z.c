/*
 * XREFs of ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00808F0
 * Callers:
 *     ?applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z @ 0x1C00526CC (-applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C0080410 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z @ 0x1C0080690 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z.c)
 *     ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x1C008072C (-OnProcessTermination@InputObjectMap@@SAXXZ.c)
 *     ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0080800 (-UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1C00D7CE4 (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C00D7DB0 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x1C023C5E0 (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 *     ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1C023CFD4 (-AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z.c)
 *     ?GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C023D544 (-GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x1C023D5F0 (-RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z.c)
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
