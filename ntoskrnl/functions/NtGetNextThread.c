__int64 __fastcall NtGetNextThread(ULONG_PTR BugCheckParameter1, ULONG_PTR a2, int a3, int a4, int a5, HANDLE *a6)
{
  KPROCESSOR_MODE AccessMode; // r12
  __int64 v10; // rcx
  __int64 result; // rax
  int AccessState; // esi
  _DWORD *NextProcessThread; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v15; // r13
  PVOID v16; // rcx
  bool v17; // [rsp+40h] [rbp-208h]
  PVOID Object; // [rsp+48h] [rbp-200h] BYREF
  int v19; // [rsp+50h] [rbp-1F8h]
  PVOID v20; // [rsp+58h] [rbp-1F0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-1E8h] BYREF
  _DWORD *v22; // [rsp+68h] [rbp-1E0h]
  HANDLE *v23; // [rsp+70h] [rbp-1D8h]
  struct _KTHREAD *v24; // [rsp+80h] [rbp-1C8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-1B8h] BYREF
  _BYTE v26[224]; // [rsp+130h] [rbp-118h] BYREF

  v19 = a3;
  v23 = a6;
  Object = 0LL;
  v20 = 0LL;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v26, 0, sizeof(v26));
  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  if ( AccessMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a6;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  *a6 = 0LL;
  if ( a5 )
    return 3221225485LL;
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x6E457350u, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      AccessState = ObpReferenceObjectByHandleWithTag(a2, 0x6E457350u, (__int64)&v20, 0LL, 0LL);
      if ( AccessState < 0 )
        goto LABEL_26;
      if ( *((PVOID *)v20 + 68) != Object )
      {
        ObfDereferenceObjectWithTag(v20, 0x6E457350u);
        AccessState = -1073741811;
        goto LABEL_26;
      }
    }
    NextProcessThread = PsGetNextProcessThread((__int64)Object, v20);
    v22 = NextProcessThread;
    if ( NextProcessThread )
    {
      v17 = SeSinglePrivilegeCheck(SeDebugPrivilege, AccessMode) != 0;
      CurrentThread = KeGetCurrentThread();
      v24 = CurrentThread;
      v15 = Object;
      do
      {
        if ( (NextProcessThread[344] & 2) != 0
          || (PsSynchronizeWithThreadInsertion(NextProcessThread, CurrentThread), (NextProcessThread[344] & 2) != 0) )
        {
          AccessState = SeCreateAccessState((int)&PassedAccessState, (int)v26, v19, (__int64)PsProcessType + 76);
          if ( AccessState < 0 )
            goto LABEL_20;
          if ( v17 )
          {
            if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
              PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
            else
              PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
            PassedAccessState.RemainingDesiredAccess = 0;
          }
          AccessState = ObOpenObjectByPointer(
                          NextProcessThread,
                          a4 & (AccessMode != 0 ? 7666 : 73714),
                          &PassedAccessState,
                          0,
                          (POBJECT_TYPE)PsThreadType,
                          AccessMode,
                          &Handle);
          SepDeleteAccessState((__int64)&PassedAccessState);
          SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
          if ( AccessState >= 0 )
          {
            *v23 = Handle;
            goto LABEL_20;
          }
          if ( AccessState != -1073741790 )
            goto LABEL_20;
        }
        NextProcessThread = PsGetNextProcessThread((__int64)v15, NextProcessThread);
        v22 = NextProcessThread;
        CurrentThread = v24;
      }
      while ( NextProcessThread );
      AccessState = -2147483622;
LABEL_20:
      ObfDereferenceObjectWithTag(v15, 0x6E457350u);
      if ( !NextProcessThread )
        return (unsigned int)AccessState;
      v16 = NextProcessThread;
LABEL_22:
      ObfDereferenceObjectWithTag(v16, 0x6E457350u);
      return (unsigned int)AccessState;
    }
    AccessState = -2147483622;
LABEL_26:
    v16 = Object;
    goto LABEL_22;
  }
  return result;
}
