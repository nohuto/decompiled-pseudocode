/*
 * XREFs of ?InvalidateBitmapRealization@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800A4D24
 * Callers:
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000A4C4 (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x1800A43BC (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ??1CWindowBackgroundTreatment@@EEAA@XZ @ 0x1800A48A4 (--1CWindowBackgroundTreatment@@EEAA@XZ.c)
 *     ?InvalidateExistingBounds@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800E6114 (-InvalidateExistingBounds@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ?NotifyInvalidResource@CWindowBackgroundTreatment@@UEAAXPEBVIDeviceResource@@@Z @ 0x180216E20 (-NotifyInvalidResource@CWindowBackgroundTreatment@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180216E80 (-OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CWindowBackgroundTreatment::InvalidateBitmapRealization(__int64 this)
{
  char *v1; // rbx
  __int64 v3; // r8
  unsigned __int64 v4; // rax
  _QWORD *v5; // rcx

  v1 = (char *)(this + 80);
  v3 = *(_QWORD *)(this + 80);
  if ( v3 )
  {
    v4 = this + 64;
    v5 = (_QWORD *)(*(int *)(*(_QWORD *)(v3 + 8) + 8LL) + v3 + 8);
    (*(void (__fastcall **)(_QWORD *, unsigned __int64, _QWORD, __int64))(*v5 + 48LL))(
      v5,
      v4 & -(__int64)(this != 0),
      *v5,
      -this);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v1);
  }
}
