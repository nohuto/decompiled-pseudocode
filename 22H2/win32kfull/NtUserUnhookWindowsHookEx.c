/*
 * XREFs of NtUserUnhookWindowsHookEx @ 0x1C006F1B0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     zzzUnhookWindowsHookEx @ 0x1C006F404 (zzzUnhookWindowsHookEx.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C007176C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     LeaveEditionCrit @ 0x1C00BE2E0 (LeaveEditionCrit.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0EnterLeaveCrit@@QEAA@W4GuiThreadContext@@W4HandleToObjILCheck@@@Z @ 0x1C01A86EC (--0EnterLeaveCrit@@QEAA@W4GuiThreadContext@@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserUnhookWindowsHookEx(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // esi
  unsigned int DLT; // eax
  char *v6; // rbx
  int v7; // edi
  tagDomLock *v8; // rcx
  __int64 v9; // rax
  unsigned int v11; // eax
  tagDomLock *v12; // rax
  struct tagHOOK *v13; // rax
  int v14; // edi
  char *v15; // rbx
  tagDomLock *v16; // rcx
  char v17; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v18[3]; // [rsp+21h] [rbp-38h] BYREF
  int v19; // [rsp+24h] [rbp-35h]
  __int64 DomainLockRef; // [rsp+28h] [rbp-31h] BYREF
  char v21; // [rsp+30h] [rbp-29h] BYREF
  __int64 v22; // [rsp+38h] [rbp-21h]
  char v23; // [rsp+40h] [rbp-19h]
  __int64 v24; // [rsp+48h] [rbp-11h]
  char v25; // [rsp+50h] [rbp-9h]
  tagDomLock *v26; // [rsp+58h] [rbp-1h]
  char v27; // [rsp+60h] [rbp+7h] BYREF
  __int64 v28; // [rsp+68h] [rbp+Fh]
  char v29; // [rsp+70h] [rbp+17h]
  __int64 v30; // [rsp+78h] [rbp+1Fh]
  char v31; // [rsp+80h] [rbp+27h]

  EnterSharedCrit(a1, a2, a3);
  v4 = 0;
  DLT = DLT_HOOK::getDLT();
  v23 = 0;
  DomainLockRef = GetDomainLockRef(DLT);
  v6 = &v21;
  v7 = 0;
  v22 = gDomainDummyLock;
  v24 = 0LL;
  v21 = 1;
  v25 = 0;
  do
  {
    v8 = (tagDomLock *)*((_QWORD *)v6 - 1);
    if ( v8 )
    {
      if ( *v6 )
        tagDomLock::LockExclusive(v8);
      else
        tagDomLock::LockShared(v8);
    }
    ++v7;
    v6 += 16;
  }
  while ( !v7 );
  v25 = 1;
  v9 = HMValidateHandle(a1, 5u);
  if ( v9 )
  {
    if ( (byte_1C0317021[*(int *)(v9 + 48)] & 4) != 0 || *(__int64 *)(*(_QWORD *)(v9 + 24) - 48LL) <= 1 )
    {
      if ( *(__int64 *)(*(_QWORD *)(v9 + 24) - 48LL) <= 1 )
      {
        v19 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 6849LL);
      }
      v11 = DLT_HOOK::getDLT();
      v12 = (tagDomLock *)GetDomainLockRef(v11);
      v28 = gDomainDummyLock;
      v26 = v12;
      v27 = 1;
      v29 = 0;
      v30 = 0LL;
      if ( v12 )
        tagDomLock::UnLockExclusive(v12);
      v31 = 1;
      LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17);
      EnterLeaveCrit::EnterLeaveCrit(v18, 1LL, 0LL);
      v13 = (struct tagHOOK *)HMValidateHandle(a1, 5u);
      if ( v13 )
        v4 = zzzUnhookWindowsHookEx(v13);
      LeaveEditionCrit(v18);
      LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17);
      if ( v31 )
      {
        v14 = 0;
        v15 = &v27;
        do
        {
          v16 = (tagDomLock *)*((_QWORD *)v15 - 1);
          if ( v16 )
          {
            if ( *v15 )
              tagDomLock::LockExclusive(v16);
            else
              tagDomLock::LockShared(v16);
          }
          ++v14;
          v15 += 16;
        }
        while ( !v14 );
      }
    }
    else
    {
      v4 = zzzUnhookWindowsHookEx((struct tagHOOK *)v9);
    }
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(&DomainLockRef);
    LeaveEditionCrit(&v17);
    return v4;
  }
  else
  {
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(&DomainLockRef);
    LeaveEditionCrit(&v17);
    return 0LL;
  }
}
