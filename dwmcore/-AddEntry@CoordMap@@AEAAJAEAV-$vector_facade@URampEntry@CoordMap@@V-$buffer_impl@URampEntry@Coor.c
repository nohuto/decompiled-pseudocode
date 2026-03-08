/*
 * XREFs of ?AddEntry@CoordMap@@AEAAJAEAV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x180030A6C
 * Callers:
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x18002F33C (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampEntry@CoordMap@@_K0@Z @ 0x180030B1C (-reserve_region@-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@CoordMap@@$09$00V.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CoordMap::AddEntry(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r10
  char v6; // r11
  __int64 v7; // r8
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int128 v14; // [rsp+30h] [rbp-18h]

  v5 = *a2;
  v6 = 0;
  v7 = 0LL;
  v9 = (a2[1] - *a2) >> 4;
  if ( !v9 )
    goto LABEL_6;
  v10 = 0LL;
  while ( 1 )
  {
    v11 = 2 * v10;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v5 + 8 * v11) - *(float *)a4) & _xmm) <= 0.0000011920929 )
      break;
    if ( *(float *)(v5 + 8 * v11) > *(float *)a4 )
    {
      LODWORD(v9) = v7;
      goto LABEL_6;
    }
    v7 = (unsigned int)(v7 + 1);
    v10 = (unsigned int)v7;
    if ( (unsigned int)v7 >= v9 )
      goto LABEL_6;
  }
  if ( !*(_DWORD *)(v5 + 8 * v11 + 12) )
  {
    if ( !a5 )
    {
      v12 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024809, 0x5Bu, 0LL);
      return v12;
    }
    v6 = 1;
  }
  LODWORD(v9) = v7;
  if ( v6 )
  {
    if ( a5 == 1 )
    {
      *(_DWORD *)(v5 + 16LL * (unsigned int)v7 + 4) = *(_DWORD *)(a4 + 4);
    }
    else if ( a5 == 2 )
    {
      *(_DWORD *)(v5 + 16LL * (unsigned int)v7 + 8) = *(_DWORD *)(a4 + 8);
    }
  }
  else
  {
LABEL_6:
    LODWORD(v14) = *(_DWORD *)a4;
    *((_QWORD *)&v14 + 1) = *(unsigned int *)(a4 + 8);
    DWORD1(v14) = *(_DWORD *)(a4 + 4);
    *(_OWORD *)detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::reserve_region(
                 a2,
                 (unsigned int)v9,
                 v7) = v14;
  }
  return 0;
}
