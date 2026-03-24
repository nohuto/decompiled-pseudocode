/*
 * XREFs of rimPenButtonsPolicyUpdateState @ 0x1C017BCE4
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C0178FB0 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimPenButtonsPolicyUpdateState(__int64 a1, _DWORD *a2, int a3)
{
  __int64 result; // rax

  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 5) > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1212);
  if ( a3 )
  {
    if ( (a2[626] & 2) != 0 )
      a2[8] ^= (a2[8] ^ ~(8 * a2[605])) & 0x20;
    else
      a2[8] &= ~0x20u;
  }
  result = (unsigned int)a2[665];
  if ( (result & 4) == 0 )
  {
    result = (unsigned int)a2[605];
    if ( (result & 4) != 0 )
    {
      result = (a2[8] ^ (16 * a2[626])) & 0x10;
      a2[8] ^= result;
    }
  }
  return result;
}
