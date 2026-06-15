/*
 * XREFs of sub_1800B8C50 @ 0x1800B8C50
 * Callers:
 *     sub_1800B90D4 @ 0x1800B90D4 (sub_1800B90D4.c)
 * Callees:
 *     memset @ 0x18006AB8C (memset.c)
 */

__int64 __fastcall sub_1800B8C50(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  memset(a2, 0, 0x90uLL);
  a2[2] = *(_DWORD *)(a1 + 4);
  a2[1] = *(_DWORD *)(a1 + 8);
  *((_QWORD *)a2 + 6) = *(_QWORD *)(a1 + 16);
  a2[14] = *(unsigned __int16 *)(a1 + 24);
  *a2 = *(unsigned __int8 *)(a1 + 26);
  *((_QWORD *)a2 + 15) = *(_QWORD *)(a1 + 32);
  *((_QWORD *)a2 + 16) = *(_QWORD *)(a1 + 40);
  *((_QWORD *)a2 + 17) = *(_QWORD *)(a1 + 48);
  result = *(_QWORD *)(a1 + 56);
  *((_QWORD *)a2 + 2) = result;
  return result;
}
