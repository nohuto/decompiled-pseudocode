/*
 * XREFs of PsBoostThreadIoQoS @ 0x14021ACBC
 * Callers:
 *     KiAbThreadBoostIoPriority @ 0x140229BD8 (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140229B04 (KeAbProcessEffectiveIoPriorityChange.c)
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
