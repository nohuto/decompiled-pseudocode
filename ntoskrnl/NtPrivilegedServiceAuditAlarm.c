/*
 * XREFs of NtPrivilegedServiceAuditAlarm @ 0x140788B50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SepProbeAndCaptureString_U @ 0x140698634 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x140699908 (SeCheckAuditPrivilege.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14069D1D4 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x1409CEE50 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtPrivilegedServiceAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PUNICODE_STRING ServiceName,
        HANDLE ClientToken,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  char PreviousMode; // di
  NTSTATUS v10; // edi
  PVOID v11; // r14
  ULONG PrivilegeCount; // edi
  unsigned int v13; // ecx
  char *v14; // rdx
  ULONG *Pool2; // rax
  ULONG *v16; // rsi
  PVOID v17; // rdi
  PVOID v18; // r15
  NTSTATUS v20; // ebx
  __int64 v21; // rcx
  NTSTATUS v22; // [rsp+40h] [rbp-68h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  ULONG *v24; // [rsp+50h] [rbp-58h]
  PVOID v25; // [rsp+58h] [rbp-50h] BYREF
  PVOID P; // [rsp+60h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-40h] BYREF
  ULONG v28; // [rsp+88h] [rbp-20h]
  unsigned int v29; // [rsp+8Ch] [rbp-1Ch]

  v24 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  v25 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64)&SubjectContext, PreviousMode) )
  {
    v20 = -1073741727;
LABEL_36:
    SeReleaseSubjectContext(&SubjectContext);
    return v20;
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
  v22 = v10;
  if ( v10 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v10 == -1073741816 )
      return v10;
    v21 = (unsigned int)v10;
LABEL_33:
    SepAuditFailed(v21);
    return v10;
  }
  v11 = Object;
  if ( *((_DWORD *)Object + 48) == 2 && *((int *)Object + 49) < 1 )
  {
    ObfDereferenceObject(Object);
    v20 = -1073741659;
    goto LABEL_36;
  }
  if ( SubsystemName
    && (v10 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&P), v22 = v10, v10 < 0)
    || ServiceName
    && (v10 = SepProbeAndCaptureString_U((unsigned __int64)ServiceName, (__int64)&v25), v22 = v10, v10 < 0) )
  {
    v16 = v24;
  }
  else
  {
    if ( ((unsigned __int8)Privileges & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    PrivilegeCount = Privileges->PrivilegeCount;
    v28 = PrivilegeCount;
    if ( PrivilegeCount >= 0x43 )
    {
      v10 = -1073741811;
      v16 = v24;
    }
    else
    {
      v13 = 12 * PrivilegeCount + 8;
      v29 = v13;
      if ( 12 * PrivilegeCount != -8 )
      {
        v14 = (char *)Privileges + v13;
        if ( (unsigned __int64)v14 > 0x7FFFFFFF0000LL || v14 < (char *)Privileges )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      Pool2 = (ULONG *)ExAllocatePool2(256LL, v13, 1917871443LL);
      v16 = Pool2;
      v24 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, Privileges, 12 * PrivilegeCount + 8);
        *v16 = PrivilegeCount;
        v10 = v22;
      }
      else
      {
        v10 = -1073741670;
      }
    }
    v11 = Object;
  }
  if ( v10 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v25 )
      ExFreePoolWithTag(v25, 0);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    SeReleaseSubjectContext(&SubjectContext);
    ObfDereferenceObject(v11);
    if ( v10 != -1073741670 )
      return v10;
    v21 = 3221225626LL;
    goto LABEL_33;
  }
  v17 = v25;
  v18 = P;
  SepAdtPrivilegedServiceAuditAlarm(
    (__int64)&SubjectContext,
    (const int *)P,
    (unsigned __int16 *)v25,
    (__int64)v11,
    (__int64)SubjectContext.PrimaryToken,
    v16,
    AccessGranted);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  ObfDereferenceObject(v11);
  SeReleaseSubjectContext(&SubjectContext);
  return 0;
}
