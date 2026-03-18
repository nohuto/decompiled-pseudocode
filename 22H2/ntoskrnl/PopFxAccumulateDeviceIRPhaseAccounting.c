/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x140588A90
 * Callers:
 *     PopFxEndDeviceIRPhaseAccounting @ 0x14058A2F4 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x14058C364 (PopFxUpdateDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_140C3CB50;
  qword_140C3CB70 += v1;
  if ( v1 > qword_140C3CB60 )
    qword_140C3CB60 = v1;
  if ( v1 < qword_140C3CB68 )
    qword_140C3CB68 = v1;
  ++dword_140C3CB78;
  qword_140C3CB50 = 0LL;
}
