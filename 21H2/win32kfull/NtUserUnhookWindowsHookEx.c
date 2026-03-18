/*
 * XREFs of NtUserUnhookWindowsHookEx @ 0x1C0024510
 * Callers:
 *     <none>
 * Callees:
 *     zzzUnhookWindowsHookEx @ 0x1C002468C (zzzUnhookWindowsHookEx.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserUnhookWindowsHookEx(__int64 a1)
{
  int v2; // esi
  unsigned int v3; // eax
  char *v4; // rbx
  __int64 v5; // rdx
  int v6; // edi
  tagDomLock *v7; // rcx
  __int64 v8; // rax
  tagDomLock *v9; // rcx
  __int64 v10; // rbx
  unsigned int DLT; // eax
  tagDomLock *v13; // rcx
  __int64 v14; // rdx
  struct tagHOOK *v15; // rax
  __int64 v16; // rcx
  int v17; // edi
  char *v18; // rbx
  _BYTE v19[8]; // [rsp+48h] [rbp-29h] BYREF
  tagDomLock *DomainLockRef; // [rsp+50h] [rbp-21h]
  char v21; // [rsp+58h] [rbp-19h] BYREF
  __int64 v22; // [rsp+60h] [rbp-11h]
  char v23; // [rsp+68h] [rbp-9h]
  __int64 v24; // [rsp+70h] [rbp-1h]
  char v25; // [rsp+78h] [rbp+7h]
  tagDomLock *v26; // [rsp+80h] [rbp+Fh]
  char v27; // [rsp+88h] [rbp+17h] BYREF
  __int64 v28; // [rsp+90h] [rbp+1Fh]
  char v29; // [rsp+98h] [rbp+27h]
  __int64 v30; // [rsp+A0h] [rbp+2Fh]
  char v31; // [rsp+A8h] [rbp+37h]

  wil_details_FeatureReporting_ReportUsageToService(
    &Feature_UseSharedCreateDestroyWinEventHooks__private_reporting,
    26488667LL,
    0LL,
    0LL,
    &Feature_StrictIAMForegroundCheck_logged_traits,
    1);
  EnterSharedCrit();
  v2 = 0;
  v3 = ((__int64 (*)(void))DLT_HOOK::getDLT)();
  v21 = 1;
  v4 = &v21;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(v3);
  v22 = gDomainDummyLock;
  v24 = 0LL;
  v6 = 0;
  v25 = 0;
  v23 = 0;
  do
  {
    v7 = (tagDomLock *)*((_QWORD *)v4 - 1);
    if ( v7 )
    {
      if ( *v4 )
        tagDomLock::LockExclusive(v7);
      else
        tagDomLock::LockShared(v7);
    }
    ++v6;
    v4 += 16;
  }
  while ( !v6 );
  LOBYTE(v5) = 5;
  v25 = 1;
  v8 = HMValidateHandle(a1, v5);
  v9 = (tagDomLock *)v8;
  if ( v8 )
  {
    if ( (byte_1C02E8961[*(int *)(v8 + 48)] & 4) != 0 )
    {
      DLT = DLT_HOOK::getDLT(v8);
      v13 = (tagDomLock *)GetDomainLockRef(DLT);
      v26 = v13;
      v28 = gDomainDummyLock;
      v27 = 1;
      v29 = 0;
      v30 = 0LL;
      if ( v13 )
        tagDomLock::UnLockExclusive(v13);
      v31 = 1;
      LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v19);
      EnterCrit(1LL, 0LL);
      LOBYTE(v14) = 5;
      v15 = (struct tagHOOK *)HMValidateHandle(a1, v14);
      if ( v15 )
        v2 = zzzUnhookWindowsHookEx(v15);
      UserSessionSwitchLeaveCrit(v16);
      LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v19);
      if ( v31 )
      {
        v17 = 0;
        v18 = &v27;
        do
        {
          v9 = (tagDomLock *)*((_QWORD *)v18 - 1);
          if ( v9 )
          {
            if ( *v18 )
              tagDomLock::LockExclusive(v9);
            else
              tagDomLock::LockShared(v9);
          }
          ++v17;
          v18 += 16;
        }
        while ( !v17 );
      }
    }
    else
    {
      v2 = zzzUnhookWindowsHookEx((struct tagHOOK *)v8);
    }
    v10 = v2;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v25 )
  {
    v9 = DomainLockRef;
    if ( DomainLockRef )
    {
      if ( v21 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
    v25 = 0;
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
