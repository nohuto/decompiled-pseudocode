/*
 * XREFs of xxxUserYield @ 0x1C01EAB7C
 * Callers:
 *     NtUserYieldTask @ 0x1C02049E0 (NtUserYieldTask.c)
 * Callees:
 *     xxxReceiveMessage @ 0x1C0059000 (xxxReceiveMessage.c)
 */

__int64 __fastcall xxxUserYield(__int64 a1)
{
  __int64 i; // rax

  for ( i = *(_QWORD *)(a1 + 448); (*(_BYTE *)(i + 6) & 0x40) != 0; i = *(_QWORD *)(a1 + 448) )
    xxxReceiveMessage(a1);
  return 1LL;
}
