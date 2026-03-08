/*
 * XREFs of DrvReleaseHDEV @ 0x1C026EBD8
 * Callers:
 *     xxxRemoteConsoleShadowStop @ 0x1C0206924 (xxxRemoteConsoleShadowStop.c)
 * Callees:
 *     <none>
 */

__int64 DrvReleaseHDEV()
{
  __int64 v0; // rbx
  __int64 result; // rax
  Gre::Base *v2; // rcx
  struct Gre::Base::SESSION_GLOBALS *v3; // rdi
  PDEV *i; // rcx

  v0 = gConsoleShadowhDev;
  result = WdLogSingleEntry1(5LL, gConsoleShadowhDev);
  if ( v0 )
  {
    v3 = Gre::Base::Globals(v2);
    GreAcquireSemaphore(*((_QWORD *)v3 + 1));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *((_QWORD *)v3 + 1), 16LL);
    for ( i = (PDEV *)*((_QWORD *)v3 + 760); i; i = *(PDEV **)i )
    {
      if ( i == (PDEV *)v0 )
      {
        PDEV::DecrementClientReferenceCount(i);
        break;
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt");
    return GreReleaseSemaphoreInternal(*((_QWORD *)v3 + 1));
  }
  return result;
}
