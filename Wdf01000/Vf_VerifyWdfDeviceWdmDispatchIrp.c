/*
 * XREFs of Vf_VerifyWdfDeviceWdmDispatchIrp @ 0x1C00B9F0C
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C00343A0 (imp_WdfDeviceWdmDispatchIrp.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 */

void __fastcall Vf_VerifyWdfDeviceWdmDispatchIrp(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _WDF_DRIVER_GLOBALS *device,
        FxDevice *DispatchContext,
        _LIST_ENTRY *FxDriverGlobals)
{
  _LIST_ENTRY *p_m_PreprocessInfoListHead; // rdi
  FxDevice *Flink; // rax
  bool v8; // bl
  _LIST_ENTRY *i; // rax

  p_m_PreprocessInfoListHead = &DispatchContext->m_PreprocessInfoListHead;
  Flink = (FxDevice *)DispatchContext->m_CxDeviceInfoListHead.Flink;
  v8 = FxDriverGlobals == &DispatchContext->m_PreprocessInfoListHead;
  while ( Flink != (FxDevice *)&DispatchContext->m_CxDeviceInfoListHead )
  {
    if ( Flink->m_Globals == *(_FX_DRIVER_GLOBALS **)&device[-7].DriverName[8] )
    {
      if ( Flink )
        goto LABEL_8;
      break;
    }
    Flink = (FxDevice *)Flink->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
  }
  WPP_IFR_SF_D(DispatchContext->m_Globals, 2u, 0xDu, 0xCu, WPP_FxDeviceApiKm_cpp_Traceguids, 0xC0000010);
  FxVerifierDbgBreakPoint(DispatchContext->m_Globals);
LABEL_8:
  for ( i = p_m_PreprocessInfoListHead->Flink; i != p_m_PreprocessInfoListHead; i = i->Flink )
  {
    if ( FxDriverGlobals == i )
      return;
  }
  if ( !v8 )
  {
    WPP_IFR_SF_qd(
      DispatchContext->m_Globals,
      2u,
      0xDu,
      0xDu,
      WPP_FxDeviceApiKm_cpp_Traceguids,
      FxDriverGlobals,
      -1073741811);
    FxVerifierDbgBreakPoint(DispatchContext->m_Globals);
  }
}
