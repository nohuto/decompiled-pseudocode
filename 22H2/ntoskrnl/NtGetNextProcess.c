/*
 * XREFs of NtGetNextProcess @ 0x14078A7B0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14025C220 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14025C298 (PsIsProcessInSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     PspLockUnlockProcessExclusive @ 0x14031C374 (PspLockUnlockProcessExclusive.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     SeDeleteAccessState @ 0x1405DC900 (SeDeleteAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     PsGetNextProcess @ 0x14062BFA0 (PsGetNextProcess.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14063E2A0 (ObReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointer @ 0x140653F10 (ObOpenObjectByPointer.c)
 *     SeCreateAccessState @ 0x1406DA670 (SeCreateAccessState.c)
 *     PsGetPreviousProcess @ 0x14090E7B4 (PsGetPreviousProcess.c)
 */

NTSTATUS __cdecl NtGetNextProcess(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Flags,
        PHANDLE NewProcessHandle)
{
  KPROCESSOR_MODE PreviousMode; // r12
  ULONG v9; // r14d
  __int64 v10; // rcx
  NTSTATUS result; // eax
  ULONG v12; // r15d
  unsigned __int64 PreviousProcess; // rax
  __int64 v14; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 CurrentServerSilo; // rax
  NTSTATUS AccessState; // esi
  unsigned __int64 NextProcess; // rax
  bool v21; // zf
  bool v22; // [rsp+40h] [rbp-208h]
  PVOID Object; // [rsp+58h] [rbp-1F0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-1E8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-1E0h]
  struct _KTHREAD *v27; // [rsp+78h] [rbp-1D0h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-1B8h] BYREF
  _BYTE v29[224]; // [rsp+130h] [rbp-118h] BYREF

  Object = 0LL;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v29, 0, sizeof(v29));
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = HandleAttributes & (PreviousMode != 0 ? 7666 : 73714);
  if ( PreviousMode )
  {
    v10 = (__int64)NewProcessHandle;
    if ( (unsigned __int64)NewProcessHandle >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  *NewProcessHandle = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( !ProcessHandle
    || (result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x6E457350u,
                   &Object,
                   0LL),
        result >= 0) )
  {
    v12 = Flags & 1;
    if ( v12 )
      PreviousProcess = PsGetPreviousProcess(Object);
    else
      PreviousProcess = PsGetNextProcess(Object);
    v14 = PreviousProcess;
    if ( !PreviousProcess )
      return -2147483622;
    v22 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) != 0;
    CurrentThread = KeGetCurrentThread();
    v27 = CurrentThread;
    CurrentServerSilo = PsGetCurrentServerSilo(v17, v16);
    v26 = CurrentServerSilo;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v14 + 1124) & 0x4000000) != 0 )
        goto LABEL_13;
      PspLockUnlockProcessExclusive(v14, (__int64)CurrentThread);
      if ( (*(_DWORD *)(v14 + 1124) & 0x4000000) != 0 )
        break;
LABEL_27:
      if ( v12 )
        NextProcess = PsGetPreviousProcess((PVOID)v14);
      else
        NextProcess = PsGetNextProcess((_QWORD *)v14);
      v14 = NextProcess;
      v21 = NextProcess == 0;
      CurrentServerSilo = v26;
      if ( v21 )
      {
        AccessState = -2147483622;
LABEL_21:
        if ( v14 )
          ObfDereferenceObjectWithTag((PVOID)v14, 0x6E457350u);
        return AccessState;
      }
    }
    CurrentServerSilo = v26;
LABEL_13:
    if ( PsIsProcessInSilo((struct _KPROCESS *)v14, CurrentServerSilo) )
    {
      AccessState = SeCreateAccessState((int)&PassedAccessState, (int)v29, DesiredAccess, (__int64)PsProcessType + 76);
      if ( AccessState < 0 )
        goto LABEL_21;
      if ( v22 )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      AccessState = ObOpenObjectByPointer(
                      (PVOID)v14,
                      v9,
                      &PassedAccessState,
                      0,
                      (POBJECT_TYPE)PsProcessType,
                      PreviousMode,
                      &Handle);
      SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&PassedAccessState);
      if ( AccessState >= 0 )
      {
        *NewProcessHandle = Handle;
        goto LABEL_21;
      }
      if ( AccessState != -1073741790 )
        goto LABEL_21;
      CurrentThread = v27;
    }
    goto LABEL_27;
  }
  return result;
}
