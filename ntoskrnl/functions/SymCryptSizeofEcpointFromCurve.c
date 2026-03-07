__int64 __fastcall SymCryptSizeofEcpointFromCurve(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 8) & 0xF;
  if ( (unsigned int)(v1 - 1) > 3 )
    return 0;
  else
    return (unsigned int)(*(_DWORD *)(a1 + 36) * v1 + 32);
}
