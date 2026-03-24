/*
 * XREFs of sub_140676D30 @ 0x140676D30
 * Callers:
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 *     sub_140665D84 @ 0x140665D84 (sub_140665D84.c)
 *     sub_1407C6CA0 @ 0x1407C6CA0 (sub_1407C6CA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140676D30(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  return a7 ^ (unsigned int)(*(_DWORD *)(a6 + 4LL * (a1 & 1)) ^ *(_DWORD *)(a6 + 4LL * (((a1 & 1) - 1) & 1)));
}
