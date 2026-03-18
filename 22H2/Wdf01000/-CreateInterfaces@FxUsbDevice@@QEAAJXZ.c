/*
 * XREFs of ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C006FBD8
 * Callers:
 *     FxUsbTargetDeviceCreate @ 0x1C006A510 (FxUsbTargetDeviceCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     __security_check_cookie @ 0x1C001A4F0 (__security_check_cookie.c)
 *     memset @ 0x1C001D540 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C002E818 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_ @ 0x1C00325D4 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_dqd @ 0x1C0034404 (WPP_IFR_SF_dqd.c)
 *     ?FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z @ 0x1C006EE1C (-FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z.c)
 *     ?FxUsbValidateConfigDescriptorHeaders@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@_K@Z @ 0x1C006EEC4 (-FxUsbValidateConfigDescriptorHeaders@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIP.c)
 *     ?FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX2J_KW4FxUsbValidateDescriptorOp@@K@Z @ 0x1C006EF70 (-FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX.c)
 *     ??0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C0071AE4 (--0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@.c)
 *     ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x1C0071DA0 (-CreateSettings@FxUsbInterface@@QEAAJXZ.c)
 */

__int64 __fastcall FxUsbDevice::CreateInterfaces(FxUsbDevice *this)
{
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int64 wTotalLength; // r12
  int _a1; // edi
  unsigned __int16 v6; // r9
  __int64 bNumInterfaces; // rcx
  unsigned __int64 v8; // rsi
  FX_POOL **v9; // rax
  _USB_CONFIGURATION_DESCRIPTOR *v10; // rsi
  unsigned __int8 v11; // bp
  _USB_INTERFACE_DESCRIPTOR *DescriptorType; // r15
  unsigned __int8 v13; // al
  _POOL_TYPE v14; // edx
  FxUsbInterface *v15; // rax
  FxUsbInterface *v16; // rax
  FxUsbInterface *v17; // rsi
  __int64 v18; // rcx
  int m_NumInterfaces; // eax
  int v20; // ecx
  FxUsbValidateDescriptorOp _a2; // [rsp+30h] [rbp-148h]
  unsigned __int8 descCountBitMap[256]; // [rsp+40h] [rbp-138h] BYREF
  void *retaddr; // [rsp+178h] [rbp+0h]

  m_ConfigDescriptor = this->m_ConfigDescriptor;
  m_Globals = this->m_Globals;
  wTotalLength = m_ConfigDescriptor->wTotalLength;
  _a1 = FxUsbValidateConfigDescriptorHeaders(m_Globals, m_ConfigDescriptor, wTotalLength);
  if ( _a1 < 0 )
  {
    v6 = 10;
LABEL_3:
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, v6, WPP_FxUsbDevice_cpp_Traceguids, _a1);
    return (unsigned int)_a1;
  }
  _a1 = FxUsbValidateDescriptorType(
          m_Globals,
          this->m_ConfigDescriptor,
          (char *)this->m_ConfigDescriptor,
          &this->m_ConfigDescriptor->bLength + this->m_ConfigDescriptor->wTotalLength,
          4,
          9uLL,
          _a2,
          0);
  if ( _a1 < 0 )
  {
    v6 = 11;
    goto LABEL_3;
  }
  bNumInterfaces = this->m_ConfigDescriptor->bNumInterfaces;
  if ( (_BYTE)bNumInterfaces )
    v8 = 8 * bNumInterfaces;
  else
    v8 = 8LL;
  v9 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, ExDefaultNonPagedPoolType, v8, m_Globals->Tag, retaddr);
  this->m_Interfaces = (FxUsbInterface **)v9;
  if ( v9 )
  {
    memset(v9, 0, v8);
    v10 = this->m_ConfigDescriptor;
    this->m_NumInterfaces = v10->bNumInterfaces;
    memset(descCountBitMap, 0, 0xFFuLL);
    v11 = 0;
    DescriptorType = (_USB_INTERFACE_DESCRIPTOR *)FxUsbFindDescriptorType(
                                                    (char *)v10,
                                                    v10->wTotalLength,
                                                    &v10->bLength,
                                                    4);
    if ( DescriptorType )
    {
      do
      {
        if ( v11 >= v10->bNumInterfaces )
          break;
        v13 = descCountBitMap[DescriptorType->bInterfaceNumber];
        if ( (v13 & 1) == 0 )
        {
          v14 = ExDefaultNonPagedPoolType;
          descCountBitMap[DescriptorType->bInterfaceNumber] = v13 | 1;
          v15 = (FxUsbInterface *)FxObjectHandleAlloc(this->m_Globals, v14, 0x98uLL, 0, 0LL, 0, FxObjectTypeExternal);
          if ( v15 )
          {
            FxUsbInterface::FxUsbInterface(v15, m_Globals, this, DescriptorType);
            v17 = v16;
          }
          else
          {
            v17 = 0LL;
          }
          if ( !v17 )
          {
            _a1 = -1073741670;
            WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0xDu, WPP_FxUsbDevice_cpp_Traceguids, v11, -1073741670);
            return (unsigned int)_a1;
          }
          _a1 = FxObject::Commit(v17, 0LL, 0LL, this, 1u);
          if ( _a1 < 0 )
            return (unsigned int)_a1;
          _a1 = FxUsbInterface::CreateSettings(v17);
          if ( _a1 < 0 )
            return (unsigned int)_a1;
          v18 = v11++;
          this->m_Interfaces[v18] = v17;
          v10 = this->m_ConfigDescriptor;
        }
        DescriptorType = (_USB_INTERFACE_DESCRIPTOR *)FxUsbFindDescriptorType(
                                                        (char *)v10,
                                                        wTotalLength,
                                                        &DescriptorType->bLength + DescriptorType->bLength,
                                                        4);
      }
      while ( DescriptorType );
      if ( v11 )
        goto LABEL_27;
    }
    m_NumInterfaces = this->m_NumInterfaces;
    if ( (_BYTE)m_NumInterfaces )
    {
      _a1 = -1073741808;
      WPP_IFR_SF_dqd(this->m_Globals, 2u, 0xEu, 0xEu, WPP_FxUsbDevice_cpp_Traceguids, m_NumInterfaces, v10, -1073741808);
    }
    else
    {
LABEL_27:
      if ( !DescriptorType || this->m_NumInterfaces )
      {
        v20 = this->m_NumInterfaces;
        if ( v11 < (unsigned __int8)v20 )
        {
          WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxUsbDevice_cpp_Traceguids, v20, v11);
          this->m_NumInterfaces = v11;
        }
      }
      else
      {
        WPP_IFR_SF_(this->m_Globals, 3u, 0xEu, 0xFu, WPP_FxUsbDevice_cpp_Traceguids);
        this->m_MismatchedInterfacesInConfigDescriptor = 1;
      }
    }
  }
  else
  {
    _a1 = -1073741670;
    WPP_IFR_SF_dd(
      m_Globals,
      2u,
      0xEu,
      0xCu,
      WPP_FxUsbDevice_cpp_Traceguids,
      this->m_ConfigDescriptor->bNumInterfaces,
      -1073741670);
  }
  return (unsigned int)_a1;
}
