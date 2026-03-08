/*
 * XREFs of ?GetAdapterLuid@CDxHandleYUVBitmapRealization@@UEBA?AU_LUID@@XZ @ 0x180131A4A
 * Callers:
 *     ?GetAdapterLuid@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x18011ED70 (-GetAdapterLuid@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x1802B0D60 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802B120C (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDxHandleYUVBitmapRealization::GetAdapterLuid(CDxHandleYUVBitmapRealization *this, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = *((_QWORD *)this - 13);
  if ( v2 )
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 80LL) + 896LL);
  else
    v3 = *((_QWORD *)this - 28);
  *a2 = v3;
  return (struct _LUID)a2;
}
