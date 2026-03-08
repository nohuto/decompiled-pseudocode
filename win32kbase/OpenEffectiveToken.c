/*
 * XREFs of OpenEffectiveToken @ 0x1C00BAD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OpenEffectiveToken(PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0x200u, TokenHandle);
  if ( result == -1073741700 )
    return ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, TokenHandle);
  return result;
}
