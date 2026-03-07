__int64 __fastcall CBitmapRenderStrategy::GetTextureMemoryLayoutData(
        __int64 a1,
        CSurfaceBrush *a2,
        const struct D2D_SIZE_F *a3,
        _QWORD *a4)
{
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rcx
  __int128 v10; // xmm1
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int64 v13; // xmm1_8
  __int128 v15; // [rsp+30h] [rbp-29h] BYREF
  __int64 v16; // [rsp+40h] [rbp-19h]
  __int128 v17; // [rsp+48h] [rbp-11h] BYREF
  __int128 v18; // [rsp+58h] [rbp-1h]
  __int64 v19; // [rsp+68h] [rbp+Fh]
  __int128 v20; // [rsp+70h] [rbp+17h] BYREF
  __int64 v21; // [rsp+80h] [rbp+27h]

  a4[1] = *a4;
  v7 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(**((_QWORD **)a2 + 13) + 56LL))(
         *((_QWORD **)a2 + 13),
         42LL) )
  {
    v8 = CSurfaceBrush::ComputeLayout(a2, a3, (struct CContent::LayoutData *)&v17, 0LL);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x3D5u, 0LL);
    }
    else
    {
      if ( *((float *)&v18 + 2) > 0.0 || *((float *)&v18 + 3) > 0.0 )
      {
        v21 = *((_QWORD *)&v18 + 1);
        v20 = *(_OWORD *)&_xmm;
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v15,
          (const struct D2D1::Matrix3x2F *)&v20,
          (const struct D2D1::Matrix3x2F *)&v17);
        v10 = v15;
        v17 = v15;
        *(_QWORD *)&v18 = v16;
      }
      else
      {
        v10 = v17;
      }
      v11 = a4[1];
      if ( v11 == a4[2] )
      {
        std::vector<CContent::LayoutData>::_Emplace_reallocate<CContent::LayoutData const &>(
          a4,
          (_BYTE *)v11,
          (__int64)&v17);
      }
      else
      {
        v12 = v18;
        *(_OWORD *)v11 = v10;
        v13 = v19;
        *(_OWORD *)(v11 + 16) = v12;
        *(_QWORD *)(v11 + 32) = v13;
        a4[1] += 40LL;
      }
    }
  }
  return v7;
}
