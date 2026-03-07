struct CBrush *__fastcall CDropShadow::GetMaskForLayerVisualNoRef(CDropShadow *this)
{
  struct CBrush *result; // rax

  if ( *((_DWORD *)this + 31) == 1 )
    return 0LL;
  result = (struct CBrush *)*((_QWORD *)this + 22);
  if ( !result )
    return *(struct CBrush **)(*((_QWORD *)this + 2) + 320LL);
  return result;
}
