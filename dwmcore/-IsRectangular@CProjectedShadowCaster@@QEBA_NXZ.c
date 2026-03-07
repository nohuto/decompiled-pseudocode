char __fastcall CProjectedShadowCaster::IsRectangular(CProjectedShadowCaster *this)
{
  __int64 v1; // rdx
  CGeometry *v3; // rcx
  char result; // al
  struct CBrush *EffectiveMaskBrush; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 8);
  v3 = *(CGeometry **)(v1 + 248);
  if ( !v3
    || (v6 = 0LL, (result = CGeometry::TryGetAxisAlignedRectangle(v3, (const struct D2D_SIZE_F *)(v1 + 140), &v6)) != 0) )
  {
    EffectiveMaskBrush = CProjectedShadowCaster::GetEffectiveMaskBrush(this);
    return (*(__int64 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)EffectiveMaskBrush + 56LL))(
             EffectiveMaskBrush,
             22LL);
  }
  return result;
}
