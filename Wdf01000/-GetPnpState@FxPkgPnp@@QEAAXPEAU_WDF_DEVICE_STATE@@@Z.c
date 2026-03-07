void __fastcall FxPkgPnp::GetPnpState(FxPkgPnp *this, _WDF_DEVICE_STATE *State)
{
  FxPnpState v2; // r9d
  _WDF_TRI_STATE v3; // ecx
  int v4; // r9d

  v2.ByEnum = (FxPnpState::<unnamed_type_ByEnum>)this->m_PnpState;
  v3 = WdfFalse;
  if ( (*(_BYTE *)&v2.ByEnum & 3) != 0 )
  {
    if ( (*(_BYTE *)&v2.ByEnum & 3) == 1 )
      State->Disabled = WdfTrue;
    else
      State->Disabled = WdfUseDefault;
  }
  else
  {
    State->Disabled = WdfFalse;
  }
  if ( (*(_BYTE *)&v2.ByEnum & 0xC) != 0 )
    State->DontDisplayInUI = ((*(_BYTE *)&v2.ByEnum & 0xC) != 4) + 1;
  else
    State->DontDisplayInUI = WdfFalse;
  if ( (*(_BYTE *)&v2.ByEnum & 0x30) != 0 )
    State->Failed = ((*(_BYTE *)&v2.ByEnum & 0x30) != 16) + 1;
  else
    State->Failed = WdfFalse;
  if ( (*(_BYTE *)&v2.ByEnum & 0xC0) != 0 )
  {
    if ( (*(_BYTE *)&v2.ByEnum & 0xC0) == 0x40 )
      State->NotDisableable = WdfTrue;
    else
      State->NotDisableable = WdfUseDefault;
  }
  else
  {
    State->NotDisableable = WdfFalse;
  }
  if ( (*(_WORD *)&v2.ByEnum & 0x300) != 0 )
    State->Removed = ((*(_WORD *)&v2.ByEnum & 0x300) != 256) + 1;
  else
    State->Removed = WdfFalse;
  if ( (*(_WORD *)&v2.ByEnum & 0xC00) != 0 )
    State->ResourcesChanged = ((*(_WORD *)&v2.ByEnum & 0xC00) != 1024) + 1;
  else
    State->ResourcesChanged = WdfFalse;
  if ( State->Size > 0x1C )
  {
    v4 = *(_WORD *)&v2.ByEnum & 0x3000;
    if ( v4 )
    {
      LOBYTE(v3) = v4 != 4096;
      ++v3;
    }
    State->AssignedToGuest = v3;
  }
}
