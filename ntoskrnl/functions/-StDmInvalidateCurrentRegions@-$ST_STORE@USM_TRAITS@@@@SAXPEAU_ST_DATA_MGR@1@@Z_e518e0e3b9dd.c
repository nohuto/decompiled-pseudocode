__int64 __fastcall ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int i; // edi
  __int64 result; // rax

  v2 = (unsigned __int8)*(_DWORD *)(a1 + 776) != 0 ? 1 : 8;
  for ( i = 0; i < v2; ++i )
    result = ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, i, 0xFFFFFFFFLL);
  return result;
}
