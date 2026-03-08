/*
 * XREFs of GetStreamId @ 0x1C0012CFC
 * Callers:
 *     BuildReadWriteCommand @ 0x1C0010FC4 (BuildReadWriteCommand.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003260 (__security_check_cookie.c)
 */

__int64 __fastcall GetStreamId(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  _OWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  if ( (*(_BYTE *)(a1 + 4008) & 3) != 3 )
    return 0LL;
  if ( *(unsigned __int8 *)(a1 + 4009) != a3 )
    return 0LL;
  if ( !*(_WORD *)(a1 + 4012) )
    return 0LL;
  v6 = 0LL;
  memset(v5, 0, sizeof(v5));
  LOWORD(v5[0]) = 1;
  if ( (unsigned int)StorPortExtendedFunction(28LL, a1, a2, v5) )
    return 0LL;
  if ( (WORD4(v5[0]) & 0x100) == 0 )
    return 0LL;
  if ( (unsigned int)(HIDWORD(v5[0]) - 1) > 0xFFFE )
    return 0LL;
  result = WORD6(v5[0]);
  if ( HIDWORD(v5[0]) > *(unsigned __int16 *)(a1 + 4012) )
    return 0LL;
  return result;
}
