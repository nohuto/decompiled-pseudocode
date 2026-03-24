/*
 * XREFs of xxxFlushDeferredWindowEvents @ 0x1C0111AE0
 * Callers:
 *     zzzEndDeferWinEventNotify @ 0x1C006DEA4 (zzzEndDeferWinEventNotify.c)
 * Callees:
 *     xxxProcessTSFEvent @ 0x1C0006794 (xxxProcessTSFEvent.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0050EC0 (xxxProcessNotifyWinEvent.c)
 */

void xxxFlushDeferredWindowEvents()
{
  unsigned int CurrentThreadId; // ebx
  __int64 i; // rcx
  int v2; // r8d
  bool v3; // zf

  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
LABEL_2:
  for ( i = gPendingNotifiesList[0]; i != gPendingNotifiesList[0]; i = *(_QWORD *)i )
  {
    v2 = *(_DWORD *)(i + 56);
    if ( (v2 & 2) != 0 && *(_DWORD *)(i + 48) == CurrentThreadId )
    {
      v3 = *(_DWORD *)(i + 24) == 0;
      *(_DWORD *)(i + 56) = v2 & 0xFFFFFFFD;
      if ( v3 )
        xxxProcessNotifyWinEvent(i);
      else
        xxxProcessTSFEvent((struct tagNOTIFY *)i);
      goto LABEL_2;
    }
  }
}
