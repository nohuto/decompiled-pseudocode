/*
 * XREFs of sub_18010E960 @ 0x18010E960
 * Callers:
 *     ??_G__ExceptionPtr@@QEAAPEAXI@Z @ 0x18010EA64 (--_G__ExceptionPtr@@QEAAPEAXI@Z.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     sub_180069060 @ 0x180069060 (sub_180069060.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180069C50 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_18010E960(__int64 a1))()
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 (__fastcall **result)(); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  *(_QWORD *)a1 = off_180147978;
  *(_QWORD *)(a1 + 8) = off_1801478E8;
  *(_QWORD *)(a1 + 16) = off_1801478C0;
  *(_QWORD *)(a1 + 24) = off_180147898;
  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 80));
  sub_180069060((__int64 *)(a1 + 56));
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  sub_18000F708((__int64 *)(a1 + 136));
  `eh vector destructor iterator'((char *)(a1 + 120), 8LL, 2LL, (void (*)(void *))sub_18000FFC0);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
  sub_180069060((__int64 *)(a1 + 56));
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  result = &off_180147338;
  *(_QWORD *)(a1 + 24) = &off_180147338;
  return result;
}
