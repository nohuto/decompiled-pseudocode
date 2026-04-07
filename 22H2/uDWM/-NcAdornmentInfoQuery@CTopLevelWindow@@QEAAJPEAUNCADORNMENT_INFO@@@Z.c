/*
 * XREFs of ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x1800051C4
 * Callers:
 *     ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x180004F94 (-GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z.c)
 *     ?GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z @ 0x180097D50 (-GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z.c)
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180005378 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z @ 0x180009CAC (-GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::NcAdornmentInfoQuery(CTopLevelWindow *this, struct NCADORNMENT_INFO *a2)
{
  unsigned int *v4; // rbx
  __m128i v5; // xmm1
  __m128i v6; // xmm0
  float v7; // xmm1_4
  float v8; // xmm5_4
  _DWORD *v9; // rdx
  _DWORD *v10; // r8
  int yBottom; // [rsp+20h] [rbp-39h]
  float v13; // [rsp+30h] [rbp-29h] BYREF
  float v14; // [rsp+34h] [rbp-25h]
  float v15; // [rsp+38h] [rbp-21h] BYREF
  float v16; // [rsp+3Ch] [rbp-1Dh]
  RECT rcSrc2; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v18[64]; // [rsp+50h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( *(_DWORD *)a2 )
  {
    switch ( *(_DWORD *)a2 )
    {
      case 1:
        v4 = (unsigned int *)*((_QWORD *)this + 62);
        break;
      case 2:
        v4 = (unsigned int *)*((_QWORD *)this + 63);
        break;
      case 3:
        v4 = (unsigned int *)*((_QWORD *)this + 64);
        break;
      default:
        if ( *(_DWORD *)a2 != 4 || (*((_DWORD *)this + 148) & 0x10000) == 0 )
          goto LABEL_16;
        v4 = (unsigned int *)*((_QWORD *)this + 66);
        break;
    }
  }
  else
  {
    v4 = (unsigned int *)*((_QWORD *)this + 61);
  }
  if ( !v4 )
  {
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12CD,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)0x80070057LL,
      yBottom);
    return 2147942487LL;
  }
  CVisual::GetLocalToParentVisualTransform((CVisual *)v4, *((struct CVisual **)this + 32), (struct D2DMatrix *)v18);
  v5 = _mm_cvtsi32_si128(v4[30]);
  v6 = _mm_cvtsi32_si128(v4[31]);
  v15 = 0.0;
  v16 = 0.0;
  LODWORD(v13) = _mm_cvtepi32_ps(v5).m128_u32[0];
  LODWORD(v14) = _mm_cvtepi32_ps(v6).m128_u32[0];
  D3DXVec2TransformCoord((struct D2DVector2 *)&v15, (const struct D2DVector2 *)&v15, (const struct D2DMatrix *)v18);
  D3DXVec2TransformCoord((struct D2DVector2 *)&v13, (const struct D2DVector2 *)&v13, (const struct D2DMatrix *)v18);
  v7 = v13;
  v8 = v15;
  if ( v15 > v13 )
  {
    v7 = v15;
    v8 = v13;
  }
  SetRect((LPRECT)((char *)a2 + 4), (int)v8, (int)v16, (int)v7, (int)v14);
  OffsetRect(
    (LPRECT)((char *)a2 + 4),
    *(_DWORD *)(*((_QWORD *)this + 91) + 48LL),
    *(_DWORD *)(*((_QWORD *)this + 91) + 52LL));
  v9 = (_DWORD *)*((_QWORD *)this + 91);
  v10 = (_DWORD *)((char *)this + ((*((_BYTE *)this + 240) & 4) != 0 ? 644LL : 628LL));
  rcSrc2.left = *v10 + v9[12];
  rcSrc2.top = v10[2] + v9[13];
  rcSrc2.right = v9[14] - v10[1];
  rcSrc2.bottom = v9[15] - v10[3];
  IntersectRect((LPRECT)((char *)a2 + 4), (const RECT *)((char *)a2 + 4), &rcSrc2);
  return 0LL;
}
