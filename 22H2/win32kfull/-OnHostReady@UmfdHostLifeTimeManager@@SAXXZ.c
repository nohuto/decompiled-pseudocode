/*
 * XREFs of ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00BCE48
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0076FE0 (UmfdDispatchEscape.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013E750 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02E0F00 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 */

void __fastcall UmfdHostLifeTimeManager::OnHostReady(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  Gre::Base *v3; // rcx
  __int64 v4; // rbp
  __int64 i; // rdi
  struct PFF *j; // rcx
  void **v7; // rax
  void **v8; // rsi
  struct _KEVENT *v9; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  if ( !KeReadStateEvent(*(PRKEVENT *)(v1 + 23552)) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(SGDGetSessionState(v2) + 32) + 23560LL) || *(_QWORD *)(v1 + 23488) != 1LL )
    {
      v10 = *((_QWORD *)Gre::Base::Globals(v3) + 6);
      GreAcquireSemaphore(v10);
      v4 = *(_QWORD *)(v1 + 20272);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v4 + 24); i = (unsigned int)(i + 1) )
      {
        for ( j = *(struct PFF **)(v4 + 8 * i + 40); ; j = (struct PFF *)v8[1] )
        {
          v7 = (void **)SkipInvalidPff(j);
          v8 = v7;
          if ( !v7 )
            break;
          UmfdHostLifeTimeManager::TryResurrectPffApcRoutine(0LL, v7[10], v7);
        }
      }
      v9 = *(struct _KEVENT **)(v1 + 23552);
      *(_BYTE *)(v1 + 23560) = 1;
      KeSetEvent(v9, 0, 0);
      KeSetEvent(*(PRKEVENT *)(v1 + 23568), 0, 0);
      SEMOBJ::vUnlock((SEMOBJ *)&v10);
    }
    else
    {
      KeSetEvent(*(PRKEVENT *)(v1 + 23576), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(v1 + 23568), Executive, 0, 0, 0LL);
    }
  }
}
