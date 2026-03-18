/*
 * XREFs of PsGetParentSilo @ 0x1406831E0
 * Callers:
 *     VRegEnabledInJob @ 0x14068EB28 (VRegEnabledInJob.c)
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     CmpParseKey @ 0x1406E6A30 (CmpParseKey.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     PspConvertSiloToServerSilo @ 0x1409ACC94 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x140A73B70 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A73EB4 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     PspGetJobSilo @ 0x14031C634 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1288));
  else
    return 0LL;
}
