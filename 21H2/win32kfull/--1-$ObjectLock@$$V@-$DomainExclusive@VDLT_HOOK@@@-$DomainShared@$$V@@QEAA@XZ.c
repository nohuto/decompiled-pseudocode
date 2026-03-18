/*
 * XREFs of ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C0159E2C
 * Callers:
 *     zzzSetWindowsHookEx @ 0x1C00249B8 (zzzSetWindowsHookEx.c)
 *     GetHmodTableIndex @ 0x1C0025248 (GetHmodTableIndex.c)
 *     NtUserSetWinEventHook @ 0x1C00E5B40 (NtUserSetWinEventHook.c)
 * Callees:
 *     <none>
 */

void __fastcall DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(__int64 a1)
{
  tagDomLock *v2; // rcx

  if ( *(_BYTE *)(a1 + 40) )
  {
    v2 = *(tagDomLock **)a1;
    if ( v2 )
    {
      if ( *(_BYTE *)(a1 + 8) )
        tagDomLock::UnLockExclusive(v2);
      else
        tagDomLock::UnLockShared(v2);
    }
    *(_BYTE *)(a1 + 40) = 0;
  }
}
