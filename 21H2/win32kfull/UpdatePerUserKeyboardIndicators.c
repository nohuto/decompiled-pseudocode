/*
 * XREFs of UpdatePerUserKeyboardIndicators @ 0x1C002787C
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0026814 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UpdatePerUserKeyboardIndicators(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  char v3; // cl
  __int64 v4; // rcx

  result = gProtocolType;
  v2 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( !gProtocolType )
  {
    FastGetProfileIntW(a1, 13LL, L"InitialKeyboardIndicators");
    v3 = *(_BYTE *)(v2 + 264);
    if ( (gklpBootTime[1] & 2) != 0 )
    {
      *(_BYTE *)(v2 + 264) = v3 | 2;
      v4 = gafAsyncKeyState;
      *((_BYTE *)&gafAsyncKeyState + 36) |= 2u;
      gafRawKeyState[36] |= 2u;
    }
    else
    {
      *(_BYTE *)(v2 + 264) = v3 & 0xFD;
      v4 = gafAsyncKeyState;
      *((_BYTE *)&gafAsyncKeyState + 36) &= ~2u;
      gafRawKeyState[36] &= ~2u;
    }
    gfKanaToggle = 0;
    *(_BYTE *)(v2 + 233) &= ~8u;
    *(_BYTE *)(v4 + 5) &= ~8u;
    gafRawKeyState[5] &= ~8u;
    return UpdateKeyLights(0LL);
  }
  return result;
}
