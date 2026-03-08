/*
 * XREFs of FsRtlAcknowledgeEcp @ 0x1406B1D40
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x14023AE40 (FsRtlCheckOplockEx2.c)
 *     FsRtlpAttachOplockKey @ 0x14023FE88 (FsRtlpAttachOplockKey.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcknowledgeEcp(PVOID EcpContext)
{
  *((_DWORD *)EcpContext - 6) |= 8u;
}
