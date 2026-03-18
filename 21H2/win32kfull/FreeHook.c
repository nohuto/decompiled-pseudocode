/*
 * XREFs of FreeHook @ 0x1C0070000
 * Callers:
 *     zzzUnhookWindowsHookEx @ 0x1C002468C (zzzUnhookWindowsHookEx.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0053590 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     FreeThreadsWindowHooks @ 0x1C00E8380 (FreeThreadsWindowHooks.c)
 * Callees:
 *     RemoveHmodDependency @ 0x1C0025104 (RemoveHmodDependency.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C0070274 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_HOOK@@@-$DomainSharedRecursive@$$V@.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1C0070328 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C0070ECC (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0072B84 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C0072BA8 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1C0078120 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00EA5C0 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?DelayHookFree@@YAXPEAUtagHOOK@@@Z @ 0x1C01E0C64 (-DelayHookFree@@YAXPEAUtagHOOK@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall FreeHook(struct tagHOOK *a1)
{
  struct _HANDLEENTRY *v2; // rax
  int v3; // eax
  struct tagTHREADINFO *v4; // rcx
  int v5; // edx
  int v6; // esi
  _BYTE *v7; // rdi
  tagDomLock *v8; // rcx
  int v9; // ecx
  int v10; // esi
  _BYTE *v11; // rdi
  tagDomLock *v12; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-59h] BYREF
  tagDomLock *v14; // [rsp+28h] [rbp-51h] BYREF
  _BYTE v15[32]; // [rsp+30h] [rbp-49h] BYREF
  char v16; // [rsp+50h] [rbp-29h]
  tagDomLock *v17; // [rsp+58h] [rbp-21h] BYREF
  char v18; // [rsp+60h] [rbp-19h]
  char v19; // [rsp+80h] [rbp+7h]
  tagDomLock *v20; // [rsp+88h] [rbp+Fh] BYREF
  char v21; // [rsp+90h] [rbp+17h]
  char v22; // [rsp+B0h] [rbp+37h]

  DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v20);
  if ( tagDomLock::IsLockedShared(gDomainHookLock) && !tagDomLock::IsLockedExclusive(gDomainHookLock) )
  {
    DelayHookFree(a1);
  }
  else
  {
    v13[0] = 0;
    v2 = (struct _HANDLEENTRY *)_HMPheFromObjectWorker(a1);
    IdentifyPrimaryDestroyTarget::Identify((IdentifyPrimaryDestroyTarget *)v13, v2);
    DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v17);
    v3 = *((_DWORD *)a1 + 16);
    if ( (v3 & 0x80u) == 0 )
    {
      v4 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 9);
      v5 = *((_DWORD *)a1 + 12);
      *((_DWORD *)a1 + 16) = v3 | 0x80;
      if ( !v4 )
        v4 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
      CheckWHFBits(v4, v5);
    }
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(&v14);
    if ( !v16 )
    {
      v6 = 0;
      v7 = v15;
      do
      {
        v8 = (tagDomLock *)*((_QWORD *)v7 - 1);
        if ( v8 )
        {
          if ( *v7 )
            tagDomLock::LockExclusive(v8);
          else
            tagDomLock::LockShared(v8);
        }
        ++v6;
        v7 += 16;
      }
      while ( !v6 );
      v16 = 1;
    }
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      if ( v16 && v14 )
      {
        if ( v15[0] )
          tagDomLock::UnLockExclusive(v14);
        else
          tagDomLock::UnLockShared(v14);
      }
      UnlinkHook(a1);
      v9 = *((_DWORD *)a1 + 17);
      if ( v9 >= 0 )
        RemoveHmodDependency(v9);
      DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(&v14);
      if ( !v16 )
      {
        v10 = 0;
        v11 = v15;
        do
        {
          v12 = (tagDomLock *)*((_QWORD *)v11 - 1);
          if ( v12 )
          {
            if ( *v11 )
              tagDomLock::LockExclusive(v12);
            else
              tagDomLock::LockShared(v12);
          }
          ++v10;
          v11 += 16;
        }
        while ( !v10 );
        v16 = 1;
      }
      HMFreeObject(a1);
      if ( v16 && v14 )
      {
        if ( v15[0] )
          tagDomLock::UnLockExclusive(v14);
        else
          tagDomLock::UnLockShared(v14);
      }
    }
    else if ( v16 )
    {
      if ( v14 )
      {
        if ( v15[0] )
          tagDomLock::UnLockExclusive(v14);
        else
          tagDomLock::UnLockShared(v14);
      }
      v16 = 0;
    }
    if ( v19 && v17 )
    {
      if ( v18 )
        tagDomLock::UnLockExclusive(v17);
      else
        tagDomLock::UnLockShared(v17);
    }
    if ( v13[0] )
      gphePrimaryDestroyTarget = 0LL;
  }
  if ( v22 && v20 )
  {
    if ( v21 )
      tagDomLock::UnLockExclusive(v20);
    else
      tagDomLock::UnLockShared(v20);
  }
}
