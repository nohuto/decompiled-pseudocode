/*
 * XREFs of ?EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ @ 0x1C007D630
 * Callers:
 *     ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x1C007DEE4 (-UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z.c)
 *     ?UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z @ 0x1C008984C (-UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CFlipExBuffer::EnsureHDR10MetaData(CFlipExBuffer *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax

  v1 = 0;
  if ( !*((_QWORD *)this + 46) )
  {
    v3 = operator new[](0x48uLL, 0x624D5343u, 260LL);
    *((_QWORD *)this + 46) = v3;
    if ( !v3 )
      return (unsigned int)-1073741801;
  }
  return v1;
}
