/*
 * XREFs of ?SetAtIndex@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHAEBIAEBUTargetingInfo@@@Z @ 0x1801A3318
 * Callers:
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x1801A2408 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 *     ?SetLastPointerTarget@CManipulationContext@@UEAAJIPEAUTargetingInfo@@@Z @ 0x1801A3690 (-SetLastPointerTarget@CManipulationContext@@UEAAJIPEAUTargetingInfo@@@Z.c)
 * Callees:
 *     ??_GTargetingInfo@@QEAAPEAXI@Z @ 0x180129610 (--_GTargetingInfo@@QEAAPEAXI@Z.c)
 *     ?InternalSetAtIndex@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAXHAEBIAEBUTargetingInfo@@@Z @ 0x1801A12AC (-InternalSetAtIndex@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAXHAEBIAE.c)
 */

__int64 __fastcall CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::SetAtIndex(
        __int64 a1,
        int a2,
        unsigned int *a3,
        const struct TargetingInfo *a4)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 16) )
    return 0LL;
  TargetingInfo::`scalar deleting destructor'((TargetingInfo *)(*(_QWORD *)(a1 + 8) + 16LL * a2));
  CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::InternalSetAtIndex(
    (TargetingInfo **)a1,
    a2,
    a3,
    a4);
  return 1LL;
}
