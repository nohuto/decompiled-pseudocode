/*
 * XREFs of VfAddContextToHandle @ 0x1C00B8284
 * Callers:
 *     AddEventHooksWdfDeviceCreate @ 0x1C00B7C90 (AddEventHooksWdfDeviceCreate.c)
 *     AddEventHooksWdfIoQueueCreate @ 0x1C00B8014 (AddEventHooksWdfIoQueueCreate.c)
 * Callees:
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00029B8 (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z @ 0x1C0017C04 (-_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z.c)
 *     ?AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0045FE8 (-AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 */

__int64 __fastcall VfAddContextToHandle(
        FxContextHeader *ContextHeader,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void *Handle,
        void **Context)
{
  __int64 result; // rax
  FxObject *ObjectFromHandle; // rax
  FxObject *v10; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int _a2; // eax
  int status[4]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int16 offset; // [rsp+80h] [rbp+8h] BYREF

  status[0] = 0;
  if ( !ContextHeader )
    return 3221225485LL;
  offset = 0;
  ObjectFromHandle = FxObject::_GetObjectFromHandle((unsigned __int64)Handle, &offset);
  v10 = ObjectFromHandle;
  m_Globals = ObjectFromHandle->m_Globals;
  if ( offset )
  {
    status[0] = -1073741767;
    WPP_IFR_SF_qd(m_Globals, 3u, 0xBu, 0xCu, WPP_Verifier_cpp_Traceguids, Handle, -1073741767);
  }
  else
  {
    FxObject::AddRef(ObjectFromHandle, status, 622, "minkernel\\wdf\\framework\\shared\\enhancedverif\\verifier.cpp");
    FxContextHeaderInit(ContextHeader, v10, Attributes);
    _a2 = FxObject::AddContext(v10, ContextHeader, Context, Attributes);
    status[0] = _a2;
    if ( _a2 )
      WPP_IFR_SF_qd(m_Globals, 3u, 0xBu, 0xDu, WPP_Verifier_cpp_Traceguids, Handle, _a2);
    v10->Release(v10, status, 639, "minkernel\\wdf\\framework\\shared\\enhancedverif\\verifier.cpp");
  }
  result = (unsigned int)status[0];
  if ( status[0] )
  {
    FxPoolFree((FX_POOL_TRACKER *)ContextHeader);
    return (unsigned int)status[0];
  }
  return result;
}
