/*
 * XREFs of PsGetParentSilo @ 0x140905B40
 * Callers:
 *     VRegEnabledInJob @ 0x1405D5B40 (VRegEnabledInJob.c)
 *     NtQueryInformationJobObject @ 0x140616CE0 (NtQueryInformationJobObject.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x140660C90 (CmpGetRegistryNamespaceRootForSilo.c)
 *     PspConvertSiloToServerSilo @ 0x1409060A4 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x140980520 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x14098085C (ObGetSiloRootDirectoryPath.c)
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
