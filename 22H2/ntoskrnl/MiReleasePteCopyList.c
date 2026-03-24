/*
 * XREFs of MiReleasePteCopyList @ 0x140323F44
 * Callers:
 *     MiFindContiguousPages @ 0x140281D60 (MiFindContiguousPages.c)
 *     MiAddPagesToEnclave @ 0x140549044 (MiAddPagesToEnclave.c)
 *     MmRelocatePfnList @ 0x1408D1B2C (MmRelocatePfnList.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D21D8 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x1408D8030 (MiFillPerSessionProtos.c)
 *     MiReleaseScrubPacket @ 0x1408DBFA0 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MiReleasePteCopyList(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return MiReleasePtes((__int64)&qword_140C4EF40, *(_QWORD **)(a1 + 16), v1);
  return result;
}
