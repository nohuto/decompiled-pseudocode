/*
 * XREFs of StorpSetUnitAttributes @ 0x1C003D41C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000F680 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006604 (RaidAdapterFindUnit.c)
 */

__int64 __fastcall StorpSetUnitAttributes(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 Unit; // rax
  int v7; // [rsp+40h] [rbp+18h]

  HIBYTE(v7) = 0;
  if ( a3 >= 8 )
    return 3238002694LL;
  v4 = **(_QWORD **)(a1 - 16);
  if ( !v4 )
    return 3238002694LL;
  if ( !a2 )
    return 3238002694LL;
  if ( *(_WORD *)a2 != 1 )
    return 3238002694LL;
  if ( *(_DWORD *)(a2 + 4) < 4u )
    return 3238002694LL;
  LOWORD(v7) = *(_WORD *)(a2 + 8);
  BYTE2(v7) = *(_BYTE *)(a2 + 10);
  Unit = RaidAdapterFindUnit(v4, v7);
  if ( !Unit )
    return 3238002694LL;
  *(_DWORD *)(Unit + 1824) ^= (*(_DWORD *)(Unit + 1824) ^ (2 * a3)) & 0xE;
  return 0LL;
}
