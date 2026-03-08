/*
 * XREFs of NtUserUnhookWindowsHookEx @ 0x1C009C2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 *     zzzUnhookWindowsHookEx @ 0x1C009C50C (zzzUnhookWindowsHookEx.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C009DA74 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     LeaveEditionCrit @ 0x1C00F5EA0 (LeaveEditionCrit.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     Feature_UseSharedCreateDestroyWinEventHooks__private_ReportDeviceUsage @ 0x1C012E9B4 (Feature_UseSharedCreateDestroyWinEventHooks__private_ReportDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserUnhookWindowsHookEx(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // esi
  unsigned int DLT; // eax
  char *v7; // rbx
  int v8; // edi
  tagDomLock *v9; // rcx
  __int64 v10; // rax
  unsigned int v12; // eax
  tagDomLock *v13; // rax
  struct tagHOOK *v14; // rax
  __int64 v15; // rcx
  int v16; // edi
  char *v17; // rbx
  tagDomLock *v18; // rcx
  _BYTE v19[4]; // [rsp+20h] [rbp-39h] BYREF
  int v20; // [rsp+24h] [rbp-35h]
  __int64 DomainLockRef; // [rsp+28h] [rbp-31h] BYREF
  char v22; // [rsp+30h] [rbp-29h] BYREF
  __int64 v23; // [rsp+38h] [rbp-21h]
  char v24; // [rsp+40h] [rbp-19h]
  __int64 v25; // [rsp+48h] [rbp-11h]
  char v26; // [rsp+50h] [rbp-9h]
  tagDomLock *v27; // [rsp+58h] [rbp-1h]
  char v28; // [rsp+60h] [rbp+7h] BYREF
  __int64 v29; // [rsp+68h] [rbp+Fh]
  char v30; // [rsp+70h] [rbp+17h]
  __int64 v31; // [rsp+78h] [rbp+1Fh]
  char v32; // [rsp+80h] [rbp+27h]

  Feature_UseSharedCreateDestroyWinEventHooks__private_ReportDeviceUsage();
  EnterSharedCrit(v3, v2, v4);
  v5 = 0;
  DLT = DLT_HOOK::getDLT();
  v24 = 0;
  DomainLockRef = GetDomainLockRef(DLT);
  v7 = &v22;
  v8 = 0;
  v23 = gDomainDummyLock;
  v25 = 0LL;
  v22 = 1;
  v26 = 0;
  do
  {
    v9 = (tagDomLock *)*((_QWORD *)v7 - 1);
    if ( v9 )
    {
      if ( *v7 )
        tagDomLock::LockExclusive(v9);
      else
        tagDomLock::LockShared(v9);
    }
    ++v8;
    v7 += 16;
  }
  while ( !v8 );
  v26 = 1;
  v10 = HMValidateHandle(a1, 5u);
  if ( v10 )
  {
    if ( (byte_1C0319261[*(int *)(v10 + 48)] & 4) != 0 || *(__int64 *)(*(_QWORD *)(v10 + 24) - 48LL) <= 1 )
    {
      if ( *(__int64 *)(*(_QWORD *)(v10 + 24) - 48LL) <= 1 )
      {
        v20 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 6913LL);
      }
      v12 = DLT_HOOK::getDLT();
      v13 = (tagDomLock *)GetDomainLockRef(v12);
      v29 = gDomainDummyLock;
      v27 = v13;
      v28 = 1;
      v30 = 0;
      v31 = 0LL;
      if ( v13 )
        tagDomLock::UnLockExclusive(v13);
      v32 = 1;
      LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v19);
      EnterCrit(1LL, 0LL);
      v14 = (struct tagHOOK *)HMValidateHandle(a1, 5u);
      if ( v14 )
        v5 = zzzUnhookWindowsHookEx(v14);
      UserSessionSwitchLeaveCrit(v15);
      LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v19);
      if ( v32 )
      {
        v16 = 0;
        v17 = &v28;
        do
        {
          v18 = (tagDomLock *)*((_QWORD *)v17 - 1);
          if ( v18 )
          {
            if ( *v17 )
              tagDomLock::LockExclusive(v18);
            else
              tagDomLock::LockShared(v18);
          }
          ++v16;
          v17 += 16;
        }
        while ( !v16 );
      }
    }
    else
    {
      v5 = zzzUnhookWindowsHookEx((struct tagHOOK *)v10);
    }
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(&DomainLockRef);
    LeaveEditionCrit(v19);
    return v5;
  }
  else
  {
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(&DomainLockRef);
    LeaveEditionCrit(v19);
    return 0LL;
  }
}
