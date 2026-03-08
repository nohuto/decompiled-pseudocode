/*
 * XREFs of FreeThreadsWinEvents @ 0x1C00C8670
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveNotify@@YAXPEAUtagNOTIFY@@@Z @ 0x1C000F7B0 (-RemoveNotify@@YAXPEAUtagNOTIFY@@@Z.c)
 *     DestroyEventHook @ 0x1C0035F80 (DestroyEventHook.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C00394B4 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall FreeThreadsWinEvents(__int64 a1)
{
  unsigned int DLT; // eax
  char *v3; // rbx
  int v4; // edi
  tagDomLock *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v9; // [rsp+28h] [rbp-40h] BYREF
  __int64 v10; // [rsp+30h] [rbp-38h]
  char v11; // [rsp+38h] [rbp-30h]
  __int64 v12; // [rsp+40h] [rbp-28h]
  char v13; // [rsp+48h] [rbp-20h]

  PsGetCurrentThreadId();
  DLT = DLT_WINEVENT::getDLT();
  v3 = &v9;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v12 = 0LL;
  v4 = 0;
  v13 = 0;
  v9 = 1;
  v10 = gDomainDummyLock;
  v11 = 0;
  do
  {
    v5 = (tagDomLock *)*((_QWORD *)v3 - 1);
    if ( v5 )
    {
      if ( *v3 )
        tagDomLock::LockExclusive(v5);
      else
        tagDomLock::LockShared(v5);
    }
    ++v4;
    v3 += 16;
  }
  while ( !v4 );
  v13 = 1;
  v6 = gpWinEventHooks;
  if ( gpWinEventHooks )
  {
    do
    {
      v7 = *(_QWORD *)(v6 + 24);
      if ( *(_QWORD *)(v6 + 16) == a1 )
        DestroyEventHook((void **)v6);
      v6 = v7;
    }
    while ( v7 );
  }
  if ( v13 && DomainLockRef )
  {
    if ( v9 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
}
