/*
 * XREFs of ?GetSurfacePlaneResource@CDDisplaySwapChain@@UEBAJPEAVCCompositionSurfaceInfo@@PEAPEAUIUnknown@@PEAI@Z @ 0x180287260
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDisplaySwapChain::GetSurfacePlaneResource(
        CDDisplaySwapChain *this,
        struct CCompositionSurfaceInfo *a2,
        struct IUnknown **a3,
        unsigned int *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v7 = -2003292412;
  v8 = (*(__int64 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)a2 + 48LL))(a2);
  if ( v8 )
  {
    v9 = *(int *)(*(_QWORD *)(v8 + 8) + 4LL);
    v15 = 0LL;
    v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))(v8 + 8 + v9))(
            v8 + 8 + v9,
            &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c,
            &v15);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x38Fu, 0LL);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IUnknown **, unsigned int *))(*(_QWORD *)v15 + 184LL))(
              v15,
              *((_QWORD *)this + 42),
              a3,
              a4);
      v7 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x393u, 0LL);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v15);
  }
  return v7;
}
