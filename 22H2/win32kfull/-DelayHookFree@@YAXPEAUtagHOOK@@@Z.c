/*
 * XREFs of ?DelayHookFree@@YAXPEAUtagHOOK@@@Z @ 0x1C01BB430
 * Callers:
 *     FreeHook @ 0x1C00704F0 (FreeHook.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C007085C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1C0070F78 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C00710DC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C01210C8 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall DelayHookFree(struct tagHOOK *a1)
{
  int v2; // esi
  char *v3; // rbx
  tagDomLock *v4; // rcx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rcx
  tagDomLock *v13; // [rsp+28h] [rbp-40h] BYREF
  char v14; // [rsp+30h] [rbp-38h] BYREF
  char v15; // [rsp+50h] [rbp-18h]

  if ( !tagDomLock::IsLockedShared((PERESOURCE *)gDomainHookLock) )
    __int2c();
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>((__int64)&v13);
  if ( !v15 )
  {
    v2 = 0;
    v3 = &v14;
    do
    {
      v4 = (tagDomLock *)*((_QWORD *)v3 - 1);
      if ( v4 )
      {
        if ( *v3 )
          tagDomLock::LockExclusive(v4);
        else
          tagDomLock::LockShared(v4);
      }
      ++v2;
      v3 += 16;
    }
    while ( !v2 );
    v15 = 1;
  }
  if ( !gbInDestroyHandleTableObjects && !IS_USERCRIT_OWNED_SHAREDONLY() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3462);
  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3463);
  v5 = *((_DWORD *)a1 + 16);
  if ( (v5 & 0x1000) != 0 )
  {
    DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)&v13);
  }
  else
  {
    *((_DWORD *)a1 + 16) = v5 | 0x1000;
    _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    v6 = _HMPheFromObjectWorker(a1);
    *(_BYTE *)(v6 + 25) &= ~2u;
    v11 = PtiCurrentShared(v8, v7, v9, v10);
    v12 = *((_QWORD *)v11 + 131);
    if ( v12 )
      *((_QWORD *)a1 + 12) = v12;
    *((_QWORD *)v11 + 131) = a1;
    if ( v15 && v13 )
    {
      if ( v14 )
        tagDomLock::UnLockExclusive(v13);
      else
        tagDomLock::UnLockShared(v13);
    }
  }
}
