/*
 * XREFs of NtGetNextProcess @ 0x140784C70
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x1402484DC (PsIsProcessInSilo.c)
 *     SepDeleteAccessState @ 0x140265F50 (SepDeleteAccessState.c)
 *     PspLockUnlockProcessExclusive @ 0x1402F6A6C (PspLockUnlockProcessExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SeCreateAccessState @ 0x1406991A0 (SeCreateAccessState.c)
 *     PsGetNextProcess @ 0x1406AA530 (PsGetNextProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     PsGetPreviousProcess @ 0x1409B4C60 (PsGetPreviousProcess.c)
 */

__int64 __fastcall NtGetNextProcess(ULONG_PTR BugCheckParameter1, int a2, int a3, int a4, HANDLE *a5)
{
  KPROCESSOR_MODE AccessMode; // r12
  ULONG v9; // r14d
  __int64 v10; // rcx
  __int64 result; // rax
  int v12; // r15d
  __int64 *PreviousProcess; // rax
  __int64 v14; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 CurrentServerSilo; // rax
  int AccessState; // esi
  __int64 *NextProcess; // rax
  bool v19; // zf
  bool v20; // [rsp+40h] [rbp-208h]
  PVOID Object; // [rsp+58h] [rbp-1F0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-1E8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-1E0h]
  struct _KTHREAD *v25; // [rsp+78h] [rbp-1D0h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-1B8h] BYREF
  _BYTE v27[224]; // [rsp+130h] [rbp-118h] BYREF

  Object = 0LL;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v27, 0, sizeof(v27));
  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v9 = a3 & (AccessMode != 0 ? 7666 : 73714);
  if ( AccessMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a5;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  *a5 = 0LL;
  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( !BugCheckParameter1
    || (result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x6E457350u, (__int64)&Object, 0LL, 0LL),
        (int)result >= 0) )
  {
    v12 = a4 & 1;
    if ( v12 )
      PreviousProcess = (__int64 *)PsGetPreviousProcess(Object);
    else
      PreviousProcess = PsGetNextProcess(Object);
    v14 = (__int64)PreviousProcess;
    if ( !PreviousProcess )
      return 2147483674LL;
    v20 = SeSinglePrivilegeCheck(SeDebugPrivilege, AccessMode) != 0;
    CurrentThread = KeGetCurrentThread();
    v25 = CurrentThread;
    CurrentServerSilo = PsGetCurrentServerSilo();
    v24 = CurrentServerSilo;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v14 + 1124) & 0x4000000) != 0 )
        goto LABEL_13;
      PspLockUnlockProcessExclusive(v14, (__int64)CurrentThread);
      if ( (*(_DWORD *)(v14 + 1124) & 0x4000000) != 0 )
        break;
LABEL_27:
      if ( v12 )
        NextProcess = (__int64 *)PsGetPreviousProcess((PVOID)v14);
      else
        NextProcess = PsGetNextProcess((_QWORD *)v14);
      v14 = (__int64)NextProcess;
      v19 = NextProcess == 0LL;
      CurrentServerSilo = v24;
      if ( v19 )
      {
        AccessState = -2147483622;
LABEL_21:
        if ( v14 )
          ObfDereferenceObjectWithTag((PVOID)v14, 0x6E457350u);
        return (unsigned int)AccessState;
      }
    }
    CurrentServerSilo = v24;
LABEL_13:
    if ( PsIsProcessInSilo((struct _KPROCESS *)v14, CurrentServerSilo) )
    {
      AccessState = SeCreateAccessState((int)&PassedAccessState, (int)v27, a2, (__int64)PsProcessType + 76);
      if ( AccessState < 0 )
        goto LABEL_21;
      if ( v20 )
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
                      AccessMode,
                      &Handle);
      SepDeleteAccessState((__int64)&PassedAccessState);
      SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
      if ( AccessState >= 0 )
      {
        *a5 = Handle;
        goto LABEL_21;
      }
      if ( AccessState != -1073741790 )
        goto LABEL_21;
      CurrentThread = v25;
    }
    goto LABEL_27;
  }
  return result;
}
