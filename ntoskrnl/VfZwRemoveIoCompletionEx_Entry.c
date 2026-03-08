/*
 * XREFs of VfZwRemoveIoCompletionEx_Entry @ 0x140AD1DC0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140AD200C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140AD2048 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwRemoveIoCompletionEx_Entry(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(a1[5], *a1);
    ViZwCheckVirtualAddress(a1[3], *a1);
    return ViZwCheckVirtualAddress(a1[2], *a1);
  }
  return result;
}
