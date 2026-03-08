/*
 * XREFs of ?GetSize@CCachedVisualImage@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800D9BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800618D4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct D2D_SIZE_U __fastcall CCachedVisualImage::GetSize(CCachedVisualImage *this, __int64 a2)
{
  __int64 v3; // rax
  double v4; // xmm0_8
  double v5; // xmm3_8
  float v6; // xmm0_4
  float v7; // xmm0_4
  __int64 v9; // rax
  __int128 v10; // xmm0
  float v11; // xmm1_4
  __int64 v12; // rax
  float *v13; // rdx
  float v14; // [rsp+20h] [rbp-28h]
  int v15[4]; // [rsp+28h] [rbp-20h] BYREF

  *(_QWORD *)a2 = 0LL;
  if ( *((_BYTE *)this + 1705) )
  {
    *(_QWORD *)a2 = *((_QWORD *)this + 212);
  }
  else if ( *((_BYTE *)this + 1706) )
  {
    if ( *((_QWORD *)this + 14) )
    {
      v12 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 9) + 216LL))((char *)this - 72);
      v13 = (float *)(v12 + 72);
      if ( !*(_QWORD *)(v12 + 64) )
        v13 = (float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      PixelAlign(v15, v13);
      *(_DWORD *)a2 = v15[2] - v15[0];
      *(_DWORD *)(a2 + 4) = v15[3] - v15[1];
    }
  }
  else
  {
    v3 = *((_QWORD *)this + 8);
    if ( v3 )
    {
      v4 = *(double *)(v3 + 64);
      v5 = *(double *)(v3 + 72);
    }
    else
    {
      v4 = *((double *)this + 6);
      v5 = *((double *)this + 7);
    }
    if ( v4 == 0.0 && v5 == 0.0 )
    {
      v9 = *((_QWORD *)this + 5);
      if ( v9 )
        v10 = *(_OWORD *)(v9 + 64);
      else
        v10 = *(_OWORD *)((char *)this + 24);
      v11 = *((float *)&v10 + 3) - *((float *)&v10 + 1);
      v4 = (float)(*((float *)&v10 + 2) - *(float *)&v10);
      v5 = v11;
    }
    v6 = v4;
    v7 = v6 + 6291456.25;
    *(_DWORD *)a2 = (int)(LODWORD(v7) << 10) >> 11;
    v14 = (float)v5 + 6291456.25;
    *(_DWORD *)(a2 + 4) = (int)(LODWORD(v14) << 10) >> 11;
  }
  return (struct D2D_SIZE_U)a2;
}
