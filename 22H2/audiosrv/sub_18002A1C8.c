/*
 * XREFs of sub_18002A1C8 @ 0x18002A1C8
 * Callers:
 *     sub_180029E70 @ 0x180029E70 (sub_180029E70.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18006A1BC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002A1C8(__int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_1801470B0;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  *(_QWORD *)a1 = &off_180147000;
  *(_QWORD *)(a1 + 16) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 24), 0, 0);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  `eh vector constructor iterator'((void *)(a1 + 88), 0x18uLL, 4uLL, unknown_libname_375, sub_1800B7C20);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 184), 0, 0);
  return a1;
}
