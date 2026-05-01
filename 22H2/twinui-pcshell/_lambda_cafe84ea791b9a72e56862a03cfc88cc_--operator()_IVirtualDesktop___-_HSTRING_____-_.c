/*
 * XREFs of _lambda_cafe84ea791b9a72e56862a03cfc88cc_::operator()_IVirtualDesktop___&_HSTRING_____&_ @ 0x1804A1674
 * Callers:
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAUHSTRING__@@@@YAJV?$tuple@PEAUIVirtualDesktop@@PEAUHSTRING__@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@1@@Z @ 0x1804A1928 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAUHSTRING__@@@@YAJV-$tuple@PEAUIVirtualDesktop@@PE.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Wrap@?$RefCountWrapper@PEAUHSTRING__@@X@@SAJPEAUHSTRING__@@PEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1804A2D38 (-Wrap@-$RefCountWrapper@PEAUHSTRING__@@X@@SAJPEAUHSTRING__@@PEAVHString@Wrappers@WRL@Microsoft@@.c)
 */

__int64 *__fastcall lambda_cafe84ea791b9a72e56862a03cfc88cc_::operator()_IVirtualDesktop_____HSTRING_______(
        int ***a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  int **v4; // rsi
  __int64 v5; // rbx
  int *v9; // rdx
  int v10; // eax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a1;
  v5 = 0LL;
  v14 = 0LL;
  v9 = *v4;
  if ( **v4 >= 0 )
  {
    v10 = RefCountWrapper<HSTRING__ *,void>::Wrap(*a4, &v14);
    v5 = v14;
    **v4 = v10;
    v4 = *a1;
    v9 = **a1;
  }
  v11 = *a3;
  v12 = 0LL;
  v14 = 0LL;
  if ( *v9 >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(&v14, v11);
    **v4 = 0;
    v12 = v14;
  }
  *a2 = v5;
  a2[1] = 0LL;
  if ( a2 + 1 != &v14 )
  {
    v14 = 0LL;
    a2[1] = v12;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  WindowsDeleteString(0LL);
  return a2;
}
