/*
 * XREFs of ApplySecurityAttributesToWinsta @ 0x1C002EB20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 */

__int64 __fastcall ApplySecurityAttributesToWinsta(__int64 a1, void *a2)
{
  __int64 v4; // rdx
  void *v5; // rcx
  NTSTATUS ObjectSecurity; // ebx
  NTSTATUS v8; // ecx
  ULONG v9; // eax
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
  v5 = *(void **)ObQueryNameInfo(a1, v4);
  if ( v5 && (ObjectSecurity = ObGetObjectSecurity(v5, &SecurityDescriptor, &MemoryAllocated), ObjectSecurity < 0) )
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
      v8 = -1073741790;
      if ( ObjectSecurity != -1073741790 )
        v8 = ObjectSecurity;
      v9 = RtlNtStatusToDosError(v8);
      UserSetLastError(v9);
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
