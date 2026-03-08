/*
 * XREFs of VfZwAlpcAcceptConnectPort_Entry @ 0x140AD1050
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140AD1F34 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x140AD200C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140AD2048 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcAcceptConnectPort_Entry(ULONG_PTR *a1)
{
  __int64 result; // rax

  result = ViZwShouldCheck();
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(a1[9], *a1);
    ViZwCheckVirtualAddress(a1[5], *a1);
    ViZwCheckVirtualAddress(a1[3], *a1);
    ViZwCheckVirtualAddress(a1[2], *a1);
    return ViZwCheckObjectAttributes(a1[6], *a1);
  }
  return result;
}
