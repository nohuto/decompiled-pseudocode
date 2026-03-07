__int64 __fastcall PtiFromThreadId(int a1)
{
  HANDLE v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  NTSTATUS v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // rbx
  __int64 *ThreadWin32Thread; // rax
  int v10; // eax
  PETHREAD Thread; // [rsp+48h] [rbp+10h] BYREF

  Thread = 0LL;
  v1 = (HANDLE)a1;
  v4 = PsLookupThreadByThreadId((HANDLE)a1, &Thread);
  if ( v4 >= 0 )
  {
    v7 = *(_DWORD *)SGDGetUserSessionState(v3, v2, v5, v6);
    if ( (unsigned int)PsGetThreadSessionId(Thread) != v7 )
    {
      ObfDereferenceObject(Thread);
      return 0LL;
    }
  }
  if ( v4 < 0 )
    return 0LL;
  v8 = 0LL;
  if ( !PsIsThreadTerminating(Thread) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(Thread);
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
    if ( v8 )
    {
      if ( PsGetThreadId(*(PETHREAD *)v8) == v1 && (v10 = *(_DWORD *)(v8 + 488), (v10 & 0x1000000) != 0) )
      {
        if ( (v10 & 1) != 0 )
          v8 = 0LL;
      }
      else
      {
        v8 = 0LL;
      }
    }
  }
  ObfDereferenceObject(Thread);
  return v8;
}
