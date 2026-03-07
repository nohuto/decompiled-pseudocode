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
