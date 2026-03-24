/*
 * XREFs of Win32AllocateFromPagedLookasideList @ 0x1C002B240
 * Callers:
 *     AllocQueue @ 0x1C0006570 (AllocQueue.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C002B1C0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00413C0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32AllocateFromPagedLookasideList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  if ( qword_1C0257D50 && (int)qword_1C0257D50(a1, a2, a3) >= 0 && qword_1C0257D58 )
    return qword_1C0257D58(a1, v4, v5);
  else
    return 0LL;
}
