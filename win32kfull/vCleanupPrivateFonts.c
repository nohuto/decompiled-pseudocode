/*
 * XREFs of vCleanupPrivateFonts @ 0x1C0118D80
 * Callers:
 *     <none>
 * Callees:
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1C00D0D34 (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 */

struct Gre::Base::SESSION_GLOBALS *__fastcall vCleanupPrivateFonts(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *result; // rax
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  __int64 v3; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  result = Gre::Base::Globals(a1);
  v2 = result;
  v3 = *((_QWORD *)result + 6);
  if ( v3 )
  {
    GreAcquireSemaphore(v3);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemPublicPFT", *((_QWORD *)v2 + 6), 14LL);
    v4[0] = *((_QWORD *)v2 + 796);
    if ( v4[0] )
      PUBLIC_PFTOBJ::bCleanupPFT((PFTOBJ *)v4, 0, 0LL);
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPublicPFT");
    return (struct Gre::Base::SESSION_GLOBALS *)GreReleaseSemaphoreInternal(*((_QWORD *)v2 + 6));
  }
  return result;
}
