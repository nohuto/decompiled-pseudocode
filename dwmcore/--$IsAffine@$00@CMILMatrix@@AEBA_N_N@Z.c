bool __fastcall CMILMatrix::IsAffine<1>(__int64 a1, char a2)
{
  char v3; // al
  bool v4; // dl

  v3 = (char)(4 * *(_BYTE *)(a1 + 65)) >> 6;
  if ( v3 )
  {
    v4 = 1;
    if ( v3 == 1 )
    {
      if ( !a2 )
        return COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) < 0.000081380211;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v4 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                      - 1.0) & _xmm) < 0.000081380211;
    *(_BYTE *)(a1 + 65) ^= (*(_BYTE *)(a1 + 65) ^ (-16 - 32 * v4)) & 0x30;
    if ( !a2
      && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
    {
      return 0;
    }
  }
  return v4;
}
