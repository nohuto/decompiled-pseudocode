/*
 * XREFs of Vf_VerifyWdfDeviceWdmDispatchIrp @ 0x1C00C5E70
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C0049590 (imp_WdfDeviceWdmDispatchIrp.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
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
    if ( Flink->m_Globals == *(_FX_DRIVER_GLOBALS **)&device[-7].DriverName[16] )
      goto LABEL_6;
    Flink = (FxDevice *)Flink->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
  }
  Flink = 0LL;
LABEL_6:
  if ( !Flink )
  {
    WPP_IFR_SF_d(DispatchContext->m_Globals, 2u, 0xDu, 0xCu, WPP_FxDeviceApiKm_cpp_Traceguids, -1073741808);
    FxVerifierDbgBreakPoint(DispatchContext->m_Globals);
  }
  for ( i = p_m_PreprocessInfoListHead->Flink; i != p_m_PreprocessInfoListHead; i = i->Flink )
  {
    if ( FxDriverGlobals == i )
    {
      v8 = 1;
      break;
    }
  }
  if ( !v8 )
  {
    WPP_IFR_SF_qL(
      DispatchContext->m_Globals,
      2u,
      0xDu,
      0xDu,
      WPP_FxDeviceApiKm_cpp_Traceguids,
      FxDriverGlobals,
      0xC000000D);
    FxVerifierDbgBreakPoint(DispatchContext->m_Globals);
  }
}
