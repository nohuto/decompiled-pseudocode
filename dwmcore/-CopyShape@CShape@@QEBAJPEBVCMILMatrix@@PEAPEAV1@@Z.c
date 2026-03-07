__int64 __fastcall CShape::CopyShape(CShape *this, const struct CMILMatrix *a2, struct CShape **a3)
{
  struct CThreadContext *v3; // r14
  CShape *v5; // r13
  int v6; // r12d
  float v7; // xmm2_4
  char v8; // cl
  char v9; // al
  float v10; // xmm0_4
  char v11; // al
  float v12; // xmm0_4
  char v13; // al
  int v14; // eax
  struct CRoundedRectangleShape *v15; // rcx
  _DWORD *Value; // rsi
  int v17; // ecx
  char *v18; // rbx
  __int64 v19; // r15
  void *v20; // rcx
  const void *v21; // r13
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // r14d
  unsigned int v25; // ecx
  struct CObjectCache *ObjectCache; // rax
  int v28; // edx
  void (__fastcall ***v29)(_QWORD); // rdx
  unsigned int i; // esi
  __int64 v31; // rbx
  int Current; // eax
  struct CThreadContext *v33; // rcx
  int v34; // edx
  unsigned int v35; // r15d
  LPVOID v36; // r12
  __int64 v37; // rcx
  int v38; // eax
  unsigned int v39; // ecx
  _BYTE *v40; // rbx
  __int64 v41; // rax
  int v42; // eax
  char *v43; // rax
  unsigned int v44; // ecx
  __int64 v45; // rcx
  int v46; // eax
  int v47; // eax
  CPolygonShape *v48; // rax
  CPolygonShape *v49; // rax
  char *v50; // rax
  unsigned int v51; // ecx
  char *v52; // rbx
  int v53; // esi
  int v54; // eax
  unsigned int v55; // ecx
  __int64 v56; // rcx
  int v57; // eax
  _BYTE *v58; // rcx
  _BYTE *v59; // rcx
  unsigned int v60; // ecx
  HANDLE ProcessHeap; // rax
  _BYTE *v62; // rcx
  char *v63; // rax
  const struct CRoundedRectangleGeometryData *v64; // rcx
  struct CRoundedRectangleShape *v65; // rcx
  struct CObjectCache *v66; // rdx
  CRoundedRectangleShape *v67; // rax
  int v68; // r8d
  CRoundedRectangleShape *v69; // rax
  CPathSegmentsShape *v70; // rax
  CPathSegmentsShape *v71; // rax
  CThreadContext *v72; // rax
  unsigned int v73; // ecx
  CThreadContext *v74; // rax
  int v75; // eax
  int v76; // eax
  unsigned int v77; // ecx
  CPolygonShape *v78; // rax
  CPolygonShape *v79; // rax
  CComplexShape *v80; // rax
  unsigned int v81; // [rsp+20h] [rbp-E0h]
  unsigned int v82; // [rsp+30h] [rbp-D0h] BYREF
  struct ID2D1Geometry *v83; // [rsp+38h] [rbp-C8h] BYREF
  struct CThreadContext *v84; // [rsp+40h] [rbp-C0h] BYREF
  struct tagRECT v85; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID lpMem; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v87; // [rsp+68h] [rbp-98h]
  char *v88; // [rsp+70h] [rbp-90h]
  _BYTE v89[160]; // [rsp+78h] [rbp-88h] BYREF
  char v90; // [rsp+118h] [rbp+18h] BYREF
  int *v91; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v92[18]; // [rsp+128h] [rbp+28h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+B8h]

  v84 = (struct CThreadContext *)a3;
  *(_QWORD *)&v85.left = this;
  v3 = (struct CThreadContext *)a3;
  v83 = 0LL;
  *a3 = 0LL;
  v5 = this;
  v6 = 0;
  if ( !a2 )
  {
LABEL_20:
    v14 = (*(__int64 (__fastcall **)(CShape *))(*(_QWORD *)v5 + 8LL))(v5);
    if ( v14 == 1 )
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v72 = (CThreadContext *)operator new(0x190uLL);
        if ( !v72 || (v74 = CThreadContext::CThreadContext(v72), (Value = v74) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, -2147024882, 0x42u, 0LL);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v74);
      }
      v17 = Value[9];
      v18 = 0LL;
      if ( v17 )
      {
        v18 = (char *)*((_QWORD *)Value + 5);
        *((_QWORD *)Value + 5) = *(_QWORD *)v18;
        Value[9] = v17 - 1;
      }
      if ( !v18 )
      {
        v18 = (char *)DefaultHeap::Alloc(0x48uLL);
        if ( !v18 )
        {
          v81 = 219;
          goto LABEL_155;
        }
      }
      *((_QWORD *)v18 + 1) = 0LL;
      *(_QWORD *)v18 = &CRectanglesShape::`vftable';
      *((_QWORD *)v18 + 2) = v18 + 48;
      *((_QWORD *)v18 + 3) = v18 + 48;
      *((_DWORD *)v18 + 8) = 1;
      *(_QWORD *)(v18 + 36) = 1LL;
      TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v18 + 48);
      *((_QWORD *)v18 + 8) = 0LL;
      v19 = *((unsigned int *)v5 + 10);
      if ( !(_DWORD)v19 )
      {
        CRectanglesShape::Reset((CRectanglesShape *)v18);
        goto LABEL_35;
      }
      v20 = (void *)*((_QWORD *)v18 + 2);
      v21 = (const void *)*((_QWORD *)v5 + 2);
      *((_DWORD *)v18 + 10) = 0;
      if ( v20 != *((void **)v18 + 3) )
      {
        operator delete(v20);
        *((_QWORD *)v18 + 2) = *((_QWORD *)v18 + 3);
        *((_DWORD *)v18 + 9) = *((_DWORD *)v18 + 8);
      }
      v22 = *((_QWORD *)v18 + 8);
      if ( v22 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        *((_QWORD *)v18 + 8) = 0LL;
      }
      v23 = *((_DWORD *)v18 + 10);
      v24 = v19 + v23;
      if ( (unsigned int)v19 + v23 < v23 )
      {
        v6 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else if ( v24 > *((_DWORD *)v18 + 9) )
      {
        v75 = DynArrayImpl<0>::AddMultipleAndSet(v18 + 16, 16LL, (unsigned int)v19, v21);
        v6 = v75;
        if ( v75 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v75, 0xC0u, 0LL);
      }
      else
      {
        memcpy_0((void *)(*((_QWORD *)v18 + 2) + 16LL * v23), v21, 16 * v19);
        *((_DWORD *)v18 + 10) = v24;
      }
      if ( v6 >= 0 )
      {
        v3 = v84;
        v5 = *(CShape **)&v85.left;
LABEL_35:
        *(_QWORD *)v3 = v18;
        goto LABEL_36;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v6, 0xDDu, 0LL);
LABEL_143:
      CRectanglesShape::`scalar deleting destructor'((CRectanglesShape *)v18, 1);
      goto LABEL_37;
    }
    if ( !v14 )
    {
      ObjectCache = CThreadContext::GetObjectCache(v15);
      v18 = 0LL;
      v28 = *((_DWORD *)ObjectCache + 1);
      if ( v28 )
      {
        v18 = (char *)*((_QWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v18;
        *((_DWORD *)ObjectCache + 1) = v28 - 1;
      }
      if ( !v18 )
      {
        v18 = (char *)DefaultHeap::Alloc(0x18uLL);
        if ( !v18 )
        {
          v81 = 210;
          *(_QWORD *)v3 = 0LL;
LABEL_155:
          v6 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, -2147024882, v81, 0LL);
          goto LABEL_37;
        }
      }
      *((_QWORD *)v18 + 1) = 0LL;
      *(_QWORD *)v18 = &CRoundedRectangleShape::`vftable';
      v29 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v5 + 2);
      *((_QWORD *)v18 + 2) = v29;
      if ( v29 )
        (**v29)(v29);
      goto LABEL_35;
    }
    v42 = v14 - 2;
    if ( !v42 )
    {
      v43 = (char *)DefaultHeap::Alloc(0x60uLL);
      v18 = v43;
      if ( !v43 )
      {
        v81 = 234;
        goto LABEL_155;
      }
      memset_0(v43 + 24, 0, 0x40uLL);
      *((_QWORD *)v18 + 1) = 0LL;
      *(_QWORD *)v18 = &CRegionShape::`vftable';
      *((_QWORD *)v18 + 2) = v18 + 24;
      *((_DWORD *)v18 + 6) = 0;
      *((_QWORD *)v18 + 11) = 0LL;
      **((_DWORD **)v18 + 2) = 0;
      v45 = *((_QWORD *)v18 + 11);
      *((_QWORD *)v18 + 11) = 0LL;
      if ( v45 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
      v46 = FastRegion::CRegion::Copy((int **)v18 + 2, (int **)v5 + 2);
      if ( v46 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v46, retaddr);
      goto LABEL_35;
    }
    v47 = v42 - 1;
    if ( v47 )
    {
      if ( v47 == 2 )
      {
        v70 = (CPathSegmentsShape *)DefaultHeap::Alloc(0x18uLL);
        if ( !v70 || (v71 = CPathSegmentsShape::CPathSegmentsShape(v70, *((const struct CPathData **)v5 + 2))) == 0LL )
        {
          v81 = 256;
          goto LABEL_155;
        }
        *(_QWORD *)v3 = v71;
      }
    }
    else
    {
      v48 = (CPolygonShape *)DefaultHeap::Alloc(0x18uLL);
      if ( !v48 )
      {
        *(_QWORD *)v3 = 0LL;
LABEL_133:
        v81 = 247;
        goto LABEL_155;
      }
      v49 = CPolygonShape::CPolygonShape(v48, v5);
      *(_QWORD *)v3 = v49;
      if ( !v49 )
        goto LABEL_133;
    }
    goto LABEL_36;
  }
  v7 = (float)((float)(COERCE_FLOAT(*((_DWORD *)a2 + 7) & _xmm) * 61440.0)
             + (float)(COERCE_FLOAT(*((_DWORD *)a2 + 3) & _xmm) * 61440.0))
     + COERCE_FLOAT(*((_DWORD *)a2 + 15) & _xmm);
  if ( v7 == 1.0 )
  {
    v8 = 1;
    *((_BYTE *)a2 + 65) = *((_BYTE *)a2 + 65) & 0xCF | 0x10;
  }
  else
  {
    v8 = 0;
  }
  if ( ((unsigned __int8)v8 & ((float)(COERCE_FLOAT(*((_DWORD *)a2 + 11) & _xmm) * 61440.0) == 0.0)) != 0
    && *((float *)a2 + 8) == 0.0
    && *((float *)a2 + 9) == 0.0 )
  {
    *((_BYTE *)a2 + 65) = *((_BYTE *)a2 + 65) & 0xF3 | 4;
    if ( v7 == 1.0 )
    {
      *((_BYTE *)a2 + 65) &= ~0x20u;
      *((_BYTE *)a2 + 65) |= 0x10u;
      if ( *((float *)a2 + 2) == 0.0 && *((float *)a2 + 6) == 0.0 )
      {
        v9 = *((_BYTE *)a2 + 64) & 0xF3 | 4;
        *((_BYTE *)a2 + 64) = v9;
        if ( v7 == 1.0 )
        {
          *((_BYTE *)a2 + 65) &= ~0x20u;
          *((_BYTE *)a2 + 65) |= 0x10u;
          if ( *((float *)a2 + 1) == 0.0 && *((float *)a2 + 4) == 0.0 )
          {
            v10 = *(float *)a2;
            v11 = v9 & 0x3F | 0x40;
            *((_BYTE *)a2 + 64) = v11;
            if ( v10 == 1.0 && *((float *)a2 + 5) == 1.0 )
            {
              v12 = *((float *)a2 + 10);
              v13 = v11 & 0xCF | 0x10;
              *((_BYTE *)a2 + 64) = v13;
              if ( v12 == 1.0 && *((float *)a2 + 12) == 0.0 && *((float *)a2 + 13) == 0.0 && *((float *)a2 + 14) == 0.0 )
              {
                *((_BYTE *)a2 + 64) = v13 & 0xFC | 1;
                goto LABEL_20;
              }
            }
          }
        }
      }
    }
  }
  if ( !(*(unsigned __int8 (__fastcall **)(CShape *, unsigned int *))(*(_QWORD *)v5 + 64LL))(v5, &v82) )
  {
    if ( !(*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v5 + 8LL))(v5)
      && CMILMatrix::Is2DAxisAlignedPreserving(a2) )
    {
      v64 = (const struct CRoundedRectangleGeometryData *)(*((_QWORD *)v5 + 2) + 16LL);
      v92[10] = 0;
      CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
        v64,
        a2,
        (struct CRoundedRectangleGeometryData *)&v91);
      v66 = CThreadContext::GetObjectCache(v65);
      v67 = 0LL;
      v68 = *((_DWORD *)v66 + 1);
      if ( v68 )
      {
        v67 = (CRoundedRectangleShape *)*((_QWORD *)v66 + 1);
        *((_QWORD *)v66 + 1) = *(_QWORD *)v67;
        *((_DWORD *)v66 + 1) = v68 - 1;
      }
      if ( v67 || (v67 = (CRoundedRectangleShape *)DefaultHeap::Alloc(0x18uLL)) != 0LL )
      {
        v69 = CRoundedRectangleShape::CRoundedRectangleShape(v67, (const struct CRoundedRectangleGeometryData *)&v91);
        *(_QWORD *)v3 = v69;
        if ( v69 )
          goto LABEL_36;
      }
      else
      {
        *(_QWORD *)v3 = 0LL;
      }
      v81 = 333;
      goto LABEL_155;
    }
LABEL_36:
    if ( *(_QWORD *)v3 )
      goto LABEL_37;
    v76 = (*(__int64 (__fastcall **)(CShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v5 + 24LL))(
            v5,
            a2,
            &v83);
    v6 = v76;
    if ( v76 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, v76, 0x153u, 0LL);
      goto LABEL_37;
    }
    if ( (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)v5 + 56LL))(v5) )
    {
      v78 = (CPolygonShape *)DefaultHeap::Alloc(0x18uLL);
      if ( v78 )
      {
        v79 = CPolygonShape::CPolygonShape(v78, v83);
LABEL_152:
        *(_QWORD *)v3 = v79;
        if ( v79 )
          goto LABEL_37;
        v81 = 350;
        goto LABEL_155;
      }
    }
    else
    {
      v80 = (CComplexShape *)DefaultHeap::Alloc(0x18uLL);
      if ( v80 )
      {
        v79 = CComplexShape::CComplexShape(v80, v83);
        goto LABEL_152;
      }
    }
    v79 = 0LL;
    goto LABEL_152;
  }
  if ( !CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)a2)
    && !(unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a2) )
  {
    goto LABEL_36;
  }
  if ( !v82 )
  {
    v63 = (char *)DefaultHeap::Alloc(0x60uLL);
    v18 = v63;
    if ( !v63 )
    {
      v81 = 316;
      *(_QWORD *)v3 = 0LL;
      goto LABEL_155;
    }
    memset_0(v63 + 24, 0, 0x40uLL);
    *((_QWORD *)v18 + 1) = 0LL;
    *(_QWORD *)v18 = &CRegionShape::`vftable';
    *((_QWORD *)v18 + 2) = v18 + 24;
    *((_DWORD *)v18 + 6) = 0;
    *((_QWORD *)v18 + 11) = 0LL;
    goto LABEL_35;
  }
  lpMem = v89;
  v87 = v89;
  v88 = &v90;
  v85 = 0LL;
  detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::resize(
    &lpMem,
    v82,
    &v85);
  (*(void (__fastcall **)(CShape *, LPVOID, _QWORD))(*(_QWORD *)v5 + 80LL))(v5, lpMem, v82);
  for ( i = 0; i < v82; *(struct tagRECT *)((char *)lpMem + v31) = v85 )
  {
    v31 = 16LL * i;
    v85 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(a2, (struct MilRectF *)((char *)lpMem + v31));
    ++i;
  }
  if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v5 + 8LL))(v5) != 2
    || !CMILMatrix::Is2DAxisAlignedIntegerPreserving(a2) )
  {
    Current = CThreadContext::GetCurrent(&v84);
    if ( Current < 0 )
      ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
    v33 = v84;
    v18 = 0LL;
    v34 = *((_DWORD *)v84 + 9);
    if ( v34 )
    {
      v18 = (char *)*((_QWORD *)v84 + 5);
      *((_QWORD *)v84 + 5) = *(_QWORD *)v18;
      *((_DWORD *)v33 + 9) = v34 - 1;
    }
    if ( v18 || (v18 = (char *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
    {
      *((_QWORD *)v18 + 1) = 0LL;
      *(_QWORD *)v18 = &CRectanglesShape::`vftable';
      *((_QWORD *)v18 + 2) = v18 + 48;
      *((_QWORD *)v18 + 3) = v18 + 48;
      *((_DWORD *)v18 + 8) = 1;
      *(_QWORD *)(v18 + 36) = 1LL;
      TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v18 + 48);
      *((_QWORD *)v18 + 8) = 0LL;
      v35 = v82;
      v36 = lpMem;
      *((_DWORD *)v18 + 10) = 0;
      DynArrayImpl<0>::ShrinkToSize(v18 + 16, 16LL);
      v37 = *((_QWORD *)v18 + 8);
      if ( v37 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
        *((_QWORD *)v18 + 8) = 0LL;
      }
      v38 = DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
              v18 + 16,
              v36,
              v35);
      v6 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x133u, 0LL);
        v62 = lpMem;
        if ( (v87 - (_BYTE *)lpMem) >> 4 )
        {
          detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
            &lpMem,
            0LL);
          v62 = lpMem;
        }
        lpMem = 0LL;
        if ( v62 == v89 )
          v62 = 0LL;
        operator delete(v62);
        goto LABEL_143;
      }
      *(_QWORD *)v3 = v18;
      goto LABEL_60;
    }
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, -2147024882, 0x131u, 0LL);
    v59 = lpMem;
    if ( (v87 - (_BYTE *)lpMem) >> 4 )
    {
      detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
        &lpMem,
        0LL);
      v59 = lpMem;
    }
    lpMem = 0LL;
    if ( v59 == v89 )
      v59 = 0LL;
LABEL_101:
    operator delete(v59);
    goto LABEL_37;
  }
  v50 = (char *)DefaultHeap::Alloc(0x60uLL);
  v52 = v50;
  if ( !v50 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, -2147024882, 0x11Fu, 0LL);
    v59 = lpMem;
    if ( (v87 - (_BYTE *)lpMem) >> 4 )
    {
      detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
        &lpMem,
        0LL);
      v59 = lpMem;
    }
    lpMem = 0LL;
    if ( v59 == v89 )
      v59 = 0LL;
    goto LABEL_101;
  }
  memset_0(v50 + 24, 0, 0x40uLL);
  *((_QWORD *)v52 + 1) = 0LL;
  *(_QWORD *)v52 = &CRegionShape::`vftable';
  v53 = 0;
  *((_QWORD *)v52 + 2) = v52 + 24;
  *((_DWORD *)v52 + 6) = 0;
  *((_QWORD *)v52 + 11) = 0LL;
  v91 = v92;
  v92[0] = 0;
  if ( !v82 )
  {
LABEL_87:
    **((_DWORD **)v52 + 2) = 0;
    v56 = *((_QWORD *)v52 + 11);
    *((_QWORD *)v52 + 11) = 0LL;
    if ( v56 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    v57 = FastRegion::CRegion::Copy((int **)v52 + 2, &v91);
    if ( v57 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v57, retaddr);
    *(_QWORD *)v3 = v52;
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v91);
LABEL_60:
    v40 = lpMem;
    v41 = (v87 - (_BYTE *)lpMem) >> 4;
    if ( v41 )
      v87 -= 16 * v41;
    lpMem = 0LL;
    if ( v40 != v89 && v40 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v40);
    }
    goto LABEL_36;
  }
  while ( 1 )
  {
    CMilRectLFromMilRectF(&v85);
    v54 = CRegion::TryAddRectangle((CRegion *)&v91, &v85);
    v6 = v54;
    if ( v54 < 0 )
      break;
    if ( ++v53 >= v82 )
      goto LABEL_87;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x125u, 0LL);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v91);
  v58 = lpMem;
  if ( (v87 - (_BYTE *)lpMem) >> 4 )
  {
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      &lpMem,
      0LL);
    v58 = lpMem;
  }
  lpMem = 0LL;
  if ( v58 == v89 )
    v58 = 0LL;
  operator delete(v58);
  CRegionShape::`vector deleting destructor'((CRegionShape *)v52, 1);
LABEL_37:
  if ( v83 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v83 + 16LL))(v83);
  return (unsigned int)v6;
}
