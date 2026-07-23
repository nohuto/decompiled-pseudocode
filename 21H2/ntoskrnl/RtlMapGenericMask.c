/*
 * XREFs of RtlMapGenericMask @ 0x14071A280
 * Callers:
 *     SepCreateAccessStateFromSubjectContext @ 0x14026A7A0 (SepCreateAccessStateFromSubjectContext.c)
 *     ObCaptureObjectStateForDuplication @ 0x1405E261C (ObCaptureObjectStateForDuplication.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1405EA280 (CmpVEPerformOpenAccessCheck.c)
 *     RtlpCopyEffectiveAce @ 0x140652700 (RtlpCopyEffectiveAce.c)
 *     ObpAdjustCreatorAccessState @ 0x140657BB8 (ObpAdjustCreatorAccessState.c)
 *     AlpcpCheckConnectionSecurity @ 0x1406CE284 (AlpcpCheckConnectionSecurity.c)
 *     ObDuplicateObject @ 0x1406E4910 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x14070D930 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     IoCheckDesiredAccess @ 0x1408938D0 (IoCheckDesiredAccess.c)
 *     CMFCheckAccess @ 0x140958444 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x140958694 (CMFCreateSecurityDescriptor.c)
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
