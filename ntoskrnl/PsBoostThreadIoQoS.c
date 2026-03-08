/*
 * XREFs of PsBoostThreadIoQoS @ 0x14029176C
 * Callers:
 *     ExpSetResourceOwnerPointerEx @ 0x1402911D0 (ExpSetResourceOwnerPointerEx.c)
 *     ExReinitializeResourceLite @ 0x1402CB110 (ExReinitializeResourceLite.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x1402D99E0 (KiAbThreadRemoveBoostsSlow.c)
 *     KiAbThreadUnboostIoPriority @ 0x1402D9F48 (KiAbThreadUnboostIoPriority.c)
 *     ExDeleteResourceLite @ 0x140336580 (ExDeleteResourceLite.c)
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 *     KiAbThreadBoostIoPriority @ 0x140358384 (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140356D7C (KeAbProcessEffectiveIoPriorityChange.c)
 */

__int64 __fastcall PsBoostThreadIoQoS(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1444));
  }
  else
  {
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 1444));
    if ( (_DWORD)result == 1 )
      return KeAbProcessEffectiveIoPriorityChange(a1, 0LL);
  }
  return result;
}
