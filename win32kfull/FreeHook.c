/*
 * XREFs of FreeHook @ 0x1C0039160
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C006C010 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     zzzUnhookWindowsHookEx @ 0x1C009C50C (zzzUnhookWindowsHookEx.c)
 *     FreeThreadsWindowHooks @ 0x1C00C92A0 (FreeThreadsWindowHooks.c)
 * Callees:
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C001D504 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C0039408 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_HOOK@@@-$DomainSharedRecursive@$$V@.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C00394B4 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1C00394D8 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C003AA08 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     RemoveHmodDependency @ 0x1C009D71C (RemoveHmodDependency.c)
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1C00C9380 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C00E77B4 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C012D328 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?DelayHookFree@@YAXPEAUtagHOOK@@@Z @ 0x1C01BC5D0 (-DelayHookFree@@YAXPEAUtagHOOK@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall FreeHook(struct tagHOOK *a1)
{
  int v2; // eax
  PRKPROCESS **v3; // rcx
  unsigned int v4; // edx
  int v5; // esi
  _BYTE *v6; // rdi
  tagDomLock *v7; // rcx
  int v8; // esi
  _BYTE *v9; // rdi
  tagDomLock *v10; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-59h] BYREF
  tagDomLock *v12; // [rsp+28h] [rbp-51h] BYREF
  _BYTE v13[32]; // [rsp+30h] [rbp-49h] BYREF
  char v14; // [rsp+50h] [rbp-29h]
  tagDomLock *v15; // [rsp+58h] [rbp-21h] BYREF
  char v16; // [rsp+60h] [rbp-19h]
  char v17; // [rsp+80h] [rbp+7h]
  tagDomLock *v18; // [rsp+88h] [rbp+Fh] BYREF
  char v19; // [rsp+90h] [rbp+17h]
  char v20; // [rsp+B0h] [rbp+37h]

  DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v18);
  if ( tagDomLock::IsLockedShared(gDomainHookLock) && !tagDomLock::IsLockedExclusive(gDomainHookLock) )
  {
    DelayHookFree(a1);
LABEL_36:
    if ( v20 && v18 )
    {
      if ( v19 )
        tagDomLock::UnLockExclusive(v18);
      else
        tagDomLock::UnLockShared(v18);
    }
    return;
  }
  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)v11, a1);
  DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v15);
  v2 = *((_DWORD *)a1 + 16);
  if ( (v2 & 0x80u) == 0 )
  {
    v3 = (PRKPROCESS **)*((_QWORD *)a1 + 9);
    v4 = *((_DWORD *)a1 + 12);
    *((_DWORD *)a1 + 16) = v2 | 0x80;
    if ( !v3 )
      v3 = (PRKPROCESS **)*((_QWORD *)a1 + 2);
    CheckWHFBits(v3, v4);
  }
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(&v12);
  if ( !v14 )
  {
    v5 = 0;
    v6 = v13;
    do
    {
      v7 = (tagDomLock *)*((_QWORD *)v6 - 1);
      if ( v7 )
      {
        if ( *v6 )
          tagDomLock::LockExclusive(v7);
        else
          tagDomLock::LockShared(v7);
      }
      ++v5;
      v6 += 16;
    }
    while ( !v5 );
    v14 = 1;
  }
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    if ( v14 && v12 )
    {
      if ( v13[0] )
        tagDomLock::UnLockExclusive(v12);
      else
        tagDomLock::UnLockShared(v12);
    }
    UnlinkHook(a1);
    if ( *((int *)a1 + 17) >= 0 )
      RemoveHmodDependency();
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(&v12);
    if ( !v14 )
    {
      v8 = 0;
      v9 = v13;
      do
      {
        v10 = (tagDomLock *)*((_QWORD *)v9 - 1);
        if ( v10 )
        {
          if ( *v9 )
            tagDomLock::LockExclusive(v10);
          else
            tagDomLock::LockShared(v10);
        }
        ++v8;
        v9 += 16;
      }
      while ( !v8 );
      v14 = 1;
    }
    HMFreeObject(a1);
    if ( v14 && v12 )
    {
      if ( v13[0] )
        tagDomLock::UnLockExclusive(v12);
      else
        tagDomLock::UnLockShared(v12);
    }
    if ( v17 && v15 )
    {
      if ( v16 )
        tagDomLock::UnLockExclusive(v15);
      else
        tagDomLock::UnLockShared(v15);
    }
    if ( v11[0] )
      gphePrimaryDestroyTarget = 0LL;
    goto LABEL_36;
  }
  if ( v14 )
  {
    if ( v12 )
    {
      if ( v13[0] )
        tagDomLock::UnLockExclusive(v12);
      else
        tagDomLock::UnLockShared(v12);
    }
    v14 = 0;
  }
  if ( v17 )
  {
    if ( v15 )
    {
      if ( v16 )
        tagDomLock::UnLockExclusive(v15);
      else
        tagDomLock::UnLockShared(v15);
    }
    v17 = 0;
  }
  if ( v11[0] )
    gphePrimaryDestroyTarget = 0LL;
  DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(&v18);
}
