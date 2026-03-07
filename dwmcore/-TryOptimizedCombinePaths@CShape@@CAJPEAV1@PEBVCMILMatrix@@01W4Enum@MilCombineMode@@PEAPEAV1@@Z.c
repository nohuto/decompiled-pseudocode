__int64 __fastcall CShape::TryOptimizedCombinePaths(
        struct CRectanglesShape *a1,
        __int64 a2,
        CShape *a3,
        __int64 a4,
        int a5,
        struct CShape **a6)
{
  const struct CRoundedRectangleGeometryData *v6; // r13
  unsigned int v10; // esi
  bool v11; // r15
  char v12; // al
  char v13; // dl
  char v14; // r9
  char v15; // al
  bool v16; // r8
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ecx
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  _DWORD *Value; // rdi
  int v25; // ecx
  _QWORD *v26; // rbx
  void *v27; // rcx
  __int64 v28; // rcx
  __int64 v30; // rax
  const struct CRoundedRectangleGeometryData *v31; // r15
  __int64 v32; // rax
  char v33; // al
  struct CRectanglesShape *v34; // rcx
  struct CObjectCache *v35; // rax
  char *v36; // rbx
  int v37; // edx
  struct CRoundedRectangleShape::SharedData *v38; // rax
  char *v39; // rax
  unsigned int v40; // ecx
  const struct tagRECT *v41; // r14
  __int64 v42; // rcx
  int v43; // eax
  struct CObjectCache *v44; // rax
  __int64 v45; // r9
  _QWORD *v46; // r8
  int v47; // edx
  const struct MilRectF *BaseRect; // rax
  CRectanglesShape *v49; // r8
  CRectanglesShape *v50; // rax
  unsigned int v51; // ecx
  int v52; // r9d
  __int64 v53; // rax
  unsigned int v54; // ecx
  struct CObjectCache *ObjectCache; // rdx
  CRectanglesShape *v56; // rax
  int v57; // r8d
  unsigned int v58; // ecx
  CRectanglesShape *v59; // rax
  struct CRectanglesShape *v60; // rcx
  __int64 v61; // rdx
  const struct tagRECT *v62; // rax
  const struct tagRECT *v63; // rax
  int v64; // eax
  char *v65; // rax
  unsigned int v66; // ecx
  char *v67; // rbx
  __int64 v68; // rcx
  int v69; // eax
  struct CObjectCache *v70; // rdx
  CRectanglesShape *v71; // rax
  int v72; // r8d
  unsigned int v73; // ecx
  CRectanglesShape *v74; // rax
  __int64 v75; // rdx
  const struct tagRECT *v76; // rax
  int v77; // eax
  const struct tagRECT *v78; // rax
  int v79; // eax
  char *v80; // rax
  unsigned int v81; // ecx
  char *v82; // rbx
  __int64 v83; // rcx
  int v84; // eax
  CThreadContext *v85; // rax
  unsigned int v86; // ecx
  CThreadContext *v87; // rax
  int v88; // eax
  unsigned int v89; // ecx
  int **v90; // rbx
  int v91; // eax
  unsigned int v92; // ecx
  const struct FastRegion::Internal::CRgnData **v93; // rdi
  int v94; // eax
  unsigned int v95; // ecx
  int v96; // eax
  int v97; // eax
  int v98; // eax
  char *v99; // rax
  unsigned int v100; // ecx
  char *v101; // r14
  __int64 v102; // rcx
  int v103; // eax
  __int64 v104; // rax
  struct CRectanglesShape *v105; // rcx
  struct CObjectCache *v106; // rdx
  CRectanglesShape *v107; // rax
  int v108; // r8d
  unsigned int v109; // ecx
  CRectanglesShape *v110; // rax
  struct CObjectCache *v111; // rdx
  CRectanglesShape *v112; // rax
  int v113; // r8d
  unsigned int v114; // ecx
  CRectanglesShape *v115; // rax
  unsigned int v116; // [rsp+20h] [rbp-E0h]
  CRegionShape *v117[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v118; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v119; // [rsp+50h] [rbp-B0h] BYREF
  int *v120; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v121[18]; // [rsp+68h] [rbp-98h] BYREF
  const struct FastRegion::Internal::CRgnData *v122[6]; // [rsp+B0h] [rbp-50h] BYREF
  int v123; // [rsp+E0h] [rbp-20h]
  void *retaddr; // [rsp+148h] [rbp+48h]

  v6 = 0LL;
  v10 = 0;
  *a6 = 0LL;
  v11 = !a1 || (*(unsigned __int8 (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 16LL))(a1);
  if ( !a3 || (v12 = (*(__int64 (__fastcall **)(CShape *))(*(_QWORD *)a3 + 16LL))(a3)) != 0 )
    v12 = 1;
  if ( v11 )
  {
    if ( v12 )
    {
      ObjectCache = CThreadContext::GetObjectCache(a1);
      v56 = 0LL;
      v57 = *((_DWORD *)ObjectCache + 1);
      if ( v57 )
      {
        v56 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v56;
        *((_DWORD *)ObjectCache + 1) = v57 - 1;
      }
      if ( v56 || (v56 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
      {
        v59 = CRectanglesShape::CRectanglesShape(v56);
        *a6 = v59;
        if ( v59 )
          return v10;
      }
      else
      {
        *a6 = 0LL;
      }
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, -2147024882, 0x268u, 0LL);
      return v10;
    }
LABEL_219:
    if ( a5 )
    {
      v105 = (struct CRectanglesShape *)(unsigned int)(a5 - 1);
      if ( a5 == 1 )
      {
        v111 = CThreadContext::GetObjectCache(v105);
        v112 = 0LL;
        v113 = *((_DWORD *)v111 + 1);
        if ( v113 )
        {
          v112 = (CRectanglesShape *)*((_QWORD *)v111 + 1);
          *((_QWORD *)v111 + 1) = *(_QWORD *)v112;
          *((_DWORD *)v111 + 1) = v113 - 1;
        }
        if ( v112 || (v112 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
        {
          v115 = CRectanglesShape::CRectanglesShape(v112);
          *a6 = v115;
          if ( v115 )
            return v10;
        }
        else
        {
          *a6 = 0LL;
        }
        v10 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v114, 0LL, 0, -2147024882, 0x27Cu, 0LL);
        return v10;
      }
      if ( a5 != 2 )
        return v10;
      if ( v11 )
      {
        v106 = CThreadContext::GetObjectCache(v105);
        v107 = 0LL;
        v108 = *((_DWORD *)v106 + 1);
        if ( v108 )
        {
          v107 = (CRectanglesShape *)*((_QWORD *)v106 + 1);
          *((_QWORD *)v106 + 1) = *(_QWORD *)v107;
          *((_DWORD *)v106 + 1) = v108 - 1;
        }
        if ( v107 || (v107 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
        {
          v110 = CRectanglesShape::CRectanglesShape(v107);
          *a6 = v110;
          if ( v110 )
            return v10;
        }
        else
        {
          *a6 = 0LL;
        }
        v10 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v109, 0LL, 0, -2147024882, 0x284u, 0LL);
        return v10;
      }
      v18 = CShape::CopyShape(a1, 0LL, a6);
      v10 = v18;
      if ( v18 >= 0 )
        return v10;
      v116 = 649;
    }
    else if ( v11 )
    {
      v18 = CShape::CopyShape(a3, (const struct CMILMatrix *)a4, a6);
      v10 = v18;
      if ( v18 >= 0 )
        return v10;
      v116 = 625;
    }
    else
    {
      v18 = CShape::CopyShape(a1, 0LL, a6);
      v10 = v18;
      if ( v18 >= 0 )
        return v10;
      v116 = 629;
    }
    goto LABEL_244;
  }
  if ( v12 )
    goto LABEL_219;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CRectanglesShape *, CRegionShape **))(*(_QWORD *)a1 + 64LL))(a1, v117)
    || LODWORD(v117[0]) != 1
    || !(*(unsigned __int8 (__fastcall **)(CShape *, CRegionShape **))(*(_QWORD *)a3 + 64LL))(a3, v117)
    || LODWORD(v117[0]) != 1 )
  {
    if ( (*(unsigned int (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 8LL))(a1) != 2
      || (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)a3 + 8LL))(a3) != 2
      || a4 && !CMILMatrix::Is2DAxisAlignedIntegerPreserving((CMILMatrix *)a4) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct CRectanglesShape *, CRegionShape **))(*(_QWORD *)a1 + 64LL))(
             a1,
             v117)
        && LODWORD(v117[0]) == 1
        && (*(unsigned __int8 (__fastcall **)(CShape *, _QWORD))(*(_QWORD *)a3 + 64LL))(a3, 0LL) )
      {
        if ( a4 || a5 != 1 )
          return v10;
        v104 = *(_QWORD *)a1;
        v118 = 0LL;
        (*(void (__fastcall **)(struct CRectanglesShape *, __int128 *, __int64))(v104 + 80))(a1, &v118, 1LL);
        if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)a3 + 8LL))(a3) == 2 )
        {
          v18 = CRegionShape::IntersectWithRect(a3, &v118, a6);
          v10 = v18;
          if ( v18 >= 0 )
            return v10;
          v116 = 810;
        }
        else
        {
          v18 = CRectanglesShape::IntersectWithRect(a3, &v118, a6);
          v10 = v18;
          if ( v18 >= 0 )
            return v10;
          v116 = 817;
        }
      }
      else
      {
        if ( (*(unsigned int (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 8LL))(a1)
          && (!(*(unsigned __int8 (__fastcall **)(struct CRectanglesShape *, CRegionShape **))(*(_QWORD *)a1 + 64LL))(
                 a1,
                 v117)
           || LODWORD(v117[0]) != 1)
          || (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)a3 + 8LL))(a3) && !CShape::IsAxisAlignedRectangle(a3)
          || a5 != 1
          || a4
          && !CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a4)
          && !(unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a4) )
        {
          return v10;
        }
        if ( !(*(unsigned int (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 8LL))(a1) )
          v6 = (const struct CRoundedRectangleGeometryData *)(*((_QWORD *)a1 + 2) + 16LL);
        v30 = *(_QWORD *)a3;
        v31 = 0LL;
        v121[10] = 0;
        if ( !(*(unsigned int (__fastcall **)(CShape *))(v30 + 8))(a3) )
        {
          v31 = (const struct CRoundedRectangleGeometryData *)(*((_QWORD *)a3 + 2) + 16LL);
          if ( a4 )
          {
            CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
              (const struct CRoundedRectangleGeometryData *)(*((_QWORD *)a3 + 2) + 16LL),
              (const struct CMILMatrix *)a4,
              (struct CRoundedRectangleGeometryData *)&v120);
            v31 = (const struct CRoundedRectangleGeometryData *)&v120;
          }
        }
        v123 = 0;
        if ( v6 && v31 )
        {
          v33 = CRoundedRectangleGeometryData::TryMerge(v6, v31, (struct CRoundedRectangleGeometryData *)v122);
        }
        else
        {
          v118 = 0LL;
          if ( v6 )
          {
            v53 = *(_QWORD *)a3;
            v117[0] = v6;
            v18 = (*(__int64 (__fastcall **)(CShape *, __int128 *, __int64))(v53 + 48))(a3, &v118, a4);
            v10 = v18;
            if ( v18 < 0 )
            {
              v116 = 877;
              goto LABEL_244;
            }
          }
          else
          {
            v32 = *(_QWORD *)a1;
            v117[0] = v31;
            v18 = (*(__int64 (__fastcall **)(struct CRectanglesShape *, __int128 *, _QWORD))(v32 + 48))(a1, &v118, 0LL);
            v10 = v18;
            if ( v18 < 0 )
            {
              v116 = 884;
              goto LABEL_244;
            }
          }
          v33 = CRoundedRectangleGeometryData::TryClipWithRect(v117[0], &v118, v122);
        }
        if ( !v33 )
          return v10;
        if ( !CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)v122) )
        {
          v44 = CThreadContext::GetObjectCache(v34);
          v46 = 0LL;
          v47 = *((_DWORD *)v44 + 1);
          if ( v47 )
          {
            v46 = (_QWORD *)*((_QWORD *)v44 + 1);
            *((_QWORD *)v44 + 1) = *v46;
            *((_DWORD *)v44 + 1) = v47 - 1;
          }
          if ( v46 || (v46 = DefaultHeap::Alloc(0x48uLL)) != 0LL )
          {
            BaseRect = (const struct MilRectF *)CRoundedRectangleGeometryData::GetBaseRect(v122, &v118, v46, v45);
            v50 = CRectanglesShape::CRectanglesShape(v49, BaseRect);
            *a6 = v50;
            if ( v50 )
              return v10;
          }
          else
          {
            *a6 = 0LL;
          }
          v10 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, -2147024882, 0x37Fu, 0LL);
          return v10;
        }
        if ( v6 && CRoundedRectangleGeometryData::operator==((__int64)v122, (__int64)v6) )
        {
          v18 = CShape::CopyShape(a1, 0LL, a6);
          v10 = v18;
          if ( v18 >= 0 )
            return v10;
          v116 = 901;
        }
        else
        {
          if ( !v31 || !CRoundedRectangleGeometryData::operator==((__int64)v122, (__int64)v31) )
          {
            v35 = CThreadContext::GetObjectCache(v34);
            v36 = 0LL;
            v37 = *((_DWORD *)v35 + 1);
            if ( v37 )
            {
              v36 = (char *)*((_QWORD *)v35 + 1);
              *((_QWORD *)v35 + 1) = *(_QWORD *)v36;
              *((_DWORD *)v35 + 1) = v37 - 1;
            }
            if ( !v36 )
            {
              v36 = (char *)DefaultHeap::Alloc(0x18uLL);
              if ( !v36 )
              {
                v10 = -2147024882;
                *a6 = 0LL;
                MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, -2147024882, 0x390u, 0LL);
                return v10;
              }
            }
            *((_QWORD *)v36 + 1) = 0LL;
            *(_QWORD *)v36 = &CRoundedRectangleShape::`vftable';
            v38 = CRoundedRectangleShape::SharedData::Create((const struct CRoundedRectangleGeometryData *)v122);
            *((_QWORD *)v36 + 2) = v38;
            if ( v38 )
              (**(void (__fastcall ***)(struct CRoundedRectangleShape::SharedData *))v38)(v38);
            goto LABEL_74;
          }
          v18 = CShape::CopyShape(a3, (const struct CMILMatrix *)a4, a6);
          v10 = v18;
          if ( v18 >= 0 )
            return v10;
          v116 = 907;
        }
      }
LABEL_244:
      v52 = v18;
      goto LABEL_94;
    }
    v117[0] = 0LL;
    v88 = CShape::CopyShape(a1, 0LL, v117);
    v90 = (int **)v117[0];
    v10 = v88;
    if ( v88 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v89, 0LL, 0, v88, 0x2FDu, 0LL);
    }
    else
    {
      v117[0] = 0LL;
      v91 = CShape::CopyShape(a3, (const struct CMILMatrix *)a4, v117);
      v93 = (const struct FastRegion::Internal::CRgnData **)v117[0];
      v10 = v91;
      if ( v91 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v92, 0LL, 0, v91, 0x300u, 0LL);
        if ( v93 )
          goto LABEL_194;
      }
      else
      {
        v121[0] = 0;
        v120 = v121;
        v94 = FastRegion::CRegion::Copy(&v120, v90 + 2);
        v10 = v94;
        if ( v94 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v95, 0LL, 0, v94, 0x303u, 0LL);
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v120);
          if ( v93 )
            goto LABEL_194;
        }
        else
        {
          if ( a5 )
          {
            if ( a5 == 1 )
            {
              v97 = FastRegion::CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)&v120, v93 + 2);
              if ( v97 < 0 )
                ModuleFailFastForHRESULT((unsigned int)v97, retaddr);
            }
            else if ( a5 == 2 )
            {
              v96 = FastRegion::CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)&v120, v93 + 2);
              if ( v96 < 0 )
                ModuleFailFastForHRESULT((unsigned int)v96, retaddr);
            }
          }
          else
          {
            v98 = FastRegion::CRegion::Union((const struct FastRegion::Internal::CRgnData **)&v120, v93 + 2);
            if ( v98 < 0 )
              ModuleFailFastForHRESULT((unsigned int)v98, retaddr);
          }
          v99 = (char *)DefaultHeap::Alloc(0x60uLL);
          v101 = v99;
          if ( v99 )
          {
            memset_0(v99 + 24, 0, 0x40uLL);
            *((_QWORD *)v101 + 1) = 0LL;
            *(_QWORD *)v101 = &CRegionShape::`vftable';
            *((_QWORD *)v101 + 2) = v101 + 24;
            *((_DWORD *)v101 + 6) = 0;
            *((_QWORD *)v101 + 11) = 0LL;
            **((_DWORD **)v101 + 2) = 0;
            v102 = *((_QWORD *)v101 + 11);
            *((_QWORD *)v101 + 11) = 0LL;
            if ( v102 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v102 + 16LL))(v102);
            v103 = FastRegion::CRegion::Copy((int **)v101 + 2, &v120);
            if ( v103 < 0 )
              ModuleFailFastForHRESULT((unsigned int)v103, retaddr);
            *a6 = (struct CShape *)v101;
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v120);
            if ( !v93 )
              goto LABEL_196;
            goto LABEL_194;
          }
          v10 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v100, 0LL, 0, -2147024882, 0x316u, 0LL);
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v120);
          if ( v93 )
LABEL_194:
            CRegionShape::`vector deleting destructor'((CRegionShape *)v93, 1);
        }
      }
    }
LABEL_196:
    if ( v90 )
      CRegionShape::`vector deleting destructor'((CRegionShape *)v90, 1);
    return v10;
  }
  if ( !a4 )
    goto LABEL_20;
  v13 = *(_BYTE *)(a4 + 64);
  if ( v13 >> 6 )
  {
    if ( v13 >> 6 == 1 )
      goto LABEL_20;
  }
  else
  {
    v14 = *(_BYTE *)(a4 + 65);
    v15 = (char)(4 * v14) >> 6;
    if ( v15 )
    {
      v16 = v15 == 1;
    }
    else
    {
      v16 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                           (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a4 + 28) & _xmm) * 61440.0)
                                         + (float)(COERCE_FLOAT(*(_DWORD *)(a4 + 12) & _xmm) * 61440.0))
                                 + COERCE_FLOAT(*(_DWORD *)(a4 + 60) & _xmm))
                         - 1.0) & _xmm) < 0.000081380211;
      *(_BYTE *)(a4 + 65) = v14 ^ (v14 ^ (-16 - 32 * v16)) & 0x30;
    }
    if ( v16
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a4 + 4) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a4 + 16) - 0.0) & _xmm) < 0.000081380211 )
    {
      *(_BYTE *)(a4 + 64) = v13 & 0x3F | 0x40;
      goto LABEL_20;
    }
    *(_BYTE *)(a4 + 64) = v13 | 0xC0;
  }
  if ( !(unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a4) )
    return v10;
LABEL_20:
  v17 = *(_QWORD *)a1;
  *(_OWORD *)v117 = 0LL;
  v119 = 0LL;
  v18 = (*(__int64 (__fastcall **)(struct CRectanglesShape *, CRegionShape **, _QWORD))(v17 + 48))(a1, v117, 0LL);
  v10 = v18;
  if ( v18 < 0 )
  {
    v116 = 666;
    goto LABEL_244;
  }
  v18 = (*(__int64 (__fastcall **)(CShape *, __int128 *, __int64))(*(_QWORD *)a3 + 48LL))(a3, &v119, a4);
  v10 = v18;
  if ( v18 < 0 )
  {
    v116 = 667;
    goto LABEL_244;
  }
  if ( a5 != 1 )
  {
    if ( a5 )
    {
      if ( a5 != 2 )
        return v10;
      if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(&v119, v117)
        || TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v117) )
      {
        v70 = CThreadContext::GetObjectCache(v60);
        v71 = 0LL;
        v72 = *((_DWORD *)v70 + 1);
        if ( v72 )
        {
          v71 = (CRectanglesShape *)*((_QWORD *)v70 + 1);
          *((_QWORD *)v70 + 1) = *(_QWORD *)v71;
          *((_DWORD *)v70 + 1) = v72 - 1;
        }
        if ( v71 || (v71 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
        {
          v74 = CRectanglesShape::CRectanglesShape(v71);
          *a6 = v74;
          if ( v74 )
            return v10;
        }
        else
        {
          *a6 = 0LL;
        }
        v10 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, -2147024882, 0x2B7u, 0LL);
        return v10;
      }
      if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectInclusive(
                               v117,
                               &v119) )
      {
        v18 = CShape::CopyShape(a1, 0LL, a6);
        v10 = v18;
        if ( v18 >= 0 )
          return v10;
        v116 = 700;
        goto LABEL_244;
      }
      if ( !(unsigned __int8)CanCombineToRegion(a1, v61, a3, a4) )
        return v10;
      v62 = (const struct tagRECT *)PixelAlign((int *)&v118, (float *)v117);
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)&v120, v62);
      v63 = (const struct tagRECT *)PixelAlign((int *)&v118, (float *)&v119);
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v122, v63);
      v64 = FastRegion::CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)&v120, v122);
      if ( v64 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v64, retaddr);
      v65 = (char *)DefaultHeap::Alloc(0x60uLL);
      v67 = v65;
      if ( v65 )
      {
        memset_0(v65 + 24, 0, 0x40uLL);
        *((_QWORD *)v67 + 1) = 0LL;
        *(_QWORD *)v67 = &CRegionShape::`vftable';
        *((_QWORD *)v67 + 2) = v67 + 24;
        *((_DWORD *)v67 + 6) = 0;
        *((_QWORD *)v67 + 11) = 0LL;
        **((_DWORD **)v67 + 2) = 0;
        v68 = *((_QWORD *)v67 + 11);
        *((_QWORD *)v67 + 11) = 0LL;
        if ( v68 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
        v69 = FastRegion::CRegion::Copy((int **)v67 + 2, &v120);
        if ( v69 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v69, retaddr);
        *a6 = (struct CShape *)v67;
      }
      else
      {
        v10 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, -2147024882, 0x2CCu, 0LL);
      }
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v122);
LABEL_137:
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v120);
      return v10;
    }
    if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(v117, &v119)
      || TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v119) )
    {
      v18 = CShape::CopyShape(a1, 0LL, a6);
      v10 = v18;
      if ( v18 >= 0 )
        return v10;
      v116 = 728;
    }
    else
    {
      if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(&v119, v117)
        && !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v117) )
      {
        if ( !(unsigned __int8)CanCombineToRegion(a1, v75, a3, a4) )
          return v10;
        v121[0] = 0;
        v120 = v121;
        v76 = (const struct tagRECT *)PixelAlign((int *)&v118, (float *)v117);
        v77 = CRegion::TryAddRectangle((CRegion *)&v120, v76);
        if ( v77 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v77, retaddr);
        v78 = (const struct tagRECT *)PixelAlign((int *)&v118, (float *)&v119);
        v79 = CRegion::TryAddRectangle((CRegion *)&v120, v78);
        if ( v79 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v79, retaddr);
        v80 = (char *)DefaultHeap::Alloc(0x60uLL);
        v82 = v80;
        if ( !v80 )
        {
          v10 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0, -2147024882, 0x2EBu, 0LL);
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v120);
          return v10;
        }
        memset_0(v80 + 24, 0, 0x40uLL);
        *((_QWORD *)v82 + 1) = 0LL;
        *(_QWORD *)v82 = &CRegionShape::`vftable';
        *((_QWORD *)v82 + 2) = v82 + 24;
        *((_DWORD *)v82 + 6) = 0;
        *((_QWORD *)v82 + 11) = 0LL;
        **((_DWORD **)v82 + 2) = 0;
        v83 = *((_QWORD *)v82 + 11);
        *((_QWORD *)v82 + 11) = 0LL;
        if ( v83 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 16LL))(v83);
        v84 = FastRegion::CRegion::Copy((int **)v82 + 2, &v120);
        if ( v84 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v84, retaddr);
        *a6 = (struct CShape *)v82;
        goto LABEL_137;
      }
      v18 = CShape::CopyShape(a3, (const struct CMILMatrix *)a4, a6);
      v10 = v18;
      if ( v18 >= 0 )
        return v10;
      v116 = 732;
    }
    goto LABEL_244;
  }
  v20 = *(float *)v117;
  if ( *(float *)&v119 > *(float *)v117 )
  {
    LODWORD(v117[0]) = v119;
    v20 = *(float *)&v119;
  }
  v21 = *((float *)v117 + 1);
  if ( *((float *)&v119 + 1) > *((float *)v117 + 1) )
  {
    HIDWORD(v117[0]) = DWORD1(v119);
    v21 = *((float *)&v119 + 1);
  }
  v22 = *(float *)&v117[1];
  if ( *(float *)&v117[1] > *((float *)&v119 + 2) )
  {
    LODWORD(v117[1]) = DWORD2(v119);
    v22 = *((float *)&v119 + 2);
  }
  v23 = *((float *)&v117[1] + 1);
  if ( *((float *)&v117[1] + 1) > *((float *)&v119 + 3) )
  {
    HIDWORD(v117[1]) = HIDWORD(v119);
    v23 = *((float *)&v119 + 3);
  }
  if ( v22 <= v20 || v23 <= v21 )
  {
    v117[1] = 0LL;
    v117[0] = 0LL;
  }
  if ( (*(unsigned int (__fastcall **)(struct CRectanglesShape *))(*(_QWORD *)a1 + 8LL))(a1) == 2
    && (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)a3 + 8LL))(a3) == 2
    && (!a4 || CMILMatrix::Is2DAxisAlignedIntegerPreserving((CMILMatrix *)a4)) )
  {
    v39 = (char *)DefaultHeap::Alloc(0x60uLL);
    v36 = v39;
    if ( !v39 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, -2147024882, 0x2A6u, 0LL);
      return (unsigned int)-2147024882;
    }
    memset_0(v39 + 24, 0, 0x40uLL);
    *((_QWORD *)v36 + 1) = 0LL;
    *(_QWORD *)v36 = &CRegionShape::`vftable';
    *((_QWORD *)v36 + 2) = v36 + 24;
    *((_DWORD *)v36 + 6) = 0;
    *((_QWORD *)v36 + 11) = 0LL;
    v41 = (const struct tagRECT *)CMilRectLFromMilRectF(&v118);
    **((_DWORD **)v36 + 2) = 0;
    v42 = *((_QWORD *)v36 + 11);
    *((_QWORD *)v36 + 11) = 0LL;
    if ( v42 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    v43 = CRegion::TryAddRectangles((struct FastRegion::Internal::CRgnData **)v36 + 2, v41, 1u);
    if ( v43 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v43, retaddr);
LABEL_74:
    *a6 = (struct CShape *)v36;
    return v10;
  }
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v85 = (CThreadContext *)operator new(0x190uLL);
    if ( !v85 || (v87 = CThreadContext::CThreadContext(v85), (Value = v87) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v86, 0LL, 0, -2147024882, 0x42u, 0LL);
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v87);
  }
  v25 = Value[9];
  v26 = 0LL;
  if ( v25 )
  {
    v26 = (_QWORD *)*((_QWORD *)Value + 5);
    *((_QWORD *)Value + 5) = *v26;
    Value[9] = v25 - 1;
  }
  if ( !v26 )
  {
    v26 = DefaultHeap::Alloc(0x48uLL);
    if ( !v26 )
    {
      v10 = -2147024882;
      v52 = -2147024882;
      *a6 = 0LL;
      v116 = 685;
LABEL_94:
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v52, v116, 0LL);
      return v10;
    }
  }
  v26[1] = 0LL;
  *v26 = &CRectanglesShape::`vftable';
  v26[2] = v26 + 6;
  v26[3] = v26 + 6;
  *((_DWORD *)v26 + 8) = 1;
  *(_QWORD *)((char *)v26 + 36) = 1LL;
  TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v26 + 6);
  v26[8] = 0LL;
  v27 = (void *)v26[2];
  *((_DWORD *)v26 + 10) = 0;
  if ( v27 != (void *)v26[3] )
  {
    operator delete(v27);
    v26[2] = v26[3];
    *((_DWORD *)v26 + 9) = *((_DWORD *)v26 + 8);
  }
  v28 = v26[8];
  if ( v28 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    v26[8] = 0LL;
  }
  v118 = *(_OWORD *)v117;
  DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
    v26 + 2,
    &v118,
    1LL);
  *a6 = (struct CShape *)v26;
  return v10;
}
