/*
 * XREFs of ?get_BoundingRectangle@AccessibleElementBase@@UEAAJPEAUUiaRect@@@Z @ 0x180424A00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetScreenLocation@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z @ 0x18041CBF8 (-GetScreenLocation@ElementHelpers@@YA-AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804245C8 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AccessibleElementBase::get_BoundingRectangle(AccessibleElementBase *this, struct UiaRect *a2)
{
  int Element; // ebx
  unsigned int v5; // eax
  double v6; // xmm1_8
  __m128i v7; // xmm0
  int v8; // eax
  int v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+24h] [rbp-14h]
  int v12; // [rsp+28h] [rbp-10h]
  int v13; // [rsp+2Ch] [rbp-Ch]
  void *v14; // [rsp+40h] [rbp+8h] BYREF

  a2->left = 0.0;
  a2->top = 0.0;
  a2->width = 0.0;
  a2->height = 0.0;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  Element = AccessibleElementBase::_GetElement(
              (AccessibleElementBase *)((char *)this - 8),
              &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
              &v14);
  if ( Element >= 0 )
  {
    ElementHelpers::GetScreenLocation((__int64)&v10, (__int64)v14);
    v5 = v12 - v10;
    v6 = (double)v11;
    a2->left = (double)v10;
    v7 = _mm_cvtsi32_si128(v5);
    v8 = v13 - v11;
    Element = 0;
    a2->top = v6;
    *(_QWORD *)&a2->width = *(_OWORD *)&_mm_cvtepi32_pd(v7);
    a2->height = (double)v8;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return (unsigned int)Element;
}
