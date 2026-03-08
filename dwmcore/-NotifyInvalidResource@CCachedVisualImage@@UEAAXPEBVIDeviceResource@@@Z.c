/*
 * XREFs of ?NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801C28C0
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1800F3E2C (-clear@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 */

void __fastcall CCachedVisualImage::NotifyInvalidResource(CCachedVisualImage *this, const struct IDeviceResource *a2)
{
  std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear((_QWORD *)this + 13);
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 11) + 72LL))((char *)this - 88, 0LL, 0LL);
}
