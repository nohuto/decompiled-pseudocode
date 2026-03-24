/*
 * XREFs of MiUpdateSessionPdeMaster @ 0x1403F7448
 * Callers:
 *     MiInitializeSystemPageTable @ 0x1403569E4 (MiInitializeSystemPageTable.c)
 * Callees:
 *     <none>
 */

__int64 MiUpdateSessionPdeMaster()
{
  return *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 32);
}
