/*
 * XREFs of PsBoostThreadIoQoS @ 0x14031A52C
 * Callers:
 *     CcUnpinFileDataEx @ 0x14025D6F0 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x1402A8CA0 (ExDeleteResourceLite.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x140317C60 (KiAbThreadRemoveBoostsSlow.c)
 *     KiAbThreadUnboostIoPriority @ 0x140318684 (KiAbThreadUnboostIoPriority.c)
 *     ExReinitializeResourceLite @ 0x1403187C0 (ExReinitializeResourceLite.c)
 *     KiAbThreadBoostIoPriority @ 0x140319118 (KiAbThreadBoostIoPriority.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140319F90 (ExpSetResourceOwnerPointerEx.c)
 * Callees:
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14031AEEC (KeAbProcessEffectiveIoPriorityChange.c)
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
