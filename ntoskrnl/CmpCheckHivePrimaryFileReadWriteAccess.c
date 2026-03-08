/*
 * XREFs of CmpCheckHivePrimaryFileReadWriteAccess @ 0x140613F58
 * Callers:
 *     CmLoadAppKey @ 0x1406BDA5C (CmLoadAppKey.c)
 * Callees:
 *     SeAccessCheck @ 0x140265330 (SeAccessCheck.c)
 *     IoGetFileObjectGenericMapping @ 0x140760E00 (IoGetFileObjectGenericMapping.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 */

BOOLEAN __fastcall CmpCheckHivePrimaryFileReadWriteAccess(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  KPROCESSOR_MODE AccessMode; // bl
  GENERIC_MAPPING *GenericMapping; // rax
  BOOLEAN v4; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  AccessMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  GenericMapping = IoGetFileObjectGenericMapping();
  v4 = SeAccessCheck(
         SecurityDescriptor,
         &SubjectContext,
         0,
         3u,
         0,
         0LL,
         GenericMapping,
         AccessMode,
         &GrantedAccess,
         &AccessStatus);
  SeReleaseSubjectContext(&SubjectContext);
  return v4;
}
