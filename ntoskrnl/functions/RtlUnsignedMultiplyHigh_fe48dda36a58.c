__int64 __fastcall RtlUnsignedMultiplyHigh(unsigned __int64 a1, unsigned __int64 a2)
{
  return (a1 * (unsigned __int128)a2) >> 64;
}
