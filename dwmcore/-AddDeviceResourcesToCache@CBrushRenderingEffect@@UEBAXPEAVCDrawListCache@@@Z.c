void __fastcall CBrushRenderingEffect::AddDeviceResourcesToCache(
        CBrushRenderingEffect *this,
        struct CDrawListCache *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  CDrawListBitmap *v5; // rbx

  v2 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v2 + 76) )
  {
    v4 = *(unsigned int *)(v2 + 76);
    v5 = (CBrushRenderingEffect *)((char *)this + 24);
    do
    {
      CDrawListBitmap::AddDeviceResourceToCache(v5, a2);
      v5 = (CDrawListBitmap *)((char *)v5 + 24);
      --v4;
    }
    while ( v4 );
  }
}
