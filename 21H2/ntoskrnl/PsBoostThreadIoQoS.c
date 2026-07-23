/*
 * XREFs of PsBoostThreadIoQoS @ 0x1402045F8
 * Callers:
 *     ExpSetResourceOwnerPointerEx @ 0x140203E10 (ExpSetResourceOwnerPointerEx.c)
 *     ExpBoostIoAfterAcquire @ 0x140204490 (ExpBoostIoAfterAcquire.c)
 *     KiAbThreadBoostIoPriority @ 0x140205AD4 (KiAbThreadBoostIoPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x14024F460 (KiAbThreadUnboostIoPriority.c)
 *     ExpFreeOwnerEntry @ 0x1402FFD40 (ExpFreeOwnerEntry.c)
 *     ExDeleteResourceLite @ 0x1402FFDF0 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x140302670 (ExReinitializeResourceLite.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ExpWorkerInitialization @ 0x140A6BE74 (ExpWorkerInitialization.c)
 * Callees:
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14020462C (KeAbProcessEffectiveIoPriorityChange.c)
 */

__int64 __fastcall PsBoostThreadIoQoS(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1364));
  }
  else
  {
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 1364));
    if ( (_DWORD)result == 1 )
      return KeAbProcessEffectiveIoPriorityChange();
  }
  return result;
}
