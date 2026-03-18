/*
 * XREFs of ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C005BF4C
 * Callers:
 *     ??1FxIoContext@@UEAA@XZ @ 0x1C000528C (--1FxIoContext@@UEAA@XZ.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C00058E4 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C0007860 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C004E398 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C004E634 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C0053588 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1C0055720 (--1FxRequestMemory@@UEAA@XZ.c)
 *     ?ReleaseAndRestore@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C006DB30 (-ReleaseAndRestore@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ReleaseAndRestore@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0070E40 (-ReleaseAndRestore@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0091830 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxMdlFreeDebug(_FX_DRIVER_GLOBALS *FxDriverGlobals, _MDL *Mdl)
{
  FxDriverGlobalsDebugExtension *DebugExtension; // rax
  unsigned __int64 *p_AllocatedMdlsLock; // r12
  char v6; // bp
  FxAllocatedMdls *p_AllocatedMdls; // r15
  FxAllocatedMdls *v8; // rbx
  FxAllocatedMdls **p_Next; // r14
  KIRQL v10; // r13
  __int64 v11; // rcx
  _MDL **v12; // rdx
  __int64 v13; // rdx
  bool v14; // zf

  DebugExtension = FxDriverGlobals->DebugExtension;
  if ( DebugExtension )
  {
    p_AllocatedMdlsLock = &DebugExtension->AllocatedMdlsLock;
    v6 = 0;
    p_AllocatedMdls = &DebugExtension->AllocatedMdls;
    v8 = &DebugExtension->AllocatedMdls;
    p_Next = 0LL;
    v10 = KeAcquireSpinLockRaiseToDpc(&DebugExtension->AllocatedMdlsLock);
    if ( p_AllocatedMdls )
    {
      while ( 2 )
      {
        v11 = 0LL;
        v12 = (_MDL **)v8;
        do
        {
          if ( *v12 == Mdl )
          {
            v13 = v11;
            *(_OWORD *)&v8->Info[v13].Mdl = 0LL;
            v8->Info[v13].Caller = 0LL;
            v14 = v8->Count-- == 1;
            if ( v14 && v8 != p_AllocatedMdls )
            {
              *p_Next = v8->Next;
              ExFreePoolWithTag(v8, 0);
            }
            IoFreeMdl(Mdl);
            v6 = 1;
            goto LABEL_13;
          }
          v11 = (unsigned int)(v11 + 1);
          v12 += 3;
        }
        while ( (unsigned int)v11 < 0x10 );
        p_Next = &v8->Next;
        v8 = v8->Next;
        if ( v8 )
          continue;
        break;
      }
    }
LABEL_13:
    KeReleaseSpinLock(p_AllocatedMdlsLock, v10);
    if ( !v6 )
      FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  else
  {
    IoFreeMdl(Mdl);
  }
}
