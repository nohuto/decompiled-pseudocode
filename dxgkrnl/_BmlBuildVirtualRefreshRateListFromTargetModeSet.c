__int64 __fastcall BmlBuildVirtualRefreshRateListFromTargetModeSet(
        DMMVIDPNSOURCEMODESET *this,
        unsigned __int64 *a2,
        void **a3)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  _OWORD *v10; // rax
  UINT Numerator; // r14d
  DMMVIDPNSOURCEMODESET *v12; // rsi
  unsigned int Denominator; // r15d
  const struct DMMVIDPNSOURCEMODE *NextMode; // rsi
  struct _D3DDDI_RATIONAL v15; // rdi
  int v16; // ecx
  struct _D3DDDI_RATIONAL v17; // rbx
  __int64 v18; // rax
  unsigned __int64 *v19[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v20; // [rsp+70h] [rbp+40h] BYREF
  struct _D3DDDI_RATIONAL v21; // [rsp+78h] [rbp+48h]
  struct _D3DDDI_RATIONAL v22; // [rsp+80h] [rbp+50h] BYREF
  struct _D3DDDI_RATIONAL v23; // [rsp+88h] [rbp+58h] BYREF

  *a2 = 0LL;
  v5 = *((_QWORD *)this + 8) + 8LL;
  v7 = 8 * v5;
  if ( !is_mul_ok(v5, 8uLL) )
    v7 = -1LL;
  v8 = operator new[](v7, 0x4B677844u, 256LL);
  if ( (void *)v8 != *a3 )
    operator delete(*a3);
  *a3 = (void *)v8;
  if ( v8 )
  {
    if ( !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)(*((_QWORD *)this + 14) + 96LL)
                                                                         + 80LL)) )
    {
      *a2 = 7LL;
      v10 = *a3;
      *v10 = xmmword_1C0114F88;
      v10[1] = xmmword_1C0114F98;
      v10[2] = xmmword_1C0114FA8;
      *((_QWORD *)v10 + 6) = 0x6400000960LL;
    }
    Numerator = 0;
    v19[0] = a2;
    v20 = 0x100000000LL;
    v12 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
    v19[1] = (unsigned __int64 *)a3;
    Denominator = 1;
    if ( v12 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
    {
      NextMode = (DMMVIDPNSOURCEMODESET *)((char *)v12 - 8);
      if ( NextMode )
      {
        v15 = (struct _D3DDDI_RATIONAL)v20;
        do
        {
          v16 = (*((_DWORD *)NextMode + 30) >> 3) & 0x3F;
          if ( v16 )
          {
            v18 = *(_QWORD *)((char *)NextMode + 92);
            v21.Numerator = v18;
            v21.Denominator = v16 * HIDWORD(v18);
            v17 = v21;
          }
          else
          {
            v17 = *(struct _D3DDDI_RATIONAL *)((char *)NextMode + 92);
          }
          v21 = v17;
          v23 = v17;
          if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(NextMode)
            && Denominator * (unsigned __int64)v17.Numerator > Numerator * (unsigned __int64)v21.Denominator )
          {
            v22.Numerator = v17.Numerator;
            v22.Denominator = 2 * v21.Denominator;
            if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(NextMode, &v22, 2) )
              v15 = v17;
            v20 = (__int64)v15;
            Denominator = v15.Denominator;
            Numerator = v15.Numerator;
          }
          lambda_f7629139d0209e148fddfe9121e39862_::operator()(v19, &v23);
          NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(this, NextMode);
        }
        while ( NextMode );
      }
    }
    HIDWORD(v20) = 2 * Denominator;
    if ( 100 * (unsigned __int64)Numerator >= 5999 * (unsigned __int64)(2 * Denominator) )
      lambda_f7629139d0209e148fddfe9121e39862_::operator()(v19, (const struct _D3DDDI_RATIONAL *)&v20);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(6LL, v5);
    return 3221225626LL;
  }
}
