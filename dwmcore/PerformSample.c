__int64 __fastcall PerformSample(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        void *a6)
{
  unsigned __int16 v7; // r13
  __int64 v9; // rdi
  int v11; // r15d
  unsigned __int16 v12; // r15
  int appended; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rcx
  unsigned __int8 v18; // si
  __int64 v19; // rdx
  gsl::details *v20; // rcx
  int v21; // r12d
  __int128 v23; // xmm0
  char ExtendModeDecoration; // al
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  char v28; // r8
  char v29; // al
  __int64 v30; // xmm1_8
  int v31; // r9d
  unsigned int v32; // [rsp+20h] [rbp-69h]
  __int16 v33; // [rsp+30h] [rbp-59h]
  __int64 v34; // [rsp+40h] [rbp-49h] BYREF
  void **v35; // [rsp+48h] [rbp-41h]
  _BYTE v36[24]; // [rsp+50h] [rbp-39h] BYREF
  char v37; // [rsp+68h] [rbp-21h]
  unsigned __int8 v38; // [rsp+69h] [rbp-20h]
  char v39; // [rsp+6Ah] [rbp-1Fh]
  void *v40; // [rsp+70h] [rbp-19h] BYREF
  _WORD v41[4]; // [rsp+78h] [rbp-11h] BYREF

  v40 = a6;
  v7 = a3 | 0x300;
  v9 = a2 + 32LL * a3;
  v33 = a3 | 0x400;
  if ( !*(_BYTE *)(v9 + 23) )
  {
    v11 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = v11 + 1;
    v12 = v11 | 0x600;
    appended = CShaderLinkingGraphBuilder::CopyNode(a1, v12, a4);
    v15 = appended;
    if ( appended < 0 )
    {
      v32 = 683;
      goto LABEL_35;
    }
    v16 = ApplyTexcoordTransformations(a1, a2, a3, v12, v40);
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x2B2u, 0LL);
      return v15;
    }
    v18 = a3 + 48;
    v41[0] = v12;
    v41[1] = v7;
    v41[2] = v33;
    if ( *(_BYTE *)(a2 + 156) )
    {
      qmemcpy(v36, "SampleCubeTexture", 17);
      *(_WORD *)&v36[17] = v18;
      goto LABEL_8;
    }
    if ( *(_BYTE *)(v9 + 21) )
    {
      v19 = 1LL;
      *(_WORD *)&v36[18] = v18;
      qmemcpy(v36, "MultiSampleTexture", 18);
      if ( *(_BYTE *)(v9 + 18) )
      {
        LOBYTE(v17) = *(_BYTE *)(v9 + 16);
        if ( (_BYTE)v17 )
        {
          ExtendModeDecoration = GetExtendModeDecoration(v17, 1LL, 0LL);
          LOBYTE(v25) = *(_BYTE *)(v9 + 17);
          v36[19] = ExtendModeDecoration;
          v36[20] = GetExtendModeDecoration(v25, v26, v27);
          v19 = 2LL;
          v36[21] = v28;
        }
      }
LABEL_9:
      gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v34, v19);
      v35 = (void **)v41;
      if ( v34 == -1 )
      {
        gsl::details::terminate(v20);
        JUMPOUT(0x180029064LL);
      }
      v21 = (int)v40;
      appended = CShaderLinkingGraphBuilder::AppendNode(
                   a1,
                   a5,
                   (unsigned int)word_180338FC0,
                   (_DWORD)v40,
                   (__int64)v36,
                   (__int64)&v34);
      v15 = appended;
      if ( appended < 0 )
      {
        v32 = 744;
        goto LABEL_35;
      }
      v15 = AppendColorModifications(a1, (__int128 *)v9, a5, v21);
      if ( (v15 & 0x80000000) != 0 )
      {
        v31 = v15;
        v32 = 745;
LABEL_36:
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v31, v32, 0LL);
        return v15;
      }
      if ( *(_BYTE *)(v9 + 18) )
      {
        if ( !*(_BYTE *)(v9 + 16) )
        {
          v34 = 3LL;
          v35 = &v40;
          LOWORD(v40) = a5;
          WORD1(v40) = v12;
          WORD2(v40) = v7;
          appended = CShaderLinkingGraphBuilder::AppendNode(
                       a1,
                       a5,
                       (unsigned int)word_180338FC0,
                       v21,
                       (__int64)"ClampTransparent",
                       (__int64)&v34);
          v15 = appended;
          if ( appended < 0 )
          {
            v32 = 755;
            goto LABEL_35;
          }
        }
      }
      return v15;
    }
    if ( !*(_BYTE *)(v9 + 20) )
    {
      qmemcpy(v36, "SampleTexture", 13);
      *(_WORD *)&v36[13] = v18;
LABEL_8:
      v19 = 1LL;
      goto LABEL_9;
    }
    if ( *(_BYTE *)(v9 + 17) == 2 )
    {
      if ( *(_BYTE *)(v9 + 16) == 2 )
      {
        v23 = *(_OWORD *)"SampleWrappedTexture";
        *(_DWORD *)&v36[16] = *(_DWORD *)"ture";
        *(_WORD *)&v36[20] = v18;
LABEL_20:
        *(_OWORD *)v36 = v23;
        v19 = 3LL;
        goto LABEL_9;
      }
      v23 = *(_OWORD *)"SampleWrappedTextureVOnly";
      v29 = aSamplewrappedt[24];
      v30 = *(_QWORD *)"tureVOnly";
    }
    else
    {
      v23 = *(_OWORD *)"SampleWrappedTextureUOnly";
      v29 = aSamplewrappedt_0[24];
      v30 = *(_QWORD *)"tureUOnly";
    }
    *(_QWORD *)&v36[16] = v30;
    v37 = v29;
    v38 = v18;
    v39 = 0;
    goto LABEL_20;
  }
  appended = CShaderLinkingGraphBuilder::CopyNode(a1, a5, v7);
  v15 = appended;
  if ( appended < 0 )
  {
    v32 = 673;
LABEL_35:
    v31 = appended;
    goto LABEL_36;
  }
  return v15;
}
