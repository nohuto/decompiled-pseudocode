/*
 * XREFs of VfZwDeviceIoControlFile_Entry @ 0x140A95030
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckApcRequirement @ 0x140A95858 (ViZwCheckApcRequirement.c)
 *     ViZwCheckVirtualAddress @ 0x140A9598C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140A959C8 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDeviceIoControlFile_Entry(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(a1[8], *a1);
    ViZwCheckVirtualAddress(a1[7], *a1);
    ViZwCheckVirtualAddress(a1[6], *a1);
    ViZwCheckVirtualAddress(a1[4], *a1);
    ViZwCheckVirtualAddress(a1[2], *a1);
    return ViZwCheckApcRequirement(*a1);
  }
  return result;
}
