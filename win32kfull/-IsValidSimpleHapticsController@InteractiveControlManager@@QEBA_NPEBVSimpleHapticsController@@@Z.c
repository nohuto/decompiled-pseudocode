/*
 * XREFs of ?IsValidSimpleHapticsController@InteractiveControlManager@@QEBA_NPEBVSimpleHapticsController@@@Z @ 0x1C012F5D8
 * Callers:
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C024B170 (-HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall InteractiveControlManager::IsValidSimpleHapticsController(
        InteractiveControlManager *this,
        const struct SimpleHapticsController *a2)
{
  InteractiveControlManager *i; // rax

  for ( i = (InteractiveControlManager *)((char *)this + 40);
        i != (InteractiveControlManager *)((char *)this + 80);
        i = (InteractiveControlManager *)((char *)i + 8) )
  {
    if ( *(_QWORD *)i && *(const struct SimpleHapticsController **)(*(_QWORD *)i + 384LL) == a2 )
      return 1;
  }
  return 0;
}
