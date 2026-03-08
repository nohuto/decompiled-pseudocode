/*
 * XREFs of HalpIommuCheckExceptionList @ 0x14050B910
 * Callers:
 *     HalpIommuUnblockDevice @ 0x140516330 (HalpIommuUnblockDevice.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x140822570 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpIommuCheckExceptionList(__int64 a1)
{
  __int64 v1; // rdx

  if ( *(_DWORD *)a1 != 1 )
    return 0;
  v1 = HalpIommuExceptionList;
  if ( (__int64 *)HalpIommuExceptionList == &HalpIommuExceptionList )
    return 0;
  while ( *(_DWORD *)(v1 + 16) != *(unsigned __int16 *)(a1 + 8)
       || *(_QWORD *)(v1 + 24) != *(unsigned __int16 *)(a1 + 12) )
  {
    v1 = *(_QWORD *)v1;
    if ( (__int64 *)v1 == &HalpIommuExceptionList )
      return 0;
  }
  return 1;
}
