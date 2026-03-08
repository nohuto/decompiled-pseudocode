/*
 * XREFs of ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00F49B8
 * Callers:
 *     UmfdDispatchEscape @ 0x1C00BB270 (UmfdDispatchEscape.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02E2C90 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 */

void __fastcall UmfdHostLifeTimeManager::OnHostReady(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  Gre::Base *v3; // rcx
  __int64 v4; // rbp
  __int64 i; // rsi
  __int64 j; // rdi
  struct _KEVENT *v7; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  if ( !KeReadStateEvent(*(PRKEVENT *)(v1 + 23552)) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(SGDGetSessionState(v2) + 32) + 23560LL) || *(_QWORD *)(v1 + 23488) != 1LL )
    {
      v8 = *((_QWORD *)Gre::Base::Globals(v3) + 6);
      GreAcquireSemaphore(v8);
      v4 = *(_QWORD *)(v1 + 20272);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v4 + 24); i = (unsigned int)(i + 1) )
      {
        for ( j = *(_QWORD *)(v4 + 8 * i + 40); j; j = *(_QWORD *)(j + 8) )
          UmfdHostLifeTimeManager::TryResurrectPffApcRoutine(0LL, *(void **)(j + 80), (void *)j);
      }
      v7 = *(struct _KEVENT **)(v1 + 23552);
      *(_BYTE *)(v1 + 23560) = 1;
      KeSetEvent(v7, 0, 0);
      KeSetEvent(*(PRKEVENT *)(v1 + 23568), 0, 0);
      SEMOBJ::vUnlock((SEMOBJ *)&v8);
    }
    else
    {
      KeSetEvent(*(PRKEVENT *)(v1 + 23576), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(v1 + 23568), Executive, 0, 0, 0LL);
    }
  }
}
