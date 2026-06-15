/*
 * XREFs of sub_180105BEC @ 0x180105BEC
 * Callers:
 *     sub_1801089FC @ 0x1801089FC (sub_1801089FC.c)
 * Callees:
 *     sub_1800C64A4 @ 0x1800C64A4 (sub_1800C64A4.c)
 */

__int64 __fastcall sub_180105BEC(__int64 a1, __int64 a2)
{
  sub_1800C64A4((__int64 *)a1, *(_QWORD *)a2);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 76);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 84);
  *(_BYTE *)(a1 + 88) = *(_BYTE *)(a2 + 88);
  return a1;
}
