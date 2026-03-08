/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAPEAUMipLevelSurface@CCompositionMipmapSurface@@PEAU12@_KAEAV?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@0@@Z @ 0x1802208B8
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UMipLevelSurface@CCompositionMipmapSurface@@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802207CC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UMipLevelSurface@CCompositionMipmapSurface.c)
 *     ?ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS@@@Z @ 0x180220DDC (-ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMP.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::_Uninitialized_value_construct_n<std::allocator<CCompositionMipmapSurface::MipLevelSurface>>(
        _OWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // rax

  if ( a2 )
  {
    v2 = a1 + 1;
    do
    {
      *a1 = 0LL;
      a1[1] = 0LL;
      a1 += 2;
      *(v2 - 1) = 0LL;
      *v2 = 0LL;
      v2 += 4;
      --a2;
    }
    while ( a2 );
  }
  return a1;
}
