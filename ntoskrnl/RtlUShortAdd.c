/*
 * XREFs of RtlUShortAdd @ 0x140202574
 * Callers:
 *     FsRtlValidateReparsePointBuffer @ 0x140202320 (FsRtlValidateReparsePointBuffer.c)
 *     IopAllocateUnicodeString @ 0x140683958 (IopAllocateUnicodeString.c)
 *     RtlpCreateServerAcl @ 0x1406839D0 (RtlpCreateServerAcl.c)
 *     VrpBuildKeyPath @ 0x1406C286C (VrpBuildKeyPath.c)
 *     SepAddTokenOriginClaim @ 0x140794680 (SepAddTokenOriginClaim.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AA7BC (PspSiloInitializeSystemRootSymlink.c)
 *     RtlAddResourceAttributeAce @ 0x1409B8350 (RtlAddResourceAttributeAce.c)
 *     AslPathWildcardFindFirst @ 0x140A52910 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A539A4 (AslpPathWildcardAllocMatchNode.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6772C (_SysCtxRegOpenCurrentUserKey.c)
 *     VfSuspectDriversAllocateEntry @ 0x140AD7394 (VfSuspectDriversAllocateEntry.c)
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
