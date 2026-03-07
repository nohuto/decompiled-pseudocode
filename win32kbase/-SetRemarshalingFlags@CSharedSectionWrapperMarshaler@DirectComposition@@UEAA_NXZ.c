char __fastcall DirectComposition::CSharedSectionWrapperMarshaler::SetRemarshalingFlags(
        DirectComposition::CSharedSectionWrapperMarshaler *this)
{
  *((_DWORD *)this + 4) &= ~0x20u;
  return 1;
}
