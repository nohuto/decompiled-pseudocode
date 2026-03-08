/*
 * XREFs of VfZwQueryFullAttributesFile_Entry @ 0x140AD1C30
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140AD1F34 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x140AD200C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140AD2048 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryFullAttributesFile_Entry(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckObjectAttributes(a1[2], *a1);
    return ViZwCheckVirtualAddress(a1[1], *a1);
  }
  return result;
}
