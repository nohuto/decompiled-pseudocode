/*
 * XREFs of _SetHimetricToPixelRatio @ 0x1C0218F50
 * Callers:
 *     <none>
 * Callees:
 *     LongLongToLong @ 0x1C00A7CFC (LongLongToLong.c)
 */

HRESULT __fastcall SetHimetricToPixelRatio(_DWORD *a1, _DWORD *a2)
{
  int v3; // eax
  int v5; // r10d
  __int64 v6; // r11
  HRESULT result; // eax
  __int64 v8; // r11
  LONG plResult; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2[2] - *a2;
  v5 = a1[2] - *a1;
  plResult = 0;
  if ( LongLongToLong(1000LL * v3 / v5, &plResult) >= 0 )
    *(_DWORD *)(v6 + 184) = plResult;
  result = LongLongToLong(1000LL * (a2[3] - a2[1]) / (a1[3] - a1[1]), &plResult);
  if ( result >= 0 )
  {
    result = plResult;
    *(_DWORD *)(v8 + 188) = plResult;
  }
  return result;
}
