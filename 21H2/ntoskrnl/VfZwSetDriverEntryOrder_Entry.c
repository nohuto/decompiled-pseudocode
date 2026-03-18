/*
 * XREFs of VfZwSetDriverEntryOrder_Entry @ 0x140A94C00
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140A9598C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140A959C8 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwSetDriverEntryOrder_Entry(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  ULONG_PTR *v3; // r8

  result = ViZwShouldCheck(a1, a2, a1);
  if ( (_DWORD)result )
    return ViZwCheckVirtualAddress(v3[2], *v3);
  return result;
}
