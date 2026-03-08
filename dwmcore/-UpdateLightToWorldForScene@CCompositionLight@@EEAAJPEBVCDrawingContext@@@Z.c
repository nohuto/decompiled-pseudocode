/*
 * XREFs of ?UpdateLightToWorldForScene@CCompositionLight@@EEAAJPEBVCDrawingContext@@@Z @ 0x1802163D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004B1A0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionLight::UpdateLightToWorldForScene(
        CCompositionLight *this,
        const struct CVisualTree **a2)
{
  CVisual *v4; // rax
  int WorldTransform; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CVisual *)(*(__int64 (__fastcall **)(CCompositionLight *))(*(_QWORD *)this + 200LL))(this);
  WorldTransform = CVisual::GetWorldTransform(v4, a2[1007], 3, (CCompositionLight *)((char *)this + 184), 0LL, 0LL);
  v6 = WorldTransform;
  if ( WorldTransform >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x260,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionlight.cpp",
    (const char *)(unsigned int)WorldTransform);
  return v6;
}
