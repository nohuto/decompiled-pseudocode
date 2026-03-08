/*
 * XREFs of PsGetParentSilo @ 0x14067FE00
 * Callers:
 *     CmpParseKey @ 0x1406E7480 (CmpParseKey.c)
 *     NtQueryInformationJobObject @ 0x1406F9480 (NtQueryInformationJobObject.c)
 *     VRegEnabledInJob @ 0x140736F40 (VRegEnabledInJob.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     PspConvertSiloToServerSilo @ 0x1409A9C14 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x140A70E70 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A711B4 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     PspGetJobSilo @ 0x1402B60F4 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1288));
  else
    return 0LL;
}
