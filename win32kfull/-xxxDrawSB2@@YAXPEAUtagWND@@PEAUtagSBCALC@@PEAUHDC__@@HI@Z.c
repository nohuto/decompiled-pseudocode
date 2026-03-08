/*
 * XREFs of ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0013CD4
 * Callers:
 *     xxxDrawScrollBar @ 0x1C0013C30 (xxxDrawScrollBar.c)
 *     xxxSBWndProc @ 0x1C022D770 (xxxSBWndProc.c)
 * Callees:
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0013EE8 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreGetBkColor @ 0x1C0013F28 (GreGetBkColor.c)
 *     GreGetTextColor @ 0x1C0013F70 (GreGetTextColor.c)
 *     DrawThumb2 @ 0x1C0013FB8 (DrawThumb2.c)
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     BitBltSysBmp @ 0x1C00D04B0 (BitBltSysBmp.c)
 *     GreSetBkColor @ 0x1C0113964 (GreSetBkColor.c)
 *     GreSetTextColor @ 0x1C0113D94 (GreSetTextColor.c)
 *     DrawFrameControl @ 0x1C0116938 (DrawFrameControl.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall xxxDrawSB2(struct tagWND *a1, struct tagSBCALC *a2, HDC a3, int a4, unsigned int a5)
{
  int v6; // eax
  __int64 v8; // rdx
  int v10; // esi
  int v12; // r14d
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // r12d
  __m128i *v15; // rdx
  __m128i *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // esi
  __int64 v21; // rbx
  __m128i v22; // xmm6
  unsigned int v23; // eax
  __m128i v24; // xmm6
  __int64 v25; // [rsp+30h] [rbp-50h]
  unsigned int v26; // [rsp+34h] [rbp-4Ch]
  __int64 v27; // [rsp+38h] [rbp-48h]
  HBRUSH ColorObjects; // [rsp+40h] [rbp-40h]
  __m128i v30; // [rsp+50h] [rbp-30h] BYREF

  v6 = *((_DWORD *)a2 + 5) - *((_DWORD *)a2 + 4);
  v8 = (unsigned int)(v6 >> 31);
  v10 = *((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 6);
  v30 = 0LL;
  v12 = v6 / 2;
  if ( v6 / 2 > 0 && v10 > 0 )
  {
    LODWORD(v8) = v6 % 2;
    DpiForSystem = GetDpiForSystem(2LL, v8);
    DpiDependentMetric = GetDpiDependentMetric(11 - (unsigned int)(a4 != 0), DpiForSystem);
    LODWORD(v25) = GreGetBkColor(a3);
    HIDWORD(v25) = GreGetTextColor(a3);
    ColorObjects = xxxGetColorObjects(a1, a3);
    v15 = (__m128i *)((char *)v30.m128i_i64 + 4);
    v16 = &v30;
    if ( v12 > DpiDependentMetric )
      v12 = DpiDependentMetric;
    if ( !a4 )
    {
      v15 = &v30;
      v16 = (__m128i *)((char *)v30.m128i_i64 + 4);
    }
    v16->m128i_i32[0] = *((_DWORD *)a2 + 6);
    v15->m128i_i32[0] = *((_DWORD *)a2 + 4);
    v16->m128i_i32[2] = *((_DWORD *)a2 + 7);
    v15->m128i_i32[2] = *((_DWORD *)a2 + 5);
    v27 = GreSelectBrush(a3, *(_QWORD *)(gpsi + 4840LL));
    if ( a4 )
    {
      if ( v12 == DpiDependentMetric )
      {
        v19 = GetDpiForSystem(v18, v17);
        if ( v10 == (unsigned int)GetDpiDependentMetric(0LL, v19) )
        {
LABEL_10:
          v20 = a5;
          BitBltSysBmp(a3, 1);
          BitBltSysBmp(a3, 1);
LABEL_11:
          v21 = GreSelectBrush(a3, v27);
          DrawThumb2(a1, a2, a3, ColorObjects, a4, v20, v25);
          GreSelectBrush(a3, v21);
          GreSetBkColor(a3);
          GreSetTextColor(a3, v26);
          return;
        }
      }
      v22 = v30;
      v20 = a5;
      v30.m128i_i32[3] = v12 + v30.m128i_i32[1];
      DrawFrameControl(a3);
      v30.m128i_i32[3] = _mm_cvtsi128_si32(_mm_srli_si128(v22, 12));
      v30.m128i_i32[1] = v30.m128i_i32[3] - v12;
    }
    else
    {
      if ( v12 == DpiDependentMetric )
      {
        v23 = GetDpiForSystem(v18, v17);
        if ( v10 == (unsigned int)GetDpiDependentMetric(1LL, v23) )
          goto LABEL_10;
      }
      v24 = v30;
      v20 = a5;
      v30.m128i_i32[2] = v12 + v30.m128i_i32[0];
      DrawFrameControl(a3);
      v30.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v24, 8));
      v30.m128i_i32[0] = v30.m128i_i32[2] - v12;
    }
    DrawFrameControl(a3);
    goto LABEL_11;
  }
}
