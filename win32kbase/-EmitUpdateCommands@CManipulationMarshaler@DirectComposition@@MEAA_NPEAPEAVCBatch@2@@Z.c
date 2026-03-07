char __fastcall DirectComposition::CManipulationMarshaler::EmitUpdateCommands(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  DirectComposition::CManipulationMarshaler *v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(this, a2)
    && DirectComposition::CManipulationMarshaler::EmitSettings(this, a2)
    && DirectComposition::CManipulationMarshaler::EmitInjections(this, a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x80u) != 0 )
    {
      v6 = this;
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e7288af00cdd6f7af065feb83fd33220___(
              (__int64)this,
              a2,
              (__int64)&v6) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    if ( DirectComposition::CManipulationMarshaler::EmitEdgyConfiguration(this, a2) )
      return 1;
  }
  return v4;
}
