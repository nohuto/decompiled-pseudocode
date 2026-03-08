/*
 * XREFs of ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@$$V@?$UnlockDomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C012DB14
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C006C010 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxHkCallHook @ 0x1C006C7F0 (xxxHkCallHook.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C00E3814 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 */

__int64 __fastcall SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::UnlockObjectLock<>(
        __int64 a1)
{
  unsigned int DLT; // eax
  __int64 v3; // rcx
  tagDomLock *v4; // rcx

  DLT = DLT_HOOK::getDLT();
  *(_QWORD *)a1 = GetDomainLockRef(DLT);
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = gDomainDummyLock;
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY(v3) )
  {
    *(_BYTE *)(a1 + 48) = 1;
    v4 = *(tagDomLock **)a1;
    if ( *(_QWORD *)a1 )
    {
      if ( *(_BYTE *)(a1 + 8) )
        tagDomLock::UnLockExclusive(v4);
      else
        tagDomLock::UnLockShared(v4);
    }
    *(_BYTE *)(a1 + 40) = 1;
  }
  return a1;
}
