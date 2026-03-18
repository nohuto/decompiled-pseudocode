/*
 * XREFs of VfMiscExDeleteResourceLite_Entry @ 0x140AA3C40
 * Callers:
 *     <none>
 * Callees:
 *     VfDeleteResource @ 0x140AA1590 (VfDeleteResource.c)
 */

void __fastcall VfMiscExDeleteResourceLite_Entry(__int64 a1)
{
  VfDeleteResource(*(_QWORD *)(a1 + 8));
}
