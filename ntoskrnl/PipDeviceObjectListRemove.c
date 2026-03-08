/*
 * XREFs of PipDeviceObjectListRemove @ 0x14087FFE4
 * Callers:
 *     IopRemoveDeviceRelationsFromList @ 0x14087FF84 (IopRemoveDeviceRelationsFromList.c)
 *     IopRemoveCurrentRelationFromList @ 0x140969BAC (IopRemoveCurrentRelationFromList.c)
 *     IopRemoveRelationFromList @ 0x140969C34 (IopRemoveRelationFromList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall PipDeviceObjectListRemove(unsigned int *a1, unsigned int a2)
{
  PVOID *v4; // rsi

  if ( a2 >= *a1 )
    return 3221225612LL;
  v4 = (PVOID *)&a1[6 * a2];
  ObfDereferenceObjectWithTag(v4[2], 0x4C706E50u);
  if ( ((_DWORD)v4[4] & 1) != 0 )
    --a1[2];
  if ( a2 < *a1 - 1 )
    memmove(v4 + 2, &a1[4 * a2 + 10 + 2 * a2], 24LL * (*a1 - a2 - 1));
  --*a1;
  return 0LL;
}
