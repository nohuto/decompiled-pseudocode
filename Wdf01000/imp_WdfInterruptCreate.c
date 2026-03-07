int __fastcall imp_WdfInterruptCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_INTERRUPT_CONFIG *Configuration,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFINTERRUPT__ **Interrupt)
{
  unsigned int v9; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  WDFINTERRUPT__ **v11; // r12
  unsigned int v12; // edx
  _FX_DRIVER_GLOBALS *v13; // rcx
  int v14; // r8d
  unsigned int v15; // eax
  size_t _a2; // rbx
  int result; // eax
  unsigned __int8 v18; // r8
  void *ParentObject; // rdx
  FxDevice *v20; // r14
  unsigned __int8 m_CallbackFlags; // bl
  unsigned __int8 v22; // r8
  int v23; // ebx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *InterruptTranslated; // rax
  unsigned __int16 v25; // r9
  unsigned __int8 CanWakeDevice; // r8
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *InterruptRaw; // rdx
  int v28; // edx
  FxObject *pParent; // [rsp+40h] [rbp-61h] BYREF
  FxInterrupt *pFxInterrupt; // [rsp+48h] [rbp-59h] BYREF
  _WDF_INTERRUPT_CONFIG intConfig; // [rsp+50h] [rbp-51h] BYREF
  ULONG_PTR retaddr; // [rsp+F8h] [rbp+57h]
  unsigned __int8 PreviousIrql; // [rsp+100h] [rbp+5Fh] BYREF
  FxDevice *pDevice; // [rsp+110h] [rbp+6Fh] BYREF

  pFxInterrupt = 0LL;
  pDevice = 0LL;
  pParent = 0LL;
  memset(&intConfig, 0, sizeof(intConfig));
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !Configuration )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v11 = Interrupt;
  if ( !Interrupt )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v9, 0xDu) )
    v15 = v14 + 91;
  else
    v15 = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v13, v12, 0xBu) ? 96 : 56;
  _a2 = Configuration->Size;
  if ( (_DWORD)_a2 != 104 )
  {
    if ( (_DWORD)_a2 != 96 && (_DWORD)_a2 != 56 )
    {
      WPP_IFR_SF_DD(m_Globals, v12, 0xCu, 0xAu, WPP_FxInterruptApi_cpp_Traceguids, _a2, v15);
      return -1073741820;
    }
    memset(&intConfig, 0, sizeof(intConfig));
    intConfig.EvtInterruptIsr = Configuration->EvtInterruptIsr;
    intConfig.EvtInterruptDpc = Configuration->EvtInterruptDpc;
    intConfig.ShareVector = WdfUseDefault;
    intConfig.ReportInactiveOnPowerDown = WdfUseDefault;
    memmove(&intConfig, Configuration, _a2);
    intConfig.Size = 104;
    Configuration = &intConfig;
  }
  if ( !Configuration->EvtInterruptIsr )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0xBu, WPP_FxInterruptApi_cpp_Traceguids, Configuration);
    return -1073741811;
  }
  result = FxValidateObjectAttributes(m_Globals, Attributes, Configuration->AutomaticSerialization == 0);
  if ( result >= 0 )
  {
    if ( Attributes && (ParentObject = Attributes->ParentObject) != 0LL )
    {
      FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
      v20 = pDevice;
    }
    else
    {
      v20 = pDevice;
      pParent = pDevice;
    }
    if ( v20->m_CurrentPnpState == WdfDevStatePnpInit )
    {
      if ( Configuration->InterruptRaw || (InterruptTranslated = Configuration->InterruptTranslated) != 0LL )
      {
        v25 = 13;
        goto LABEL_58;
      }
      if ( Configuration->CanWakeDevice )
      {
        v25 = 14;
        goto LABEL_58;
      }
    }
    else
    {
      PreviousIrql = 0;
      FxNonPagedObject::Lock(v20, &PreviousIrql, v18);
      m_CallbackFlags = v20->m_CallbackFlags;
      FxNonPagedObject::Unlock(v20, PreviousIrql, v22);
      if ( (m_CallbackFlags & 1) == 0 )
      {
        v23 = -1073741436;
        WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0xCu, WPP_FxInterruptApi_cpp_Traceguids, Device, -1073741436);
        return v23;
      }
      if ( !Configuration->InterruptRaw || (InterruptTranslated = Configuration->InterruptTranslated) == 0LL )
      {
        v23 = -1073741436;
        v25 = 15;
        goto LABEL_59;
      }
      if ( Configuration->ShareVector != WdfUseDefault )
      {
        v23 = -1073741436;
        v25 = 16;
LABEL_59:
        WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, v25, WPP_FxInterruptApi_cpp_Traceguids, Configuration, v23);
        return v23;
      }
      v20 = pDevice;
    }
    CanWakeDevice = Configuration->CanWakeDevice;
    if ( CanWakeDevice )
    {
      if ( (InterruptTranslated->Flags & 0x20) == 0 )
      {
        v25 = 17;
LABEL_58:
        v23 = -1073741811;
        goto LABEL_59;
      }
      if ( !v20->m_PkgPnp->m_PowerPolicyMachine.m_Owner )
      {
        v25 = 18;
        goto LABEL_58;
      }
      if ( FxDevice::IsPdo(v20) )
      {
        v25 = 19;
        goto LABEL_58;
      }
    }
    if ( Configuration->EvtInterruptDpc && Configuration->EvtInterruptWorkItem )
    {
      v25 = 20;
      goto LABEL_58;
    }
    if ( Configuration->PassiveHandling )
    {
      if ( Configuration->SpinLock )
      {
        v25 = 24;
        goto LABEL_58;
      }
    }
    else
    {
      if ( Configuration->WaitLock )
      {
        v25 = 21;
        goto LABEL_58;
      }
      if ( CanWakeDevice )
      {
        v25 = 22;
        goto LABEL_58;
      }
    }
    if ( m_Globals->FxVerifierOn )
    {
      InterruptRaw = Configuration->InterruptRaw;
      if ( InterruptRaw )
      {
        result = FxPkgPnp::ValidateInterruptResourceCm(
                   v20->m_PkgPnp,
                   InterruptRaw,
                   Configuration->InterruptTranslated,
                   Configuration);
        if ( result < 0 )
          return result;
        v20 = pDevice;
      }
    }
    v28 = FxInterrupt::_CreateAndInit(m_Globals, v20, pParent, Attributes, Configuration, &pFxInterrupt);
    if ( v28 >= 0 )
      *v11 = (WDFINTERRUPT__ *)FxObject::GetObjectHandleUnchecked(pFxInterrupt);
    return v28;
  }
  return result;
}
