/*
 * XREFs of ??1?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@$$V@?$UnlockDomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C012DBA4
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C006C010 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxHkCallHook @ 0x1C006C7F0 (xxxHkCallHook.c)
 * Callees:
 *     <none>
 */

void __fastcall SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::~UnlockObjectLock<>(
        __int64 a1)
{
  __int64 v1; // rbx
  int v2; // edi
  tagDomLock *v3; // rcx

  v1 = a1;
  if ( *(_BYTE *)(a1 + 48) && *(_BYTE *)(a1 + 40) )
  {
    v2 = 0;
    do
    {
      v3 = *(tagDomLock **)v1;
      if ( *(_QWORD *)v1 )
      {
        if ( *(_BYTE *)(v1 + 8) )
          tagDomLock::LockExclusive(v3);
        else
          tagDomLock::LockShared(v3);
      }
      ++v2;
      v1 += 16LL;
    }
    while ( !v2 );
  }
}
