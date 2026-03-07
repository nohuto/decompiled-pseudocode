void __fastcall FxPkgPnp::SetPnpState(FxPkgPnp *this, _WDF_DEVICE_STATE *State)
{
  _WDF_TRI_STATE Disabled; // r9d
  int v3; // r8d
  int v5; // r10d
  _WDF_TRI_STATE DontDisplayInUI; // ecx
  int v7; // ecx
  _WDF_TRI_STATE Failed; // r9d
  int v9; // ecx
  int v10; // eax
  _WDF_TRI_STATE NotDisableable; // r9d
  int v12; // ecx
  int v13; // eax
  _WDF_TRI_STATE Removed; // r9d
  int v15; // ecx
  int v16; // eax
  _WDF_TRI_STATE ResourcesChanged; // r9d
  int v18; // ecx
  int v19; // r9d
  int v20; // r9d
  _WDF_TRI_STATE AssignedToGuest; // ecx

  Disabled = State->Disabled;
  v3 = 0;
  if ( Disabled )
  {
    if ( Disabled == WdfTrue )
      v5 = 1;
    else
      v5 = 2;
  }
  else
  {
    v5 = 0;
  }
  DontDisplayInUI = State->DontDisplayInUI;
  if ( DontDisplayInUI )
  {
    if ( DontDisplayInUI == WdfTrue )
      v7 = 4;
    else
      v7 = 8;
  }
  else
  {
    v7 = 0;
  }
  Failed = State->Failed;
  v9 = v5 | v7;
  if ( Failed )
  {
    if ( Failed == WdfTrue )
      v10 = 16;
    else
      v10 = 32;
  }
  else
  {
    v10 = 0;
  }
  NotDisableable = State->NotDisableable;
  v12 = v10 | v9;
  if ( NotDisableable )
  {
    if ( NotDisableable == WdfTrue )
      v13 = 64;
    else
      v13 = 128;
  }
  else
  {
    v13 = 0;
  }
  Removed = State->Removed;
  v15 = v13 | v12;
  if ( Removed )
  {
    if ( Removed == WdfTrue )
      v16 = 256;
    else
      v16 = 512;
  }
  else
  {
    v16 = 0;
  }
  ResourcesChanged = State->ResourcesChanged;
  v18 = v16 | v15;
  if ( ResourcesChanged )
  {
    if ( ResourcesChanged == WdfTrue )
      v19 = 1024;
    else
      v19 = 2048;
  }
  else
  {
    v19 = 0;
  }
  v20 = v18 | v19;
  if ( State->Size > 0x1C )
  {
    AssignedToGuest = State->AssignedToGuest;
    if ( AssignedToGuest )
    {
      v3 = 0x2000;
      if ( AssignedToGuest == WdfTrue )
        v3 = 4096;
    }
  }
  else
  {
    v3 = 0x2000;
  }
  this->m_PnpState.Value = v3 | v20;
}
