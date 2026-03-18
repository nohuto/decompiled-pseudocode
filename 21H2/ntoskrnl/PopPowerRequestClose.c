/*
 * XREFs of PopPowerRequestClose @ 0x1407EF730
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestHandleClose @ 0x14036A100 (PopPowerRequestHandleClose.c)
 */

__int64 __fastcall PopPowerRequestClose(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a4 == 1 )
    return PopPowerRequestHandleClose(a2);
  return result;
}
