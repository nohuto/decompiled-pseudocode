/*
 * XREFs of sub_18013DF30 @ 0x18013DF30
 * Callers:
 *     sub_18013DFE8 @ 0x18013DFE8 (sub_18013DFE8.c)
 * Callees:
 *     sub_1800D12E4 @ 0x1800D12E4 (sub_1800D12E4.c)
 */

__int64 (__fastcall **__fastcall sub_18013DF30(__int64 a1))()
{
  __int64 (__fastcall **result)(); // rax

  *(_QWORD *)a1 = off_1801472E8;
  *(_QWORD *)(a1 + 8) = off_1801472C0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  sub_1800D12E4((_QWORD *)(a1 + 24));
  result = &off_180147338;
  *(_QWORD *)(a1 + 8) = &off_180147338;
  return result;
}
