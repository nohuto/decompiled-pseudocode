__int64 __fastcall CComposeTop::AddShapeToLifetime(CComposeTop *this, const struct CShape *a2)
{
  const struct CShape *v3; // rsi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, __int64); // rdx
  CRectanglesShape *v12; // rcx
  CRectanglesShape *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  v4 = *((_QWORD *)this + 20);
  if ( v4 )
    goto LABEL_9;
  v5 = DefaultHeap::Alloc(0x60uLL);
  v7 = v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0x60uLL);
    v6 = (__int64)(v7 + 3);
    *v7 = &CRegionShape::`vftable';
    v7[2] = v7 + 3;
    *((_DWORD *)v7 + 6) = 0;
    v7[11] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  a2 = (const struct CShape *)*((_QWORD *)this + 20);
  *((_QWORD *)this + 20) = v7;
  if ( a2 )
    std::default_delete<CShape>::operator()(v6, (__int64 (__fastcall ***)(_QWORD, __int64))a2);
  v4 = *((_QWORD *)this + 20);
  if ( v4 )
  {
LABEL_9:
    v9 = CShape::Combine(v4, (__int64)a2, (__int64)v3, 0LL, D2D1_COMBINE_MODE_UNION, &v14);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xCEu, 0LL);
    }
    else
    {
      v11 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 20);
      v12 = v14;
      *((_QWORD *)this + 20) = v14;
      if ( v11 )
        std::default_delete<CShape>::operator()((__int64)v12, v11);
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0xC7u, 0LL);
  }
  return v8;
}
