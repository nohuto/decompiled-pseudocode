/*
 * XREFs of ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0042DAC
 * Callers:
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0040FCC (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?Initialize@FxDisposeList@@QEAAJPEAX@Z @ 0x1C0041E58 (-Initialize@FxDisposeList@@QEAAJPEAX@Z.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C0060DE4 (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C00641C4 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 *     ?AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ @ 0x1C0071874 (-AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C007F298 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ??0FxSystemWorkItem@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0042B28 (--0FxSystemWorkItem@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxSystemWorkItem@@AEAAJPEAX@Z @ 0x1C0042D18 (-Initialize@FxSystemWorkItem@@AEAAJPEAX@Z.c)
 */

__int64 __fastcall FxSystemWorkItem::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _DEVICE_OBJECT *WdmObject,
        FxSystemWorkItem **pObject)
{
  FxSystemWorkItem *v6; // rax
  FxSystemWorkItem *v7; // rax
  void *v8; // r8
  FxSystemWorkItem *v9; // rbx
  __int64 result; // rax
  unsigned int v11; // edi
  FxPoolTypeOrPoolFlags v12; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&v12.UsePoolType = 0LL;
  v12.u.PoolFlags = 64LL;
  v6 = (FxSystemWorkItem *)FxObjectHandleAllocCommon(FxDriverGlobals, &v12, 0xE0uLL, 0, 0LL, 0, FxObjectTypeInternal);
  if ( !v6 )
    return 3221225626LL;
  FxSystemWorkItem::FxSystemWorkItem(v6, FxDriverGlobals);
  v9 = v7;
  if ( !v7 )
    return 3221225626LL;
  result = FxSystemWorkItem::Initialize(v7, WdmObject, v8);
  v11 = result;
  if ( (int)result >= 0 )
  {
    *pObject = v9;
  }
  else
  {
    v9->Release(v9, 0LL, 0, 0LL);
    return v11;
  }
  return result;
}
