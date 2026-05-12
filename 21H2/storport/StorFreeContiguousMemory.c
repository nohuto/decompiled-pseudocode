/*
 * XREFs of StorFreeContiguousMemory @ 0x1C0072D54
 * Callers:
 *     StorPortReleaseAdditionalCrashDumpArea @ 0x1C0015628 (StorPortReleaseAdditionalCrashDumpArea.c)
 *     RaidDeleteAdapter @ 0x1C0030D48 (RaidDeleteAdapter.c)
 *     StorpUpdateUncachedExtensionAllocationRegion @ 0x1C003D708 (StorpUpdateUncachedExtensionAllocationRegion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall StorFreeContiguousMemory(_QWORD *a1, __int64 a2)
{
  char v3; // [rsp+20h] [rbp-18h]

  if ( *((_BYTE *)a1 + 8) && *((_DWORD *)a1 + 7) == 3 )
  {
    v3 = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char))(*(_QWORD *)(*a1 + 8LL) + 24LL))(
      *a1,
      *(unsigned int *)(a2 + 16),
      *(_QWORD *)(a2 + 8),
      *(_QWORD *)a2,
      v3);
  }
  else
  {
    MmFreeContiguousMemory(*(PVOID *)a2);
  }
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
}
