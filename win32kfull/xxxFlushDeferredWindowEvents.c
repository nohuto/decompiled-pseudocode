/*
 * XREFs of xxxFlushDeferredWindowEvents @ 0x1C00D8F74
 * Callers:
 *     zzzEndDeferWinEventNotify @ 0x1C002EF28 (zzzEndDeferWinEventNotify.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0068A60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C00394B4 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0063218 (xxxProcessNotifyWinEvent.c)
 *     xxxProcessTSFEvent @ 0x1C01C1198 (xxxProcessTSFEvent.c)
 */

HANDLE xxxFlushDeferredWindowEvents()
{
  HANDLE result; // rax
  int v1; // ebx
  __int64 i; // rcx
  int v3; // r8d
  bool v4; // zf

  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  result = PsGetCurrentThreadId();
  v1 = (int)result;
LABEL_4:
  for ( i = gPendingNotifiesList[0]; i != gPendingNotifiesList[0]; i = *(_QWORD *)i )
  {
    v3 = *(_DWORD *)(i + 56);
    if ( (v3 & 2) != 0 && *(_DWORD *)(i + 48) == v1 )
    {
      v4 = *(_DWORD *)(i + 24) == 0;
      *(_DWORD *)(i + 56) = v3 & 0xFFFFFFFD;
      if ( v4 )
        result = (HANDLE)xxxProcessNotifyWinEvent(i);
      else
        result = (HANDLE)xxxProcessTSFEvent((struct tagNOTIFY *)i);
      goto LABEL_4;
    }
  }
  return result;
}
