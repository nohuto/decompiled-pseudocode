/*
 * XREFs of ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0014298
 * Callers:
 *     ??0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00140E4 (--0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C00147CC (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     imp_WdfCollectionCreate @ 0x1C0014950 (imp_WdfCollectionCreate.c)
 *     ??0FxSystemWorkItem@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0014A64 (--0FxSystemWorkItem@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxTimer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0015234 (--0FxTimer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003155C (--0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxDmaTransactionBase@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1C0036254 (--0FxDmaTransactionBase@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z.c)
 *     ??0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z @ 0x1C003771C (--0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z.c)
 *     ??0FxDpc@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003A2E4 (--0FxDpc@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z @ 0x1C003A684 (--0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z.c)
 *     ??0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z @ 0x1C003DF44 (--0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z.c)
 *     ??0FxWmiInstance@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxWmiProvider@@@Z @ 0x1C003E890 (--0FxWmiInstance@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxWmiProvider@@@Z.c)
 *     ??0FxDeviceBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDriver@@GG@Z @ 0x1C004D330 (--0FxDeviceBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDriver@@GG@Z.c)
 *     ??0FxCompanionTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C0050040 (--0FxCompanionTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0053948 (--0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxDisposeList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0055054 (--0FxDisposeList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z @ 0x1C005C110 (--0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C0064718 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z @ 0x1C006479C (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z.c)
 *     ??0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C0071AE4 (--0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@.c)
 *     ??0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z @ 0x1C0075580 (--0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z.c)
 *     ??0FxPackage@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C0078180 (--0FxPackage@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ??0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0088E68 (--0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxSystemThread@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0090DD4 (--0FxSystemThread@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00051A4 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031CD0 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 */

void __fastcall FxNonPagedObject::FxNonPagedObject(
        FxNonPagedObject *this,
        unsigned __int16 Type,
        unsigned __int16 Size,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxVerifierLock *verifierLock; // [rsp+30h] [rbp+8h] BYREF

  FxObject::FxObject(this, Type, Size, FxDriverGlobals);
  this->__vftable = (FxNonPagedObject_vtbl *)FxNonPagedObject::`vftable';
  this->m_NPLock.m_Lock = 0LL;
  this->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierLock )
    {
      verifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&verifierLock, m_Globals, this);
      this[-1].m_ChildEntry.Blink = (_LIST_ENTRY *)verifierLock;
    }
  }
}
