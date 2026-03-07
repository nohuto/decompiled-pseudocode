__int64 __fastcall CGradientBrush::Generate(
        CGradientBrush *this,
        struct CD3DDevice *a2,
        const struct CGradientSource::RetrievalParams *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdx
  gsl::details *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  char v14; // r9
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // edi
  _QWORD v19[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 24);
  gsl::details::extent_type<-1>::extent_type<-1>(
    (gsl::details *)v19,
    0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)this + 25) - v3) >> 2));
  v19[1] = v3;
  if ( v19[0] == -1LL || !v3 && v19[0] )
  {
    gsl::details::terminate(v7);
    JUMPOUT(0x1800B6FE5LL);
  }
  v10 = *((_DWORD *)this + 40) == 4;
  *((_BYTE *)this + 225) = 1;
  v11 = *((_QWORD *)this + 24);
  LOBYTE(v9) = v10;
  v12 = *((_QWORD *)this + 25);
  if ( v11 != v12 )
  {
    while ( *(float *)(v11 + 16) >= 1.0 )
    {
      v11 += 20LL;
      if ( v11 == v12 )
        goto LABEL_6;
    }
    *((_BYTE *)this + 225) = 0;
  }
LABEL_6:
  LOBYTE(v12) = *((_BYTE *)this + 152);
  v13 = ExtendMode::ToD2D1ExtendMode(v12, v6, v8, v9);
  v15 = CGradientSource::Generate(
          (CGradientBrush *)((char *)this + 88),
          a2,
          v14,
          *((_BYTE *)this + 225),
          *((_BYTE *)this + 226),
          v13);
  v17 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x182u, 0LL);
  else
    *((_BYTE *)this + 224) = 1;
  return v17;
}
