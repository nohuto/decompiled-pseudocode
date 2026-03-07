__int64 __fastcall CPrimitiveGroup::GetBounds(__int64 a1, __int64 a2, _OWORD *a3)
{
  return CPrimitiveGroup::GetBounds(a1 - *(int *)(a1 - 4), a2, a3);
}
