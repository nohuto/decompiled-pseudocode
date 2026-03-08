/*
 * XREFs of IopSymlinkCleanupECP @ 0x14078B000
 * Callers:
 *     <none>
 * Callees:
 *     IopSymlinkFreeRelatedMountPointChain @ 0x14078B018 (IopSymlinkFreeRelatedMountPointChain.c)
 */

void __fastcall IopSymlinkCleanupECP(PVOID EcpContext, LPCGUID EcpType)
{
  IopSymlinkFreeRelatedMountPointChain(EcpContext, EcpType);
}
