/*
 * XREFs of RtlMapGenericMask @ 0x1406505C0
 * Callers:
 *     SepCreateAccessStateFromSubjectContext @ 0x140345810 (SepCreateAccessStateFromSubjectContext.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1405D94F8 (CmpVEPerformOpenAccessCheck.c)
 *     AlpcpCheckConnectionSecurity @ 0x1405DEB24 (AlpcpCheckConnectionSecurity.c)
 *     ObDuplicateObject @ 0x1405F51B0 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x140643C70 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406650C8 (ObCaptureObjectStateForDuplication.c)
 *     RtlpCopyEffectiveAce @ 0x1406D66A0 (RtlpCopyEffectiveAce.c)
 *     ObpAdjustCreatorAccessState @ 0x1406DBB88 (ObpAdjustCreatorAccessState.c)
 *     IoCheckDesiredAccess @ 0x1408937C0 (IoCheckDesiredAccess.c)
 *     CMFCheckAccess @ 0x1409582C4 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x140958514 (CMFCreateSecurityDescriptor.c)
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
