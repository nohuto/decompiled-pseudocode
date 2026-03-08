/*
 * XREFs of MiValidateSpecialPurposeMemoryAttributes @ 0x14065E5A0
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x140A42A68 (MmManagePartitionInitialAddMemory.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiValidateSpecialPurposeMemoryAttributes(_QWORD *a1)
{
  bool result; // al

  result = 0;
  if ( *a1 && a1[1] )
  {
    if ( a1[2] )
      return a1[3] != 0LL;
  }
  return result;
}
