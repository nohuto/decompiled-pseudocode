/*
 * XREFs of ?GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z @ 0x1801F3E68
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x18008B408 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1801E5DF4 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$spa.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirectFlipInfo::GetDeviceTarget(CDirectFlipInfo *this, struct IDeviceTarget **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  char *v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  _QWORD *v15; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = *((_QWORD *)this + 2);
  v15 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
  v6 = v5 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
  if ( v15 )
  {
    v7 = (__int64)v15 + *(int *)(v15[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD **))(v6 + 8))(
         v6 + 8,
         &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
         &v15);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x186u, 0LL);
  }
  else
  {
    v11 = (char *)this + 32;
    if ( *((_DWORD *)this + 13) != 3 )
      v11 = 0LL;
    v12 = (*(__int64 (__fastcall **)(_QWORD *, char *, struct IDeviceTarget **))(*v15 + 8LL))(v15, v11, a2);
    v10 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x189u, 0LL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v15);
  return v10;
}
