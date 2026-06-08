/*
 * XREFs of CpcRegisterIsSupported @ 0x1C0003DF4
 * Callers:
 *     CpcRegisterIsSupportedEx @ 0x1C0003E0C (CpcRegisterIsSupportedEx.c)
 *     InitCpcStatesInternal @ 0x1C002D198 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

char __fastcall CpcRegisterIsSupported(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_BYTE *)a1 || *(_QWORD *)(a1 + 4) )
    return 1;
  return result;
}
