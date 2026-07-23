/*
 * XREFs of PspGetSetContextSpecialApc @ 0x140407970
 * Callers:
 *     PspSetContextThreadInternal @ 0x14063CA8C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14063CC44 (PspGetContextThreadInternal.c)
 * Callees:
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     PspGetSetContextInternal @ 0x14063E6D0 (PspGetSetContextInternal.c)
 */

__int64 __fastcall PspGetSetContextSpecialApc(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6[9]; // [rsp+C0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 120);
  result = PspGetSetContextInternal(a1, *a4, v6);
  if ( (_BYTE)result )
    _fxrstor((void *)(v4 + 256));
  if ( v6[0] )
    return KeSignalGate(v6[0], 1);
  return result;
}
