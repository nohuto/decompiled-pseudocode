/*
 * XREFs of ?MapElementRectToAncestor@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@0U23@@Z @ 0x18041C964
 * Callers:
 *     ?GetScreenLocation@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z @ 0x18041C868 (-GetScreenLocation@ElementHelpers@@YA-AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z.c)
 *     ?GetDestinationRect@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUtagRECT@@@Z @ 0x1804208C0 (-GetDestinationRect@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUt.c)
 *     ?GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x18042D2E4 (-GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180086554 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x1804099E8 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 */

__m128i *__fastcall ElementHelpers::MapElementRectToAncestor(__m128i *a1, __int64 a2, struct IUnknown *a3, __m128i *a4)
{
  struct IUnknown *v7; // rbx
  struct IMultitaskingViewElement *v8; // r8
  _DWORD *v9; // rax
  unsigned __int32 v10; // r9d
  int v11; // r8d
  int v12; // edx
  __int64 *v13; // rax
  struct IUnknown *v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v17[40]; // [rsp+30h] [rbp-28h] BYREF

  v15 = (struct IUnknown *)a2;
  v7 = (struct IUnknown *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  while ( v7 && !ElementHelpers::IsSameElement(v7, a3, v8) )
  {
    v9 = (_DWORD *)((__int64 (__fastcall *)(struct IUnknown *, _BYTE *))v7->lpVtbl[5].QueryInterface)(v7, v17);
    v10 = _mm_srli_si128(*a4, 8).m128i_u32[0] - *v9;
    v11 = _mm_cvtsi128_si32(_mm_srli_si128(*a4, 12)) - v9[1];
    v12 = _mm_cvtsi128_si32(_mm_srli_si128(*a4, 4)) - v9[1];
    a4->m128i_i32[0] = *(_OWORD *)a4 - *v9;
    a4->m128i_i32[1] = v12;
    a4->m128i_i32[2] = v10;
    a4->m128i_i32[3] = v11;
    v13 = (__int64 *)((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v7->lpVtbl[1].QueryInterface)(v7, &v16);
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)&v15, v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v7 = v15;
  }
  *a1 = *a4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return a1;
}
