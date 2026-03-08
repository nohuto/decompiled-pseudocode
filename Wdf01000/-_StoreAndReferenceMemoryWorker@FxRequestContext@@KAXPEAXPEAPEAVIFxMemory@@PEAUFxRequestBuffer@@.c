/*
 * XREFs of ?_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@@Z @ 0x1C0008F1C
 * Callers:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C00022E8 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C0008F00 (-StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C000F2C0 (-StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxInternalIoctlOthersContext@@EEAAXPEAUFxRequestBuffer@@@Z @ 0x1C00503E0 (-StoreAndReferenceMemory@FxInternalIoctlOthersContext@@EEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0052BC8 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@@Z @ 0x1C0060BE0 (-StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@P.c)
 *     ?StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C00613F0 (-StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxRequestContext::_StoreAndReferenceMemoryWorker(
        void *Tag,
        IFxMemory **PPMemory,
        FxRequestBuffer *Buffer)
{
  IFxMemory *v6; // rax
  IFxMemory *Memory; // rcx
  __int64 v8; // r8

  if ( Buffer->DataType == FxRequestBufferMemory )
  {
    Memory = Buffer->u.Memory.Memory;
    v8 = 130LL;
LABEL_6:
    Memory->AddRef(Memory, Tag, v8, "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    v6 = Buffer->u.Memory.Memory;
    goto LABEL_4;
  }
  if ( Buffer->DataType == FxRequestBufferReferencedMdl )
  {
    Memory = Buffer->u.Memory.Memory;
    v8 = 135LL;
    goto LABEL_6;
  }
  v6 = 0LL;
LABEL_4:
  *PPMemory = v6;
}
