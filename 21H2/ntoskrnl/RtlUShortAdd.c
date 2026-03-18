/*
 * XREFs of RtlUShortAdd @ 0x1402DE190
 * Callers:
 *     FsRtlValidateReparsePointBuffer @ 0x1402DDF40 (FsRtlValidateReparsePointBuffer.c)
 *     RtlpCreateServerAcl @ 0x1406CBD5C (RtlpCreateServerAcl.c)
 *     IopAllocateUnicodeString @ 0x140769784 (IopAllocateUnicodeString.c)
 *     VrpBuildKeyPath @ 0x14077FB68 (VrpBuildKeyPath.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AC86C (PspSiloInitializeSystemRootSymlink.c)
 *     RtlAddResourceAttributeAce @ 0x1409B8170 (RtlAddResourceAttributeAce.c)
 *     SepAddTokenOriginClaim @ 0x1409CC540 (SepAddTokenOriginClaim.c)
 *     AslPathWildcardFindFirst @ 0x140A15ECC (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A16F94 (AslpPathWildcardAllocMatchNode.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A2CF6C (_SysCtxRegOpenCurrentUserKey.c)
 *     VfSuspectDriversAllocateEntry @ 0x140A9A588 (VfSuspectDriversAllocateEntry.c)
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
