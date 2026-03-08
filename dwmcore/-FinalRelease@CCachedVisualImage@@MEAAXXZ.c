/*
 * XREFs of ?FinalRelease@CCachedVisualImage@@MEAAXXZ @ 0x1800F3DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1800F3E2C (-clear@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 */

void __fastcall CCachedVisualImage::FinalRelease(CCachedVisualImage *this)
{
  std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear((char *)this + 192);
  (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 64LL))(this);
}
