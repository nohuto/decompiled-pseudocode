/*
 * XREFs of PspGetSetContextSpecialApc @ 0x140420250
 * Callers:
 *     PspSetContextThreadInternal @ 0x1407EE340 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407EE524 (PspGetContextThreadInternal.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PspGetSetContextInternal @ 0x1406EA840 (PspGetSetContextInternal.c)
 */

LONG __fastcall PspGetSetContextSpecialApc(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  LONG result; // eax
  PRKEVENT Event[9]; // [rsp+C0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 120);
  result = PspGetSetContextInternal(a1, *a4, Event);
  if ( (_BYTE)result )
    _fxrstor((void *)(v4 + 256));
  if ( Event[0] )
    return KeSetEvent(Event[0], 1, 0);
  return result;
}
