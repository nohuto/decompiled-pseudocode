/*
 * XREFs of PsGetParentSilo @ 0x1407FC3C0
 * Callers:
 *     NtQueryInformationJobObject @ 0x140684450 (NtQueryInformationJobObject.c)
 *     VRegEnabledInJob @ 0x1406928FC (VRegEnabledInJob.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     CmpParseKey @ 0x1407349A0 (CmpParseKey.c)
 *     PspConvertSiloToServerSilo @ 0x1409ABCF4 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x140A34510 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A34854 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     PspGetJobSilo @ 0x140212034 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1264));
  else
    return 0LL;
}
