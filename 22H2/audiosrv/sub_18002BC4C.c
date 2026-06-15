/*
 * XREFs of sub_18002BC4C @ 0x18002BC4C
 * Callers:
 *     sub_18002B894 @ 0x18002B894 (sub_18002B894.c)
 * Callees:
 *     sub_18002C238 @ 0x18002C238 (sub_18002C238.c)
 *     sub_180056C2C @ 0x180056C2C (sub_180056C2C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18002BC4C(__int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_1801474C8;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  *(_QWORD *)a1 = &off_180147430;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 16), 0, 0);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 72) = 17;
  *(_QWORD *)(a1 + 88) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 108) = 10;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 76) = 1061158912;
  *(_DWORD *)(a1 + 80) = 1048576000;
  *(_DWORD *)(a1 + 84) = 1074790400;
  sub_180056C2C();
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 128), 0, 0);
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  sub_18002C238(a1 + 192);
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_DWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
  *(_DWORD *)(a1 + 308) = 0;
  return a1;
}
