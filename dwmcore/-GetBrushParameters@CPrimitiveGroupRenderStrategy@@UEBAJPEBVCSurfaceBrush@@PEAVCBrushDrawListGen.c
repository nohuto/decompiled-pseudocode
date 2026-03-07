__int64 __fastcall CPrimitiveGroupRenderStrategy::GetBrushParameters(
        CPrimitiveGroupRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct D2D_SIZE_F *a3)
{
  CPrimitiveGroup *v5; // r14
  int DrawListGeneratorNoRef; // eax
  unsigned int v7; // ecx
  int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // ecx
  __int64 v11; // xmm1_8
  __int128 v12; // xmm0
  CPrimitiveGroupDrawListBrush *v13; // rax
  unsigned __int64 v15; // xmm0_8
  unsigned int v16; // [rsp+20h] [rbp-50h]
  CPrimitiveGroupDrawListBrush *v17; // [rsp+38h] [rbp-38h] BYREF
  char v18; // [rsp+40h] [rbp-30h]
  __int128 v19; // [rsp+48h] [rbp-28h] BYREF
  __int64 v20; // [rsp+58h] [rbp-18h]
  __int128 v21; // [rsp+60h] [rbp-10h]
  CPrimitiveGroupDrawListBrush *v22; // [rsp+A8h] [rbp+38h]
  CPrimitiveGroupDrawListBrush *v23; // [rsp+B0h] [rbp+40h] BYREF
  struct CPrimitiveGroupDrawListGenerator *v24; // [rsp+B8h] [rbp+48h] BYREF

  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)a3);
  v5 = (CPrimitiveGroup *)*((_QWORD *)a2 + 13);
  v22 = 0LL;
  DrawListGeneratorNoRef = CSurfaceBrush::ComputeLayout(a2, a3 + 1, (struct CContent::LayoutData *)&v19, 0LL);
  v8 = DrawListGeneratorNoRef;
  if ( DrawListGeneratorNoRef < 0 )
  {
    v16 = 1470;
    goto LABEL_16;
  }
  DrawListGeneratorNoRef = CPrimitiveGroup::GetDrawListGeneratorNoRef(v5, &v24);
  v8 = DrawListGeneratorNoRef;
  if ( DrawListGeneratorNoRef < 0 )
  {
    v16 = 1472;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, DrawListGeneratorNoRef, v16, 0LL);
    goto LABEL_10;
  }
  v9 = *((unsigned int *)a2 + 25);
  v17 = 0LL;
  v18 = 1;
  LOBYTE(v23) = InterpolationMode::FromD2D1InterpolationMode(v9);
  *(_WORD *)((char *)&v23 + 1) = 257;
  v8 = CPrimitiveGroupDrawListBrush::Create(v24, &v23, &v17);
  if ( v18 )
  {
    v10 = 0;
    v22 = v17;
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v8, 0x5C3u, 0LL);
  }
  else
  {
    v11 = v20;
    *(_OWORD *)((char *)v22 + 8) = v19;
    v12 = v21;
    *((_QWORD *)v22 + 3) = v11;
    *((_BYTE *)v22 + 52) = 1;
    *((_OWORD *)v22 + 2) = v12;
    *((_DWORD *)v22 + 12) = 50529027;
    if ( (*(unsigned __int8 (__fastcall **)(const struct CSurfaceBrush *))(*(_QWORD *)a2 + 304LL))(a2) )
    {
      v15 = _mm_unpacklo_ps((__m128)(unsigned int)v21, (__m128)DWORD1(v21)).m128_u64[0];
      *((_BYTE *)v22 + 64) = 1;
      *((_QWORD *)v22 + 7) = v15;
    }
    v13 = v22;
    v22 = 0LL;
    v23 = v13;
    CBrushDrawListGenerator::AttachInput(a3, 0LL, &v23);
    if ( v23 )
      std::default_delete<CDrawListBrush>::operator()();
  }
LABEL_10:
  if ( v22 )
    CPrimitiveGroupDrawListBrush::`vector deleting destructor'(v22, 1u);
  return (unsigned int)v8;
}
