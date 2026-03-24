/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x140569228
 * Callers:
 *     PopFxEndDeviceIRPhaseAccounting @ 0x14056A9A0 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x14056D4D8 (PopFxUpdateDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_140C23770;
  qword_140C23790 += v1;
  if ( v1 > qword_140C23780 )
    qword_140C23780 = v1;
  if ( v1 < qword_140C23788 )
    qword_140C23788 = v1;
  ++dword_140C23798;
  qword_140C23770 = 0LL;
}
