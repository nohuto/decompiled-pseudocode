/*
 * XREFs of ?CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z @ 0x1802415C4
 * Callers:
 *     ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180242048 (-GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ?CreateInstanced@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@_NW4Enum@ParticleSortMode@@PEAPEAV1@@Z @ 0x1801FE9E0 (-CreateInstanced@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18023F654 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBU_Val.c)
 *     std::_Sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___ @ 0x18023F708 (std--_Sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___.c)
 *     std::_Sort_unchecked_unsigned_int____lambda_6619143c50c0dbd69fd5d8cfbdd2e280___ @ 0x18023F86C (std--_Sort_unchecked_unsigned_int____lambda_6619143c50c0dbd69fd5d8cfbdd2e280___.c)
 *     ?CopyInstanceFromIndex@CParticleEmitterVisual@@IEAAXII@Z @ 0x180241464 (-CopyInstanceFromIndex@CParticleEmitterVisual@@IEAAXII@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::CreateParticlesPrimitive(
        CParticleEmitterVisual *this,
        struct CDrawListPrimitive *a2,
        struct CDrawListPrimitive **a3)
{
  PrimitiveStorage::CInlineStorageBase **v3; // r13
  float v6; // xmm3_4
  float v7; // xmm0_4
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  int v10; // ecx
  __int64 v11; // rax
  int v12; // ecx
  unsigned int n; // ebx
  char **v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  size_t v19; // rbx
  char *v20; // rdx
  int v21; // ecx
  char *k; // rax
  char *v23; // r13
  unsigned int v24; // r12d
  char *m; // rbx
  unsigned int v26; // r8d
  int v27; // r12d
  __int64 v28; // rsi
  gsl::details *v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rdx
  int v33; // eax
  int Instanced; // eax
  __int64 v35; // rcx
  unsigned int v36; // ebx
  char **v38; // rsi
  __int64 v39; // r12
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  size_t v43; // rbx
  char *v44; // rdx
  int v45; // ecx
  char *i; // rax
  char *v47; // r13
  unsigned int v48; // r12d
  char *j; // rbx
  unsigned int v50; // r8d
  unsigned int v51; // [rsp+20h] [rbp-50h]
  __int64 v52; // [rsp+40h] [rbp-30h] BYREF
  int v53; // [rsp+48h] [rbp-28h]
  int v54; // [rsp+4Ch] [rbp-24h]
  _QWORD v55[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v56[2]; // [rsp+60h] [rbp-10h] BYREF

  v3 = a3;
  if ( !*((_BYTE *)this + 6446) )
  {
    v6 = *((float *)a2 + 21) - *((float *)a2 + 19);
    v7 = *((float *)a2 + 22) - *((float *)a2 + 20);
    *((_BYTE *)this + 6446) = 1;
    *((float *)this + 1603) = 1.0 / v6;
    *((float *)this + 1604) = 1.0 / v7;
    *((float *)this + 1605) = v6;
    *((float *)this + 1606) = v7;
  }
  v8 = *((_QWORD *)this + 128) - *((_QWORD *)this + 127);
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 168) - *((_QWORD *)this + 167)) >> 4);
  v10 = *((_DWORD *)this + 195);
  v11 = v8 >> 3;
  if ( (unsigned int)v9 >= (unsigned int)v11 )
    v9 = (unsigned int)v11;
  v12 = v10 - 2;
  if ( !v12 )
  {
    v38 = (char **)((char *)this + 1360);
    v39 = *((_QWORD *)this + 171);
    v40 = *((_QWORD *)this + 170);
    v41 = (v39 - v40) >> 2;
    if ( (unsigned int)v9 >= v41 )
    {
      if ( (unsigned int)v9 <= v41 )
        goto LABEL_40;
      if ( (unsigned int)v9 > (unsigned __int64)((*((_QWORD *)this + 172) - v40) >> 2) )
      {
        std::vector<unsigned int>::_Resize_reallocate<std::_Value_init_tag>((const void **)this + 170, (unsigned int)v9);
        goto LABEL_40;
      }
      v43 = 4 * ((unsigned int)v9 - v41);
      memset_0(*((void **)this + 171), 0, v43);
      v42 = v39 + v43;
    }
    else
    {
      v42 = v40 + 4 * v9;
    }
    *((_QWORD *)this + 171) = v42;
LABEL_40:
    v44 = (char *)*((_QWORD *)this + 171);
    v45 = 0;
    for ( i = *v38; i != v44; i += 4 )
      *(_DWORD *)i = v45++;
    std::_Sort_unchecked_unsigned_int____lambda_6619143c50c0dbd69fd5d8cfbdd2e280___(
      *v38,
      *((char **)this + 171),
      (__int64)(*((_QWORD *)this + 171) - (_QWORD)*v38) >> 2,
      (__int64)this);
    v47 = (char *)*((_QWORD *)this + 171);
    v48 = 0;
    for ( j = *v38; j != v47; j += 4 )
    {
      v50 = v48++;
      CParticleEmitterVisual::CopyInstanceFromIndex(this, *(_DWORD *)j, v50);
    }
    goto LABEL_23;
  }
  if ( v12 == 1 )
  {
    v14 = (char **)((char *)this + 1360);
    v15 = *((_QWORD *)this + 171);
    v16 = *((_QWORD *)this + 170);
    v17 = (v15 - v16) >> 2;
    if ( (unsigned int)v9 >= v17 )
    {
      if ( (unsigned int)v9 <= v17 )
        goto LABEL_17;
      if ( (unsigned int)v9 > (unsigned __int64)((*((_QWORD *)this + 172) - v16) >> 2) )
      {
        std::vector<unsigned int>::_Resize_reallocate<std::_Value_init_tag>((const void **)this + 170, (unsigned int)v9);
        goto LABEL_17;
      }
      v19 = 4 * ((unsigned int)v9 - v17);
      memset_0(*((void **)this + 171), 0, v19);
      v18 = v15 + v19;
    }
    else
    {
      v18 = v16 + 4 * v9;
    }
    *((_QWORD *)this + 171) = v18;
LABEL_17:
    v20 = (char *)*((_QWORD *)this + 171);
    v21 = 0;
    for ( k = *v14; k != v20; k += 4 )
      *(_DWORD *)k = v21++;
    std::_Sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___(
      *v14,
      *((char **)this + 171),
      (__int64)(*((_QWORD *)this + 171) - (_QWORD)*v14) >> 2,
      (__int64)this);
    v23 = (char *)*((_QWORD *)this + 171);
    v24 = 0;
    for ( m = *v14; m != v23; m += 4 )
    {
      v26 = v24++;
      CParticleEmitterVisual::CopyInstanceFromIndex(this, *(_DWORD *)m, v26);
    }
LABEL_23:
    v3 = a3;
    goto LABEL_24;
  }
  for ( n = 0; n < (unsigned int)v9; ++n )
    CParticleEmitterVisual::CopyInstanceFromIndex(this, n, n);
LABEL_24:
  v27 = *((_DWORD *)this + 195);
  v28 = *((_QWORD *)this + 167);
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v56, (unsigned int)v9);
  v30 = v56[0];
  if ( v56[0] == -1LL
    || !v28 && v56[0]
    || (v31 = *((_QWORD *)a2 + 7),
        gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v56, *((unsigned int *)a2 + 5)),
        v29 = (gsl::details *)v56[0],
        v56[0] == -1LL)
    || !v31 && v56[0] )
  {
    gsl::details::terminate(v29);
    JUMPOUT(0x18024192CLL);
  }
  v52 = *((_QWORD *)a2 + 4);
  v33 = *((_DWORD *)a2 + 4);
  v55[0] = v30;
  v55[1] = v28;
  v53 = 8 * v33 + 16;
  v54 = *((_DWORD *)a2 + 2);
  v56[1] = v31;
  Instanced = CDrawListPrimitive::CreateInstanced((__int64)&v52, v32, v56, (int *)v55, v51, v27, v3);
  v36 = Instanced;
  if ( Instanced < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, Instanced, 0x180u, 0LL);
  return v36;
}
