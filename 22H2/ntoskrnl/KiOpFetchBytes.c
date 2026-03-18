/*
 * XREFs of KiOpFetchBytes @ 0x1403B59A8
 * Callers:
 *     KiOpDecodeModRM @ 0x14030CA24 (KiOpDecodeModRM.c)
 *     KiOpDecode @ 0x14030E3A4 (KiOpDecode.c)
 * Callees:
 *     KiOpFetchNextByte @ 0x14030E50C (KiOpFetchNextByte.c)
 */

__int64 __fastcall KiOpFetchBytes(__int64 a1, int a2, _BYTE *a3)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = KiOpFetchNextByte(a1, a3);
    if ( (int)result < 0 )
      break;
    ++a3;
    if ( !--a2 )
      return 0LL;
  }
  return result;
}
