/*
 * XREFs of CmpAssignSecurityDescriptor @ 0x140871700
 * Callers:
 *     CmpCreateTombstone @ 0x1404ED49C (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x1406E08C4 (CmpCreateChild.c)
 *     CmpCopyKeyPartial @ 0x14076F54C (CmpCopyKeyPartial.c)
 *     CmpCreateHiveRootCell @ 0x14078DAF0 (CmpCreateHiveRootCell.c)
 *     CmpAssignKeySecurity @ 0x1407D0370 (CmpAssignKeySecurity.c)
 *     CmpSyncKeyValues @ 0x140879E7C (CmpSyncKeyValues.c)
 * Callees:
 *     CmpGetSecurityDescriptorNodeEx @ 0x1405CCAF8 (CmpGetSecurityDescriptorNodeEx.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptor(ULONG_PTR a1, ULONG_PTR a2, __int64 a3, void *Src)
{
  return CmpGetSecurityDescriptorNodeEx(a1, a2, a3, (unsigned int)a2 >> 31, Src, 0, (unsigned int *)(a3 + 44));
}
