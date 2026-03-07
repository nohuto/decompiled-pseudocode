bool __fastcall DirectComposition::CSharedSectionWrapperMarshaler::EmitUpdateCommands(
        DirectComposition::CSharedSectionWrapperMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  return DirectComposition::CSharedSectionWrapperMarshaler::EmitSetSharedSection(this, a2) != 0;
}
