char __fastcall DirectComposition::CResourceMarshaler::IsPropertyAnimatable(
        DirectComposition::CResourceMarshaler *a1,
        unsigned int a2)
{
  const struct DirectComposition::ResPropInfo *TargetProperty; // rax
  int v3; // r9d

  TargetProperty = DirectComposition::CResourceMarshaler::GetTargetProperty(a1, a2);
  if ( TargetProperty )
    LOBYTE(TargetProperty) = *((_DWORD *)TargetProperty + 2) == v3;
  return (char)TargetProperty;
}
