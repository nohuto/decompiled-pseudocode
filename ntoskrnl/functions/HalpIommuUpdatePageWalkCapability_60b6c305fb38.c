__int64 HalpIommuUpdatePageWalkCapability()
{
  ULONG_PTR v0; // rcx
  __int64 result; // rax

  v0 = HalpIommuList;
  HalpIommuPageTableCacheCoherent = 1;
  while ( (ULONG_PTR *)v0 != &HalpIommuList )
  {
    result = *(_DWORD *)(v0 + 488) & 0x900;
    if ( (_DWORD)result == 256 )
    {
      HalpIommuPageTableCacheCoherent = 0;
      return result;
    }
    v0 = *(_QWORD *)v0;
  }
  return result;
}
