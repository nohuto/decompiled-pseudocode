/*
 * XREFs of sub_180032B20 @ 0x180032B20
 * Callers:
 *     sub_18003264C @ 0x18003264C (sub_18003264C.c)
 *     sub_18003E1FC @ 0x18003E1FC (sub_18003E1FC.c)
 *     sub_1800911C8 @ 0x1800911C8 (sub_1800911C8.c)
 *     sub_18009919C @ 0x18009919C (sub_18009919C.c)
 *     sub_18009B040 @ 0x18009B040 (sub_18009B040.c)
 *     sub_1800A6FD0 @ 0x1800A6FD0 (sub_1800A6FD0.c)
 *     sub_1800C6E24 @ 0x1800C6E24 (sub_1800C6E24.c)
 *     sub_1800C85E4 @ 0x1800C85E4 (sub_1800C85E4.c)
 *     sub_1800C9D7C @ 0x1800C9D7C (sub_1800C9D7C.c)
 *     sub_1800CA81C @ 0x1800CA81C (sub_1800CA81C.c)
 *     sub_1800CC134 @ 0x1800CC134 (sub_1800CC134.c)
 *     sub_1800EE870 @ 0x1800EE870 (sub_1800EE870.c)
 *     sub_1800F0F30 @ 0x1800F0F30 (sub_1800F0F30.c)
 * Callees:
 *     sub_180032330 @ 0x180032330 (sub_180032330.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180032B20(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _DWORD **a5)
{
  __int64 v8; // rdi
  _DWORD *v9; // rax

  v8 = *a1;
  v9 = operator new(0x38uLL);
  v9[8] = **a5;
  *((_QWORD *)v9 + 5) = 0LL;
  *((_QWORD *)v9 + 6) = 0LL;
  *(_QWORD *)v9 = v8;
  *((_QWORD *)v9 + 1) = v8;
  *((_QWORD *)v9 + 2) = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_180032330(a1, a2, a3, v9 + 8, v9);
  return a2;
}
