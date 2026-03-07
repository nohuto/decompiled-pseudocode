void __fastcall CDrawListEntryBuilder::AppendHWGeometry(
        CDrawListEntryBuilder *this,
        const struct Mesh::MeshDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // r12
  unsigned int v7; // edx
  int v8; // eax
  __int64 *v9; // r9
  unsigned __int64 *v10; // rdi
  unsigned __int64 v11; // r10
  __int64 v12; // r8
  unsigned int v13; // eax
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rcx
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rcx
  _OWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r13
  _OWORD *v25; // rsi
  __int64 v26; // r10
  unsigned __int64 v27; // r8
  __int64 v28; // r13
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rcx
  __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  __int64 v35; // r11
  unsigned __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rcx
  _OWORD *v39; // rax
  __int64 v40; // r13
  _OWORD *v41; // rsi
  __int64 v42; // rdi
  unsigned __int64 *v43; // r13
  unsigned __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rax
  float *v47; // rcx
  char *v48; // rax
  unsigned __int64 v49; // r12
  __int64 v50; // rcx
  unsigned __int64 v51; // r14
  unsigned __int64 v52; // rsi
  __int64 v53; // r14
  __int64 v54; // r9
  __int64 v55; // rdi
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // r12
  unsigned __int64 v59; // rsi
  __int64 v60; // r12
  __int64 v61; // r9
  __int64 v62; // rdi
  unsigned __int64 v63; // rdx
  unsigned int v64; // edi
  unsigned __int64 v65; // rdx
  unsigned int j; // edx
  float *v67; // rcx
  float v68; // xmm1_4
  int v69; // eax
  float v70; // xmm1_4
  int v71; // ecx
  int v72; // esi
  int v73; // eax
  int v74; // eax
  int v75; // eax
  unsigned int v76; // eax
  int v77; // eax
  unsigned int v78; // ecx
  int v79; // xmm0_4
  char v80; // al
  unsigned __int64 v81; // rdi
  char v82; // r15
  unsigned __int64 v83; // r10
  int v84; // esi
  bool v85; // r9
  unsigned int v86; // edx
  __int64 v87; // rcx
  char v88; // r11
  __int64 v89; // rax
  _BYTE *v90; // rax
  unsigned __int64 v91; // rsi
  LPVOID v92; // rax
  __int64 v93; // r8
  __int64 v94; // rdx
  LPVOID v95; // rdi
  CDrawListEntryBuilder *v96; // rcx
  unsigned __int64 v97; // rsi
  LPVOID v98; // rax
  __int64 v99; // r8
  __int64 v100; // rdx
  LPVOID v101; // rdi
  CDrawListEntryBuilder *v102; // rcx
  unsigned __int64 v103; // r8
  _OWORD *i; // r13
  _OWORD *v105; // r8
  unsigned __int64 v106; // rcx
  _OWORD *v107; // r11
  __int64 v108; // rdi
  _OWORD *v109; // rax
  __int128 v110; // xmm1
  __int128 v111; // xmm0
  struct Mesh::VertexAAOffsetDesc *v112; // rcx
  __int64 v113; // r8
  unsigned __int64 v114; // r14
  _OWORD *v115; // rax
  __int16 v116; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v117; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v118; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v119; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v120; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v121; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v122; // [rsp+60h] [rbp-A0h]
  __int64 v123; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v124; // [rsp+70h] [rbp-90h]
  int v125; // [rsp+74h] [rbp-8Ch]
  _OWORD *v126; // [rsp+80h] [rbp-80h]
  __int64 v127; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v128; // [rsp+98h] [rbp-68h]
  int v129; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 v130; // [rsp+A0h] [rbp-60h]
  unsigned int v131; // [rsp+A8h] [rbp-58h]
  int v132; // [rsp+ACh] [rbp-54h]
  __int64 v133; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v134; // [rsp+B8h] [rbp-48h]
  float *v135; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v136; // [rsp+C8h] [rbp-38h]
  const struct PrimitiveVertexAttributesDesc *v137; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v138; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v139; // [rsp+E8h] [rbp-18h]
  struct Mesh::VertexAAOffsetDesc *v140; // [rsp+F8h] [rbp-8h]
  char *v141; // [rsp+100h] [rbp+0h]
  __int64 v142; // [rsp+108h] [rbp+8h]
  _BYTE v143[32]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v144; // [rsp+130h] [rbp+30h] BYREF
  __int64 v145; // [rsp+140h] [rbp+40h]
  struct Mesh::VertexAAOffsetDesc *v146; // [rsp+150h] [rbp+50h] BYREF
  _BYTE *v147; // [rsp+158h] [rbp+58h]
  char *v148; // [rsp+160h] [rbp+60h]
  _BYTE v149[1280]; // [rsp+168h] [rbp+68h] BYREF
  char v150; // [rsp+668h] [rbp+568h] BYREF
  unsigned __int64 v151; // [rsp+670h] [rbp+570h] BYREF
  unsigned __int64 v152; // [rsp+678h] [rbp+578h]
  __int64 v153; // [rsp+680h] [rbp+580h]

  v137 = a3;
  v4 = 0LL;
  v117 = 0LL;
  v6 = 0LL;
  if ( !*((_BYTE *)a2 + 52) )
  {
    v81 = *((_QWORD *)a2 + 1);
    if ( v81 < 3 )
      goto LABEL_78;
    v82 = *((_BYTE *)a2 + 53);
    v83 = 0LL;
    if ( v82 )
    {
      v6 = *((_QWORD *)a2 + 1);
      v83 = v81 - 2;
    }
    v84 = *((_DWORD *)a2 + 12);
    if ( !v84 )
    {
LABEL_76:
      v4 = 3 * v83;
      goto LABEL_77;
    }
    v85 = Mesh::CheckExteriorFilterCondition(a2, v81 - 1);
    v86 = 0;
    v87 = 0LL;
    while ( 1 )
    {
      if ( *(_DWORD *)(*((_QWORD *)a2 + 3) + 4 * v87) != 3 )
        goto LABEL_74;
      if ( v84 == 3 )
        break;
      if ( v84 == 1 )
      {
LABEL_81:
        v89 = !v85 + 1LL;
        if ( !v82 )
          v89 *= 2LL;
        v6 += v89;
        v85 = 1;
        v83 += 2LL;
        goto LABEL_75;
      }
      if ( v84 == 2 )
      {
        v88 = *(_BYTE *)(v87 + *((_QWORD *)a2 + 5));
LABEL_73:
        if ( v88 )
          goto LABEL_81;
      }
LABEL_74:
      v85 = 0;
LABEL_75:
      v87 = ++v86;
      if ( v86 >= v81 )
        goto LABEL_76;
    }
    v88 = *(_BYTE *)(v87 + *((_QWORD *)a2 + 5)) == 0;
    goto LABEL_73;
  }
  v7 = *((_DWORD *)a2 + 12);
  v119 = 0LL;
  v118 = 0LL;
  if ( v7 > 1 )
    goto LABEL_56;
  v8 = *((_DWORD *)a2 + 6);
  if ( !v8 )
  {
    if ( !*((_BYTE *)a2 + 53) )
      return;
    v6 = 4LL;
    v117 = 6LL;
LABEL_6:
    v9 = (__int64 *)((char *)this + 2112);
    v10 = (unsigned __int64 *)((char *)this + 160);
    v11 = *((_QWORD *)this + 20);
    v12 = *((_QWORD *)this + 21);
    v13 = 8 * *(_DWORD *)this + 16;
    v118 = (__int64)(*((_QWORD *)this + 265) - *((_QWORD *)this + 264)) >> 4;
    v14 = (__int64)(v12 - v11) >> 4;
    v15 = (__int64)(*((_QWORD *)this + 510) - *((_QWORD *)this + 509)) >> 1;
    v151 = (unsigned __int64)v13 >> 4;
    v16 = v6 * v151;
    v119 = v15;
    v120 = v13;
    v122 = v11;
    v121 = v14;
    v17 = v6 * v151 + v14;
    if ( v17 <= v14 )
    {
      detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
        (char *)this + 160,
        (__int64)(16 * v17) >> 4);
      v9 = (__int64 *)((char *)this + 2112);
    }
    else
    {
      if ( (*((_QWORD *)this + 22) - v12) >> 4 < v16 )
      {
        v91 = detail::liberal_expansion_policy::expand(
                (detail::liberal_expansion_policy *)v17,
                (__int64)(*((_QWORD *)this + 22) - v11) >> 4,
                v16 + v14);
        v92 = operator new(saturated_mul(v91, 0x10uLL));
        v93 = *((_QWORD *)this + 21);
        v94 = *((_QWORD *)this + 20);
        v95 = v92;
        *(_QWORD *)&v144 = v92;
        *((_QWORD *)&v144 + 1) = v121;
        v145 = 0LL;
        std::uninitialized_move<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
          &v123,
          v94,
          v93,
          &v144);
        v96 = (CDrawListEntryBuilder *)*((_QWORD *)this + 20);
        *((_QWORD *)this + 20) = v95;
        v10 = (unsigned __int64 *)((char *)this + 160);
        if ( v96 == (CDrawListEntryBuilder *)((char *)this + 192) )
          v96 = 0LL;
        operator delete(v96);
        v9 = (__int64 *)((char *)this + 2112);
        v14 = v121;
        v12 = *v10 + 16 * v121;
        v122 = *v10;
        v11 = v122;
        *((_QWORD *)this + 21) = v12;
        *((_QWORD *)this + 22) = v11 + 16 * v91;
      }
      v18 = (__int64)(v12 - v11) >> 4;
      v19 = v18 - v14;
      v20 = v11 + 16 * v18;
      if ( v16 && (!v20 || (v16 & 0x8000000000000000uLL) != 0LL) )
        goto LABEL_172;
      v21 = ((__int64)(v12 - v11) >> 4) - v14;
      if ( v16 < v19 )
        v21 = v16;
      v22 = (_OWORD *)(v12 - 16 * v21);
      v23 = 16 * v16;
      v123 = 16 * v16;
      if ( (_OWORD *)v12 != v22 )
      {
        v126 = (_OWORD *)(v23 + v20);
        v10 = (unsigned __int64 *)((char *)this + 160);
        *(_QWORD *)&v144 = v12 - 16;
        v103 = v16;
        if ( v20 )
        {
          for ( i = (_OWORD *)v144; v103; --i )
          {
            --v126;
            --v103;
            v14 = v121;
            if ( v103 >= v16 )
              break;
            *v126 = *i;
            v11 = v122;
            if ( i == v22 )
              goto LABEL_14;
          }
        }
        goto LABEL_172;
      }
LABEL_14:
      if ( v19 > v16 )
      {
        if ( v18 && (!v11 || v18 < 0) )
          goto LABEL_172;
        *(_QWORD *)&v144 = v11;
        v24 = 16 * v14;
        *((_QWORD *)&v144 + 1) = v18;
        v145 = v18;
        std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
          v143,
          v11 + 16 * v14,
          v11 + 16 * (v18 - v16),
          &v144);
        v23 = v123;
        v9 = (__int64 *)((char *)this + 2112);
        v11 = v122;
      }
      else
      {
        v24 = 16 * v14;
      }
      v10[1] += v23;
      v25 = (_OWORD *)(v11 + v24);
      if ( v16 )
      {
        *v25 = 0LL;
        qmemcpy(v25 + 1, v25, 8 * ((16 * v16 - 9) >> 3));
      }
    }
    v26 = *v9;
    v27 = v9[1];
    v28 = v27 - *v9;
    v123 = *v9;
    v29 = v28 >> 4;
    v30 = v16 + v118;
    if ( v16 + v118 <= v29 )
    {
      detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
        v9,
        (__int64)(16 * v30) >> 4);
    }
    else
    {
      v31 = v30 - v29;
      v32 = (__int64)(v9[2] - v27) >> 4;
      if ( v32 < v30 - v29 )
      {
        v97 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)v32, (v9[2] - v26) >> 4, v30);
        v98 = operator new(saturated_mul(v97, 0x10uLL));
        v99 = *((_QWORD *)this + 265);
        v100 = *((_QWORD *)this + 264);
        v101 = v98;
        *(_QWORD *)&v144 = v98;
        *((_QWORD *)&v144 + 1) = v29;
        v145 = 0LL;
        std::uninitialized_move<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
          v143,
          v100,
          v99,
          &v144);
        v102 = (CDrawListEntryBuilder *)*((_QWORD *)this + 264);
        *((_QWORD *)this + 264) = v101;
        if ( v102 == (CDrawListEntryBuilder *)((char *)this + 2144) )
          v102 = 0LL;
        operator delete(v102);
        v9 = (__int64 *)((char *)this + 2112);
        v26 = *((_QWORD *)this + 264);
        v27 = v26 + 16 * v29;
        v123 = v26;
        *((_QWORD *)this + 265) = v27;
        *((_QWORD *)this + 266) = v26 + 16 * v97;
      }
      v33 = (__int64)(v27 - v26) >> 4;
      v34 = v33 - v29;
      v35 = v26 + 16 * v33;
      if ( v31 && (!v35 || (v31 & 0x8000000000000000uLL) != 0LL) )
        goto LABEL_172;
      v36 = ((__int64)(v27 - v26) >> 4) - v29;
      if ( v31 < v34 )
        v36 = v31;
      v37 = 16 * v31;
      v38 = 16 * v36;
      v39 = (_OWORD *)(v27 - v38);
      if ( v27 != v27 - v38 )
      {
        v105 = (_OWORD *)(v27 - 16);
        *(_QWORD *)&v144 = v37 + v35;
        v106 = v31;
        if ( v35 )
        {
          v107 = (_OWORD *)v144;
          while ( v106 )
          {
            --v106;
            --v107;
            if ( v106 >= v31 )
              break;
            *v107 = *v105;
            if ( v105 == v39 )
              goto LABEL_26;
            --v105;
          }
        }
        goto LABEL_172;
      }
LABEL_26:
      if ( v34 > v31 )
      {
        if ( v33 && (!v26 || v33 < 0) )
          goto LABEL_172;
        v40 = 16 * v29;
        *(_QWORD *)&v144 = v26;
        *((_QWORD *)&v144 + 1) = v33;
        v145 = v33;
        std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
          v143,
          v26 + v40,
          v26 + 16 * (v33 - v31),
          &v144);
        v26 = v123;
        v9 = (__int64 *)((char *)this + 2112);
      }
      else
      {
        v40 = 16 * v29;
      }
      v9[1] += v37;
      v41 = (_OWORD *)(v26 + v40);
      if ( v31 )
      {
        *v41 = 0LL;
        qmemcpy(v41 + 1, v41, 8 * ((16 * v31 - 9) >> 3));
      }
    }
    v42 = v117;
    v116 = 0;
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,174,1,detail::liberal_expansion_policy>>::resize(
      (char *)this + 4072,
      v117 + v119,
      &v116);
    v43 = (unsigned __int64 *)((char *)this + 2112);
    v44 = 16 * v118 + *((_QWORD *)this + 264);
    v45 = *((_QWORD *)this + 20) + 16 * v121;
    v128 = v120;
    v131 = v120;
    v122 = v44;
    v130 = v44;
    v46 = *((_QWORD *)this + 509);
    v123 = v45;
    v133 = 0LL;
    v136 = 0LL;
    v127 = v45;
    v47 = (float *)(v46 + 2 * v119);
    v129 = v6;
    v132 = v6;
    if ( v42 == -1 || !v47 )
      goto LABEL_174;
    v134 = v42;
    v135 = (float *)(v46 + 2 * v119);
    if ( *((_BYTE *)a2 + 52) )
    {
      Mesh::GenerateGeometryForRectangle(a2, (struct Mesh::GeometryBuffers *)&v127);
    }
    else if ( *((_QWORD *)a2 + 4) )
    {
      Mesh::GenerateGeometryWorker(a2, (struct Mesh::GeometryBuffers *)&v127);
    }
    else
    {
      v108 = *((_QWORD *)a2 + 1);
      v146 = (struct Mesh::VertexAAOffsetDesc *)v149;
      v147 = v149;
      v148 = &v150;
      if ( v108 )
      {
        v109 = (_OWORD *)detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::reserve_region(
                           &v146,
                           0LL,
                           v108);
        *(_QWORD *)&v144 = (unsigned __int64)(32 * v108 - 25) >> 3;
        *v109 = 0LL;
        v109[1] = 0LL;
        qmemcpy(v109 + 2, v109, 8 * ((unsigned __int64)(32 * v108 - 25) >> 3));
        v45 = v123;
      }
      else
      {
        detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
          &v146,
          0LL,
          0LL);
      }
      Mesh::CalcVertexAAOffsets(a2, v146, 1);
      v110 = *((_OWORD *)a2 + 1);
      v138 = *(_OWORD *)a2;
      v111 = *((_OWORD *)a2 + 2);
      v139 = v110;
      *(_QWORD *)&v110 = *((_QWORD *)a2 + 6);
      v141 = (char *)*((_QWORD *)&v111 + 1);
      v140 = v146;
      v142 = v110;
      Mesh::GenerateGeometryWorker((const struct Mesh::MeshDesc *)&v138, (struct Mesh::GeometryBuffers *)&v127);
      v112 = v146;
      v113 = (v147 - (_BYTE *)v146) >> 5;
      if ( v113 )
      {
        detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
          &v146,
          0LL,
          v113);
        v112 = v146;
      }
      v146 = 0LL;
      if ( v112 == (struct Mesh::VertexAAOffsetDesc *)v149 )
        v112 = 0LL;
      operator delete(v112);
    }
    *(_QWORD *)&v144 = v122;
    *((_QWORD *)&v144 + 1) = __PAIR64__(v133, v120);
    v124 = v120;
    v125 = v133;
    v123 = v45;
    CDrawListEntryBuilder::ComputeColorAndUV(this, v137, &v123, &v144);
    if ( *((_BYTE *)this + 4473) && (*((float *)this + 12) != 0.0 || *((float *)this + 13) != 0.0) )
    {
      for ( j = 0; j < v6; v47[1] = v70 - *((float *)this + 13) )
      {
        v67 = (float *)(v127 + (int)(j * v128));
        v68 = v67[1];
        *v67 = *v67 - *((float *)this + 12);
        v67[1] = v68 - *((float *)this + 13);
        v69 = j * v131;
        ++j;
        v47 = (float *)(v130 + v69);
        v70 = v47[1];
        *v47 = *v47 - *((float *)this + 12);
      }
    }
    if ( *((_DWORD *)this + 1016) )
    {
      v64 = 0;
      if ( v136 )
      {
        v65 = 0LL;
        while ( v65 < v134 )
        {
          v47 = v135;
          ++v64;
          *((_WORD *)v135 + v65) += *((_WORD *)this + 2032);
          v65 = v64;
          if ( v64 >= v136 )
            goto LABEL_36;
        }
LABEL_174:
        `gsl::details::get_terminate_handler'::`2'::handler((gsl::details *)v47);
        __debugbreak();
      }
    }
LABEL_36:
    *((_DWORD *)this + 1016) += v133;
    v48 = (char *)this + 160;
    v49 = v151;
    v50 = *((_QWORD *)this + 20);
    v51 = v121 + v133 * v151;
    v52 = (*((_QWORD *)this + 21) - v50) >> 4;
    if ( v51 > v52 )
    {
      v114 = v51 - v52;
      v115 = (_OWORD *)detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,120,1,detail::liberal_expansion_policy>>::reserve_region(
                         (char *)this + 160,
                         (*((_QWORD *)this + 21) - v50) >> 4,
                         v114);
      if ( v114 )
      {
        *v115 = 0LL;
        qmemcpy(v115 + 1, v115, 8 * ((16 * v114 - 9) >> 3));
      }
    }
    else
    {
      v53 = 16 * v51;
      v54 = v53 >> 4;
      v55 = (*((_QWORD *)this + 21) - v53 - v50) >> 4;
      v56 = v55 + (v53 >> 4);
      if ( v56 > v52 )
        goto LABEL_173;
      if ( v56 != v52 )
      {
        if ( v54 && (!v50 || v54 < 0 || v52 < v54) )
          goto LABEL_172;
        v151 = *((_QWORD *)this + 20);
        v153 = v53 >> 4;
        v152 = v52;
        std::move<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
          v143,
          v50 + 16 * v56,
          v50 + 16 * v52,
          &v151);
        v48 = (char *)this + 160;
      }
      *((_QWORD *)v48 + 1) += -16 * v55;
    }
    v144 = 0LL;
    v57 = *v43;
    v58 = v118 + v133 * v49;
    v59 = (__int64)(*((_QWORD *)this + 265) - *((_QWORD *)this + 264)) >> 4;
    if ( v58 > v59 )
    {
      v151 = *((_QWORD *)this + 265);
      detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,120,1,detail::liberal_expansion_policy>>::insert(
        (_DWORD)this + 2112,
        (unsigned int)&v137,
        (unsigned int)&v151,
        v58 - v59,
        (__int64)&v144);
      goto LABEL_44;
    }
    v60 = 16 * v58;
    v61 = v60 >> 4;
    v62 = (__int64)(*((_QWORD *)this + 265) - v60 - v57) >> 4;
    v63 = v62 + (v60 >> 4);
    if ( v63 <= v59 )
    {
      if ( v63 == v59 )
      {
LABEL_43:
        *((_QWORD *)this + 265) += -16 * v62;
LABEL_44:
        v116 = 0;
        detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,174,1,detail::liberal_expansion_policy>>::resize(
          (char *)this + 4072,
          v119 + v136,
          &v116);
        ++*((_DWORD *)this + 1112);
        return;
      }
      if ( !v61 || v57 && v61 >= 0 && v59 >= v61 )
      {
        v151 = *v43;
        v153 = v60 >> 4;
        v152 = v59;
        std::move<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
          v143,
          v57 + 16 * v63,
          v57 + 16 * v59,
          &v151);
        goto LABEL_43;
      }
LABEL_172:
      _invalid_parameter_noinfo_noreturn();
    }
LABEL_173:
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_174;
  }
  if ( v8 != 50529027 )
  {
LABEL_56:
    v71 = *((_DWORD *)a2 + 6);
    v72 = 3;
    v73 = v71 & 0x3000000;
    if ( (v71 & 0x3000000u) < 0x1000000 )
      goto LABEL_57;
    switch ( v73 )
    {
      case 16777216:
        v74 = 1;
        break;
      case 33554432:
        v74 = 2;
        break;
      case 50331648:
        v74 = 3;
        break;
      default:
LABEL_57:
        v74 = 0;
        break;
    }
    HIDWORD(v152) = v74;
    switch ( v71 & 3 )
    {
      case 0:
        goto LABEL_59;
      case 1:
        v75 = 1;
        break;
      case 2:
        v75 = 2;
        break;
      case 3:
        v75 = 3;
        break;
      default:
LABEL_59:
        v75 = 0;
        break;
    }
    LODWORD(v151) = v75;
    v76 = v71 & 0x300;
    if ( v76 < 0x100 )
      goto LABEL_61;
    switch ( v76 )
    {
      case 0x100u:
        v77 = 1;
        break;
      case 0x200u:
        v77 = 2;
        break;
      case 0x300u:
        v77 = 3;
        break;
      default:
LABEL_61:
        v77 = 0;
        break;
    }
    v78 = v71 & 0x30000;
    HIDWORD(v151) = v77;
    if ( v78 < 0x10000 )
      goto LABEL_63;
    if ( v78 == 0x10000 )
    {
      v72 = 1;
      goto LABEL_64;
    }
    if ( v78 == 0x20000 )
    {
      v72 = 2;
      goto LABEL_64;
    }
    if ( v78 != 196608 )
LABEL_63:
      v72 = 0;
LABEL_64:
    v79 = *(_DWORD *)a2;
    *((_QWORD *)&v139 + 1) = &v151;
    BYTE4(v142) = 0;
    v141 = (char *)a2 + 28;
    v80 = *((_BYTE *)a2 + 53);
    LODWORD(v142) = v7;
    BYTE5(v142) = v80;
    LODWORD(v138) = v79;
    LODWORD(v152) = v72;
    *((_QWORD *)&v138 + 1) = 4LL;
    *(_QWORD *)&v139 = 0LL;
    v140 = 0LL;
    Mesh::CalcGeometryCounts((const struct Mesh::MeshDesc *)&v138, &v119, &v118);
    v4 = v118;
    v6 = v119;
LABEL_77:
    v117 = v4;
    goto LABEL_78;
  }
  v90 = (char *)a2 + 53;
  if ( v7 == 1 )
  {
    v4 = 24LL;
    v6 = 8LL;
    v117 = 24LL;
  }
  else if ( *v90 )
  {
    v6 = 4LL;
  }
  if ( *v90 )
  {
    v4 += 6LL;
    goto LABEL_77;
  }
LABEL_78:
  if ( v4 )
    goto LABEL_6;
}
