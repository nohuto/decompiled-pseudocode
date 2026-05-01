/*
 * XREFs of ?EnsureAccess@ShellFeedsEncryptionHelper@1@AEAAJPEAXPEAU_ACL@@KPEA_NPEAPEAU2@@Z @ 0x1800B2650
 * Callers:
 *     ?EnsureAppContainerAccesses@ShellFeedsEncryptionHelper@1@AEAAJXZ @ 0x1800B27C4 (-EnsureAppContainerAccesses@ShellFeedsEncryptionHelper@1@AEAAJXZ.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801B1068 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::EnsureAccess(
        struct _EXPLICIT_ACCESS_W *this,
        void *a2,
        struct _ACL *a3,
        __int64 a4,
        bool *a5,
        struct _ACL **NewAcl)
{
  PACL *v6; // rdi
  int v9; // r14d
  DWORD ExplicitEntriesFromAclW; // eax
  __int64 v11; // rdx
  ULONG v12; // ecx
  __int64 i; // rsi
  struct _EXPLICIT_ACCESS_W *v14; // rbx
  LPWCH ptstrName; // rdx
  unsigned int v16; // ebx
  struct _EXPLICIT_ACCESS_W v18; // [rsp+20h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  PEXPLICIT_ACCESS_W pListOfExplicitEntries; // [rsp+80h] [rbp+30h] BYREF
  ULONG pcCountOfExplicitEntries; // [rsp+98h] [rbp+48h] BYREF

  pListOfExplicitEntries = this;
  pcCountOfExplicitEntries = 0;
  v6 = NewAcl;
  v9 = 131097;
  memset(&v18, 0, sizeof(v18));
  if ( NewAcl )
    *NewAcl = 0LL;
  pListOfExplicitEntries = 0LL;
  ExplicitEntriesFromAclW = GetExplicitEntriesFromAclW(a3, &pcCountOfExplicitEntries, &pListOfExplicitEntries);
  if ( ExplicitEntriesFromAclW )
  {
    v11 = 285LL;
LABEL_19:
    v16 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)v11,
            (unsigned int)"internal\\shellcommonshell\\inc\\ShellFeeds\\shellfeedsencryptionhelper.h",
            (const char *)ExplicitEntriesFromAclW,
            v18.grfAccessPermissions);
    goto LABEL_21;
  }
  v12 = pcCountOfExplicitEntries;
  for ( i = 0LL; (unsigned int)i < v12; i = (unsigned int)(i + 1) )
  {
    v14 = &pListOfExplicitEntries[i];
    if ( v14->Trustee.TrusteeForm )
    {
      if ( v14->Trustee.TrusteeForm != TRUSTEE_IS_OBJECTS_AND_SID )
        continue;
      ptstrName = (LPWCH)*((_QWORD *)v14->Trustee.ptstrName + 5);
    }
    else
    {
      ptstrName = v14->Trustee.ptstrName;
    }
    if ( ptstrName )
    {
      if ( EqualSid(a2, ptstrName) )
      {
        if ( v14->grfAccessMode == GRANT_ACCESS )
        {
          v9 &= ~v14->grfAccessPermissions;
          if ( !v9 )
            goto LABEL_20;
        }
      }
      v12 = pcCountOfExplicitEntries;
    }
  }
  if ( v6 )
  {
    v18.Trustee.TrusteeForm = TRUSTEE_IS_SID;
    v18.grfAccessPermissions = 131097;
    v18.grfAccessMode = SET_ACCESS;
    v18.grfInheritance = 3;
    v18.Trustee.TrusteeType = TRUSTEE_IS_WELL_KNOWN_GROUP;
    v18.Trustee.ptstrName = (LPWCH)a2;
    ExplicitEntriesFromAclW = SetEntriesInAclW(1u, &v18, a3, v6);
    if ( ExplicitEntriesFromAclW )
    {
      v11 = 330LL;
      goto LABEL_19;
    }
  }
LABEL_20:
  v16 = 0;
LABEL_21:
  if ( pListOfExplicitEntries )
    LocalFree(pListOfExplicitEntries);
  return v16;
}
