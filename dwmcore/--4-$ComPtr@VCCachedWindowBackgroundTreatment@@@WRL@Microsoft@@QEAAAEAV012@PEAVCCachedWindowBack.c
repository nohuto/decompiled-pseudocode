/*
 * XREFs of ??4?$ComPtr@VCCachedWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCachedWindowBackgroundTreatment@@@Z @ 0x18000B8E8
 * Callers:
 *     ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIBitmapRealization@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x18000B7D0 (-Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIBitmapRealizat.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<CCachedWindowBackgroundTreatment>::operator=(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD))
{
  void (__fastcall ***v4)(_QWORD); // rcx

  if ( (void (__fastcall ***)(_QWORD))*a1 != a2 )
  {
    if ( a2 )
      (**a2)(a2);
    v4 = (void (__fastcall ***)(_QWORD))*a1;
    *a1 = a2;
    if ( v4 )
      (*v4)[1](v4);
  }
  return a1;
}
