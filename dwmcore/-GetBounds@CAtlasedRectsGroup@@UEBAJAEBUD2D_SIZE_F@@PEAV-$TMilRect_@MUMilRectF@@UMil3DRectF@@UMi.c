__int64 __fastcall CAtlasedRectsGroup::GetBounds(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 result; // rax

  CAtlasedRectsGroup::EnsureBounds((CAtlasedRectsGroup *)(a1 - 152));
  result = 0LL;
  *a3 = *(_OWORD *)(a1 - 48);
  return result;
}
