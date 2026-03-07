void __fastcall CMILMatrix::PrependTranslate(CMILMatrix *this, float a2, float a3, float a4)
{
  char v7; // al
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  bool v12; // al
  float v13; // xmm0_4
  float v14; // xmm4_4

  if ( COERCE_FLOAT(LODWORD(a2) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(LODWORD(a3) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(LODWORD(a4) & _xmm) >= 0.000081380211 )
  {
    v7 = (char)(4 * *((_BYTE *)this + 65)) >> 6;
    v8 = a3 * *((float *)this + 6);
    v9 = (float)((float)(a2 * *((float *)this + 1)) + (float)(a3 * *((float *)this + 5)))
       + (float)(a4 * *((float *)this + 9));
    v10 = a4 * *((float *)this + 10);
    *((float *)this + 12) = (float)((float)((float)(a3 * *((float *)this + 4)) + (float)(a2 * *(float *)this))
                                  + (float)(a4 * *((float *)this + 8)))
                          + *((float *)this + 12);
    v11 = (float)(a2 * *((float *)this + 2)) + v8;
    *((float *)this + 13) = v9 + *((float *)this + 13);
    *((float *)this + 14) = (float)(v11 + v10) + *((float *)this + 14);
    if ( v7 )
    {
      v12 = v7 == 1
         && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)this + 11) & _xmm) * 61440.0) - 0.0) & _xmm) < 0.000081380211;
    }
    else
    {
      LODWORD(v13) = *((_DWORD *)this + 11) & _xmm;
      v12 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                           (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)this + 3) & _xmm) * 61440.0)
                                         + (float)(COERCE_FLOAT(*((_DWORD *)this + 7) & _xmm) * 61440.0))
                                 + COERCE_FLOAT(*((_DWORD *)this + 15) & _xmm))
                         - 1.0) & _xmm) < 0.000081380211;
      *((_BYTE *)this + 65) ^= (*((_BYTE *)this + 65) ^ (-16 - 32 * v12)) & 0x30;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v13 * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
        v12 = 0;
    }
    if ( v12 )
    {
      *((_BYTE *)this + 64) &= 0xFCu;
    }
    else
    {
      v14 = a3 * *((float *)this + 7);
      *((_DWORD *)this + 16) = 0;
      *((float *)this + 15) = (float)((float)(v14 + (float)(a2 * *((float *)this + 3)))
                                    + (float)(a4 * *((float *)this + 11)))
                            + *((float *)this + 15);
    }
  }
}
