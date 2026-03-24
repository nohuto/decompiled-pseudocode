/*
 * XREFs of ApplySecurityAttributesToWinsta @ 0x1C0069570
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 */

__int64 __fastcall ApplySecurityAttributesToWinsta(__int64 a1, void *a2)
{
  void *v4; // rcx
  NTSTATUS ObjectSecurity; // ebx
  NTSTATUS v7; // ecx
  ULONG v8; // eax
  __int64 v9; // rdx
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-30h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+48h] [rbp-28h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int8 MemoryAllocated; // [rsp+A0h] [rbp+30h] BYREF
  int v14; // [rsp+A8h] [rbp+38h] BYREF

  SecurityDescriptor = 0LL;
  NewDescriptor = 0LL;
  MemoryAllocated = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  v4 = *(void **)ObQueryNameInfo(a1);
  if ( v4 && (ObjectSecurity = ObGetObjectSecurity(v4, &SecurityDescriptor, &MemoryAllocated), ObjectSecurity < 0) )
  {
    SeUnlockSubjectContext(&SubjectContext);
    SeReleaseSubjectContext(&SubjectContext);
  }
  else
  {
    ObjectSecurity = SeAssignSecurity(
                       SecurityDescriptor,
                       a2,
                       &NewDescriptor,
                       1u,
                       &SubjectContext,
                       (PGENERIC_MAPPING)&WinStaMapping,
                       PagedPool);
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
    SeUnlockSubjectContext(&SubjectContext);
    SeReleaseSubjectContext(&SubjectContext);
    if ( ObjectSecurity < 0 )
    {
      v7 = -1073741790;
      if ( ObjectSecurity != -1073741790 )
        v7 = ObjectSecurity;
      v8 = RtlNtStatusToDosError(v7);
      UserSetLastError(v8, v9);
    }
    else
    {
      v14 = 15;
      ObjectSecurity = ObSetSecurityDescriptorInfo(a1, &v14, NewDescriptor, a1 - 8, 1, &WinStaMapping);
      SeDeassignSecurity(&NewDescriptor);
    }
  }
  return (unsigned int)ObjectSecurity;
}
