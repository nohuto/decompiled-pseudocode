/*
 * XREFs of ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C000DB80
 * Callers:
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C000F746 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1C00634F0 (-AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0085BCC (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C000D986 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ??0FxRequestFromLookaside@@QEAA@PEAVFxDevice@@PEAU_IRP@@@Z @ 0x1C003A774 (--0FxRequestFromLookaside@@QEAA@PEAVFxDevice@@PEAU_IRP@@@Z.c)
 *     ?AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C003D8A8 (-AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequest::_CreateForPackage(
        FxDevice *Device,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        _IRP *Irp,
        FxRequest **Request)
{
  FxRequestFromLookaside *RequestMemory; // rax
  FxRequest *v9; // rax
  FxRequest *v10; // rbx
  _FX_DRIVER_GLOBALS *v11; // r9
  signed int _a1; // esi

  *Request = 0LL;
  RequestMemory = (FxRequestFromLookaside *)FxDevice::AllocateRequestMemory(Device, RequestAttributes);
  if ( RequestMemory && (FxRequestFromLookaside::FxRequestFromLookaside(RequestMemory, Device, Irp), (v10 = v9) != 0LL) )
  {
    if ( Irp )
      FxRequest::AssignMemoryBuffers(v9, Device->m_ReadWriteIoType);
    v11 = 0LL;
    if ( !Device->m_Globals->FxRequestParentOptimizationOn )
      v11 = (_FX_DRIVER_GLOBALS *)Device;
    _a1 = FxObject::Commit(v10, RequestAttributes, 0LL, v11, 0);
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_D(Device->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, _a1);
      FxObject::ClearEvtCallbacks(v10);
      v10->DeleteObject(v10);
    }
    else
    {
      *Request = v10;
    }
    return (unsigned int)_a1;
  }
  else
  {
    WPP_IFR_SF_D(Device->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, 0xC000009A);
    return 3221225626LL;
  }
}
