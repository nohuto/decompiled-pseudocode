/*
 * XREFs of ?GetBoundingRectangle@AccessibilityHelpers@@YAJPEBUtagRECT@@PEAUtagVARIANT@@@Z @ 0x18049D1EC
 * Callers:
 *     ?GetPropertyValue@CDragVisualAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x18049D530 (-GetPropertyValue@CDragVisualAcc@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?UpdateBoundingRect@CDragVisualAcc@@UEAAXXZ @ 0x18049E4E0 (-UpdateBoundingRect@CDragVisualAcc@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

HRESULT __fastcall AccessibilityHelpers::GetBoundingRectangle(
        AccessibilityHelpers *this,
        VARIANT *a2,
        struct tagVARIANT *a3)
{
  unsigned int v5; // eax
  double v6; // xmm1_8
  __m128i v7; // xmm0
  int v8; // eax
  DOUBLE prgn[4]; // [rsp+20h] [rbp-38h] BYREF

  VariantInit(a2);
  v5 = *((_DWORD *)this + 2) - *(_DWORD *)this;
  v6 = (double)*((int *)this + 1);
  prgn[0] = (double)*(int *)this;
  v7 = _mm_cvtsi32_si128(v5);
  v8 = *((_DWORD *)this + 3) - *((_DWORD *)this + 1);
  prgn[1] = v6;
  *(_QWORD *)&prgn[2] = *(_OWORD *)&_mm_cvtepi32_pd(v7);
  prgn[3] = (double)v8;
  return InitVariantFromDoubleArray(prgn, 4u, a2);
}
