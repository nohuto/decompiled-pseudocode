/*
 * XREFs of ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C005CA18
 * Callers:
 *     FxUsbTargetDeviceCreate @ 0x1C0057F20 (FxUsbTargetDeviceCreate.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C0017D64 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_dqd @ 0x1C001DADC (WPP_IFR_SF_dqd.c)
 *     ?FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z @ 0x1C005BD14 (-FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z.c)
 *     ?FxUsbValidateConfigDescriptorHeaders@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@_K@Z @ 0x1C005BDBC (-FxUsbValidateConfigDescriptorHeaders@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIP.c)
 *     ?FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX2J_KW4FxUsbValidateDescriptorOp@@K@Z @ 0x1C005BE68 (-FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX.c)
 *     ??0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C005E888 (--0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@.c)
 *     ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x1C005EB4C (-CreateSettings@FxUsbInterface@@QEAAJXZ.c)
 */

__int64 __fastcall FxUsbDevice::CreateInterfaces(FxUsbDevice *this)
{
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int64 wTotalLength; // r13
  unsigned __int8 v5; // r15
  signed int _a1; // edi
  unsigned __int16 v7; // r9
  __int64 bNumInterfaces; // rcx
  unsigned __int64 v9; // r9
  ULONG Tag; // ecx
  void *v11; // rax
  FX_POOL **v12; // rax
  _USB_CONFIGURATION_DESCRIPTOR *v13; // rsi
  int v14; // edx
  _USB_COMMON_DESCRIPTOR *DescriptorType; // rax
  _WDF_OBJECT_ATTRIBUTES *v16; // r11
  _USB_INTERFACE_DESCRIPTOR *v17; // r12
  __int64 bInterfaceNumber; // rcx
  unsigned __int8 v19; // al
  FxPoolTypeOrPoolFlags v20; // xmm1
  _FX_DRIVER_GLOBALS *v21; // rcx
  FxUsbInterface *v22; // rax
  FxObject *v23; // rax
  FxUsbInterface *v24; // rsi
  __int64 v25; // rcx
  int m_NumInterfaces; // eax
  int v27; // ecx
  FxUsbValidateDescriptorOp _a2; // [rsp+30h] [rbp-D0h]
  FxPoolTypeOrPoolFlags v30; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 descCountBitMap[256]; // [rsp+50h] [rbp-B0h] BYREF
  void *retaddr; // [rsp+188h] [rbp+88h]

  m_ConfigDescriptor = this->m_ConfigDescriptor;
  m_Globals = this->m_Globals;
  wTotalLength = m_ConfigDescriptor->wTotalLength;
  v5 = 0;
  _a1 = FxUsbValidateConfigDescriptorHeaders(m_Globals, m_ConfigDescriptor, wTotalLength);
  if ( _a1 < 0 )
  {
    v7 = 10;
LABEL_3:
    WPP_IFR_SF_D(m_Globals, 2u, 0xEu, v7, WPP_FxUsbDevice_cpp_Traceguids, _a1);
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
    v7 = 11;
    goto LABEL_3;
  }
  bNumInterfaces = this->m_ConfigDescriptor->bNumInterfaces;
  if ( (_BYTE)bNumInterfaces )
    v9 = 8 * bNumInterfaces;
  else
    v9 = 8LL;
  Tag = m_Globals->Tag;
  v11 = retaddr;
  *(_QWORD *)&v30.UsePoolType = 0LL;
  v30.u.PoolFlags = 64LL;
  if ( !m_Globals->FxPoolTrackingOn )
    v11 = 0LL;
  v12 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, (__m128i *)&v30, v9, Tag, v11);
  v13 = this->m_ConfigDescriptor;
  this->m_Interfaces = (FxUsbInterface **)v12;
  v14 = v13->bNumInterfaces;
  if ( v12 )
  {
    this->m_NumInterfaces = v14;
    memset(descCountBitMap, 0, 0xFFuLL);
    DescriptorType = FxUsbFindDescriptorType((char *)v13, v13->wTotalLength, &v13->bLength, 4);
    v16 = 0LL;
    v17 = (_USB_INTERFACE_DESCRIPTOR *)DescriptorType;
    if ( DescriptorType )
    {
      do
      {
        if ( v5 >= v13->bNumInterfaces )
          break;
        bInterfaceNumber = v17->bInterfaceNumber;
        v19 = descCountBitMap[bInterfaceNumber];
        if ( (v19 & 1) == 0 )
        {
          *(_QWORD *)&v30.UsePoolType = 0LL;
          v30.u.PoolFlags = 64LL;
          v20 = v30;
          descCountBitMap[bInterfaceNumber] = v19 | 1;
          v21 = this->m_Globals;
          v30 = v20;
          v22 = (FxUsbInterface *)FxObjectHandleAllocCommon(
                                    v21,
                                    &v30,
                                    0x98uLL,
                                    0,
                                    v16,
                                    (unsigned __int16)v16,
                                    FxObjectTypeExternal);
          if ( !v22 || (FxUsbInterface::FxUsbInterface(v22, m_Globals, this, v17), (v24 = (FxUsbInterface *)v23) == 0LL) )
          {
            _a1 = -1073741670;
            WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0xDu, WPP_FxUsbDevice_cpp_Traceguids, v5, -1073741670);
            return (unsigned int)_a1;
          }
          _a1 = FxObject::Commit(v23, 0LL, 0LL, (_FX_DRIVER_GLOBALS *)this, 1u);
          if ( _a1 < 0 )
            return (unsigned int)_a1;
          _a1 = FxUsbInterface::CreateSettings(v24);
          if ( _a1 < 0 )
            return (unsigned int)_a1;
          v25 = v5++;
          this->m_Interfaces[v25] = v24;
        }
        v13 = this->m_ConfigDescriptor;
        v17 = (_USB_INTERFACE_DESCRIPTOR *)FxUsbFindDescriptorType(
                                             (char *)v13,
                                             wTotalLength,
                                             &v17->bLength + v17->bLength,
                                             4);
      }
      while ( v17 );
      if ( v5 )
        goto LABEL_27;
    }
    m_NumInterfaces = this->m_NumInterfaces;
    if ( (_BYTE)m_NumInterfaces )
    {
      _a1 = -1073741808;
      WPP_IFR_SF_dqd(this->m_Globals, 2u, 0xEu, 0xEu, WPP_FxUsbDevice_cpp_Traceguids, m_NumInterfaces, v13, -1073741808);
    }
    else
    {
LABEL_27:
      if ( v17 && this->m_NumInterfaces == (_BYTE)v16 )
      {
        WPP_IFR_SF_(this->m_Globals, 3u, 0xEu, 0xFu, WPP_FxUsbDevice_cpp_Traceguids);
        this->m_MismatchedInterfacesInConfigDescriptor = 1;
      }
      else
      {
        v27 = this->m_NumInterfaces;
        if ( v5 < (unsigned __int8)v27 )
        {
          WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxUsbDevice_cpp_Traceguids, v27, v5);
          this->m_NumInterfaces = v5;
        }
      }
    }
  }
  else
  {
    _a1 = -1073741670;
    WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0xCu, WPP_FxUsbDevice_cpp_Traceguids, v14, -1073741670);
  }
  return (unsigned int)_a1;
}
