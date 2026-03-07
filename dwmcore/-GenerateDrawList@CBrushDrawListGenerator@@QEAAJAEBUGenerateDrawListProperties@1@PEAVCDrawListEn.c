__int64 __fastcall CBrushDrawListGenerator::GenerateDrawList(
        CBrushDrawListGenerator *this,
        const struct CBrushDrawListGenerator::GenerateDrawListProperties *a2,
        struct CDrawListEntryBuilder *a3,
        __int64 a4)
{
  int v4; // r10d
  void ***v8; // rax
  void ***v9; // rcx
  void (__fastcall ***v10)(_QWORD, __int64); // r11
  __int64 v11; // rdi
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // r13
  __int128 *v15; // rbx
  __int64 v16; // r12
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  int v24; // eax
  float v25; // xmm6_4
  float v26; // xmm0_4
  __int64 v27; // rax
  size_t v28; // rax
  __int64 v29; // rbx
  unsigned int v30; // r14d
  bool v31; // zf
  __int64 v32; // rcx
  unsigned int v33; // edi
  __int64 v34; // rbx
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // r12d
  int v38; // r14d
  int BuiltHWPrimitiveEntry; // eax
  unsigned int v40; // ecx
  __int64 v41; // rcx
  int v43; // eax
  int v44; // eax
  CVisual *v45; // rax
  bool HasCpuClipsInScope; // al
  __int64 v47; // rax
  int DrawListPrimitive; // eax
  unsigned int v49; // ecx
  const struct CMILMatrix *TopByReference; // rax
  __int64 v51; // r8
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  int v54; // eax
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  CMILMatrix *v57; // rax
  bool CanUseWarpFastPath; // al
  unsigned int v59; // ecx
  int v60; // [rsp+38h] [rbp-D0h]
  int v61; // [rsp+3Ch] [rbp-CCh]
  __int128 v62; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v63; // [rsp+58h] [rbp-B0h]
  __int128 v64; // [rsp+68h] [rbp-A0h]
  __int128 v65; // [rsp+78h] [rbp-90h]
  int v66; // [rsp+88h] [rbp-80h]
  CBrushDrawListGenerator *v67; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-58h]
  __int128 v69; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v70; // [rsp+C8h] [rbp-40h]
  __int128 v71; // [rsp+D8h] [rbp-30h]
  __int128 v72; // [rsp+E8h] [rbp-20h]
  int v73; // [rsp+F8h] [rbp-10h]
  void (__fastcall ***v74)(_QWORD, __int64); // [rsp+100h] [rbp-8h]
  char v75; // [rsp+108h] [rbp+0h]
  unsigned __int64 v76; // [rsp+110h] [rbp+8h]
  __int64 v77; // [rsp+118h] [rbp+10h]
  char v78; // [rsp+120h] [rbp+18h]
  unsigned int v79; // [rsp+128h] [rbp+20h]
  _OWORD v80[2]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v81; // [rsp+150h] [rbp+48h]
  __int64 v82; // [rsp+158h] [rbp+50h]
  struct CDrawListEntryBuilder *v83; // [rsp+160h] [rbp+58h]
  void ***v84; // [rsp+168h] [rbp+60h]
  int v85; // [rsp+170h] [rbp+68h]
  __int128 v86; // [rsp+174h] [rbp+6Ch]
  __int128 v87; // [rsp+184h] [rbp+7Ch]
  int v88; // [rsp+194h] [rbp+8Ch]
  __int128 v89; // [rsp+198h] [rbp+90h]
  __int128 v90; // [rsp+1A8h] [rbp+A0h]
  int v91; // [rsp+1B8h] [rbp+B0h]
  int v92; // [rsp+1BCh] [rbp+B4h]
  float v93; // [rsp+1C0h] [rbp+B8h] BYREF
  float v94; // [rsp+1C4h] [rbp+BCh] BYREF
  char v95; // [rsp+1C8h] [rbp+C0h]
  char v96; // [rsp+1C9h] [rbp+C1h]
  void **v97; // [rsp+1D8h] [rbp+D0h] BYREF
  _OWORD v98[4]; // [rsp+1E0h] [rbp+D8h] BYREF
  int v99; // [rsp+220h] [rbp+118h]
  struct D2D_MATRIX_3X2_F v100; // [rsp+228h] [rbp+120h] BYREF
  __int64 v101; // [rsp+240h] [rbp+138h]
  int v102; // [rsp+248h] [rbp+140h]

  v4 = 0;
  v97 = &CCommonRenderingEffectFactory::`vftable';
  LOBYTE(a4) = 0;
  v73 = 5888;
  v67 = this;
  v8 = &v97;
  v9 = (void ***)*((_QWORD *)a2 + 1);
  v10 = 0LL;
  v69 = _xmm;
  if ( v9 )
    v8 = v9;
  v70 = _xmm;
  v84 = v8;
  v96 = *((_BYTE *)a2 + 96);
  v74 = 0LL;
  v75 = 0;
  v78 = 0;
  v68 = 0LL;
  v76 = 1LL;
  v77 = 0LL;
  v71 = _xmm;
  v72 = _xmm;
  LOBYTE(v73) = 85;
  v79 = 0;
  v82 = 0LL;
  v85 = 0;
  v95 = 0;
  v83 = a3;
  if ( *((_BYTE *)a2 + 92) )
  {
    v11 = *(_QWORD *)this;
    BYTE1(v73) = 23;
    v12 = *(_QWORD *)(v11 + 904);
    if ( *(_BYTE *)(v12 - 8) )
    {
      v13 = 1;
      v14 = 0LL;
      v60 = 1;
      v15 = 0LL;
      v66 = 0;
      v16 = 0LL;
      v61 = 16;
      if ( v12 == *(_QWORD *)(v11 + 896) || !*(_QWORD *)(v12 - 176) )
      {
LABEL_7:
        if ( (_BYTE)a4 && v10 )
        {
          (**v10)(v10, 1LL);
          v13 = v60;
          v4 = 0;
        }
        v74 = 0LL;
        v75 = 0;
        v78 = 0;
        v68 = v14;
        v76 = __PAIR64__(v61, v13);
        v77 = v16;
        if ( v15 )
        {
          v69 = *v15;
          v70 = v15[1];
          v71 = v15[2];
          v72 = v15[3];
          v73 = *((_DWORD *)v15 + 16);
        }
        else
        {
          CMILMatrix::SetToIdentity((CMILMatrix *)&v69);
        }
        goto LABEL_10;
      }
      v43 = *(_DWORD *)(v11 + 464);
      if ( v43 )
        v44 = *(_DWORD *)(*(_QWORD *)(v11 + 480) + 4LL * (unsigned int)(v43 - 1));
      else
        v44 = 0;
      if ( *(_DWORD *)(v11 + 400) == v44 )
      {
        v45 = (CVisual *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)(v11 + 24) + 32LL))(
                           v11 + 24,
                           1LL,
                           v12,
                           a4);
        v15 = (__int128 *)*((_QWORD *)CVisual::FindTreeData(v45, *(const struct CVisualTree **)(v11 + 8056)) + 16);
LABEL_48:
        HasCpuClipsInScope = CScopedClipStack::HasCpuClipsInScope((CScopedClipStack *)(v11 + 896));
        v4 = 0;
        if ( HasCpuClipsInScope )
        {
          v47 = *(_QWORD *)(v11 + 2768);
          v13 = *(_DWORD *)(v47 - 8);
          v14 = *(_QWORD *)(v47 - 40);
          v60 = v13;
        }
        else
        {
          v13 = 1;
        }
        LOBYTE(a4) = v75;
        v10 = v74;
        v16 = *(_QWORD *)(*(_QWORD *)(v11 + 904) - 16LL);
        goto LABEL_7;
      }
      TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(v11 + 400));
      if ( CCpuClippingData::CalcScopeTransformFromWorld(
             (const struct CMILMatrix *)(v51 - 84),
             TopByReference,
             (struct CMILMatrix *)&v62)
        && CMILMatrix::ProducesUniformZ<1>((__int64)&v62) )
      {
        if ( COERCE_FLOAT(DWORD2(v65) & _xmm) >= 0.000081380211 )
        {
          if ( !CMILMatrix::ProducesUniformZ<1>(*(_QWORD *)(v11 + 904) - 84LL) )
            goto LABEL_58;
          *(_QWORD *)&v100.m11 = v62;
          *(_QWORD *)&v100.m[1][0] = v63;
          *(_QWORD *)&v100.m[2][0] = v65;
          CMILMatrix::CMILMatrix((CMILMatrix *)v98, &v100);
          v66 = v99;
          v62 = v98[0];
          v61 = 144;
          v63 = v98[1];
          v64 = v98[2];
          v65 = v98[3];
        }
        v15 = &v62;
        if ( CMILMatrix::IsInvertibleDeterminant((float)(*((float *)&v63 + 1) * *(float *)&v62) - (float)(*(float *)&v63 * *((float *)&v62 + 1))) )
          goto LABEL_48;
      }
LABEL_58:
      v4 = 0;
    }
  }
LABEL_10:
  v17 = *(_QWORD *)this;
  v66 = v4;
  v18 = *(_DWORD *)(v17 + 400);
  if ( v18 )
  {
    v19 = (unsigned int)(v18 - 1);
    v20 = *(_QWORD *)(v17 + 416);
    v21 = *(_OWORD *)(68 * v19 + v20 + 16);
    v62 = *(_OWORD *)(68 * v19 + v20);
    v22 = *(_OWORD *)(68 * v19 + v20 + 32);
    v63 = v21;
    v23 = *(_OWORD *)(68 * v19 + v20 + 48);
    LODWORD(v20) = *(_DWORD *)(68 * v19 + v20 + 64);
    v64 = v22;
    v65 = v23;
    v66 = v20;
  }
  else
  {
    CMILMatrix::SetToIdentity((CMILMatrix *)&v62);
  }
  if ( *((_BYTE *)a2 + 95) )
  {
    v92 = 1;
  }
  else
  {
    v24 = v4;
    LOBYTE(v24) = *(_DWORD *)(v17 + 336) != 0;
    v92 = v24;
  }
  if ( CMILMatrix::IsAffine<1>((__int64)&v62, 1) )
  {
    v25 = sqrtf_0((float)(*(float *)&v62 * *(float *)&v62) + (float)(*((float *)&v62 + 1) * *((float *)&v62 + 1)));
    v26 = sqrtf_0((float)(*(float *)&v63 * *(float *)&v63) + (float)(*((float *)&v63 + 1) * *((float *)&v63 + 1)));
    v93 = v25;
    v94 = v26;
  }
  else
  {
    *(_QWORD *)&v100.m11 = v62;
    *(_QWORD *)&v100.m[1][1] = v63;
    v101 = v65;
    v100.m21 = *((FLOAT *)&v62 + 3);
    v100.dy = *((FLOAT *)&v63 + 3);
    v102 = HIDWORD(v65);
    Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)&v100, &v93, &v94, 0LL);
  }
  v27 = *((unsigned int *)this + 18);
  LODWORD(v82) = v27;
  HIDWORD(v82) = v27;
  v28 = 8 * v27;
  if ( v28 )
  {
    if ( this != (CBrushDrawListGenerator *)-40LL && v28 <= 0x28 )
    {
      memcpy_0(v80, (char *)this + 40, v28);
      goto LABEL_20;
    }
    v81 = 0LL;
    memset(v80, 0, sizeof(v80));
    if ( this == (CBrushDrawListGenerator *)-40LL )
    {
      *_errno() = 22;
    }
    else
    {
      if ( v28 <= 0x28 )
        goto LABEL_20;
      *_errno() = 34;
    }
    _invalid_parameter_noinfo();
  }
LABEL_20:
  if ( *(_QWORD *)a2 )
  {
    *((_QWORD *)v80 + (unsigned int)v82) = *(_QWORD *)a2;
    LODWORD(v82) = v82 + 1;
  }
  v85 = *((_DWORD *)a2 + 4) & ((1 << SBYTE4(v82)) - 1);
  if ( v85 )
  {
    v52 = *(_OWORD *)((char *)a2 + 20);
    v53 = *(_OWORD *)((char *)a2 + 36);
    v88 = *((_DWORD *)a2 + 13);
    v54 = *((_DWORD *)a2 + 22);
    v86 = v52;
    v91 = v54;
    v55 = *(_OWORD *)((char *)a2 + 56);
    v87 = v53;
    v56 = *(_OWORD *)((char *)a2 + 72);
    v89 = v55;
    v90 = v56;
  }
  if ( *((_BYTE *)a2 + 94)
    || (v29 = *(_QWORD *)this, !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 40LL) + 568LL))
    || CCommonRegistryData::UseHWDrawListEntriesOnWARP
    || (v57 = CMatrixStack::GetTopByReference((CMatrixStack *)(v29 + 400)), !CMILMatrix::Is2DAxisAlignedPreserving(v57))
    || !*(_DWORD *)(v29 + 656) && *(_DWORD *)(v29 + 584)
    || *(_QWORD *)(v29 + 3424)
    || (CanUseWarpFastPath = CBrushDrawListGenerator::CanUseWarpFastPath(
                               this,
                               (const struct CBrushDrawListGenerator::GenerateDrawListParameters *)&v67),
        v95 = 1,
        !CanUseWarpFastPath) )
  {
    v95 = 0;
  }
  v30 = v79;
  v31 = v79 == (_DWORD)v82;
  if ( v79 < (unsigned int)v82 )
  {
    do
    {
      v32 = *((_QWORD *)v80 + v30);
      if ( v32 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 8LL))(v32, 3LL) )
        break;
      ++v30;
    }
    while ( v30 < (unsigned int)v82 );
    v31 = v30 == (_DWORD)v82;
  }
  if ( !v31 )
  {
    v33 = v79;
    v34 = *((_QWORD *)v80 + v30);
    v79 = v30;
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, CBrushDrawListGenerator **))(*(_QWORD *)v34 + 32LL))(
            v34,
            *(_QWORD *)v67,
            &lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_,
            &v67);
    *((_QWORD *)v80 + v30) = v34;
    v37 = v35;
    v79 = v33;
    v38 = v35;
    if ( v35 >= 0 )
      goto LABEL_33;
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x1A6u, 0LL);
LABEL_81:
    MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v37, 0x137u, 0LL);
    goto LABEL_40;
  }
  DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(
                        v67,
                        (struct CBrushDrawListGenerator::GenerateDrawListParameters *)&v67);
  v37 = DrawListPrimitive;
  if ( DrawListPrimitive < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, DrawListPrimitive, 0x166u, 0LL);
    v38 = v37;
    goto LABEL_81;
  }
LABEL_33:
  v38 = 0;
  if ( *((_QWORD *)a3 + 10) )
  {
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(a3, 0, 0LL, 0LL);
    v38 = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, BuiltHWPrimitiveEntry, 0x29Bu, 0LL);
    v41 = *((_QWORD *)a3 + 10);
    if ( v41 )
    {
      *((_QWORD *)a3 + 10) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8LL))(v41);
    }
    if ( v38 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v38, 0x13Cu, 0LL);
  }
LABEL_40:
  if ( v75 && v74 )
    (**v74)(v74, 1LL);
  return (unsigned int)v38;
}
