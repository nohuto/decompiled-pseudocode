/*
 * XREFs of MiWorkingSetVeryLarge @ 0x140619F94
 * Callers:
 *     MiOrderTrimList @ 0x14046378E (MiOrderTrimList.c)
 * Callees:
 *     MiGetStandbyRepurposed @ 0x1403601DC (MiGetStandbyRepurposed.c)
 */

__int64 __fastcall MiWorkingSetVeryLarge(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  int v4; // edi
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rcx
  __int64 v8; // rsi
  unsigned int v9; // r10d
  unsigned __int64 v10; // r11

  v2 = *(_QWORD *)(a1 + 144);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( v2 <= v3 )
    return 0LL;
  v4 = 0;
  v5 = *(_QWORD **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v6 = v5[2130];
  if ( !a2 || ((v2 ^ (v2 + a2)) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
  {
    v4 = 1;
    if ( v5[2152] < v6 >> 4 && v2 >= v6 >> 4 )
      return 1LL;
  }
  if ( v2 - v3 < 3 * (v6 >> 2) )
    return 0LL;
  v8 = v5[2115];
  if ( (unsigned int)MiGetStandbyRepurposed((__int64)v5, 1u) == *(_DWORD *)(v8 + 44) )
    return 0LL;
  if ( !v4 )
    v10 = v5[2152];
  LOBYTE(v9) = v10 < 8LL * *(_QWORD *)(v8 + 2384);
  return v9;
}
