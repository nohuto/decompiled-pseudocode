/*
 * XREFs of ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C005D024
 * Callers:
 *     imp_WdfUsbTargetDeviceCreateUrb @ 0x1C00573C0 (imp_WdfUsbTargetDeviceCreateUrb.c)
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
 *     USBD_UrbAllocate @ 0x1C008856C (USBD_UrbAllocate.c)
 *     USBD_UrbFree @ 0x1C008876C (USBD_UrbFree.c)
 */

__int64 __fastcall FxUsbDevice::CreateUrb(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int v9; // eax
  int v10; // ebx
  _FX_DRIVER_GLOBALS *v11; // rsi
  signed int _a1; // eax
  FxUsbUrb *v13; // rax
  FxObject *v14; // rax
  FxObject *v15; // rsi
  FxObject *pParent; // [rsp+40h] [rbp-20h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+48h] [rbp-18h] BYREF
  FxPoolTypeOrPoolFlags v19; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR retaddr; // [rsp+88h] [rbp+28h]
  _URB *urbLocal; // [rsp+90h] [rbp+30h] BYREF

  m_Globals = this->m_Globals;
  urbLocal = 0LL;
  hMemory = 0LL;
  pParent = 0LL;
  v9 = FxValidateObjectAttributesForParentHandle(m_Globals, Attributes, 0);
  v10 = v9;
  if ( v9 < 0 )
  {
    if ( v9 != -1071644142 )
      goto LABEL_18;
    v11 = this->m_Globals;
    pParent = this;
  }
  else
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Attributes->ParentObject, 0x1000u, (void **)&pParent);
    v11 = pParent->m_Globals;
    if ( !FxUsbDevice::IsObjectDisposedOnRemove(this, pParent) )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x21u, WPP_FxUsbDevice_cpp_Traceguids);
      v10 = -1073741811;
      goto LABEL_18;
    }
  }
  v10 = FxValidateObjectAttributes(v11, Attributes, 0);
  if ( v10 < 0 )
  {
LABEL_18:
    if ( urbLocal )
      USBD_UrbFree(this->m_USBDHandle, urbLocal);
    return (unsigned int)v10;
  }
  if ( !UrbMemory )
    FxVerifierNullBugCheck(v11, retaddr);
  *UrbMemory = 0LL;
  _a1 = USBD_UrbAllocate(this->m_USBDHandle, &urbLocal);
  v10 = _a1;
  if ( _a1 < 0 )
  {
    urbLocal = 0LL;
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x22u, WPP_FxUsbDevice_cpp_Traceguids, _a1);
    goto LABEL_18;
  }
  *(_QWORD *)&v19.UsePoolType = 0LL;
  v19.u.PoolFlags = 64LL;
  v13 = (FxUsbUrb *)FxObjectHandleAllocCommon(v11, &v19, 0x88uLL, 0, Attributes, 0, FxObjectTypeExternal);
  if ( !v13 || (FxUsbUrb::FxUsbUrb(v13, v11, this->m_USBDHandle, urbLocal, 0x98uLL), (v15 = v14) == 0LL) )
  {
    v10 = -1073741670;
    goto LABEL_18;
  }
  urbLocal = 0LL;
  v10 = FxObject::Commit(v14, Attributes, (void **)&hMemory, (_FX_DRIVER_GLOBALS *)pParent, 1u);
  if ( v10 < 0 )
  {
    FxObject::ClearEvtCallbacks(v15);
    v15->DeleteObject(v15);
    goto LABEL_18;
  }
  *UrbMemory = hMemory;
  if ( Urb )
    *Urb = (_URB *)((__int64 (__fastcall *)(FxObject *))v15[1].SelfDestruct)(&v15[1]);
  return (unsigned int)v10;
}
