/*
 * XREFs of ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00C3E78
 * Callers:
 *     xxxDrawScrollBar @ 0x1C00C5DC8 (xxxDrawScrollBar.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     GreSetTextColor @ 0x1C00BE3F8 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00BE480 (GreSetBkColor.c)
 *     DrawFrameControl @ 0x1C00BF6FC (DrawFrameControl.c)
 *     BitBltSysBmp @ 0x1C00C2FD4 (BitBltSysBmp.c)
 *     DrawThumb2 @ 0x1C00C5BBC (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C00C5CF8 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreGetTextColor @ 0x1C00C5D38 (GreGetTextColor.c)
 *     GreGetBkColor @ 0x1C00C5D80 (GreGetBkColor.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall xxxDrawSB2(struct tagWND *a1, struct tagSBCALC *a2, HDC a3, int a4, unsigned int a5)
{
  int v6; // eax
  __int64 v8; // rdx
  int v10; // esi
  int v12; // r14d
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // r12d
  struct tagRECT *p_top; // rdx
  struct tagRECT *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // esi
  __int64 left; // rdx
  unsigned int v22; // r9d
  LONG top; // r8d
  __int64 v24; // rbx
  unsigned int v25; // eax
  struct tagRECT v26; // xmm6
  unsigned int v27; // r9d
  struct tagRECT v28; // xmm6
  int BkColor; // [rsp+30h] [rbp-50h]
  int TextColor; // [rsp+34h] [rbp-4Ch]
  __int64 v31; // [rsp+38h] [rbp-48h]
  HBRUSH ColorObjects; // [rsp+40h] [rbp-40h]
  struct tagRECT v34; // [rsp+50h] [rbp-30h] BYREF

  v6 = *((_DWORD *)a2 + 5) - *((_DWORD *)a2 + 4);
  v8 = (unsigned int)(v6 >> 31);
  v10 = *((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 6);
  v34 = 0LL;
  v12 = v6 / 2;
  if ( v6 / 2 > 0 && v10 > 0 )
  {
    LODWORD(v8) = v6 % 2;
    DpiForSystem = GetDpiForSystem(2LL, v8);
    DpiDependentMetric = GetDpiDependentMetric(11 - (unsigned int)(a4 != 0), DpiForSystem);
    BkColor = GreGetBkColor(a3);
    TextColor = GreGetTextColor(a3);
    ColorObjects = xxxGetColorObjects(a1, a3);
    p_top = (struct tagRECT *)&v34.top;
    v16 = &v34;
    if ( v12 > DpiDependentMetric )
      v12 = DpiDependentMetric;
    if ( !a4 )
    {
      p_top = &v34;
      v16 = (struct tagRECT *)&v34.top;
    }
    v16->left = *((_DWORD *)a2 + 6);
    p_top->left = *((_DWORD *)a2 + 4);
    v16->right = *((_DWORD *)a2 + 7);
    p_top->right = *((_DWORD *)a2 + 5);
    v31 = GreSelectBrush(a3, *(_QWORD *)(gpsi + 4840LL));
    if ( a4 )
    {
      if ( v12 == DpiDependentMetric )
      {
        v19 = GetDpiForSystem(v18, v17);
        if ( v10 == (unsigned int)GetDpiDependentMetric(0LL, v19) )
        {
          v20 = a5;
          BitBltSysBmp((__int64)a3, (unsigned int)v34.left, v34.top, (a5 & 1) != 0 ? 49 : 46, 1);
          left = (unsigned int)v34.left;
          v22 = (a5 & 2) != 0 ? 53 : 50;
          top = v34.bottom - v12;
LABEL_11:
          BitBltSysBmp((__int64)a3, left, top, v22, 1);
LABEL_12:
          v24 = GreSelectBrush(a3, v31);
          DrawThumb2(a1, a2, a3, ColorObjects, a4, v20);
          GreSelectBrush(a3, v24);
          GreSetBkColor(a3, BkColor);
          GreSetTextColor(a3, TextColor);
          return;
        }
      }
      v26 = v34;
      v20 = a5;
      v34.bottom = v12 + v34.top;
      DrawFrameControl(a3, &v34, 3, (a5 & 1) << 8);
      v34.bottom = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v26, 12));
      v34.top = v34.bottom - v12;
      v27 = ((a5 & 2) << 7) | 1;
    }
    else
    {
      if ( v12 == DpiDependentMetric )
      {
        v25 = GetDpiForSystem(v18, v17);
        if ( v10 == (unsigned int)GetDpiDependentMetric(1LL, v25) )
        {
          v20 = a5;
          BitBltSysBmp((__int64)a3, (unsigned int)v34.left, v34.top, (a5 & 1) != 0 ? 61 : 58, 1);
          top = v34.top;
          v22 = (a5 & 2) != 0 ? 57 : 54;
          left = (unsigned int)(v34.right - v12);
          goto LABEL_11;
        }
      }
      v28 = v34;
      v20 = a5;
      v34.right = v12 + v34.left;
      DrawFrameControl(a3, &v34, 3, ((a5 & 1) << 8) | 2);
      v34.right = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v28, 8));
      v34.left = v34.right - v12;
      v27 = ((a5 & 2) << 7) | 3;
    }
    DrawFrameControl(a3, &v34, 3, v27);
    goto LABEL_12;
  }
}
