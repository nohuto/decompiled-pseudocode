/*
 * XREFs of ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801F1810
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180019550 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18001A0FC (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x1801F19F0 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAn.c)
 */

__int64 __fastcall CGammaBlendLayer::ApplyState(CGammaBlendLayer *this, struct CDrawingContext *a2)
{
  __int64 v4; // r9
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-28h]
  _DWORD v12[6]; // [rsp+30h] [rbp-18h] BYREF
  __int64 (__fastcall ***v13)(_QWORD); // [rsp+50h] [rbp+8h] BYREF

  v12[0] = 0;
  v12[1] = 0;
  v4 = *((_QWORD *)a2 + 4);
  v12[2] = *((_DWORD *)this + 6);
  v12[3] = *((_DWORD *)this + 7);
  v5 = *(int *)(*(_QWORD *)(v4 + 8) + 4LL);
  v13 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 (__fastcall ****)(_QWORD)))(v5 + v4 + 8))(
         v5 + v4 + 8,
         &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f,
         &v13);
  v8 = v6;
  if ( v6 < 0 )
  {
    v11 = 60;
    goto LABEL_11;
  }
  if ( (**v13)(v13) )
  {
    v6 = CDrawingContext::FlushD2D(a2);
    v8 = v6;
    if ( v6 < 0 )
    {
      v11 = 71;
    }
    else
    {
      v6 = CExternalLayer::ApplyState(this, a2);
      v8 = v6;
      if ( v6 < 0 )
      {
        v11 = 73;
      }
      else
      {
        v6 = CGammaBlendLayer::CopyAndTransform(v7, a2, v13, (char *)this + 16, v12, 2);
        v8 = v6;
        if ( v6 >= 0 )
          goto LABEL_12;
        v11 = 81;
      }
    }
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, v11, 0LL);
    goto LABEL_12;
  }
  v8 = -2003292287;
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003292287, 0x44u, 0LL);
LABEL_12:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v13);
  return v8;
}
