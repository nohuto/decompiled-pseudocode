__int64 __fastcall DirectComposition::CCrossChannelParentVisualMarshaler::EmitCreationCommand(
        DirectComposition::CCrossChannelParentVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
           this,
           a2,
           *(unsigned int *)(*((_QWORD *)this + 47) + 8LL));
}
