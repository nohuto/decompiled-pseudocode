/*
 * XREFs of ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C00AC3EC
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     IsCleanupW32ThreadLocksSupported @ 0x1C00AC4DC (IsCleanupW32ThreadLocksSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void EnsureRequiredApiSetExtensions(void)
{
  if ( !qword_1C029BD08 || (int)qword_1C029BD08() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PushW32ThreadLock", 0LL, 0LL);
  if ( !qword_1C029BD18 || (int)qword_1C029BD18() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PopW32ThreadLock", 0LL, 0LL);
  if ( !qword_1C029BE10 || (int)qword_1C029BE10() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PopAndFreeW32ThreadLock", 0LL, 0LL);
  if ( !qword_1C029BE20 || (int)qword_1C029BE20() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PopAndFreeAlwaysW32ThreadLock", 0LL, 0LL);
  if ( (int)IsCleanupW32ThreadLocksSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"CleanupW32ThreadLocks", 0LL, 0LL);
  if ( !qword_1C029BF50 || (int)qword_1C029BF50() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"xxxUnlockMenuState", 0LL, 0LL);
  if ( !qword_1C029BD48 || (int)qword_1C029BD48() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"HasHidTable", 0LL, 0LL);
  if ( !qword_1C029BE30 || (int)qword_1C029BE30() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"LockQCursor", 0LL, 0LL);
}
