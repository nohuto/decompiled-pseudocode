/*
 * XREFs of ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00B7924
 * Callers:
 *     GreEnableEUDC @ 0x1C00B77A8 (GreEnableEUDC.c)
 *     GreEudcLoadLinkW @ 0x1C02A10C8 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C02A13F0 (GreEudcUnloadLinkW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UmfdHostLifeTimeManager::GetSessionTextStackStatus(__int64 a1)
{
  __int64 v1; // rbx
  struct _KEVENT *v2; // rcx
  __int64 v3; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v2 = *(struct _KEVENT **)(v1 + 23552);
  if ( !v2 || !*(_QWORD *)(v1 + 23568) )
    return 3221225701LL;
  if ( KeReadStateEvent(v2) && *(_BYTE *)(*(_QWORD *)(SGDGetSessionState(v3) + 32) + 23560LL) )
    return KeReadStateEvent(*(PRKEVENT *)(v1 + 23568)) == 0 ? 0x103 : 0;
  return 259LL;
}
