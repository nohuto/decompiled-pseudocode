/*
 * XREFs of ?vNextStyleEvent@STYLER@@QEAAXXZ @ 0x1C02F4D64
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0150E1A (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?efNextStyleLength@STYLER@@IEAA?AVEFLOAT@@XZ @ 0x1C01510A6 (-efNextStyleLength@STYLER@@IEAA-AVEFLOAT@@XZ.c)
 *     ?ptfxFraction@@YA?AU_POINTFIX@@U1@PEAVLINEDATA@@AEAVEFLOAT@@2@Z @ 0x1C01510E2 (-ptfxFraction@@YA-AU_POINTFIX@@U1@PEAVLINEDATA@@AEAVEFLOAT@@2@Z.c)
 *     ?efWorldLength@STYLER@@IEAA?AVEFLOAT@@VEVECTORFX@@@Z @ 0x1C02F3F58 (-efWorldLength@STYLER@@IEAA-AVEFLOAT@@VEVECTORFX@@@Z.c)
 *     ?vNextEvent@LINER@@QEAAXXZ @ 0x1C02F4870 (-vNextEvent@LINER@@QEAAXXZ.c)
 */

void __fastcall STYLER::vNextStyleEvent(STYLER *this)
{
  int v1; // eax
  _DWORD *v3; // rsi
  float *v4; // rbp
  float *v5; // rdi
  struct EFLOAT *v6; // r14
  struct EFLOAT *v7; // r15
  __int64 v8; // r8
  int v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  STYLER *v14; // rcx
  __int64 v15; // r8
  int v16; // xmm0_4
  __int64 v17; // rax
  float v18; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 10);
  if ( (v1 & 2) == 0 )
  {
    LINER::vNextEvent(this);
    return;
  }
  v3 = (_DWORD *)((char *)this + 688);
  v4 = (float *)((char *)this + 744);
  v5 = (float *)((char *)this + 748);
  if ( (v1 & 4) != 0 )
  {
    if ( *v3 == 5 )
    {
      v6 = (STYLER *)((char *)this + 756);
      v7 = (STYLER *)((char *)this + 752);
      while ( 1 )
      {
        if ( *v5 < *v4 )
        {
          v10 = *v5;
          *v4 = *v4 - *v5;
          v11 = v10 + *(float *)v7;
          v18 = *v5;
          *(float *)v7 = v11;
          *(struct _POINTFIX *)((char *)this + 692) = ptfxFraction(
                                                        *(struct _POINTFIX *)((char *)this + 760),
                                                        *((struct LINEDATA **)this + 89),
                                                        v7,
                                                        v6);
          *v5 = *(float *)STYLER::efNextStyleLength(this, &v18);
          *v3 = 6;
          return;
        }
        *v5 = *v5 - *v4;
        LINER::vNextEvent(this);
        if ( (unsigned int)(*v3 - 3) > 1 )
          break;
        v8 = *((_QWORD *)this + 89);
        *((_DWORD *)this + 188) = FP_0_0;
        v9 = *(_DWORD *)STYLER::efWorldLength((__int64)this, (EFLOAT *)&v18, *(_QWORD *)(v8 + 40));
        *((_QWORD *)this + 95) = *(_QWORD *)((char *)this + 692);
        *(_DWORD *)v6 = v9;
        *(_DWORD *)v4 = v9;
      }
      if ( *v3 == 1 )
        LINER::vNextEvent(this);
      *((_DWORD *)this + 10) &= ~4u;
      *v3 = 8;
      return;
    }
    if ( *v5 <= *v4 )
    {
      v12 = *v5;
      *v4 = *v4 - *v5;
      v13 = v12 + *((float *)this + 188);
      v18 = *v5;
      *((float *)this + 188) = v13;
      *(struct _POINTFIX *)((char *)this + 692) = ptfxFraction(
                                                    *(struct _POINTFIX *)((char *)this + 760),
                                                    *((struct LINEDATA **)this + 89),
                                                    (STYLER *)((char *)this + 752),
                                                    (STYLER *)((char *)this + 756));
      *((_QWORD *)this + 88) = *((_QWORD *)this + 89);
      *v5 = *(float *)STYLER::efNextStyleLength(this, &v18);
      *v3 = 5;
      return;
    }
    *v5 = *v5 - *v4;
  }
  LINER::vNextEvent(this);
  if ( *v3 )
  {
    if ( (unsigned int)(*v3 - 3) >= 2 )
    {
      *((_DWORD *)this + 10) &= ~4u;
      return;
    }
    v14 = this;
  }
  else
  {
    *((_QWORD *)this + 91) = *((_QWORD *)this + 90);
    *v5 = *(float *)STYLER::efNextStyleLength(this, &v18);
  }
  v15 = *((_QWORD *)this + 89);
  *((_DWORD *)this + 188) = FP_0_0;
  v16 = *(_DWORD *)STYLER::efWorldLength((__int64)v14, (EFLOAT *)&v18, *(_QWORD *)(v15 + 40));
  v17 = *(_QWORD *)((char *)this + 692);
  *((_DWORD *)this + 10) |= 4u;
  *((_QWORD *)this + 95) = v17;
  *(_DWORD *)v4 = v16;
  *((_DWORD *)this + 189) = v16;
}
