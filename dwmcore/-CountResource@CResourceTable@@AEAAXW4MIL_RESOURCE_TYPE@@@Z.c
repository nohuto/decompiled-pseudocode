__int64 __fastcall CResourceTable::CountResource(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d

  v2 = AddToResourceCount(*(_QWORD *)(a1 + 56) + 44LL, a2, 1LL);
  return anonymous_namespace_::AddToResourceCount(v2, v3);
}
