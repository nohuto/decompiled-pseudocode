/*
 * XREFs of sub_18012BE44 @ 0x18012BE44
 * Callers:
 *     sub_18012BCD4 @ 0x18012BCD4 (sub_18012BCD4.c)
 * Callees:
 *     sub_18012BD7C @ 0x18012BD7C (sub_18012BD7C.c)
 */

__int64 __fastcall sub_18012BE44(__int64 a1)
{
  __int64 result; // rax

  sub_18012BD7C(a1);
  *(_QWORD *)a1 = &off_180156100;
  *(_QWORD *)(a1 + 8) = off_1801560B8;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 48), 0, 0);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_WORD *)(a1 + 100) = 0;
  result = a1;
  *(_OWORD *)(a1 + 104) = xmmword_18015B730;
  return result;
}
