/*
 * XREFs of PopPowerRequestClose @ 0x14073ABE0
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestHandleClose @ 0x1402BBD4C (PopPowerRequestHandleClose.c)
 */

__int64 __fastcall PopPowerRequestClose(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a4 == 1 )
    return PopPowerRequestHandleClose(a2);
  return result;
}
