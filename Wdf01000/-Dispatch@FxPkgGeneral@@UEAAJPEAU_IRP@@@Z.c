/*
 * XREFs of ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0085470
 * Callers:
 *     <none>
 * Callees:
 *     FX_TRACK_DRIVER @ 0x1C0006D3C (FX_TRACK_DRIVER.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0010318 (-OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     WPP_IFR_SF_qqcq @ 0x1C002B500 (WPP_IFR_SF_qqcq.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00859BC (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0085BCC (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00864A0 (-OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::Dispatch(FxPkgGeneral *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  __int64 v5; // r11
  const void *_a1; // rax
  __int64 v7; // r10
  _FX_DRIVER_GLOBALS *v8; // r11
  unsigned __int8 MajorFunction; // dl
  unsigned int v10; // ebx
  FxIrp fxIrp; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  fxIrp.m_Irp = Irp;
  FX_TRACK_DRIVER(m_Globals);
  if ( *(_BYTE *)(v5 + 332) )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqcq(
      v8,
      5u,
      0xDu,
      0x14u,
      WPP_FxPkgGeneral_cpp_Traceguids,
      _a1,
      *(const void **)(v7 + 144),
      fxIrp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      Irp);
  }
  MajorFunction = fxIrp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  switch ( MajorFunction )
  {
    case 0u:
      return (unsigned int)FxPkgGeneral::OnCreate(this, &fxIrp);
    case 2u:
      return (unsigned int)FxPkgGeneral::OnClose(this, &fxIrp);
    case 0x10u:
      return (unsigned int)FxPkgGeneral::OnShutdown(this, &fxIrp);
    case 0x12u:
      return (unsigned int)FxPkgGeneral::OnCleanup(this, &fxIrp);
  }
  v10 = -1073741637;
  fxIrp.m_Irp->IoStatus.Status = -1073741637;
  IofCompleteRequest(fxIrp.m_Irp, 0);
  return v10;
}
