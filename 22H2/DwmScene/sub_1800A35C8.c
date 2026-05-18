/*
 * XREFs of sub_1800A35C8 @ 0x1800A35C8
 * Callers:
 *     sub_1800A1F0C @ 0x1800A1F0C (sub_1800A1F0C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A35C8(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = operator new(0x20uLL);
  *v2 = v2;
  v2[1] = v2;
  *a1 = v2;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v3 = operator new(0x38uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  a1[2] = v3;
  return a1;
}
