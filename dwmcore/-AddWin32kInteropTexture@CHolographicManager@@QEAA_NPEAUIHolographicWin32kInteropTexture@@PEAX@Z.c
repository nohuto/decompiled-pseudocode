/*
 * XREFs of ?AddWin32kInteropTexture@CHolographicManager@@QEAA_NPEAUIHolographicWin32kInteropTexture@@PEAX@Z @ 0x1802A16E4
 * Callers:
 *     ?Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z @ 0x1802AB580 (-Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802A8D0C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddWin32kInteropTexture(RTL_SRWLOCK *this, struct IUnknown *a2, void *a3)
{
  bool v5; // di
  CHolographicInteropTaskQueue *Ptr; // rcx

  v5 = 0;
  AcquireSRWLockExclusive(this + 13);
  Ptr = (CHolographicInteropTaskQueue *)this[6].Ptr;
  if ( Ptr && LOBYTE(this[30].Ptr) )
    v5 = CHolographicInteropTaskQueue::PostMessageW(Ptr, 0x1Fu, a2, 0LL, 0LL, 0LL, 0LL);
  ReleaseSRWLockExclusive(this + 13);
  return v5;
}
