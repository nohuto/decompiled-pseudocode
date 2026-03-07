struct CBrush *__fastcall CProjectedShadowCaster::GetEffectiveMaskBrush(CProjectedShadowCaster *this)
{
  struct CBrush *result; // rax

  result = (struct CBrush *)*((_QWORD *)this + 16);
  if ( !result )
    return *(struct CBrush **)(*((_QWORD *)this + 2) + 328LL);
  return result;
}
