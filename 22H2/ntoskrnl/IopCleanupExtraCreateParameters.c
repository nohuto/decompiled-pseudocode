/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x1406A6714
 * Callers:
 *     IoQueryInformationByName @ 0x1405D8B10 (IoQueryInformationByName.c)
 *     NtDeleteFile @ 0x14077CB50 (NtDeleteFile.c)
 * Callees:
 *     FsRtlpCleanupEcps @ 0x14060CD20 (FsRtlpCleanupEcps.c)
 */

void __fastcall IopCleanupExtraCreateParameters(__int64 a1)
{
  struct _ECP_LIST *v2; // rcx

  v2 = *(struct _ECP_LIST **)(a1 + 168);
  if ( v2 )
  {
    if ( FsRtlpCleanupEcps(v2) )
      *(_QWORD *)(a1 + 168) = 0LL;
  }
}
