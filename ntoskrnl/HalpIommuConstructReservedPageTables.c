/*
 * XREFs of HalpIommuConstructReservedPageTables @ 0x140A8786C
 * Callers:
 *     HalpIommuInitializeAll @ 0x140A8DA7C (HalpIommuInitializeAll.c)
 * Callees:
 *     HalpIommuConstructReservedPageTable @ 0x140A8775C (HalpIommuConstructReservedPageTable.c)
 */

__int64 __fastcall HalpIommuConstructReservedPageTables(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 i; // rbx

  result = 0LL;
  for ( i = 0LL; (unsigned int)i < *a2; i = (unsigned int)(i + 1) )
  {
    result = HalpIommuConstructReservedPageTable(a1, *(PHYSICAL_ADDRESS **)&a2[2 * i + 2], a3);
    if ( (int)result < 0 )
      break;
  }
  return result;
}
