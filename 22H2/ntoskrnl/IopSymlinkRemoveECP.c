/*
 * XREFs of IopSymlinkRemoveECP @ 0x1402FD8D4
 * Callers:
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     IopGraftName @ 0x14087F9E8 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x140880C2C (IopSymlinkUpdateECP.c)
 * Callees:
 *     FsRtlRemoveExtraCreateParameter @ 0x1407658F0 (FsRtlRemoveExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
