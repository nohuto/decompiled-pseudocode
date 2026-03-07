__int64 __fastcall CResource::GetSourceAnimationsForProperty(__int64 a1, int a2)
{
  struct _RTL_GENERIC_TABLE *v2; // rcx
  PVOID Element; // rax

  v2 = *(struct _RTL_GENERIC_TABLE **)(a1 + 40);
  Element = 0LL;
  if ( v2 )
    Element = CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(v2, a2);
  return ((unsigned __int64)Element + 8) & -(__int64)(Element != 0LL);
}
