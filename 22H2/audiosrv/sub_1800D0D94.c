/*
 * XREFs of sub_1800D0D94 @ 0x1800D0D94
 * Callers:
 *     sub_1800D0E70 @ 0x1800D0E70 (sub_1800D0E70.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180069C50 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     sub_1800D0A6C @ 0x1800D0A6C (sub_1800D0A6C.c)
 *     sub_1800D12E4 @ 0x1800D12E4 (sub_1800D12E4.c)
 */

void __fastcall sub_1800D0D94(__int64 a1)
{
  __int64 *v2; // rbx

  *(_QWORD *)a1 = &off_180149008;
  v2 = (__int64 *)(a1 + 968);
  sub_1800D0A6C(a1 + 968, a1 + 968, *(_QWORD *)(*(_QWORD *)(a1 + 968) + 8LL));
  sub_1800472E0(*v2, 0x30uLL);
  sub_1800D12E4((void *)(a1 + 920));
  `eh vector destructor iterator'((char *)(a1 + 56), 48LL, 18LL, (void (*)(void *))sub_1800D0B50);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
