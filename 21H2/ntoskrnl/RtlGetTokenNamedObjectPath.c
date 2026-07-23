/*
 * XREFs of RtlGetTokenNamedObjectPath @ 0x140913A50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetTokenNamedObjectPath @ 0x1409146C8 (RtlpGetTokenNamedObjectPath.c)
 */

NTSTATUS __cdecl RtlGetTokenNamedObjectPath(HANDLE TokenHandle, PSID Sid, PUNICODE_STRING ObjectPath)
{
  return RtlpGetTokenNamedObjectPath(TokenHandle, 0LL);
}
