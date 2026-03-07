bool __fastcall DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
        DirectComposition::CPropertyChangeResourceMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(this, a2) )
    return DirectComposition::CPropertyChangeResourceMarshaler::EmitSetPropertyIdSet(this, a2);
  return v4;
}
