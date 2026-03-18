/*
 * XREFs of ?_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@@Z @ 0x1C00027EC
 * Callers:
 *     ?StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C00027D0 (-StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C000AD0C (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0064C18 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C006C3E0 (-StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C006DEB0 (-StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@@Z @ 0x1C0073D0C (-StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@P.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
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
