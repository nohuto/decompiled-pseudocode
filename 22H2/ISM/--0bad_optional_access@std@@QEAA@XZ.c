/*
 * XREFs of ??0bad_optional_access@std@@QEAA@XZ @ 0x18006DFAC
 * Callers:
 *     ?UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x180015300 (-UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800164D0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x180016EB0 (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 *     ?GetTransformFromRootToSite@PointerManipulationHelper@@SA?AUtagINPUT_TRANSFORM@@PEAVInputSite@@@Z @ 0x1800492F0 (-GetTransformFromRootToSite@PointerManipulationHelper@@SA-AUtagINPUT_TRANSFORM@@PEAVInputSite@@@.c)
 * Callees:
 *     <none>
 */

std::bad_optional_access *__fastcall std::bad_optional_access::bad_optional_access(std::bad_optional_access *this)
{
  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_QWORD *)this = &std::bad_optional_access::`vftable';
  return this;
}
