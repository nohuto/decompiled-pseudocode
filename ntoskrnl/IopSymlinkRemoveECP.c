/*
 * XREFs of IopSymlinkRemoveECP @ 0x14023ADC4
 * Callers:
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopGraftName @ 0x14087A8D0 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x14087BDFC (IopSymlinkUpdateECP.c)
 * Callees:
 *     FsRtlRemoveExtraCreateParameter @ 0x1406B1E00 (FsRtlRemoveExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
