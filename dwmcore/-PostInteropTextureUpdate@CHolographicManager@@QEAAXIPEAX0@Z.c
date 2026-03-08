/*
 * XREFs of ?PostInteropTextureUpdate@CHolographicManager@@QEAAXIPEAX0@Z @ 0x1802A2574
 * Callers:
 *     ?Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1802A6068 (-Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802A8D0C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::PostInteropTextureUpdate(
        CHolographicManager *this,
        __int64 a2,
        void *a3,
        void *a4)
{
  CHolographicInteropTaskQueue *v7; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  v7 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
  if ( v7 )
  {
    if ( *((_BYTE *)this + 240) )
      CHolographicInteropTaskQueue::PostMessageW(v7, 5u, 0LL, 0LL, a3, a4, (void *)PerformanceCount.QuadPart);
  }
}
