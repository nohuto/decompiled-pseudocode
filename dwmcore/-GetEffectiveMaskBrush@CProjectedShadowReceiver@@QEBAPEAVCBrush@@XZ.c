struct CBrush *__fastcall CProjectedShadowReceiver::GetEffectiveMaskBrush(CProjectedShadowReceiver *this)
{
  struct CBrush *result; // rax

  result = (struct CBrush *)*((_QWORD *)this + 13);
  if ( !result )
    return *(struct CBrush **)(*((_QWORD *)this + 2) + 320LL);
  return result;
}
