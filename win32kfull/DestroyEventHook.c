/*
 * XREFs of DestroyEventHook @ 0x1C0035F80
 * Callers:
 *     FreeThreadsWinEvents @ 0x1C00C8670 (FreeThreadsWinEvents.c)
 *     _UnhookWinEvent @ 0x1C00D24FC (_UnhookWinEvent.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C00394B4 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1C00394D8 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C003AA08 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     RemoveHmodDependency @ 0x1C009D71C (RemoveHmodDependency.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall DestroyEventHook(void **a1)
{
  int v2; // r14d
  int v3; // esi
  _BYTE *v4; // rdi
  tagDomLock *v5; // rcx
  void **i; // rcx
  void **v7; // rax
  __int64 v8; // rdx
  _DWORD *v9; // r8
  int v10; // r9d
  unsigned int v11; // r10d
  int v12; // esi
  _BYTE *v13; // rdi
  tagDomLock *v14; // rcx
  _BYTE v15[8]; // [rsp+20h] [rbp-40h] BYREF
  tagDomLock *v16; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v17[32]; // [rsp+30h] [rbp-30h] BYREF
  char v18; // [rsp+50h] [rbp-10h]

  v2 = 0;
  if ( !tagDomLock::IsLockedExclusive(gDomainWinEventLock) )
    __int2c();
  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)v15, a1);
  *((_DWORD *)a1 + 10) |= 1u;
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(&v16);
  if ( !v18 )
  {
    v3 = 0;
    v4 = v17;
    do
    {
      v5 = (tagDomLock *)*((_QWORD *)v4 - 1);
      if ( v5 )
      {
        if ( *v4 )
          tagDomLock::LockExclusive(v5);
        else
          tagDomLock::LockShared(v5);
      }
      ++v3;
      v4 += 16;
    }
    while ( !v3 );
    v18 = 1;
  }
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    if ( v18 )
    {
      if ( v16 )
      {
        if ( v17[0] )
          tagDomLock::UnLockExclusive(v16);
        else
          tagDomLock::UnLockShared(v16);
      }
      v18 = 0;
    }
    for ( i = (void **)gpWinEventHooks; ; i = v7 + 3 )
    {
      v7 = (void **)*i;
      if ( !*i )
        break;
      if ( v7 == a1 )
      {
        *i = a1[3];
        break;
      }
    }
    v8 = gpWinEventHooks;
    while ( v8 )
    {
      v9 = &unk_1C035D184;
      v10 = 0;
      v11 = 0;
      do
      {
        if ( *(v9 - 1) > *(_DWORD *)(v8 + 36) )
          break;
        if ( (unsigned int)(*((_DWORD *)&unk_1C035D180 + 2 * ++v11) - 1) >= *(_DWORD *)(v8 + 32) )
          v10 |= *v9;
        v9 += 2;
      }
      while ( v11 < 0xF );
      v8 = *(_QWORD *)(v8 + 24);
      v2 |= v10;
    }
    *(_DWORD *)(gpsi + 1892LL) = v2;
    if ( *((int *)a1 + 18) >= 0 )
      RemoveHmodDependency();
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(&v16);
    if ( !v18 )
    {
      v12 = 0;
      v13 = v17;
      do
      {
        v14 = (tagDomLock *)*((_QWORD *)v13 - 1);
        if ( v14 )
        {
          if ( *v13 )
            tagDomLock::LockExclusive(v14);
          else
            tagDomLock::LockShared(v14);
        }
        ++v12;
        v13 += 16;
      }
      while ( !v12 );
      v18 = 1;
    }
    HMFreeObject(a1);
  }
  if ( v18 && v16 )
  {
    if ( v17[0] )
      tagDomLock::UnLockExclusive(v16);
    else
      tagDomLock::UnLockShared(v16);
  }
  if ( v15[0] )
    gphePrimaryDestroyTarget = 0LL;
}
