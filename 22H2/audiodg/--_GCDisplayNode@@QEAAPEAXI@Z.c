/*
 * XREFs of ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x14004B744
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000F210 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$CAutoPtr@VCDisplayNode@@@ATL@@QEAA@XZ @ 0x14004B6CC (--1-$CAutoPtr@VCDisplayNode@@@ATL@@QEAA@XZ.c)
 *     ?GetDisplayNode@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCProcessNode@@PEAPEAVCDisplayNode@@@Z @ 0x14004C36C (-GetDisplayNode@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x140041DE0 (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 */

CDisplayNode *__fastcall CDisplayNode::`scalar deleting destructor'(CDisplayNode *this)
{
  ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll((__int64 *)this + 7);
  ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll((__int64 *)this + 1);
  operator delete(this);
  return this;
}
