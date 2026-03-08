/*
 * XREFs of rimPenButtonsPolicyUpdateState @ 0x1C01D8FB8
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00F1204 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimPenButtonsPolicyUpdateState(__int64 a1, _DWORD *a2, int a3)
{
  __int64 result; // rax

  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 5) > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1231);
  if ( a3 )
  {
    if ( (a2[632] & 2) != 0 )
      a2[8] ^= (a2[8] ^ ~(8 * a2[611])) & 0x20;
    else
      a2[8] &= ~0x20u;
  }
  result = (unsigned int)a2[671];
  if ( (result & 4) == 0 )
  {
    result = (unsigned int)a2[611];
    if ( (result & 4) != 0 )
    {
      result = (a2[8] ^ (16 * a2[632])) & 0x10;
      a2[8] ^= result;
    }
  }
  return result;
}
