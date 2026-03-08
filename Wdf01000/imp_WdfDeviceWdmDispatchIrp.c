/*
 * XREFs of imp_WdfDeviceWdmDispatchIrp @ 0x1C00343A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00042E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C003DED4 (-DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrp @ 0x1C00B9F0C (Vf_VerifyWdfDeviceWdmDispatchIrp.c)
 */

NTSTATUS __fastcall imp_WdfDeviceWdmDispatchIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _IRP *Irp,
        unsigned __int64 DispatchContext)
{
  FxDevice *v8; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  FxDevice *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&v10);
  if ( !Irp )
    FxVerifierNullBugCheck(v10->m_Globals, retaddr);
  if ( !DispatchContext )
    FxVerifierNullBugCheck(v10->m_Globals, retaddr);
  if ( (DispatchContext & 1) != 0 )
    return FxPkgIo::DispatchStep1(v10->m_PkgIo, Irp, (_LIST_ENTRY *)(DispatchContext & 0xFFFFFFFFFFFFFFFEuLL));
  v8 = v10;
  if ( v10->m_Globals->FxVerifierOn )
  {
    Vf_VerifyWdfDeviceWdmDispatchIrp((_FX_DRIVER_GLOBALS *)v10, DriverGlobals, v10, (void *)DispatchContext);
    v8 = v10;
  }
  return FxDevice::DispatchPreprocessedIrp(v8, Irp, (void *)DispatchContext);
}
