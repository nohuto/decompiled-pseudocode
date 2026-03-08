/*
 * XREFs of DxgkClosePhysicalMemoryObjectCB @ 0x1C00520E0
 * Callers:
 *     <none>
 * Callees:
 *     SmmClosePhysicalObject @ 0x1C0013468 (SmmClosePhysicalObject.c)
 */

void __fastcall DxgkClosePhysicalMemoryObjectCB(__int64 **a1, __int64 a2, int a3)
{
  SmmClosePhysicalObject(*a1, a2, a3);
}
