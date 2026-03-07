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
