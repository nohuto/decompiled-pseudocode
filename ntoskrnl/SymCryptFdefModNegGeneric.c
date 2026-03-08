/*
 * XREFs of SymCryptFdefModNegGeneric @ 0x1403FF0D0
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     SymCryptFdefRawSub @ 0x1403FE1BC (SymCryptFdefRawSub.c)
 *     SymCryptFdefRawIsEqualUint32 @ 0x1403FFF04 (SymCryptFdefRawIsEqualUint32.c)
 */

__int64 __fastcall SymCryptFdefModNegGeneric(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r14d
  int IsEqualUint32; // ebp
  __int64 result; // rax
  unsigned int v9; // r14d
  int v10; // ebp

  v3 = *(_DWORD *)(a1 + 4);
  xHalTimerWatchdogStop();
  IsEqualUint32 = SymCryptFdefRawIsEqualUint32(a2, v3, 0LL);
  result = SymCryptFdefRawSub(a1 + 128, a2, (__int64)a3, v3);
  v9 = 16 * v3;
  if ( v9 )
  {
    v10 = ~IsEqualUint32;
    result = v9;
    do
    {
      *a3++ &= v10;
      --result;
    }
    while ( result );
  }
  return result;
}
