/*
 * XREFs of CmUpdateFeatureUsageSubscription @ 0x140A121EC
 * Callers:
 *     NtSetSystemInformation @ 0x14075F340 (NtSetSystemInformation.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     SeAccessCheck @ 0x140231630 (SeAccessCheck.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     CmpAllocatePoolWithQuota @ 0x1406165E8 (CmpAllocatePoolWithQuota.c)
 *     SeCaptureSubjectContext @ 0x1407380C0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A277C8 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 */

__int64 __fastcall CmUpdateFeatureUsageSubscription(void *Src, size_t Size, KPROCESSOR_MODE AccessMode)
{
  size_t v4; // rsi
  struct _PRIVILEGE_SET *v6; // rdi
  BOOLEAN v7; // bl
  unsigned int updated; // ebx
  struct _PRIVILEGE_SET *PoolWithQuota; // rax
  __int64 PrivilegeCount; // rcx
  unsigned int v11; // eax
  ACCESS_MASK GrantedAccess[3]; // [rsp+54h] [rbp-44h] BYREF
  struct _PRIVILEGE_SET *v14; // [rsp+60h] [rbp-38h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+68h] [rbp-30h] BYREF
  NTSTATUS AccessStatus; // [rsp+B8h] [rbp+20h] BYREF

  v4 = (unsigned int)Size;
  AccessStatus = 0;
  GrantedAccess[0] = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  v6 = 0LL;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  v7 = SeAccessCheck(
         CmFcFeatureConfigSecurityDescriptor,
         &SubjectSecurityContext,
         0,
         2u,
         0,
         0LL,
         &CmFcFeatureConfigMapping,
         AccessMode,
         GrantedAccess,
         &AccessStatus);
  SeReleaseSubjectContext(&SubjectSecurityContext);
  if ( !v7 )
  {
    updated = AccessStatus;
    goto LABEL_12;
  }
  if ( (unsigned int)v4 < 4 )
    goto LABEL_4;
  PoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocatePoolWithQuota(256LL, v4, 1665559875LL);
  v6 = PoolWithQuota;
  v14 = PoolWithQuota;
  if ( PoolWithQuota )
  {
    memmove(PoolWithQuota, Src, v4);
    PrivilegeCount = v6->PrivilegeCount;
    v11 = 20 * PrivilegeCount;
    if ( (unsigned __int64)(20 * PrivilegeCount) > 0xFFFFFFFF || v11 + 4 < v11 )
    {
      updated = -1073741811;
    }
    else
    {
      if ( v11 + 4 != (_DWORD)v4 )
      {
LABEL_4:
        updated = -1073741820;
        goto LABEL_12;
      }
      updated = CmFcManagerUpdateFeatureUsageSubscriptions(PrivilegeCount, &v6->Control, (unsigned int)PrivilegeCount);
    }
  }
  else
  {
    updated = -1073741670;
  }
LABEL_12:
  if ( v6 )
    CmSiFreeMemory(v6);
  return updated;
}
