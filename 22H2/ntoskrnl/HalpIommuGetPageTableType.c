/*
 * XREFs of HalpIommuGetPageTableType @ 0x1403804A0
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x1403A91BC (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuConstructReservedPageTable @ 0x140A8AD6C (HalpIommuConstructReservedPageTable.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x140380C80 (HalpGetCpuInfo.c)
 */

__int64 __fastcall HalpIommuGetPageTableType(char a1, _DWORD *a2)
{
  char v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  if ( (unsigned __int8)HalpGetCpuInfo(0LL, 0LL, 0LL, &v5) )
  {
    if ( v5 == 2 )
    {
      if ( !a1 )
      {
        *a2 = 0;
        return 0LL;
      }
    }
    else if ( v5 == 1 )
    {
      *a2 = 3 - (a1 != 0);
      return 0LL;
    }
  }
  return 3221225659LL;
}
