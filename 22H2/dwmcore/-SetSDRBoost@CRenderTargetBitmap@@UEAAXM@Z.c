/*
 * XREFs of ?SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z @ 0x180035760
 * Callers:
 *     ?GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034E64 (-GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFo.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x1802B4E4C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?SetSDRBoost@CStereoRenderTargetBitmap@@UEAAXM@Z @ 0x1802B6030 (-SetSDRBoost@CStereoRenderTargetBitmap@@UEAAXM@Z.c)
 * Callees:
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x18003433C (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetBitmap::SetSDRBoost(CRenderTargetBitmap *this, float a2)
{
  _BYTE v3[32]; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 != *(float *)((***((__int64 (__fastcall ****)(_QWORD, _BYTE *))this + 2))(*((_QWORD *)this + 2), v3) + 16) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2));
    CRenderTargetBitmap::ResetBitmapCache((CRenderTargetBitmap *)((char *)this - 120));
  }
}
