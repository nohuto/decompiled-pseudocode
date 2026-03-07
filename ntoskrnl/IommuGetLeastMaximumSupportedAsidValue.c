__int64 IommuGetLeastMaximumSupportedAsidValue()
{
  ULONG_PTR *v0; // rdx
  unsigned int v1; // r8d
  ULONG_PTR *v2; // rcx
  unsigned int v3; // ecx

  v0 = (ULONG_PTR *)HalpIommuList;
  v1 = -1;
  while ( v0 != &HalpIommuList )
  {
    v2 = v0;
    v0 = (ULONG_PTR *)*v0;
    if ( (v2[61] & 0xA0) != 0 )
    {
      v3 = *((_DWORD *)v2 + 132);
      if ( v3 < v1 )
        v1 = v3;
    }
  }
  return v1;
}
