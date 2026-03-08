/*
 * XREFs of ?RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z @ 0x1C009A310
 * Callers:
 *     AddThreadWakeEventDispatcherToIOCP @ 0x1C0099E00 (AddThreadWakeEventDispatcherToIOCP.c)
 *     UserKSTInitialize @ 0x1C009A090 (UserKSTInitialize.c)
 * Callees:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C007D9E0 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 */

void __fastcall IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
        IOCPDispatcher *this,
        void *a2,
        void (*a3)(void *),
        void *a4)
{
  __int64 v8; // rax
  __int64 v9; // r9

  v8 = IOCPDispatcher::SetupIOCPForDispatcherHandle((__int64)this, 0LL, (int)a2, 2, *((_DWORD *)this + 724));
  v9 = 32LL * *((unsigned int *)this + 724);
  *(_QWORD *)((char *)this + v9 + 2576) = a2;
  *(_QWORD *)((char *)this + v9 + 2600) = a4;
  *(_QWORD *)((char *)this + v9 + 2584) = v8;
  *(_QWORD *)((char *)this + v9 + 2592) = a3;
  ++*((_DWORD *)this + 724);
}
