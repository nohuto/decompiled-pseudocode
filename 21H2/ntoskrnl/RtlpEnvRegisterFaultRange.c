/*
 * XREFs of RtlpEnvRegisterFaultRange @ 0x1403721D8
 * Callers:
 *     RtlCSparseBitmapStart @ 0x140372070 (RtlCSparseBitmapStart.c)
 *     RtlCSparseBitmapCleanup @ 0x1403724D8 (RtlCSparseBitmapCleanup.c)
 * Callees:
 *     MmManageFaultRange @ 0x140372224 (MmManageFaultRange.c)
 */

__int64 __fastcall RtlpEnvRegisterFaultRange(ULONG_PTR a1)
{
  return (unsigned int)MmManageFaultRange(a1) == 0 ? 0xC000009A : 0;
}
