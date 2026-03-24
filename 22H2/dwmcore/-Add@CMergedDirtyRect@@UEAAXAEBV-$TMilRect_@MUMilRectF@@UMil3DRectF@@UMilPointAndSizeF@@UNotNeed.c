/*
 * XREFs of ?Add@CMergedDirtyRect@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180058560 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x18006BAC0 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18006C008 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006C310 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMergedDirtyRect::Add(__int64 a1, float *a2)
{
  __int64 result; // rax
  float v5; // xmm6_4
  unsigned int v6; // ebp
  unsigned int v7; // esi
  unsigned int v8; // r10d
  _BYTE *v9; // r11
  float *v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // r10d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  float v19; // xmm0_4
  float v20; // xmm4_4
  float v21; // xmm4_4
  __int128 v22; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  if ( g_pComposition )
    result = *((_QWORD *)g_pComposition + 44);
  if ( *(_QWORD *)(a1 + 88) != result )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    result = 0LL;
    if ( g_pComposition )
      result = *((_QWORD *)g_pComposition + 44);
    *(_QWORD *)(a1 + 88) = result;
  }
  if ( a2[2] > *a2 && a2[3] > a2[1] )
  {
    v5 = FLOAT_3_4028235e38;
    v6 = -1;
    v7 = -1;
    CMergedRectBase<4>::Optimize(a1, 0LL);
    v8 = 0;
    v9 = (_BYTE *)(a1 + 72);
    v10 = (float *)(a1 + 8);
    do
    {
      if ( *v9 )
      {
        if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v10)
          && !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a2)
          && v10[2] > *a2
          && a2[2] > *v10
          && v10[3] > a2[1]
          && a2[3] > v10[1] )
        {
          v11 = v8;
          goto LABEL_20;
        }
        if ( *(_DWORD *)(a1 + 80) == 4 )
        {
          v22 = *(_OWORD *)v10;
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v22, a2);
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(&v22, v12, v13);
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(16LL * v14 + a1 + 8, v15, v16);
          v19 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(a2, v17, v18);
          v21 = v20 - v19;
          if ( v5 > v21 )
          {
            v5 = v21;
            v6 = v8;
          }
        }
      }
      else
      {
        v7 = v8;
      }
      ++v8;
      ++v9;
      v10 += 4;
    }
    while ( v8 < 4 );
    if ( v7 != -1 )
    {
      result = 2LL * v7;
      *(_OWORD *)(a1 + 16LL * v7 + 8) = *(_OWORD *)a2;
      *(_BYTE *)(v7 + a1 + 72) = 1;
      ++*(_DWORD *)(a1 + 76);
      ++*(_DWORD *)(a1 + 80);
      return result;
    }
    v11 = v6;
LABEL_20:
    result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(16 * v11 + a1 + 8, a2);
    ++*(_DWORD *)(a1 + 76);
  }
  return result;
}
