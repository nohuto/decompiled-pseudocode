/*
 * XREFs of RtlUShortAdd @ 0x14023071C
 * Callers:
 *     FsRtlValidateReparsePointBuffer @ 0x1402304D0 (FsRtlValidateReparsePointBuffer.c)
 *     VrpBuildKeyPath @ 0x1405D5420 (VrpBuildKeyPath.c)
 *     RtlpCreateServerAcl @ 0x1406117C4 (RtlpCreateServerAcl.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D908 (_SysCtxRegOpenCurrentUserKey.c)
 *     IopAllocateUnicodeString @ 0x14074986C (IopAllocateUnicodeString.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140906C20 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlAddResourceAttributeAce @ 0x1409126D0 (RtlAddResourceAttributeAce.c)
 *     SepAddTokenOriginClaim @ 0x140922CB0 (SepAddTokenOriginClaim.c)
 *     AslPathWildcardFindFirst @ 0x140968CD4 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140969E40 (AslpPathWildcardAllocMatchNode.c)
 *     VfSuspectDriversAllocateEntry @ 0x1409DA828 (VfSuspectDriversAllocateEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUShortAdd(USHORT usAugend, USHORT usAddend, USHORT *pusResult)
{
  bool v3; // cf
  USHORT v4; // dx

  v3 = (unsigned __int16)(usAddend + usAugend) < usAugend;
  if ( (unsigned __int16)(usAddend + usAugend) < usAugend )
    v4 = -1;
  else
    v4 = usAddend + usAugend;
  *pusResult = v4;
  return v3 ? 0xC0000095 : 0;
}
