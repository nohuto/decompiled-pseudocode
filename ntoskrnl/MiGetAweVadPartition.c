/*
 * XREFs of MiGetAweVadPartition @ 0x1406483B4
 * Callers:
 *     MiQueryAddressState @ 0x14031B4F0 (MiQueryAddressState.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14020DC68 (MiLocateLockedVadEvent.c)
 *     MiGetAweInfoPartition @ 0x1406482AC (MiGetAweInfoPartition.c)
 */

__int64 __fastcall MiGetAweVadPartition(__int64 a1)
{
  unsigned __int64 LockedVadEvent; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x6200000) == 0x4200000 )
    return *(_QWORD *)(qword_140C67048 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
  LockedVadEvent = MiLocateLockedVadEvent(a1, 256);
  return MiGetAweInfoPartition(*(_QWORD *)(LockedVadEvent + 40));
}
