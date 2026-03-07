bool __fastcall DirectComposition::CResourceMarshaler::HasAnimations(
        DirectComposition::CResourceMarshaler *this,
        unsigned int a2)
{
  struct DirectComposition::CAnimationBinding *v3; // [rsp+30h] [rbp-18h] BYREF
  __int128 v4; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0uLL;
  DirectComposition::CResourceMarshaler::FindAnimationBindings(
    this,
    a2,
    (struct DirectComposition::CAnimationBinding **)&v4,
    (struct DirectComposition::CAnimationBinding **)&v4 + 1,
    &v3);
  return v4 != 0;
}
