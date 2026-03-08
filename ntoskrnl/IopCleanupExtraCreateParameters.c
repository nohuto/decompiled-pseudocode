/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x14076D500
 * Callers:
 *     IoQueryInformationByName @ 0x14076D210 (IoQueryInformationByName.c)
 *     NtDeleteFile @ 0x140871940 (NtDeleteFile.c)
 * Callees:
 *     FsRtlpCleanupEcps @ 0x14070C240 (FsRtlpCleanupEcps.c)
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
