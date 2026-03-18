/*
 * XREFs of VfZwQueryDriverEntryOrder_Entry @ 0x140AD4F80
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140AD600C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140AD6048 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryDriverEntryOrder_Entry(ULONG_PTR *a1)
{
  __int64 result; // rax

  result = ViZwShouldCheck();
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(a1[2], *a1);
    return ViZwCheckVirtualAddress(a1[1], *a1);
  }
  return result;
}
