/*
 * XREFs of PsGetParentSilo @ 0x140905C50
 * Callers:
 *     VRegEnabledInJob @ 0x1405D5B40 (VRegEnabledInJob.c)
 *     NtQueryInformationJobObject @ 0x1406804E0 (NtQueryInformationJobObject.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x1406C4310 (CmpGetRegistryNamespaceRootForSilo.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     PspConvertSiloToServerSilo @ 0x1409061B4 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x1409806B0 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409809EC (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     PspGetJobSilo @ 0x140200084 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1072));
  else
    return 0LL;
}
