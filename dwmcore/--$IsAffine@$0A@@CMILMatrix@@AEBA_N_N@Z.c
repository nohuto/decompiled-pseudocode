char __fastcall CMILMatrix::IsAffine<0>(__int64 a1, char a2)
{
  char v4; // dl
  char v5; // cl

  v4 = 1;
  if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                     + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
             + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm)) == 1.0 )
  {
    v5 = 1;
    *(_BYTE *)(a1 + 65) = *(_BYTE *)(a1 + 65) & 0xCF | 0x10;
  }
  else
  {
    v5 = 0;
  }
  if ( !a2 )
  {
    if ( (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) != 0.0 )
      v4 = 0;
    return v4 & v5;
  }
  return v5;
}
