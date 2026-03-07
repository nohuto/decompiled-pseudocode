void __fastcall FxPkgFdo::HandleQueryCapabilitiesCompletion(FxPkgFdo *this, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // rdx
  FxPnpCaps v6; // ecx
  int v7; // ecx
  unsigned int States; // r9d
  signed int *p_FullCreateOptions; // r8
  unsigned int i; // ecx
  signed int v11; // eax
  signed int SystemWake; // eax
  int DeviceWake; // eax
  unsigned int D1Latency; // eax
  unsigned int D2Latency; // eax
  unsigned int D3Latency; // eax
  unsigned int m_PnpCapsAddress; // eax
  unsigned int m_PnpCapsUINumber; // eax
  _FX_DRIVER_GLOBALS *v19; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x11u, WPP_fxpkgfdo_cpp_Traceguids);
  SecurityContext = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v6.ByEnum = (FxPnpCaps::<unnamed_type_ByEnum>)this->m_PnpCaps;
  if ( LOWORD(SecurityContext->SecurityQos) >= 0x40u && WORD1(SecurityContext->SecurityQos) == 1 )
  {
    if ( (*(_BYTE *)&v6.ByEnum & 3) == 0 )
      HIDWORD(SecurityContext->SecurityQos) &= ~4u;
    if ( (*(_BYTE *)&v6.ByEnum & 0xC) == 0 )
      HIDWORD(SecurityContext->SecurityQos) &= ~8u;
    if ( (*(_BYTE *)&v6.ByEnum & 0xC0) == 0 )
      HIDWORD(SecurityContext->SecurityQos) &= ~0x20u;
    if ( (*(_BYTE *)&v6.ByEnum & 0x30) != 0 )
    {
      if ( (*(_BYTE *)&v6.ByEnum & 0x30) == 0x10 )
        HIDWORD(SecurityContext->SecurityQos) |= 0x10u;
    }
    else
    {
      HIDWORD(SecurityContext->SecurityQos) &= ~0x10u;
    }
    v7 = *(_WORD *)&v6.ByEnum & 0x3000;
    if ( v7 )
    {
      if ( v7 == 4096 )
        HIDWORD(SecurityContext->SecurityQos) |= 0x200u;
    }
    else
    {
      HIDWORD(SecurityContext->SecurityQos) &= ~0x200u;
    }
    States = this->m_PowerCaps.States;
    p_FullCreateOptions = (signed int *)&SecurityContext->FullCreateOptions;
    for ( i = 4; i < 0x1C; i += 4 )
    {
      v11 = (States & (15 << i)) >> i;
      if ( v11 != 5 && v11 > *p_FullCreateOptions )
        *p_FullCreateOptions = v11;
      ++p_FullCreateOptions;
    }
    SystemWake = this->m_PowerCaps.SystemWake;
    if ( (_BYTE)SystemWake != 7 && SystemWake < (signed int)SecurityContext[1].FullCreateOptions )
      SecurityContext[1].FullCreateOptions = SystemWake;
    DeviceWake = this->m_PowerCaps.DeviceWake;
    if ( (_BYTE)DeviceWake != 5 && DeviceWake < SLODWORD(SecurityContext[2].SecurityQos) )
      LODWORD(SecurityContext[2].SecurityQos) = DeviceWake;
    D1Latency = this->m_PowerCaps.D1Latency;
    if ( D1Latency != -1 && D1Latency > HIDWORD(SecurityContext[2].SecurityQos) )
      HIDWORD(SecurityContext[2].SecurityQos) = D1Latency;
    D2Latency = this->m_PowerCaps.D2Latency;
    if ( D2Latency != -1 && D2Latency > LODWORD(SecurityContext[2].AccessState) )
      LODWORD(SecurityContext[2].AccessState) = D2Latency;
    D3Latency = this->m_PowerCaps.D3Latency;
    if ( D3Latency != -1 && D3Latency > HIDWORD(SecurityContext[2].AccessState) )
      HIDWORD(SecurityContext[2].AccessState) = D3Latency;
    m_PnpCapsAddress = this->m_PnpCapsAddress;
    if ( m_PnpCapsAddress != -1 )
      LODWORD(SecurityContext->AccessState) = m_PnpCapsAddress;
    m_PnpCapsUINumber = this->m_PnpCapsUINumber;
    if ( m_PnpCapsUINumber != -1 )
      HIDWORD(SecurityContext->AccessState) = m_PnpCapsUINumber;
  }
  v19 = this->m_Globals;
  if ( v19->FxVerboseOn )
    WPP_IFR_SF_(v19, 5u, 0xCu, 0x12u, WPP_fxpkgfdo_cpp_Traceguids);
}
