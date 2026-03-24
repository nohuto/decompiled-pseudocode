/*
 * XREFs of RtlpEnvRegisterFaultRange @ 0x14039D3BC
 * Callers:
 *     RtlCSparseBitmapCleanup @ 0x14038C5A0 (RtlCSparseBitmapCleanup.c)
 *     RtlCSparseBitmapStart @ 0x14039D250 (RtlCSparseBitmapStart.c)
 * Callees:
 *     MmManageFaultRange @ 0x14039D408 (MmManageFaultRange.c)
 */

__int64 __fastcall RtlpEnvRegisterFaultRange(ULONG_PTR a1, ULONG_PTR a2)
{
  return (unsigned int)MmManageFaultRange(a1, a2) == 0 ? 0xC000009A : 0;
}
