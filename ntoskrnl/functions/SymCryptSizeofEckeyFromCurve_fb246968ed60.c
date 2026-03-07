__int64 __fastcall SymCryptSizeofEckeyFromCurve(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  int v4; // ebx

  v2 = SymCryptEcurveDigitsofScalarMultiplier(a1);
  v4 = SymCryptSizeofIntFromDigits(v2, v3);
  return v4 + (unsigned int)SymCryptSizeofEcpointFromCurve(a1) + 64;
}
