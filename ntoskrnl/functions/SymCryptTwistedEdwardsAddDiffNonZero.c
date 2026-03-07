__int64 __fastcall SymCryptTwistedEdwardsAddDiffNonZero(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  return SymCryptTwistedEdwardsAdd(a1, a2, a3, a4, 0, a5, a6);
}
