void *__fastcall SymCryptShortWeierstrassSetDistinguished(__int64 a1, _BYTE *a2)
{
  return SymCryptEcpointCopy(a1, *(_BYTE **)(a1 + 648), a2);
}
