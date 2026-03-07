__int64 __fastcall CTrimPathOperation::Trim(
        CTrimPathOperation *this,
        const struct CPathData *a2,
        float a3,
        float a4,
        float a5,
        struct CPathData **a6)
{
  unsigned int v6; // r14d
  float v9; // xmm12_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  __int64 v12; // r15
  struct CPathData *v13; // rbx
  unsigned int v14; // ecx
  float v15; // xmm7_4
  float v16; // xmm0_4
  float v17; // xmm6_4
  CPathLengthOperation *v18; // rax
  __int64 v19; // rdx
  float Length; // xmm0_4
  __int64 *v21; // rbx
  __int64 *v22; // rdi
  const struct Path::Segment *v23; // rdx
  void *v25; // rax
  unsigned int v26; // ecx
  void *v27; // rax
  float v28; // xmm0_4
  char v29; // al
  int v30; // xmm1_4
  char v31; // al
  unsigned int v32; // [rsp+28h] [rbp-E0h]
  struct CPathData *v33; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v34; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B8h]
  __int64 v36; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *i; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v38[224]; // [rsp+68h] [rbp-A0h] BYREF

  v6 = 0;
  v9 = fminf(1.0, fmaxf(a4, 0.0));
  v10 = fminf(1.0, fmaxf(a3, 0.0));
  v11 = v9 - v10;
  if ( (float)(v9 - v10) < 0.0 )
    v11 = v11 + 1.0;
  v12 = *((_QWORD *)a2 + 5);
  v13 = 0LL;
  v33 = 0LL;
  if ( CPathData::IsSimpleGeometry(a2) )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - 1.0) & _xmm) < 0.0000011920929 )
    {
      Microsoft::WRL::ComPtr<CPathData>::operator=(&v33, a2);
      v13 = v33;
    }
    else if ( COERCE_FLOAT(LODWORD(v11) & _xmm) < 0.0000011920929 )
    {
      v27 = DefaultHeap::Alloc(0x50uLL);
      if ( v27 )
      {
        *((_QWORD *)&v34 + 1) = 0LL;
        v35 = 0LL;
        v27 = (void *)CPathData::CPathData(v27, v12, (char *)&v34 + 8);
      }
      Microsoft::WRL::ComPtr<CPathData>::operator=(&v33, v27);
      v13 = v33;
      if ( !v33 )
      {
        v32 = 179;
        goto LABEL_33;
      }
    }
    else
    {
      v15 = fmodf_0(v10 + a5, 1.0);
      v16 = fmodf_0(v9 + a5, 1.0);
      v17 = v16;
      if ( v15 < 0.0 )
        v15 = v15 + 1.0;
      if ( v16 < 0.0 )
        v17 = v16 + 1.0;
      *((_BYTE *)this + 396) = 0;
      if ( v15 > v17 )
      {
        v28 = v15;
        *((_BYTE *)this + 396) = 1;
        v15 = v17;
        v17 = v28;
      }
      v18 = CPathLengthOperation::CPathLengthOperation((CPathLengthOperation *)v38);
      Length = CPathLengthOperation::GetLength(v18, a2);
      *((_DWORD *)this + 8) = 0;
      *((_DWORD *)this + 11) = 0;
      *((float *)this + 6) = Length * v15;
      *((float *)this + 7) = Length * v17;
      *((_BYTE *)this + 397) = 1;
      *((_QWORD *)this + 1) = *(_QWORD *)this;
      v21 = (__int64 *)*((_QWORD *)a2 + 2);
      v22 = (__int64 *)*((_QWORD *)a2 + 3);
      for ( i = v21; v21 != v22; v21 = i )
      {
        if ( *(_BYTE *)v21 == 1 && *((_BYTE *)v21 + 2) )
        {
          if ( COERCE_FLOAT(*((_DWORD *)v21 + 1) & _xmm) >= 0.0000011920929 )
          {
            LOBYTE(v19) = 2;
            Path::Segment::Segment((char *)&v34 + 8, v19);
            v29 = *((_BYTE *)v21 + 1);
            v30 = *((_DWORD *)this + 14);
            HIDWORD(v34) = *((_DWORD *)v21 + 1);
            HIDWORD(v35) = *((_DWORD *)this + 15);
            LODWORD(v35) = v30;
            BYTE9(v34) = v29;
            CTrimPathOperation::ProcessSegment(this, (const struct Path::Segment *)((char *)&v34 + 8));
          }
          v23 = (const struct Path::Segment *)&v36;
          v36 = *v21;
          v31 = *((_BYTE *)this + 397);
          HIDWORD(v36) = 0;
          BYTE2(v36) = v31;
        }
        else
        {
          v23 = (const struct Path::Segment *)v21;
        }
        if ( !CTrimPathOperation::ProcessSegment(this, v23) )
          break;
        Path::SegmentCollection::const_iterator::operator++(&i);
      }
      v25 = DefaultHeap::Alloc(0x50uLL);
      if ( v25 )
        v25 = (void *)CPathData::CPathData(v25, v12, this);
      Microsoft::WRL::ComPtr<CPathData>::operator=(&v33, v25);
      v13 = v33;
      if ( !v33 )
      {
        v32 = 243;
LABEL_33:
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147024882, v32, 0LL);
      }
    }
  }
  else
  {
    v6 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2003304315, 0xA5u, 0LL);
  }
  v33 = 0LL;
  *a6 = v13;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v33);
  return v6;
}
