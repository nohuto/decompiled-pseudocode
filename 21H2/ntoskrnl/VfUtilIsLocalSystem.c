/*
 * XREFs of VfUtilIsLocalSystem @ 0x140A81DB4
 * Callers:
 *     ViKeInjectStatusAlerted @ 0x140A7F778 (ViKeInjectStatusAlerted.c)
 *     VfCheckUserHandle @ 0x140A9466C (VfCheckUserHandle.c)
 * Callees:
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     IoGetFileObjectGenericMapping @ 0x1406AD3F0 (IoGetFileObjectGenericMapping.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140A820BC (ViInitializeLocalSystemDescriptor.c)
 */

__int64 __fastcall VfUtilIsLocalSystem(PEPROCESS Process)
{
  unsigned int v2; // ebx
  GENERIC_MAPPING *GenericMapping; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  GrantedAccess = 0;
  AccessStatus = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( ViInitializeLocalSystemDescriptor() )
  {
    SeCaptureSubjectContextEx(0LL, Process, &SubjectContext);
    GenericMapping = IoGetFileObjectGenericMapping();
    v2 = SeAccessCheck(
           ViLocalSystemDescriptor,
           &SubjectContext,
           0,
           1u,
           0,
           0LL,
           GenericMapping,
           1,
           &GrantedAccess,
           &AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
  }
  else
  {
    return 1;
  }
  return v2;
}
