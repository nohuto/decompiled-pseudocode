/*
 * XREFs of ?WaitForVBlank@CHolographicManager@@QEAAJXZ @ 0x1802A2EC8
 * Callers:
 *     ?WaitForVBlank@CHolographicInteropTarget@@UEBAJPEAX@Z @ 0x1802A6830 (-WaitForVBlank@CHolographicInteropTarget@@UEBAJPEAX@Z.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802A8D0C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicManager::WaitForVBlank(CHolographicManager *this)
{
  unsigned int v2; // ebx
  CHolographicInteropTaskQueue *v3; // rcx
  __int64 v4; // rax

  v2 = 0;
  v3 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
  v4 = *((_QWORD *)this + 5);
  if ( v4
    && !*(_BYTE *)(v4 + 192)
    && v3
    && CHolographicInteropTaskQueue::PostMessageW(v3, 0x12u, 0LL, *((void **)this + 29), 0LL, 0LL, 0LL) )
  {
    WaitForSingleObject(*((HANDLE *)this + 29), 0x64u);
  }
  else
  {
    return 142213121;
  }
  return v2;
}
