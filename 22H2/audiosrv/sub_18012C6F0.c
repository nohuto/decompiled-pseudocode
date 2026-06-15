/*
 * XREFs of sub_18012C6F0 @ 0x18012C6F0
 * Callers:
 *     sub_18012C454 @ 0x18012C454 (sub_18012C454.c)
 * Callees:
 *     sub_18012C620 @ 0x18012C620 (sub_18012C620.c)
 */

__int64 __fastcall sub_18012C6F0(__int64 a1)
{
  __int64 result; // rax

  sub_18012C620(a1);
  *(_QWORD *)a1 = &off_180156258;
  *(_QWORD *)(a1 + 8) = off_180156220;
  *(_QWORD *)(a1 + 16) = off_1801561D8;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 56), 0, 0);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_WORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_QWORD *)(a1 + 128) = 0LL;
  result = a1;
  *(_OWORD *)(a1 + 104) = xmmword_18015B730;
  return result;
}
