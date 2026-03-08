/*
 * XREFs of GetSrbFunction @ 0x1C0007AEC
 * Callers:
 *     MdlToPrp @ 0x1C0001570 (MdlToPrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSrbFunction(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 2);
  if ( (_BYTE)result == 40 )
    return *(unsigned int *)(a1 + 20);
  return result;
}
