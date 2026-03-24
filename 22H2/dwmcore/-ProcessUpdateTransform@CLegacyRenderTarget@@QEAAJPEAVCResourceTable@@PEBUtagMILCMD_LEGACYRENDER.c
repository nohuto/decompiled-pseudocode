/*
 * XREFs of ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18002EE48
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UpdateTransform@CLegacyRenderTarget@@IEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@@Z @ 0x18002EF2C (-UpdateTransform@CLegacyRenderTarget@@IEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::ProcessUpdateTransform(
        CLegacyRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM *a3)
{
  unsigned int v4; // esi
  signed int v5; // ecx
  int v7; // edx
  __int64 v8; // rcx
  __int64 v10; // rcx
  _BYTE v11[176]; // [rsp+40h] [rbp-C8h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)a3 + 8);
  if ( v5 < 0 || *((int *)a3 + 9) < 0 )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003303421, 0x69u, 0LL);
  }
  else
  {
    CLegacyRenderTarget::UpdateTransform(this);
    v7 = *((_DWORD *)a3 + 2);
    if ( *((_DWORD *)this + 59) != v7 )
    {
      *((_DWORD *)this + 59) = v7;
      v10 = *((_QWORD *)this + 20);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 160LL))(v10);
    }
    v8 = *((_QWORD *)this + 19);
    if ( v8 && (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 32LL))(v8, v11) >= 0 )
      *((_BYTE *)this + 18585) = (v11[88] & 8) != 0;
  }
  return v4;
}
