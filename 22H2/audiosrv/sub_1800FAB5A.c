/*
 * XREFs of sub_1800FAB5A @ 0x1800FAB5A
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_1800FAB5A(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_DWORD *)(a2 + 128) = sub_1800C437C(
                            *(_QWORD *)(a2 + 88),
                            144,
                            (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
                            a4);
  return 0LL;
}
