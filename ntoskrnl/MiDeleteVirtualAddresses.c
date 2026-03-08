/*
 * XREFs of MiDeleteVirtualAddresses @ 0x140332E60
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1402A54F4 (MiDeleteFinalPageTables.c)
 *     MiDeleteRotateAndStopFaults @ 0x140630198 (MiDeleteRotateAndStopFaults.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140797184 (MiUnmapLockedPagesInUserSpace.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 * Callees:
 *     MiDeletePagablePteRange @ 0x1403244A0 (MiDeletePagablePteRange.c)
 */

signed __int64 __fastcall MiDeleteVirtualAddresses(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  _KPROCESS *Process; // rdi
  signed __int64 result; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  MiDeletePagablePteRange((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], 0x11u, a1, a2, a3, 0, a4 | 0x80, a5);
  result = a5[4];
  if ( result )
    return _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[13], -result);
  return result;
}
