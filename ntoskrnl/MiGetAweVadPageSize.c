/*
 * XREFs of MiGetAweVadPageSize @ 0x140A3F0EC
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     MiVadPageTableChargeLevel @ 0x140321F50 (MiVadPageTableChargeLevel.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiLocateVadEvent @ 0x14020DC50 (MiLocateVadEvent.c)
 *     MiGetAwePageSize @ 0x14064836C (MiGetAwePageSize.c)
 *     MiGetAweViewPageSize @ 0x14064840C (MiGetAweViewPageSize.c)
 */

__int64 __fastcall MiGetAweVadPageSize(__int64 a1)
{
  __int64 AweViewPageSize; // r8
  __int64 VadEvent; // rax
  __int64 v3; // r9
  __int64 v4; // rcx

  AweViewPageSize = 1LL;
  if ( (*(_DWORD *)(a1 + 48) & 0x6200000) != 0x4200000 )
  {
    VadEvent = MiLocateVadEvent();
    AweViewPageSize = MiGetAweViewPageSize(VadEvent + 8);
    if ( !AweViewPageSize )
    {
      v4 = *(_QWORD *)(v3 + 40);
      if ( (*(_DWORD *)(v4 + 8) & 1) == 0 )
        return MiGetAwePageSize(v4);
    }
  }
  return AweViewPageSize;
}
