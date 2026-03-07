bool __fastcall CPathData::operator==(__int64 a1, __int64 a2)
{
  char v2; // bl
  size_t v3; // r8

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
  if ( v3 == *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16) )
    return memcmp_0(*(const void **)(a1 + 16), *(const void **)(a2 + 16), v3) == 0;
  return v2;
}
