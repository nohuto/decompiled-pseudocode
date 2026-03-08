/*
 * XREFs of zzzUnhookWindowsHookEx @ 0x1C009C50C
 * Callers:
 *     zzzCancelJournalling @ 0x1C001D3F4 (zzzCancelJournalling.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C009C2B0 (NtUserUnhookWindowsHookEx.c)
 *     zzzSetWindowsHookEx @ 0x1C009C8B4 (zzzSetWindowsHookEx.c)
 *     zzzUnhookWindowsHook @ 0x1C01BCE2C (zzzUnhookWindowsHook.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C001D640 (PhkFirstGlobalValid.c)
 *     FreeHook @ 0x1C0039160 (FreeHook.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C0039408 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_HOOK@@@-$DomainSharedRecursive@$$V@.c)
 *     PhkNextValid @ 0x1C0039A4C (PhkNextValid.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C012D328 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01BC76C (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall zzzUnhookWindowsHookEx(struct tagHOOK *a1)
{
  __int64 v2; // r9
  struct tagTHREADINFO *v3; // r14
  _BYTE *v4; // r13
  int v6; // esi
  char v7; // di
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r12d
  char *v14; // r15
  tagDomLock *v15; // rcx
  __int64 i; // rax
  __int128 v17; // [rsp+50h] [rbp-49h] BYREF
  __int64 v18; // [rsp+60h] [rbp-39h]
  tagDomLock *v19; // [rsp+68h] [rbp-31h]
  char v20; // [rsp+70h] [rbp-29h] BYREF
  __int64 v21; // [rsp+78h] [rbp-21h]
  char v22; // [rsp+80h] [rbp-19h]
  __int64 v23; // [rsp+88h] [rbp-11h]
  char v24; // [rsp+90h] [rbp-9h]
  tagDomLock *v25; // [rsp+98h] [rbp-1h] BYREF
  char v26; // [rsp+A0h] [rbp+7h]
  char v27; // [rsp+C0h] [rbp+27h]

  DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::ObjectLockRecursive<>((__int64)&v25);
  v3 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 16) & 0x80u) != 0 )
  {
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v7,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        v2,
        3u,
        0xCu,
        0x1Eu,
        (__int64)&WPP_1013231a1d9e37ebe4f7699b849e7296_Traceguids,
        a1);
    DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(&v25);
    return 0LL;
  }
  else
  {
    v4 = &unk_1C0319260;
    if ( (*((_BYTE *)&unk_1C0319260 + *((int *)a1 + 12) + 1) & 4) != 0 )
    {
      v17 = 0LL;
      v18 = 0LL;
      DLT = DLT_HOOK::getDLT();
      DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
      v19 = DomainLockRef;
      v21 = gDomainDummyLock;
      v20 = 1;
      v22 = 0;
      v23 = 0LL;
      if ( DomainLockRef )
        tagDomLock::UnLockExclusive(DomainLockRef);
      v24 = 1;
      ThreadLock(a1, &v17);
      zzzJournalAttach(v3, 0);
      a1 = (struct tagHOOK *)ThreadUnlock1(v11, v10, v12);
      if ( v24 )
      {
        v13 = 0;
        v14 = &v20;
        do
        {
          v15 = (tagDomLock *)*((_QWORD *)v14 - 1);
          if ( v15 )
          {
            if ( *v14 )
              tagDomLock::LockExclusive(v15);
            else
              tagDomLock::LockShared(v15);
          }
          ++v13;
          v14 += 16;
        }
        while ( !v13 );
      }
    }
    if ( a1 )
      FreeHook(a1);
    if ( (*((_DWORD *)v3 + 122) & 0x40000) != 0 )
    {
      v6 = -1;
      do
      {
        if ( (*v4 & 0x10) != 0 )
        {
          for ( i = PhkFirstGlobalValid((__int64)v3, v6); i; i = PhkNextValid(i) )
          {
            if ( *(struct tagTHREADINFO **)(i + 16) == v3 )
              goto LABEL_6;
          }
        }
        ++v6;
        ++v4;
      }
      while ( v6 <= 14 );
      *((_DWORD *)v3 + 122) &= ~0x40000u;
    }
LABEL_6:
    if ( v27 && v25 )
    {
      if ( v26 )
        tagDomLock::UnLockExclusive(v25);
      else
        tagDomLock::UnLockShared(v25);
    }
    return 1LL;
  }
}
