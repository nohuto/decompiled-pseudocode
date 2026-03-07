signed __int64 *__fastcall RtlClearBitEx(__int64 a1, unsigned __int64 a2)
{
  signed __int64 *result; // rax

  result = *(signed __int64 **)(a1 + 8);
  _bittestandreset64(result, a2);
  return result;
}
