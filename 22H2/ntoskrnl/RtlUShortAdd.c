/*
 * XREFs of RtlUShortAdd @ 0x1403223E4
 * Callers:
 *     FsRtlValidateReparsePointBuffer @ 0x140322190 (FsRtlValidateReparsePointBuffer.c)
 *     VrpBuildKeyPath @ 0x14068DE10 (VrpBuildKeyPath.c)
 *     IopAllocateUnicodeString @ 0x1407941E8 (IopAllocateUnicodeString.c)
 *     RtlpCreateServerAcl @ 0x140794260 (RtlpCreateServerAcl.c)
 *     SepAddTokenOriginClaim @ 0x1407E3BD4 (SepAddTokenOriginClaim.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD83C (PspSiloInitializeSystemRootSymlink.c)
 *     RtlAddResourceAttributeAce @ 0x1409BB270 (RtlAddResourceAttributeAce.c)
 *     AslPathWildcardFindFirst @ 0x140A555C4 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A56658 (AslpPathWildcardAllocMatchNode.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A42C (_SysCtxRegOpenCurrentUserKey.c)
 *     VfSuspectDriversAllocateEntry @ 0x140ADB394 (VfSuspectDriversAllocateEntry.c)
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
