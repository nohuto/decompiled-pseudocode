bool __fastcall DirectComposition::CSharedSectionBaseMarshaler::SetRemarshalingFlags(
        DirectComposition::CSharedSectionBaseMarshaler *this)
{
  return *((_QWORD *)this + 7) != 0LL;
}
