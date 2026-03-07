__int64 __fastcall CmUpdateFeatureConfiguration(void *Src, size_t Size, KPROCESSOR_MODE AccessMode)
{
  size_t v4; // r14
  unsigned int *v6; // rdi
  struct _PRIVILEGE_SET *v7; // rsi
  BOOLEAN v8; // bl
  unsigned int v9; // ebx
  unsigned int *PoolWithQuota; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  struct _PRIVILEGE_SET *v15; // rax
  unsigned int updated; // eax
  unsigned __int64 v17; // rax
  int v18; // ecx
  ACCESS_MASK GrantedAccess; // [rsp+60h] [rbp-68h] BYREF
  unsigned int *v21; // [rsp+68h] [rbp-60h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+88h] [rbp-40h] BYREF
  NTSTATUS AccessStatus; // [rsp+E8h] [rbp+20h] BYREF

  v4 = (unsigned int)Size;
  AccessStatus = 0;
  GrantedAccess = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  v6 = 0LL;
  v7 = 0LL;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  v8 = SeAccessCheck(
         CmFcFeatureConfigSecurityDescriptor,
         &SubjectSecurityContext,
         0,
         1u,
         0,
         0LL,
         &CmFcFeatureConfigMapping,
         AccessMode,
         &GrantedAccess,
         &AccessStatus);
  SeReleaseSubjectContext(&SubjectSecurityContext);
  if ( !v8 )
  {
    v9 = AccessStatus;
    goto LABEL_29;
  }
  if ( (unsigned int)v4 < 4 )
    goto LABEL_4;
  PoolWithQuota = (unsigned int *)CmpAllocatePoolWithQuota(256LL, v4, 1665559875LL);
  v6 = PoolWithQuota;
  v21 = PoolWithQuota;
  if ( !PoolWithQuota )
    goto LABEL_6;
  memmove(PoolWithQuota, Src, v4);
  v11 = *v6;
  if ( (_DWORD)v11 )
  {
    if ( (_DWORD)v11 != 1 )
      goto LABEL_28;
    if ( (_DWORD)v4 == 40 )
    {
      if ( v6[4] == 1 )
      {
        if ( AccessMode )
        {
          v11 = *((_QWORD *)v6 + 3);
          if ( v11 )
          {
            v12 = *((_QWORD *)v6 + 4);
            if ( (v12 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v13 = v12 + v11;
            v11 = 0x7FFFFFFF0000LL;
            if ( v13 > 0x7FFFFFFF0000LL || v13 < v12 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
        v14 = *((_QWORD *)v6 + 3);
        if ( v14 )
        {
          v15 = (struct _PRIVILEGE_SET *)CmpAllocatePoolWithQuota(256LL, v14, 1665559875LL);
          v7 = v15;
          if ( !v15 )
          {
LABEL_6:
            v9 = -1073741670;
            goto LABEL_29;
          }
          memmove(v15, *((const void **)v6 + 4), *((_QWORD *)v6 + 3));
        }
        updated = CmFcManagerOverwriteFeatureConfigurationSection(
                    v11,
                    *((_QWORD *)v6 + 1),
                    v6[4],
                    v7,
                    *((_QWORD *)v6 + 3));
        goto LABEL_27;
      }
      goto LABEL_28;
    }
LABEL_4:
    v9 = -1073741820;
    goto LABEL_29;
  }
  v17 = 32LL * v6[5];
  if ( v17 > 0xFFFFFFFF )
    goto LABEL_28;
  v18 = v17 + 24;
  if ( (int)v17 + 24 < (unsigned int)v17 )
    goto LABEL_28;
  if ( v18 != (_DWORD)v4 )
    goto LABEL_4;
  if ( v6[4] == 1 )
  {
    updated = CmFcManagerUpdateFeatureConfigurations(v18, *((_QWORD *)v6 + 1), 1, (int)v6 + 24, v6[5]);
LABEL_27:
    v9 = updated;
    goto LABEL_29;
  }
LABEL_28:
  v9 = -1073741811;
LABEL_29:
  if ( v6 )
    CmSiFreeMemory((PPRIVILEGE_SET)v6);
  if ( v7 )
    CmSiFreeMemory(v7);
  return v9;
}
