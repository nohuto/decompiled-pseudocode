/*
 * XREFs of ?PreCreateThumbnailDevice@ThumbnailDeviceFactory@@UEAAXXZ @ 0x1803E4D00
 * Callers:
 *     <none>
 * Callees:
 *     ??$call_once@V_lambda_e8a8a3830e8b700b3909ca267e5ddf52_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lambda_e8a8a3830e8b700b3909ca267e5ddf52_@@@Z @ 0x1803E33A8 (--$call_once@V_lambda_e8a8a3830e8b700b3909ca267e5ddf52_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lamb.c)
 */

void __fastcall ThumbnailDeviceFactory::PreCreateThumbnailDevice(ThumbnailDeviceFactory *this)
{
  ThumbnailDeviceFactory *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  std::call_once<_lambda_e8a8a3830e8b700b3909ca267e5ddf52_,>(
    (ThumbnailDeviceFactory *)((char *)this + 56),
    (__int64)&v1);
}
