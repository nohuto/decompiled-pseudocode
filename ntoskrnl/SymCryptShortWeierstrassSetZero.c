/*
 * XREFs of SymCryptShortWeierstrassSetZero @ 0x1403FCFF0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementSetValueUint32 @ 0x1403F3C0C (SymCryptModElementSetValueUint32.c)
 */

__int64 __fastcall SymCryptShortWeierstrassSetZero(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx

  v4 = *(_DWORD **)(a1 + 616);
  SymCryptModElementSetValueUint32(1, v4, a2 + 32, a3, a4);
  SymCryptModElementSetValueUint32(1, v4, *(unsigned int *)(a1 + 36) + a2 + 32, a3, a4);
  return SymCryptModElementSetValueUint32(
           0,
           *(_DWORD **)(a1 + 616),
           (unsigned int)(2 * *(_DWORD *)(a1 + 36)) + a2 + 32,
           a3,
           a4);
}
