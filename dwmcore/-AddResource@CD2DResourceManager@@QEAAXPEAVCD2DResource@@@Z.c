/*
 * XREFs of ?AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z @ 0x1800EAB60
 * Callers:
 *     ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x180016988 (-Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z.c)
 *     ?Initialize@CDeviceTextureTarget@@MEAAJXZ @ 0x18003D290 (-Initialize@CDeviceTextureTarget@@MEAAJXZ.c)
 *     ?Initialize@CD2DResource@@MEAAJXZ @ 0x1800EAB40 (-Initialize@CD2DResource@@MEAAJXZ.c)
 *     ?Initialize@CSecondaryD2DBitmap@@MEAAJXZ @ 0x1800ED370 (-Initialize@CSecondaryD2DBitmap@@MEAAJXZ.c)
 *     ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x1802994EC (-Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z.c)
 *     ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z @ 0x180299768 (-Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180282D7C (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

void __fastcall CD2DResourceManager::AddResource(CD2DResourceManager *this, struct CD2DResource *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rcx

  v4 = (_QWORD *)((char *)a2 + 40);
  v5 = *(_QWORD *)this;
  if ( *(CD2DResourceManager **)(*(_QWORD *)this + 8LL) != this )
    __fastfail(3u);
  *v4 = v5;
  *((_QWORD *)a2 + 6) = this;
  *(_QWORD *)(v5 + 8) = v4;
  *(_QWORD *)this = v4;
  v6 = *((_QWORD *)a2 + 2);
  *((_BYTE *)a2 + 32) = 1;
  v7 = (char *)a2 + *(int *)(v6 + 8) + 16;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v7 + 24LL))(v7) )
    *((_BYTE *)a2 + 34) = 1;
  if ( *((_BYTE *)a2 + 33) )
  {
    ++*((_DWORD *)this + 4);
    if ( *((_BYTE *)a2 + 34) )
      CD2DContext::AddHwProtectedResource(*((CD2DContext **)this + 3));
  }
}
