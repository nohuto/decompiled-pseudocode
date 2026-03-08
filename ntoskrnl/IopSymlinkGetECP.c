/*
 * XREFs of IopSymlinkGetECP @ 0x14023ADA0
 * Callers:
 *     IopSymlinkProcessReparse @ 0x140790C0C (IopSymlinkProcessReparse.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x14087A7D0 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x14087A8D0 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x14087BDFC (IopSymlinkUpdateECP.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x1406B1D70 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
