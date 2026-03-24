/*
 * XREFs of IopSymlinkGetECP @ 0x1403142F0
 * Callers:
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x140682B0C (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x140682C94 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x140683108 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x140683164 (IopGraftName.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x140651070 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
