/*
 * XREFs of PspGetSetContextSpecialApc @ 0x140407790
 * Callers:
 *     PspSetContextThreadInternal @ 0x140647C9C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140647E54 (PspGetContextThreadInternal.c)
 * Callees:
 *     KeSignalGate @ 0x1402C2B70 (KeSignalGate.c)
 *     PspGetSetContextInternal @ 0x1406498B0 (PspGetSetContextInternal.c)
 */

__int64 __fastcall PspGetSetContextSpecialApc(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // r8
  _DWORD *v7; // r9
  __int64 v8[9]; // [rsp+C0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 120);
  result = PspGetSetContextInternal(a1, *a4, v8);
  if ( (_BYTE)result )
    _fxrstor((void *)(v4 + 256));
  if ( v8[0] )
    return KeSignalGate(v8[0], 1LL, v6, v7);
  return result;
}
