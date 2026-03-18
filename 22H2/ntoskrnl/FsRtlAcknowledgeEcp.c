/*
 * XREFs of FsRtlAcknowledgeEcp @ 0x140765830
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1402FD950 (FsRtlCheckOplockEx2.c)
 *     FsRtlpAttachOplockKey @ 0x14030287C (FsRtlpAttachOplockKey.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcknowledgeEcp(PVOID EcpContext)
{
  *((_DWORD *)EcpContext - 6) |= 8u;
}
