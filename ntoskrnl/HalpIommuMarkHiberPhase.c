/*
 * XREFs of HalpIommuMarkHiberPhase @ 0x140A93000
 * Callers:
 *     HaliLocateHiberRanges @ 0x140A92C20 (HaliLocateHiberRanges.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PoSetHiberRange @ 0x14058C400 (PoSetHiberRange.c)
 */

void __fastcall HalpIommuMarkHiberPhase(PVOID MemoryMap)
{
  ULONG_PTR *i; // rbx
  void (__fastcall *v3)(PVOID, ULONG_PTR, ULONG_PTR *); // rax
  PVOID *j; // rbx
  PVOID *k; // rsi

  for ( i = (ULONG_PTR *)HalpIommuList; i != &HalpIommuList; i = (ULONG_PTR *)*i )
  {
    v3 = (void (__fastcall *)(PVOID, ULONG_PTR, ULONG_PTR *))i[40];
    if ( v3 )
      v3(MemoryMap, i[2], i + 50);
  }
  if ( MemoryMap )
  {
    PoSetHiberRange(MemoryMap, 2u, &IommupSystemContextListPushLock, 8uLL, 0x496C6148u);
    for ( j = (PVOID *)IommupSystemContextListHead; j != &IommupSystemContextListHead; j = (PVOID *)*j )
    {
      PoSetHiberRange(MemoryMap, 2u, j, 0x48uLL, 0x496C6148u);
      for ( k = (PVOID *)j[6]; k != j + 6; k = (PVOID *)*k )
        PoSetHiberRange(MemoryMap, 2u, k, 0x1070uLL, 0x496C6148u);
    }
  }
}
