/*
 * XREFs of ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801E3270
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180065C00 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1800BA658 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAXPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x1801E2D10 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAXPEAV-$DynArrayIA@UtagRECT.c)
 *     ??$_Emplace_reallocate@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAPEAULayoutData@CContent@@QEAU23@AEBU23@@Z @ 0x1801E2DCC (--$_Emplace_reallocate@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULa.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x180269300 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 */

__int64 __fastcall CPrimitiveGroup::GetTextureMemoryLayoutData(
        CPrimitiveGroupDrawListGenerator **a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // esi
  int **ContentRegion; // rax
  float v10; // xmm2_4
  __int64 v11; // rdx
  __int64 v12; // xmm1_8
  __m128 v14; // [rsp+30h] [rbp-69h]
  __int128 v15; // [rsp+40h] [rbp-59h] BYREF
  __int128 v16; // [rsp+50h] [rbp-49h]
  __int64 v17; // [rsp+60h] [rbp-39h]
  _QWORD v18[2]; // [rsp+70h] [rbp-29h] BYREF
  int v19; // [rsp+80h] [rbp-19h]
  __int64 v20; // [rsp+84h] [rbp-15h]
  _BYTE v21[64]; // [rsp+90h] [rbp-9h] BYREF

  *(_QWORD *)(a3 + 8) = *(_QWORD *)a3;
  v5 = 0;
  v18[0] = v21;
  v18[1] = v21;
  v19 = 4;
  v20 = 4LL;
  v6 = CPrimitiveGroup::EnsureDrawListGenerator((CPrimitiveGroup *)a1);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x21Cu, 0LL);
  }
  else
  {
    ContentRegion = (int **)CPrimitiveGroupDrawListGenerator::GetContentRegion(a1[21]);
    HIDWORD(v20) = 0;
    CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(ContentRegion, (__int64)v18);
    if ( HIDWORD(v20) )
    {
      do
      {
        v14.m128_f32[0] = (float)*(int *)(v18[0] + 16LL * v5);
        v14.m128_f32[1] = (float)*(int *)(v18[0] + 16LL * v5 + 4);
        v14.m128_f32[2] = (float)*(int *)(v18[0] + 16LL * v5 + 8);
        v14.m128_f32[3] = (float)*(int *)(v18[0] + 16LL * v5 + 12);
        *((float *)&v16 + 2) = v14.m128_f32[0];
        LODWORD(v10) = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
        *((float *)&v16 + 3) = v10;
        LODWORD(v17) = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
        HIDWORD(v17) = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
        if ( v14.m128_f32[0] == 0.0 && v10 == 0.0 )
          *(_QWORD *)&v16 = 0LL;
        else
          *(_QWORD *)&v16 = __PAIR64__(LODWORD(v10), v14.m128_u32[0]);
        v11 = *(_QWORD *)(a3 + 8);
        v15 = _xmm;
        if ( *(_QWORD *)(a3 + 16) == v11 )
        {
          std::vector<CContent::LayoutData>::_Emplace_reallocate<CContent::LayoutData const &>(
            (const void **)a3,
            (_BYTE *)v11,
            (__int64)&v15);
        }
        else
        {
          v12 = v17;
          *(_OWORD *)v11 = _xmm;
          *(_OWORD *)(v11 + 16) = v16;
          *(_QWORD *)(v11 + 32) = v12;
          *(_QWORD *)(a3 + 8) += 40LL;
        }
        ++v5;
      }
      while ( v5 < HIDWORD(v20) );
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v18);
  return v8;
}
