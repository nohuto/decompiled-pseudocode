/*
 * XREFs of imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C0034470
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     ?DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C003DED4 (-DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceWdmDispatchPreprocessedIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _IRP *Irp)
{
  unsigned int v5; // edx
  FxDevice *v6; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int16 v8; // r10
  _LIST_ENTRY *Flink; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxDevice *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&v12);
  v6 = v12;
  m_Globals = v12->m_Globals;
  if ( !Irp )
    FxVerifierNullBugCheck(v12->m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v12->m_Globals, v5, 0xBu) || m_Globals->FxVerifyDownlevel) )
  {
    Flink = v6->m_CxDeviceInfoListHead.Flink;
    if ( Flink != &v6->m_CxDeviceInfoListHead )
    {
      if ( v6->m_PreprocessInfoListHead.Flink == &v6->m_PreprocessInfoListHead )
        goto LABEL_12;
      while ( Flink[1].Flink != *(_LIST_ENTRY **)&DriverGlobals[-7].DriverName[8] )
      {
        Flink = Flink->Flink;
        if ( Flink == &v6->m_CxDeviceInfoListHead )
          return FxDevice::DispatchPreprocessedIrp(v6, Irp, v6->m_PreprocessInfoListHead.Flink->Flink);
      }
      if ( Flink )
      {
LABEL_12:
        WPP_IFR_SF_(m_Globals, 2u, 0xDu, v8, WPP_FxDeviceApiKm_cpp_Traceguids);
        FxVerifierDbgBreakPoint(m_Globals);
        v6 = v12;
      }
    }
  }
  return FxDevice::DispatchPreprocessedIrp(v6, Irp, v6->m_PreprocessInfoListHead.Flink->Flink);
}
