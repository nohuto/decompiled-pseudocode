/*
 * XREFs of ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C004F1D0
 * Callers:
 *     ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1C0075980 (-AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C0012E68 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ??0FxRequestFromLookaside@@QEAA@PEAVFxDevice@@PEAU_IRP@@@Z @ 0x1C004EC6C (--0FxRequestFromLookaside@@QEAA@PEAVFxDevice@@PEAU_IRP@@@Z.c)
 *     ?AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00517B8 (-AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
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
  FxDevice *v12; // r9
  int _a1; // eax
  unsigned int v14; // esi

  *Request = 0LL;
  RequestMemory = (FxRequestFromLookaside *)FxDevice::AllocateRequestMemory(Device, RequestAttributes);
  if ( RequestMemory )
  {
    FxRequestFromLookaside::FxRequestFromLookaside(RequestMemory, Device, Irp);
    v10 = v9;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    if ( Irp )
      FxRequest::AssignMemoryBuffers(v10, Device->m_ReadWriteIoType);
    v12 = 0LL;
    if ( !Device->m_Globals->FxRequestParentOptimizationOn )
      v12 = Device;
    _a1 = FxObject::Commit(v10, (_FX_DRIVER_GLOBALS *)RequestAttributes, 0LL, v12, 0);
    v14 = _a1;
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_d(Device->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, _a1);
      FxObject::ClearEvtCallbacks(v10);
      v10->DeleteObject(v10);
    }
    else
    {
      *Request = v10;
    }
    return v14;
  }
  else
  {
    WPP_IFR_SF_d(Device->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
}
