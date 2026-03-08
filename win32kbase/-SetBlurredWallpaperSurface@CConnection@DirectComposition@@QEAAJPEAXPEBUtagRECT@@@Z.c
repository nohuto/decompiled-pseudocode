/*
 * XREFs of ?SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z @ 0x1C0091358
 * Callers:
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C006BA74 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     NtDCompositionSetBlurredWallpaperSurface @ 0x1C0091270 (NtDCompositionSetBlurredWallpaperSurface.c)
 * Callees:
 *     ?SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z @ 0x1C00913F0 (-SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0091D74 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::SetBlurredWallpaperSurface(
        DirectComposition::CConnection *this,
        void *a2,
        const struct tagRECT *a3)
{
  DirectComposition::CPushLockCriticalSection *v3; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx

  v3 = (DirectComposition::CConnection *)((char *)this + 304);
  ExAcquirePushLockExclusiveEx((char *)this + 304, 0LL);
  *((_BYTE *)v3 + 8) = 1;
  if ( !*((_QWORD *)this + 34) || *((_QWORD *)this + 34) == PsGetCurrentProcess(v8, v7, v9, v10) )
    v11 = DirectComposition::CConnection::SetBlurredWallpaperSurfaceInternal(this, a2, a3);
  else
    v11 = -1073741790;
  DirectComposition::CPushLockCriticalSection::Release(v3);
  return v11;
}
