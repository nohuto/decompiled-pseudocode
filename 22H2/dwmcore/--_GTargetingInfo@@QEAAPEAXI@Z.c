/*
 * XREFs of ??_GTargetingInfo@@QEAAPEAXI@Z @ 0x18012D7C0
 * Callers:
 *     ??1CManipulationContext@@UEAA@XZ @ 0x1801A3798 (--1CManipulationContext@@UEAA@XZ.c)
 *     ?RemoveRange@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHH@Z @ 0x1801A5774 (-RemoveRange@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHH@Z.c)
 *     ?SetAtIndex@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHAEBIAEBUTargetingInfo@@@Z @ 0x1801A68F8 (-SetAtIndex@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHAEBIAEBUTarget.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F3C10 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 */

TargetingInfo *__fastcall TargetingInfo::`scalar deleting destructor'(TargetingInfo *this)
{
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 1);
  return this;
}
