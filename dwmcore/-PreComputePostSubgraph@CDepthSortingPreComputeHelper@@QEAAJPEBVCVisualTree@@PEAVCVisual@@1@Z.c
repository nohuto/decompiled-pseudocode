/*
 * XREFs of ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z @ 0x1801D6458
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006E820 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004B1A0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ??_GCDepthSortedVisualCollection@@QEAAPEAXI@Z @ 0x1801B13EC (--_GCDepthSortedVisualCollection@@QEAAPEAXI@Z.c)
 *     ?CreateDepthSortedList@CVisual@@AEAAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@XZ @ 0x18020D774 (-CreateDepthSortedList@CVisual@@AEAAPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@s.c)
 *     ?DeleteDepthSortedList@CVisual@@AEAAXXZ @ 0x18020D7DC (-DeleteDepthSortedList@CVisual@@AEAAXXZ.c)
 *     ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x180256960 (-AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 *     ?SortVisuals@CDepthSortedVisualCollection@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x180256CA0 (-SortVisuals@CDepthSortedVisualCollection@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVis.c)
 */

__int64 __fastcall CDepthSortingPreComputeHelper::PreComputePostSubgraph(
        CDepthSortingPreComputeHelper *this,
        const struct CVisualTree *a2,
        struct CVisual *a3,
        struct CVisual *a4)
{
  __int64 DepthSortedList; // rax
  _BYTE v10[64]; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+70h] [rbp-18h]

  if ( *((_DWORD *)a3 + 27) == 3 )
  {
    DepthSortedList = CVisual::CreateDepthSortedList(a3);
    if ( !(unsigned __int8)CDepthSortedVisualCollection::SortVisuals(*((_QWORD *)this + 1) - 56LL, DepthSortedList) )
      CVisual::DeleteDepthSortedList(a3);
    CDepthSortedVisualCollection::`scalar deleting destructor'((CDepthSortedVisualCollection *)(*((_QWORD *)this + 1)
                                                                                              - 56LL));
    *((_QWORD *)this + 1) -= 56LL;
  }
  else
  {
    CVisual::DeleteDepthSortedList(a3);
  }
  if ( a4 && *((_DWORD *)a4 + 27) == 3 )
  {
    v11 = 0;
    CVisual::GetWorldTransform(a3, a2, 1, (struct CMILMatrix *)v10, 0LL, 0LL);
    CDepthSortedVisualCollection::AddVisual(
      (CDepthSortedVisualCollection *)(*((_QWORD *)this + 1) - 56LL),
      a3,
      (struct CMILMatrix *)v10);
  }
  return 0LL;
}
