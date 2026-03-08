/*
 * XREFs of ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C012D328
 * Callers:
 *     FreeHook @ 0x1C0039160 (FreeHook.c)
 *     NtUserSetWinEventHook @ 0x1C00397B0 (NtUserSetWinEventHook.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     xxxLoadHmodIndex @ 0x1C006CD10 (xxxLoadHmodIndex.c)
 *     zzzUnhookWindowsHookEx @ 0x1C009C50C (zzzUnhookWindowsHookEx.c)
 *     zzzSetWindowsHookEx @ 0x1C009C8B4 (zzzSetWindowsHookEx.c)
 *     GetHmodTableIndex @ 0x1C009D950 (GetHmodTableIndex.c)
 *     ?DelayHookFree@@YAXPEAUtagHOOK@@@Z @ 0x1C01BC5D0 (-DelayHookFree@@YAXPEAUtagHOOK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(__int64 a1)
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
