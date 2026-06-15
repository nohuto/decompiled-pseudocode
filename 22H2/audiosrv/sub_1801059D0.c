/*
 * XREFs of sub_1801059D0 @ 0x1801059D0
 * Callers:
 *     sub_180105D20 @ 0x180105D20 (sub_180105D20.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_18005262C @ 0x18005262C (sub_18005262C.c)
 *     sub_180108150 @ 0x180108150 (sub_180108150.c)
 *     sub_18010826C @ 0x18010826C (sub_18010826C.c)
 *     sub_180108310 @ 0x180108310 (sub_180108310.c)
 *     sub_180108EE0 @ 0x180108EE0 (sub_180108EE0.c)
 *     sub_180109560 @ 0x180109560 (sub_180109560.c)
 *     sub_180109B18 @ 0x180109B18 (sub_180109B18.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_1801059D0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  sub_180109B18(a1 + 584);
  v2 = *(_QWORD *)(a1 + 576);
  if ( v2 )
    sub_180108150(v2);
  sub_180108EE0(a1 + 344);
  sub_18005262C((void **)(a1 + 568));
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 488));
  sub_180109560(a1 + 440);
  v3 = *(_QWORD *)(a1 + 440);
  *(_QWORD *)(a1 + 440) = 0LL;
  sub_1800472E0(v3, 0x10uLL);
  v4 = *(_QWORD *)(a1 + 312);
  if ( v4 )
  {
    sub_1800472E0(v4, (*(_QWORD *)(a1 + 328) - v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 312) = 0LL;
    *(_QWORD *)(a1 + 320) = 0LL;
    *(_QWORD *)(a1 + 328) = 0LL;
  }
  sub_18010826C(a1 + 232);
  sub_180108310(a1 + 152);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 104));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  *(_DWORD *)(a1 + 20) = -1073741823;
}
