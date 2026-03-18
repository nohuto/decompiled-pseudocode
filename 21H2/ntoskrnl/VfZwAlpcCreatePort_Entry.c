/*
 * XREFs of VfZwAlpcCreatePort_Entry @ 0x140A94AD0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140A958B4 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x140A9598C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140A959C8 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcCreatePort_Entry(ULONG_PTR *a1)
{
  __int64 result; // rax

  result = ViZwShouldCheck();
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(a1[3], *a1);
    ViZwCheckVirtualAddress(a1[1], *a1);
    return ViZwCheckObjectAttributes(a1[2], *a1);
  }
  return result;
}
