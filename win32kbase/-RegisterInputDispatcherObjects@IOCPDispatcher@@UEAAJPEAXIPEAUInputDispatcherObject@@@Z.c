__int64 __fastcall IOCPDispatcher::RegisterInputDispatcherObjects(
        IOCPDispatcher *this,
        void *a2,
        unsigned int a3,
        struct InputDispatcherObject *a4)
{
  unsigned int v7; // ebp
  __int64 *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int v12; // [rsp+20h] [rbp-28h]

  if ( a3 + *((_DWORD *)this + 642) >= 0x40 )
    return 3221225485LL;
  v7 = 0;
  if ( a3 )
  {
    v8 = (__int64 *)((char *)a4 + 8);
    do
    {
      v12 = v7 + *((_DWORD *)this + 642);
      v9 = 5LL * v12;
      *((_QWORD *)this + v9 + 3) = IOCPDispatcher::SetupIOCPForDispatcherHandle((__int64)this, 0LL, *v8, 1, v12);
      ++v7;
      *((_QWORD *)this + v9 + 2) = *(v8 - 1);
      v10 = *v8;
      v8 += 3;
      *((_QWORD *)this + v9 + 1) = v10;
      *((_QWORD *)this + v9 + 4) = *(v8 - 2);
      *((_QWORD *)this + v9 + 5) = a2;
    }
    while ( v7 < a3 );
  }
  *((_DWORD *)this + 642) += a3;
  return 0LL;
}
