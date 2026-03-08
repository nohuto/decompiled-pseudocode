/*
 * XREFs of ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C009DA74
 * Callers:
 *     NtUserUnhookWindowsHookEx @ 0x1C009C2B0 (NtUserUnhookWindowsHookEx.c)
 *     zzzSetWindowsHookEx @ 0x1C009C8B4 (zzzSetWindowsHookEx.c)
 *     zzzUnhookWindowsHook @ 0x1C01BCE2C (zzzUnhookWindowsHook.c)
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
