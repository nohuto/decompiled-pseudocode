/*
 * XREFs of RtlMapGenericMask @ 0x140728CB0
 * Callers:
 *     SepCreateAccessStateFromSubjectContext @ 0x140347A20 (SepCreateAccessStateFromSubjectContext.c)
 *     AlpcpCheckConnectionSecurity @ 0x140668294 (AlpcpCheckConnectionSecurity.c)
 *     ObCaptureObjectStateForDuplication @ 0x14066B04C (ObCaptureObjectStateForDuplication.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1406B6444 (CmpVEPerformOpenAccessCheck.c)
 *     ObpAdjustCreatorAccessState @ 0x1407227B0 (ObpAdjustCreatorAccessState.c)
 *     RtlpApplyAclToObject @ 0x140727F00 (RtlpApplyAclToObject.c)
 *     RtlpCopyAces @ 0x140728450 (RtlpCopyAces.c)
 *     RtlpCopyEffectiveAce @ 0x1407288D0 (RtlpCopyEffectiveAce.c)
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     RtlpNewSecurityObject @ 0x1407CE760 (RtlpNewSecurityObject.c)
 *     IoCheckDesiredAccess @ 0x1409360B0 (IoCheckDesiredAccess.c)
 *     CMFCheckAccess @ 0x140A03FB4 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x140A04204 (CMFCreateSecurityDescriptor.c)
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
