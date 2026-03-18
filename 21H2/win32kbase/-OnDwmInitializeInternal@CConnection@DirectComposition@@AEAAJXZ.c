/*
 * XREFs of ?OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ @ 0x1C00803A0
 * Callers:
 *     DCompositionDwmInitialize @ 0x1C0080360 (DCompositionDwmInitialize.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0081294 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x1C0212E40 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtag.c)
 */

__int64 __fastcall DirectComposition::CConnection::OnDwmInitializeInternal(DirectComposition::CConnection *this)
{
  DirectComposition::CPushLockCriticalSection *v1; // rdi
  unsigned int v3; // ebx
  DirectComposition::CConnection *v4; // rcx
  const struct DirectComposition::ResourceObject *v5; // rdx

  v1 = (DirectComposition::CConnection *)((char *)this + 296);
  v3 = 0;
  ExAcquirePushLockExclusiveEx((char *)this + 296, 0LL);
  *((_BYTE *)v1 + 8) = 1;
  v5 = (const struct DirectComposition::ResourceObject *)*((_QWORD *)this + 34);
  if ( v5 )
    v3 = DirectComposition::CConnection::EmitSetBlurredWallpaperSurface(
           v4,
           v5,
           (const struct tagRECT *)((char *)this + 280));
  DirectComposition::CPushLockCriticalSection::Release(v1);
  return v3;
}
