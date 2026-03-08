/*
 * XREFs of MiInitialSlabPopulate @ 0x1403AFC60
 * Callers:
 *     <none>
 * Callees:
 *     MiReplenishSlabAllocator @ 0x1403496D8 (MiReplenishSlabAllocator.c)
 */

__int64 __fastcall MiInitialSlabPopulate(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // rdx

  v3 = a2[7];
  if ( v3 )
    MiReplenishSlabAllocator(a2, v3);
  return 0LL;
}
