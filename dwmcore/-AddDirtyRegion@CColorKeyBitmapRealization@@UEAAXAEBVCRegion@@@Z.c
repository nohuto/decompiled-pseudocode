void __fastcall CColorKeyBitmapRealization::AddDirtyRegion(
        CColorKeyBitmapRealization *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this - 6) + 32LL) + 32LL))(*(_QWORD *)(*((_QWORD *)this - 6)
                                                                                                  + 32LL));
  CD2DBitmapCache::AddInvalidRegion((CColorKeyBitmapRealization *)((char *)this - 152), a2);
}
