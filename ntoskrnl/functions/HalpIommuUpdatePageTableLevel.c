void HalpIommuUpdatePageTableLevel()
{
  ULONG_PTR i; // rcx
  unsigned int v1; // eax
  int v2; // eax

  HalpIommuMaxPageTableDepth = 0;
  HalpIommuMinPageTableDepth = -1;
  for ( i = HalpIommuList; (ULONG_PTR *)i != &HalpIommuList; i = *(_QWORD *)i )
  {
    v2 = *(_DWORD *)(i + 488);
    if ( (v2 & 0x100) != 0 )
    {
      v1 = ((unsigned __int16)v2 >> 13) + 1;
      if ( v1 > HalpIommuMaxPageTableDepth )
        HalpIommuMaxPageTableDepth = v1;
      if ( v1 < HalpIommuMinPageTableDepth )
        HalpIommuMinPageTableDepth = v1;
    }
  }
}
