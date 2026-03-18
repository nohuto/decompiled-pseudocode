/*
 * XREFs of DestroyEventHook @ 0x1C00E5FC0
 * Callers:
 *     FreeThreadsWinEvents @ 0x1C00612C0 (FreeThreadsWinEvents.c)
 *     _UnhookWinEvent @ 0x1C00E5A2C (_UnhookWinEvent.c)
 * Callees:
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C002338C (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     RemoveHmodDependency @ 0x1C0025104 (RemoveHmodDependency.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1C0070328 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0072B84 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     CategoryMaskFromEventRange @ 0x1C00E61DC (CategoryMaskFromEventRange.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall DestroyEventHook(char *a1)
{
  int v2; // r14d
  int v3; // esi
  char *v4; // rbx
  tagDomLock *v5; // rcx
  void **i; // rcx
  char *v7; // rax
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // r8
  int v11; // ecx
  int v12; // esi
  char *v13; // rbx
  tagDomLock *v14; // rcx
  tagDomLock *v15; // rcx
  bool v16; // zf
  char v17[8]; // [rsp+28h] [rbp-29h] BYREF
  tagDomLock *v18; // [rsp+30h] [rbp-21h] BYREF
  char v19; // [rsp+38h] [rbp-19h] BYREF
  char v20; // [rsp+58h] [rbp+7h]
  tagDomLock *v21; // [rsp+60h] [rbp+Fh] BYREF
  char v22; // [rsp+68h] [rbp+17h] BYREF
  char v23; // [rsp+88h] [rbp+37h]

  v2 = 0;
  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)v17, a1);
  *((_DWORD *)a1 + 10) |= 1u;
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>((__int64)&v18);
  if ( !v20 )
  {
    v3 = 0;
    v4 = &v19;
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
    v20 = 1;
  }
  if ( !(unsigned int)HMMarkObjectDestroy(a1) )
  {
    if ( !v20 )
      goto LABEL_39;
    v15 = v18;
    if ( !v18 )
      goto LABEL_39;
    v16 = v19 == 0;
    goto LABEL_37;
  }
  if ( v20 )
  {
    if ( v18 )
    {
      if ( v19 )
        tagDomLock::UnLockExclusive(v18);
      else
        tagDomLock::UnLockShared(v18);
    }
    v20 = 0;
  }
  for ( i = (void **)gpWinEventHooks; ; i = (void **)(v7 + 24) )
  {
    v7 = (char *)*i;
    if ( !*i )
      break;
    if ( v7 == a1 )
    {
      *i = (void *)*((_QWORD *)a1 + 3);
      break;
    }
  }
  v8 = gpWinEventHooks;
  while ( v8 )
  {
    v9 = CategoryMaskFromEventRange(*(unsigned int *)(v8 + 32), *(unsigned int *)(v8 + 36), v8);
    v8 = *(_QWORD *)(v10 + 24);
    v2 |= v9;
  }
  *(_DWORD *)(gpsi + 1892LL) = v2;
  v11 = *((_DWORD *)a1 + 18);
  if ( v11 >= 0 )
    RemoveHmodDependency(v11);
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>((__int64)&v21);
  if ( !v23 )
  {
    v12 = 0;
    v13 = &v22;
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
    v23 = 1;
  }
  HMFreeObject(a1);
  if ( v23 )
  {
    v15 = v21;
    if ( v21 )
    {
      v16 = v22 == 0;
LABEL_37:
      if ( v16 )
        tagDomLock::UnLockShared(v15);
      else
        tagDomLock::UnLockExclusive(v15);
    }
  }
LABEL_39:
  if ( v17[0] )
    gphePrimaryDestroyTarget = 0LL;
}
