__int64 __fastcall CInterpolatePathsOperation::Interpolate(
        CInterpolatePathsOperation *this,
        const struct CPathData *a2,
        const struct CPathData *a3,
        float a4,
        struct CPathData **a5)
{
  unsigned int v6; // r14d
  SIZE_T *PathData; // rax
  __int64 v9; // rax
  float v10; // xmm7_4
  _BYTE *v11; // rbx
  _BYTE *v12; // rdi
  __int64 v13; // xmm8_8
  __int128 v14; // xmm9
  __int64 v15; // r12
  __int64 Size; // r15
  gsl::details *v17; // rcx
  bool v18; // al
  float *v19; // rbx
  float *v20; // r15
  __int64 v21; // rbx
  LPVOID v22; // rax
  _BYTE *v23; // rbx
  __int64 v24; // rcx
  __int128 v26; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-C0h]
  __int64 v28; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h]
  int v30; // [rsp+60h] [rbp-A8h]
  __int128 v31; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+78h] [rbp-90h]
  __int64 v33; // [rsp+80h] [rbp-88h] BYREF
  float *v34; // [rsp+88h] [rbp-80h]
  _QWORD v35[4]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v36[4]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v37; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v38; // [rsp+E8h] [rbp-20h]
  __int128 v39; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v40; // [rsp+108h] [rbp+0h]
  _BYTE *v41; // [rsp+188h] [rbp+80h] BYREF
  __int64 v42; // [rsp+190h] [rbp+88h] BYREF

  v41 = this;
  v6 = 0;
  v32 = 0LL;
  v31 = 0LL;
  PathData = (SIZE_T *)CPathData::GetPathData((__int64)a2, (gsl::details *)&v26);
  std::vector<unsigned char>::reserve(&v31, *PathData);
  v9 = *((_QWORD *)a3 + 2);
  v30 = 0;
  LODWORD(v27) = 0;
  v28 = v9;
  v10 = fminf(1.0, fmaxf(a4, 0.0));
  v29 = *((_QWORD *)a3 + 3);
  *(_QWORD *)&v26 = v29;
  *((_QWORD *)&v26 + 1) = v29;
  if ( a2 == a3 || COERCE_FLOAT(LODWORD(v10) & _xmm) < 0.0000011920929 )
  {
    v41 = a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v41);
    *a5 = a2;
    goto LABEL_21;
  }
  v11 = (_BYTE *)*((_QWORD *)a2 + 2);
  v12 = (_BYTE *)*((_QWORD *)a2 + 3);
  v13 = v27;
  v14 = v26;
  v15 = *((_QWORD *)&v31 + 1);
  v41 = v11;
  while ( v11 != v12 )
  {
    Size = (unsigned int)Path::Segment::GetSize(*v11);
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v26, Size);
    if ( (_QWORD)v26 == -1LL )
    {
      gsl::details::terminate(v17);
      __debugbreak();
    }
    v35[0] = v11;
    v35[1] = &v11[v26];
    v35[2] = &v11[v26];
    v36[1] = &v11[v26];
    v36[0] = v11;
    v36[2] = v11;
    std::vector<unsigned char>::insert<gsl::details::span_iterator<unsigned char const>,0>(
      (__int64 *)&v31,
      &v42,
      v15,
      (__int64)v36,
      (__int64)v35);
    v37 = v14;
    v38 = v13;
    v18 = Path::ControlPointCollection::const_iterator::operator!=((__int64)&v28, &v37);
    v15 = *((_QWORD *)&v31 + 1);
    if ( v18 )
    {
      Path::Segment::GetControlPointsForModification((_BYTE *)(*((_QWORD *)&v31 + 1) - Size), (gsl::details *)&v33);
      v19 = v34;
      v20 = &v34[2 * v33];
      if ( v34 != v20 )
      {
        v39 = v14;
        v40 = v13;
        do
        {
          if ( Path::ControlPointCollection::const_iterator::operator!=((__int64)&v28, &v39) )
          {
            *v19 = (float)((float)(1.0 - v10) * *v19)
                 + (float)(*(float *)Path::ControlPointCollection::const_iterator::operator*((__int64)&v28) * v10);
            v19[1] = (float)((float)(1.0 - v10) * v19[1])
                   + (float)(*(float *)(Path::ControlPointCollection::const_iterator::operator*((__int64)&v28) + 4) * v10);
            Path::ControlPointCollection::const_iterator::operator++(&v28);
          }
          v19 += 2;
        }
        while ( v19 != v20 );
      }
    }
    Path::SegmentCollection::const_iterator::operator++(&v41);
    v11 = v41;
  }
  v21 = *((_QWORD *)a2 + 5);
  v22 = DefaultHeap::Alloc(0x50uLL);
  if ( v22 )
    v23 = (_BYTE *)CPathData::CPathData((__int64)v22, v21, (__int64 *)&v31);
  else
    v23 = 0LL;
  v41 = v23;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v41);
  if ( v23 )
  {
    *a5 = (struct CPathData *)v23;
LABEL_21:
    v41 = 0LL;
    goto LABEL_22;
  }
  v6 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024882, 0x2CEu, 0LL);
LABEL_22:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v41);
  std::vector<unsigned char>::_Tidy((__int64)&v31);
  return v6;
}
