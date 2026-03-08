/*
 * XREFs of ?GetD2DBitmapTarget@CRenderTargetBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x18001BC20
 * Callers:
 *     ?GetD2DBitmapTarget@CStereoRenderTargetBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B2730 (-GetD2DBitmapTarget@CStereoRenderTargetBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180034214 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetD2DBitmapTarget(
        CRenderTargetBitmap *this,
        struct ID2D1Bitmap1 **a2,
        char a3)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // r8
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    v14 = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v14);
    v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 2)
                                                             + 8LL
                                                             + *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 4LL));
    v7 = (**v6)(v6, &GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5, &v14);
    v10 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x16Cu, 0LL);
    }
    else
    {
      LOBYTE(v9) = a3;
      v11 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Bitmap1 **, __int64))(*(_QWORD *)v14 + 32LL))(v14, a2, v9);
      v10 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x16Eu, 0LL);
    }
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v14);
  }
  else
  {
    v10 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003292412, 0x172u, 0LL);
  }
  return v10;
}
