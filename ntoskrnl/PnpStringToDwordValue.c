/*
 * XREFs of PnpStringToDwordValue @ 0x1403C2438
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14055FD1C (PiDevCfgParsePropertyKeyName.c)
 *     PiDevCfgResolveVariable @ 0x140878210 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableExpression @ 0x14095D1E0 (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     wcstoul @ 0x1403D6370 (wcstoul.c)
 */

char __fastcall PnpStringToDwordValue(__int64 a1, unsigned int *a2)
{
  char v2; // bl
  bool v3; // zf
  int v4; // r8d
  wchar_t *EndPtr; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *(_WORD *)a1 == 48;
  EndPtr = 0LL;
  if ( !v3 || ((*(_WORD *)(a1 + 2) - 88) & 0xFFDF) != 0 )
  {
    v4 = 10;
  }
  else
  {
    a1 += 4LL;
    v4 = 16;
  }
  *a2 = wcstoul((const wchar_t *)a1, &EndPtr, v4);
  if ( EndPtr && !*EndPtr )
    return 1;
  return v2;
}
