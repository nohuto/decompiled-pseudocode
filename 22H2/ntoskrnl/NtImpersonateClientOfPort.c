/*
 * XREFs of NtImpersonateClientOfPort @ 0x1408C2030
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcImpersonateClientOfPort @ 0x1405E9A10 (NtAlpcImpersonateClientOfPort.c)
 */

NTSTATUS __cdecl NtImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message)
{
  NTSTATUS result; // eax

  result = NtAlpcImpersonateClientOfPort(PortHandle, Message, 0LL);
  if ( result == -1073740030 )
    return -1073741281;
  return result;
}
