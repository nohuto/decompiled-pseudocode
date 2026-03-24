/*
 * XREFs of ?RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z @ 0x1C00B7E90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C00445D4 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 */

void __fastcall IOCPDispatcher::RegisterThreadDispatcherObject(IOCPDispatcher *this, void *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8

  v4 = IOCPDispatcher::SetupIOCPForDispatcherHandle((__int64)this, 0LL, (int)a2, 2, *((_DWORD *)this + 684));
  v5 = 2 * (*((unsigned int *)this + 684) + 161LL);
  *((_QWORD *)this + v5) = a2;
  *((_QWORD *)this + v5 + 1) = v4;
  ++*((_DWORD *)this + 684);
}
