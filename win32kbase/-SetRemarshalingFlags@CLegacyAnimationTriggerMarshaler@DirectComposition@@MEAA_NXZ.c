bool __fastcall DirectComposition::CLegacyAnimationTriggerMarshaler::SetRemarshalingFlags(
        DirectComposition::CLegacyAnimationTriggerMarshaler *this)
{
  return (*((_DWORD *)this + 4) & 0x20) != 0;
}
