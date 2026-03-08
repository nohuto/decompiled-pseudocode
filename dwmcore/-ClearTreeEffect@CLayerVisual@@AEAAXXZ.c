/*
 * XREFs of ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x1800F44A4
 * Callers:
 *     ??1CLayerVisual@@UEAA@XZ @ 0x1800F4334 (--1CLayerVisual@@UEAA@XZ.c)
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x1800F4390 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CLayerVisual::ClearTreeEffect(struct CResource ***this)
{
  struct CResource **v2; // rdi
  struct CResource *v3; // rcx

  CResource::UnRegisterNotifierInternal((CResource *)this, *this[89]);
  v2 = this[89];
  if ( v2 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v3 + 16LL))(v3);
    }
    operator delete(v2);
  }
  this[89] = 0LL;
  CLayerVisual::UpdateBackdropBlurFlagForTreeEffect((CLayerVisual *)this);
}
