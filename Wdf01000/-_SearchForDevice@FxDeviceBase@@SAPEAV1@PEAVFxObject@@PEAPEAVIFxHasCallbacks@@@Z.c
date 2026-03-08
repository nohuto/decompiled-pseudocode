/*
 * XREFs of ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0039624
 * Callers:
 *     imp_WdfDmaEnablerCreate @ 0x1C0018680 (imp_WdfDmaEnablerCreate.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C0023328 (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00395E0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C0040A48 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0040FCC (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C005563C (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0062550 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C007F298 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     ?GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z @ 0x1C00462F0 (-GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z.c)
 */

FxDeviceBase *__fastcall FxDeviceBase::_SearchForDevice(FxObject *Object, IFxHasCallbacks **Callbacks)
{
  FxObject *v2; // rdi
  FxDeviceBase *m_DeviceBase; // rsi
  const void *_a1; // rax
  FxObject *ParentObjectReferenced; // rbx
  const void *ObjectHandleUnchecked; // rax
  const void *_a2; // rdx
  FxQueryInterfaceParams cbParams; // [rsp+40h] [rbp-18h] BYREF

  cbParams.Object = (void **)Callbacks;
  v2 = Object;
  cbParams.Type = 5379;
  *(_DWORD *)&cbParams.Offset = 0;
  *(&cbParams.Offset + 2) = 0;
  if ( Callbacks )
    *Callbacks = 0LL;
  m_DeviceBase = Object->m_DeviceBase;
  if ( m_DeviceBase )
  {
    if ( Callbacks )
    {
      FxObject::AddRef(Object, Object, 256, "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp");
      do
      {
        if ( v2->QueryInterface(v2, &cbParams) >= 0 )
        {
          v2->Release(v2, Object, 268, "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp");
          return m_DeviceBase;
        }
        ParentObjectReferenced = FxObject::GetParentObjectReferenced(v2, Object);
        v2->Release(v2, Object, 278, "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp");
        v2 = ParentObjectReferenced;
      }
      while ( ParentObjectReferenced );
      if ( m_DeviceBase->QueryInterface(m_DeviceBase, &cbParams) < 0 )
      {
        FxObject::GetObjectHandleUnchecked(m_DeviceBase);
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(Object);
        WPP_IFR_SF_qq(Object->m_Globals, 2u, 0x14u, 0xCu, WPP_FxDeviceBase_cpp_Traceguids, ObjectHandleUnchecked, _a2);
      }
    }
    return m_DeviceBase;
  }
  else
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Object);
    WPP_IFR_SF_q(v2->m_Globals, 2u, 0x14u, 0xBu, WPP_FxDeviceBase_cpp_Traceguids, _a1);
    return 0LL;
  }
}
