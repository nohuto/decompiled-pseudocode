signed __int64 *__fastcall RtlSetBitEx(__int64 a1, unsigned __int64 a2)
{
  signed __int64 *result; // rax

  result = *(signed __int64 **)(a1 + 8);
  _bittestandset64(result, a2);
  return result;
}
