/*
 * XREFs of ??$FindEx@VCTempAppVisualFinderByView@@@?$CTSimpleFixedArray@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@@@@@QEBAJAEBVCTempAppVisualFinderByView@@AEBV?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180499268
 * Callers:
 *     ?GetItemForObject@CTempAppVisualArray@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1804999C0 (-GetItemForObject@CTempAppVisualArray@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Compare@CTempAppVisualFinderByView@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x180499748 (-Compare@CTempAppVisualFinderByView@@QEBAHAEBV-$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITemporaryAppVisual>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITemporaryAppVisual>>>::FindEx<CTempAppVisualFinderByView>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v4; // rdi
  bool v9; // bl
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( 1 )
  {
    v12 = *a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    v11 = *(_QWORD *)(*a1 + 8 * v4);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
    v9 = (unsigned int)CTempAppVisualFinderByView::Compare(a2, &v11) == 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    if ( v9 )
      break;
    if ( (unsigned __int64)++v4 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
