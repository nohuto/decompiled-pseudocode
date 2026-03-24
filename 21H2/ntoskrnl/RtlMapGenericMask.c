/*
 * XREFs of RtlMapGenericMask @ 0x140702EA0
 * Callers:
 *     SepCreateAccessStateFromSubjectContext @ 0x14027C800 (SepCreateAccessStateFromSubjectContext.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1405D94F8 (CmpVEPerformOpenAccessCheck.c)
 *     AlpcpCheckConnectionSecurity @ 0x1405DEB24 (AlpcpCheckConnectionSecurity.c)
 *     ObDuplicateObject @ 0x1405F51B0 (ObDuplicateObject.c)
 *     RtlpCopyEffectiveAce @ 0x14065D8E0 (RtlpCopyEffectiveAce.c)
 *     ObpAdjustCreatorAccessState @ 0x140662D98 (ObpAdjustCreatorAccessState.c)
 *     ObCaptureObjectStateForDuplication @ 0x140685408 (ObCaptureObjectStateForDuplication.c)
 *     ObpCreateHandle @ 0x1406F6550 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     IoCheckDesiredAccess @ 0x140893770 (IoCheckDesiredAccess.c)
 *     CMFCheckAccess @ 0x140958274 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x1409584C4 (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlMapGenericMask(PACCESS_MASK AccessMask, PGENERIC_MAPPING GenericMapping)
{
  ACCESS_MASK v2; // eax

  v2 = *AccessMask;
  if ( (*AccessMask & 0x80000000) != 0 )
  {
    v2 |= GenericMapping->GenericRead;
    *AccessMask = v2;
  }
  if ( (v2 & 0x40000000) != 0 )
  {
    v2 |= GenericMapping->GenericWrite;
    *AccessMask = v2;
  }
  if ( (v2 & 0x20000000) != 0 )
  {
    v2 |= GenericMapping->GenericExecute;
    *AccessMask = v2;
  }
  if ( (v2 & 0x10000000) != 0 )
    v2 |= GenericMapping->GenericAll;
  *AccessMask = v2 & 0xFFFFFFF;
}
