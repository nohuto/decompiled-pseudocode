__int64 __fastcall RFONTOBJ::bCalcLayoutUnits(RFONTOBJ *this, struct XDCOBJ *a2)
{
  float v4; // xmm2_4
  float v5; // xmm1_4
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  float v10; // xmm0_4
  float v11; // xmm0_4
  _QWORD v12[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  char v14; // [rsp+90h] [rbp+30h] BYREF
  __int64 v15; // [rsp+98h] [rbp+38h] BYREF

  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v13, a2, 516);
  v4 = *(float *)v13;
  v5 = *(float *)(v13 + 12);
  if ( *(float *)v13 < 0.0 )
    LODWORD(v4) ^= _xmm;
  if ( v5 < 0.0 )
    LODWORD(v5) ^= _xmm;
  if ( (*(_DWORD *)(v13 + 32) & 1) != 0 && v4 == v5 )
  {
    *(float *)(*(_QWORD *)this + 404LL) = v4;
    *(float *)(*(_QWORD *)this + 424LL) = v4;
    *(float *)(*(_QWORD *)this + 408LL) = 1.0 / v4;
    *(float *)(*(_QWORD *)this + 428LL) = 1.0 / v4;
    *(_DWORD *)(*(_QWORD *)this + 680LL) = *(_DWORD *)(*(_QWORD *)this + 408LL);
    *(_DWORD *)(*(_QWORD *)this + 684LL) = *(_DWORD *)(*(_QWORD *)this + 428LL);
    return 1LL;
  }
  v15 = 0LL;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v12, a2, 1026);
  if ( v12[0] )
  {
    EXFORMOBJ::bXform((EXFORMOBJ *)v12, (struct VECTORFL *)(*(_QWORD *)this + 396LL), (struct VECTORFL *)&v15, 1uLL);
    EFLOAT::eqLength(*(_QWORD *)this + 408LL, &v14, &v15);
    v7 = *(_QWORD *)this;
    *(float *)(v7 + 408) = *(float *)(*(_QWORD *)this + 408LL) * 0.0625;
    *(float *)(v7 + 404) = 1.0 / *(float *)(v7 + 408);
    EXFORMOBJ::bXform((EXFORMOBJ *)v12, (struct VECTORFL *)(*(_QWORD *)this + 416LL), (struct VECTORFL *)&v15, 1uLL);
    EFLOAT::eqLength(*(_QWORD *)this + 428LL, &v14, &v15);
    v8 = *(_QWORD *)this;
    *(float *)(v8 + 428) = *(float *)(*(_QWORD *)this + 428LL) * 0.0625;
    *(float *)(v8 + 424) = 1.0 / *(float *)(v8 + 428);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) != 1
      || (unsigned int)DC::bUseMetaPtoD(*(DC **)a2)
      || (*(_DWORD *)(*(_QWORD *)this + 716LL) & 4) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)this + 680LL) = *(_DWORD *)(*(_QWORD *)this + 408LL);
      *(_DWORD *)(*(_QWORD *)this + 684LL) = *(_DWORD *)(*(_QWORD *)this + 428LL);
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)this + 680LL) = *(_DWORD *)v12[0];
      *(_DWORD *)(*(_QWORD *)this + 684LL) = *(_DWORD *)(v12[0] + 12LL);
      v9 = *(_QWORD *)this;
      v10 = *(float *)(*(_QWORD *)this + 680LL);
      if ( v10 < 0.0 )
        *(_DWORD *)(v9 + 680) = LODWORD(v10) ^ _xmm;
      v11 = *(float *)(v9 + 684);
      if ( v11 < 0.0 )
        *(_DWORD *)(v9 + 684) = LODWORD(v11) ^ _xmm;
    }
    return 1LL;
  }
  return 0LL;
}
