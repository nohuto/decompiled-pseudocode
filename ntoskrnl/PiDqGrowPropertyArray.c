/*
 * XREFs of PiDqGrowPropertyArray @ 0x14083AE68
 * Callers:
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14083A4C8 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetChangedProperties @ 0x14083AC48 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x140958F20 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqGrowPropertyArray(const void **a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rbp
  unsigned int v5; // ebx
  void *Pool2; // rax
  const void *v7; // rsi

  v4 = a2;
  v5 = 0;
  Pool2 = (void *)ExAllocatePool2(256LL, 48LL * a3, 1483763280LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    if ( *a1 )
    {
      memmove(Pool2, *a1, 48 * v4);
      ExFreePoolWithTag((PVOID)*a1, 0x58706E50u);
    }
    *a1 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
