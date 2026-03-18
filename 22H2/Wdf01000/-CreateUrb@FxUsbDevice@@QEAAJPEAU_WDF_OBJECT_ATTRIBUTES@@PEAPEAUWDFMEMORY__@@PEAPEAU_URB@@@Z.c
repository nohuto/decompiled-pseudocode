/*
 * XREFs of ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C00701BC
 * Callers:
 *     imp_WdfUsbTargetDeviceCreateUrb @ 0x1C00698C0 (imp_WdfUsbTargetDeviceCreateUrb.c)
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000CFA4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_ @ 0x1C00325D4 (WPP_IFR_SF_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00592C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z @ 0x1C006F530 (--0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z.c)
 *     ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x1C00709A0 (-IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z.c)
 *     USBD_UrbAllocate @ 0x1C008FFDC (USBD_UrbAllocate.c)
 *     USBD_UrbFree @ 0x1C00901E4 (USBD_UrbFree.c)
 */

__int64 __fastcall FxUsbDevice::CreateUrb(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  __int64 v9; // rdi
  int v10; // eax
  int _a1; // ebx
  _FX_DRIVER_GLOBALS *v12; // r14
  FxUsbUrb *v13; // rax
  __int64 v14; // rax
  FxObject *pParent; // [rsp+40h] [rbp-10h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+48h] [rbp-8h] BYREF
  ULONG_PTR retaddr; // [rsp+78h] [rbp+28h]
  _URB *urbLocal; // [rsp+80h] [rbp+30h] BYREF

  m_Globals = this->m_Globals;
  urbLocal = 0LL;
  hMemory = 0LL;
  pParent = 0LL;
  v9 = 0LL;
  v10 = FxValidateObjectAttributesForParentHandle(m_Globals, Attributes, 0);
  _a1 = v10;
  if ( v10 < 0 )
  {
    if ( v10 != -1071644142 )
      goto $Done_51;
    v12 = this->m_Globals;
    pParent = this;
  }
  else
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Attributes->ParentObject, 0x1000u, (void **)&pParent);
    v12 = pParent->m_Globals;
    if ( !FxUsbDevice::IsObjectDisposedOnRemove(this, pParent) )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x21u, WPP_FxUsbDevice_cpp_Traceguids);
      _a1 = -1073741811;
      goto LABEL_21;
    }
  }
  _a1 = FxValidateObjectAttributes(v12, Attributes, 0);
  if ( _a1 >= 0 )
  {
    if ( !UrbMemory )
      FxVerifierNullBugCheck(v12, retaddr);
    *UrbMemory = 0LL;
    _a1 = USBD_UrbAllocate(this->m_USBDHandle, &urbLocal);
    if ( _a1 < 0 )
    {
      urbLocal = 0LL;
      WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x22u, WPP_FxUsbDevice_cpp_Traceguids, _a1);
      goto $Done_51;
    }
    v13 = (FxUsbUrb *)FxObjectHandleAlloc(
                        v12,
                        ExDefaultNonPagedPoolType,
                        0x88uLL,
                        0,
                        Attributes,
                        0,
                        FxObjectTypeExternal);
    if ( v13 )
    {
      FxUsbUrb::FxUsbUrb(v13, v12, this->m_USBDHandle, urbLocal, 0x98uLL);
      v9 = v14;
    }
    if ( v9 )
    {
      urbLocal = 0LL;
      _a1 = FxObject::Commit((FxObject *)v9, (_FX_DRIVER_GLOBALS *)Attributes, (void **)&hMemory, pParent, 1u);
      if ( _a1 < 0 )
      {
LABEL_19:
        if ( v9 )
        {
          FxObject::ClearEvtCallbacks((FxObject *)v9);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
        }
        goto LABEL_21;
      }
      *UrbMemory = hMemory;
      if ( Urb )
        *Urb = (_URB *)(**(__int64 (__fastcall ***)(__int64))(v9 + 104))(v9 + 104);
$Done_51:
      if ( _a1 >= 0 )
        return (unsigned int)_a1;
      goto LABEL_19;
    }
    _a1 = -1073741670;
  }
LABEL_21:
  if ( urbLocal )
    USBD_UrbFree(this->m_USBDHandle, urbLocal);
  return (unsigned int)_a1;
}
