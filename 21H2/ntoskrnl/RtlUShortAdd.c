/*
 * XREFs of RtlUShortAdd @ 0x1402B256C
 * Callers:
 *     FsRtlValidateReparsePointBuffer @ 0x1402B2320 (FsRtlValidateReparsePointBuffer.c)
 *     VrpBuildKeyPath @ 0x1405D5420 (VrpBuildKeyPath.c)
 *     RtlpCreateServerAcl @ 0x1406B2784 (RtlpCreateServerAcl.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D458 (_SysCtxRegOpenCurrentUserKey.c)
 *     IopAllocateUnicodeString @ 0x1407496AC (IopAllocateUnicodeString.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140906AC0 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlAddResourceAttributeAce @ 0x140912570 (RtlAddResourceAttributeAce.c)
 *     SepAddTokenOriginClaim @ 0x140922B50 (SepAddTokenOriginClaim.c)
 *     AslPathWildcardFindFirst @ 0x140968AF4 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140969C60 (AslpPathWildcardAllocMatchNode.c)
 *     VfSuspectDriversAllocateEntry @ 0x1409D9828 (VfSuspectDriversAllocateEntry.c)
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
