/*
 * XREFs of sub_180107EA1 @ 0x180107EA1
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_180107EA1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_DWORD *)(a2 + 144) = sub_1800C437C(
                            *(_QWORD *)(a2 + 136),
                            740,
                            (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                            a4);
  return 0LL;
}
