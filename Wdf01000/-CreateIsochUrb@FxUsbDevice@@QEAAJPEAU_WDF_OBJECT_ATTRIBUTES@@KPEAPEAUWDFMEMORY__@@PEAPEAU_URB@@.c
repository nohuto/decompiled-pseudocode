/*
 * XREFs of ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C005CDE0
 * Callers:
 *     imp_WdfUsbTargetDeviceCreateIsochUrb @ 0x1C00586B0 (imp_WdfUsbTargetDeviceCreateIsochUrb.c)
 * Callees:
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0001ADC (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z @ 0x1C005C3D0 (--0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z.c)
 *     ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x1C005D7A0 (-IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z.c)
 *     USBD_IsochUrbAllocate @ 0x1C00880B0 (USBD_IsochUrbAllocate.c)
 *     USBD_UrbFree @ 0x1C008876C (USBD_UrbFree.c)
 */

__int64 __fastcall FxUsbDevice::CreateIsochUrb(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned int NumberOfIsochPackets,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int v10; // eax
  int v11; // ebx
  _FX_DRIVER_GLOBALS *v12; // rsi
  signed int _a1; // eax
  FxUsbUrb *v14; // rax
  FxObject *v15; // rax
  FxObject *v16; // rsi
  _URB **v17; // rdi
  FxObject *pParent; // [rsp+40h] [rbp-20h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+48h] [rbp-18h] BYREF
  FxPoolTypeOrPoolFlags v21; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR retaddr; // [rsp+88h] [rbp+28h]
  _URB *urbLocal; // [rsp+90h] [rbp+30h] BYREF

  m_Globals = this->m_Globals;
  urbLocal = 0LL;
  hMemory = 0LL;
  pParent = 0LL;
  v10 = FxValidateObjectAttributesForParentHandle(m_Globals, Attributes, 0);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( v10 != -1071644142 )
      goto LABEL_18;
    v12 = this->m_Globals;
    pParent = this;
  }
  else
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Attributes->ParentObject, 0x1000u, (void **)&pParent);
    v12 = pParent->m_Globals;
    if ( !FxUsbDevice::IsObjectDisposedOnRemove(this, pParent) )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x23u, WPP_FxUsbDevice_cpp_Traceguids);
      v11 = -1073741811;
      goto LABEL_18;
    }
  }
  v11 = FxValidateObjectAttributes(v12, Attributes, 0);
  if ( v11 < 0 )
  {
LABEL_18:
    if ( urbLocal )
      USBD_UrbFree(this->m_USBDHandle, urbLocal);
    return (unsigned int)v11;
  }
  if ( !UrbMemory )
    FxVerifierNullBugCheck(v12, retaddr);
  *UrbMemory = 0LL;
  _a1 = USBD_IsochUrbAllocate(this->m_USBDHandle, NumberOfIsochPackets, &urbLocal);
  v11 = _a1;
  if ( _a1 < 0 )
  {
    urbLocal = 0LL;
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x24u, WPP_FxUsbDevice_cpp_Traceguids, _a1);
    goto LABEL_18;
  }
  *(_QWORD *)&v21.UsePoolType = 0LL;
  v21.u.PoolFlags = 64LL;
  v14 = (FxUsbUrb *)FxObjectHandleAllocCommon(v12, &v21, 0x88uLL, 0, Attributes, 0, FxObjectTypeExternal);
  if ( !v14
    || (FxUsbUrb::FxUsbUrb(v14, v12, this->m_USBDHandle, urbLocal, 12 * NumberOfIsochPackets + 152), (v16 = v15) == 0LL) )
  {
    v11 = -1073741670;
    goto LABEL_18;
  }
  urbLocal = 0LL;
  v11 = FxObject::Commit(v15, Attributes, (void **)&hMemory, (_FX_DRIVER_GLOBALS *)pParent, 1u);
  if ( v11 < 0 )
  {
    FxObject::ClearEvtCallbacks(v16);
    v16->DeleteObject(v16);
    goto LABEL_18;
  }
  v17 = Urb;
  *UrbMemory = hMemory;
  if ( v17 )
    *v17 = (_URB *)((__int64 (__fastcall *)(FxObject *))v16[1].SelfDestruct)(&v16[1]);
  return (unsigned int)v11;
}
