/*
 * XREFs of ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x180035480
 * Callers:
 *     ?FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ @ 0x180034BF0 (-FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NAEBUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800351FC (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NAEBUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCSc.c)
 *     ?IsValid@CRenderTargetBitmap@@$4PPPPPPPM@A@EBAJXZ @ 0x18011E750 (-IsValid@CRenderTargetBitmap@@$4PPPPPPPM@A@EBAJXZ.c)
 *     ?IsValid@CRenderTargetBitmap@@$4PPPPPPPM@7EBAJXZ @ 0x18011F410 (-IsValid@CRenderTargetBitmap@@$4PPPPPPPM@7EBAJXZ.c)
 *     ?IsValid@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBAJXZ @ 0x18011F910 (-IsValid@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBAJXZ.c)
 *     ?IsValid@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBAJXZ @ 0x18011FC50 (-IsValid@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBAJXZ.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802AF138 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetBitmap::IsValid(CRenderTargetBitmap *this)
{
  __int64 v1; // rdx
  __int64 (__fastcall ***v2)(_QWORD); // rcx

  v1 = *((_QWORD *)this - 7);
  if ( !v1 )
    return 2291674884LL;
  v2 = (__int64 (__fastcall ***)(_QWORD))(v1 + 8 + *(int *)(*(_QWORD *)(v1 + 8) + 8LL));
  return (**v2)(v2);
}
