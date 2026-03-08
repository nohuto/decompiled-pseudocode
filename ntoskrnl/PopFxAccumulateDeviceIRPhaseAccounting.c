/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x140586560
 * Callers:
 *     PopFxEndDeviceIRPhaseAccounting @ 0x140587DC4 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x140589E34 (PopFxUpdateDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_140C3C790;
  qword_140C3C7B0 += v1;
  if ( v1 > qword_140C3C7A0 )
    qword_140C3C7A0 = v1;
  if ( v1 < qword_140C3C7A8 )
    qword_140C3C7A8 = v1;
  ++dword_140C3C7B8;
  qword_140C3C790 = 0LL;
}
