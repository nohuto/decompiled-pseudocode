/*
 * XREFs of Bulk_DoesDriverOwnRequests @ 0x1C000E544
 * Callers:
 *     Bulk_ProcessTransferCompletion @ 0x1C000E3C8 (Bulk_ProcessTransferCompletion.c)
 *     Bulk_Cleanup @ 0x1C00469E0 (Bulk_Cleanup.c)
 * Callees:
 *     <none>
 */

bool __fastcall Bulk_DoesDriverOwnRequests(_QWORD *a1)
{
  return (_QWORD *)a1[46] != a1 + 46 || (_QWORD *)a1[48] != a1 + 48 || (_QWORD *)a1[50] != a1 + 50;
}
