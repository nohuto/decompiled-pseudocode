/*
 * XREFs of ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0014B18
 * Callers:
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0014BDC (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?Initialize@FxDisposeList@@QEAAJPEAX@Z @ 0x1C0055228 (-Initialize@FxDisposeList@@QEAAJPEAX@Z.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C006BDCC (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C0076304 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 *     ?AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ @ 0x1C007F7FC (-AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0089878 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0013EA0 (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ??0FxSystemWorkItem@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0014A64 (--0FxSystemWorkItem@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_ @ 0x1C00325D4 (WPP_IFR_SF_.c)
 */

__int64 __fastcall FxSystemWorkItem::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _DEVICE_OBJECT *WdmObject,
        FxSystemWorkItem **pObject)
{
  FxSystemWorkItem *v6; // rax
  void *v7; // r8
  FxSystemWorkItem *v8; // rax
  FxSystemWorkItem *v9; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int v11; // edi

  v6 = (FxSystemWorkItem *)FxObjectHandleAlloc(
                             FxDriverGlobals,
                             ExDefaultNonPagedPoolType,
                             0xE0uLL,
                             0,
                             0LL,
                             0,
                             FxObjectTypeInternal);
  if ( v6 )
  {
    FxSystemWorkItem::FxSystemWorkItem(v6, FxDriverGlobals);
    v9 = v8;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
    return 3221225626LL;
  m_Globals = v9->m_Globals;
  v9->m_ObjectFlags |= 0x811u;
  v11 = MxWorkItem::Allocate(&v9->m_WorkItem, WdmObject, v7);
  if ( v11 < 0 )
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xDu, WPP_FxSystemWorkitem_cpp_Traceguids);
  else
    v11 = 0;
  if ( v11 < 0 )
    v9->Release(v9, 0LL, 0, 0LL);
  else
    *pObject = v9;
  return (unsigned int)v11;
}
