/*
 * XREFs of ??4?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapRealization@@@Z @ 0x180092F70
 * Callers:
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180033864 (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180092EE8 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x180095CCC (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V-$span@PEBVCDrawListBrush@@$0-0@gsl@@V-.c)
 *     ?ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x1800A6298 (-ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z.c)
 *     ?Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z @ 0x1802B3EDC (-Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v6; // rcx

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
  {
    v4 = *(int *)(*(_QWORD *)(a2 + 8) + 4LL) + a2 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  if ( v2 )
  {
    v6 = v2 + *(int *)(*(_QWORD *)(v2 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return a1;
}
