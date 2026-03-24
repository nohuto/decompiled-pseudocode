/*
 * XREFs of PsGetParentSilo @ 0x140905AF0
 * Callers:
 *     VRegEnabledInJob @ 0x1405D5B40 (VRegEnabledInJob.c)
 *     NtQueryInformationJobObject @ 0x140616880 (NtQueryInformationJobObject.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x140715CC0 (CmpGetRegistryNamespaceRootForSilo.c)
 *     PspConvertSiloToServerSilo @ 0x140906054 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x1409804D0 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x14098080C (ObGetSiloRootDirectoryPath.c)
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
