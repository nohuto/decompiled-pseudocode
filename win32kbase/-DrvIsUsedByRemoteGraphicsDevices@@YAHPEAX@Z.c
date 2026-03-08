/*
 * XREFs of ?DrvIsUsedByRemoteGraphicsDevices@@YAHPEAX@Z @ 0x1C018E540
 * Callers:
 *     DrvNeedToSwitchAdapterForRemoteSession @ 0x1C019456C (DrvNeedToSwitchAdapterForRemoteSession.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvIsUsedByRemoteGraphicsDevices(void *a1)
{
  __int64 i; // r8

  for ( i = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1344LL); ; i = *(_QWORD *)(i + 128) )
  {
    if ( !i )
      return 0LL;
    if ( (*(_DWORD *)(i + 160) & 0x4000000) != 0 && *(void **)(i + 296) == a1 )
      break;
  }
  return 1LL;
}
