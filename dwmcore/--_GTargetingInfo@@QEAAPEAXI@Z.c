/*
 * XREFs of ??_GTargetingInfo@@QEAAPEAXI@Z @ 0x180129610
 * Callers:
 *     ??1CManipulationContext@@UEAA@XZ @ 0x1801A01B8 (--1CManipulationContext@@UEAA@XZ.c)
 *     ?RemoveRange@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHH@Z @ 0x1801A2194 (-RemoveRange@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHH@Z.c)
 *     ?SetAtIndex@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHAEBIAEBUTargetingInfo@@@Z @ 0x1801A3318 (-SetAtIndex@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHAEBIAEBUTarget.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 */

TargetingInfo *__fastcall TargetingInfo::`scalar deleting destructor'(TargetingInfo *this)
{
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 1);
  return this;
}
