/*
 * XREFs of NtPrivilegeObjectAuditAlarm @ 0x140843210
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SepProbeAndCaptureString_U @ 0x140698634 (SepProbeAndCaptureString_U.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406996AC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeCheckAuditPrivilege @ 0x140699908 (SeCheckAuditPrivilege.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x1409CEE50 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtPrivilegeObjectAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  char PreviousMode; // bl
  NTSTATUS v11; // ebx
  PVOID v12; // rsi
  ULONG PrivilegeCount; // ebx
  unsigned int v14; // ecx
  char *v15; // rdx
  ULONG *Pool2; // rax
  ULONG *v17; // rdi
  PVOID v18; // rbx
  __int64 v20; // rcx
  NTSTATUS v21; // [rsp+50h] [rbp-78h]
  PVOID Object; // [rsp+60h] [rbp-68h] BYREF
  ULONG *v23; // [rsp+68h] [rbp-60h]
  PVOID P; // [rsp+70h] [rbp-58h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-50h] BYREF

  P = 0LL;
  v23 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64)&SubjectContext, PreviousMode) )
  {
    v11 = -1073741727;
LABEL_30:
    SeReleaseSubjectContext(&SubjectContext);
    return v11;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
  if ( v11 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v11 == -1073741816 )
      return v11;
    v20 = (unsigned int)v11;
LABEL_28:
    SepAuditFailed(v20);
    return v11;
  }
  v12 = Object;
  if ( *((_DWORD *)Object + 48) == 2 && *((int *)Object + 49) < 1 )
  {
    ObfDereferenceObject(Object);
    v11 = -1073741659;
    goto LABEL_30;
  }
  v11 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&P);
  v21 = v11;
  if ( v11 < 0 )
  {
LABEL_16:
    v17 = v23;
    goto LABEL_19;
  }
  if ( ((unsigned __int8)Privileges & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  PrivilegeCount = Privileges->PrivilegeCount;
  if ( Privileges->PrivilegeCount >= 0x43 )
  {
    v11 = -1073741811;
    v12 = Object;
    goto LABEL_16;
  }
  v14 = 12 * PrivilegeCount + 8;
  if ( 12 * PrivilegeCount != -8 )
  {
    v15 = (char *)Privileges + v14;
    if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < (char *)Privileges )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  Pool2 = (ULONG *)ExAllocatePool2(256LL, v14, 1917871443LL);
  v17 = Pool2;
  v23 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, Privileges, 12 * PrivilegeCount + 8);
    *v17 = PrivilegeCount;
    v11 = v21;
  }
  else
  {
    v11 = -1073741670;
  }
  v12 = Object;
LABEL_19:
  if ( v11 < 0 )
  {
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    SeReleaseSubjectContext(&SubjectContext);
    ObfDereferenceObject(v12);
    if ( v11 != -1073741670 )
      return v11;
    v20 = 3221225626LL;
    goto LABEL_28;
  }
  v18 = P;
  SepAdtPrivilegeObjectAuditAlarm(
    (const int *)P,
    0LL,
    0LL,
    (__int64)HandleId,
    (__int64)v12,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)SubjectContext.ProcessAuditId,
    DesiredAccess,
    (int *)v17,
    AccessGranted);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  SeReleaseSubjectContext(&SubjectContext);
  ObfDereferenceObject(v12);
  return 0;
}
