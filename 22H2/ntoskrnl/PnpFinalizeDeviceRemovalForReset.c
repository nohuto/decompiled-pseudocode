/*
 * XREFs of PnpFinalizeDeviceRemovalForReset @ 0x14095788C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140867948 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     IopEnumerateRelations @ 0x140868860 (IopEnumerateRelations.c)
 *     IopLogDeviceResetComplete @ 0x140957484 (IopLogDeviceResetComplete.c)
 *     IopMarkDeviceToBeReset @ 0x140957520 (IopMarkDeviceToBeReset.c)
 */

NTSTATUS __fastcall PnpFinalizeDeviceRemovalForReset(__int64 a1, unsigned int **a2)
{
  int v5; // [rsp+50h] [rbp+18h] BYREF
  int v6; // [rsp+54h] [rbp+1Ch]
  ULONG_PTR MaxDataSize; // [rsp+58h] [rbp+20h] BYREF

  MaxDataSize = 0LL;
  v6 = 0;
  v5 = 1;
  while ( IopEnumerateRelations(a2, &v5, &MaxDataSize, 0LL, 0LL) )
    IopMarkDeviceToBeReset(MaxDataSize);
  return IopLogDeviceResetComplete(a1, 0);
}
