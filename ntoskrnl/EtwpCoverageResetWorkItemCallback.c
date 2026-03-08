/*
 * XREFs of EtwpCoverageResetWorkItemCallback @ 0x1409E5B20
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCoverageReset @ 0x1409E566C (EtwpCoverageReset.c)
 */

char __fastcall EtwpCoverageResetWorkItemCallback(__int64 a1)
{
  *(_DWORD *)(EtwpCoverageNonPagedContext + 8) = 0;
  return EtwpCoverageReset(a1, 2);
}
