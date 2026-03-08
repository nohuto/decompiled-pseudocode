/*
 * XREFs of ?AddDeviceResourcesToCache@CCommonRenderingEffect@@UEBAXPEAVCDrawListCache@@@Z @ 0x1800DF290
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddDeviceResource@CDrawListCache@@QEAAXPEAVIDeviceResource@@@Z @ 0x1800A9744 (-AddDeviceResource@CDrawListCache@@QEAAXPEAVIDeviceResource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCommonRenderingEffect::AddDeviceResourcesToCache(
        CCommonRenderingEffect *this,
        struct CDrawListCache *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r8
  void (__fastcall ***v6)(_QWORD, GUID *, struct IDeviceResource **); // rcx
  struct IDeviceResource *v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)((char *)this + 16);
  v4 = 2LL;
  do
  {
    v5 = v3[1];
    if ( v5 && !*v3 )
    {
      v7 = 0LL;
      v6 = (void (__fastcall ***)(_QWORD, GUID *, struct IDeviceResource **))(v5
                                                                            + 8
                                                                            + *(int *)(*(_QWORD *)(v5 + 8) + 4LL));
      (**v6)(v6, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v7);
      if ( v7 )
        CDrawListCache::AddDeviceResource(a2, v7);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v7);
    }
    v3 += 3;
    --v4;
  }
  while ( v4 );
}
