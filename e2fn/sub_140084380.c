__int64 __fastcall sub_140084380(__int64 a1)
{
  int v1; // edx

  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 104));
  v1 = *(_DWORD *)(a1 - 16);
  *(_DWORD *)(a1 - 8) = v1;
  return sub_14007C1CC(a1 - 496, v1);
}
