__int64 __fastcall bConcurrent(struct _SPRITESTATE *a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v3 = *(_QWORD *)a1;
  v4 = ThreadWin32Thread;
  v5 = 0;
  v7 = v3;
  if ( !ThreadWin32Thread || !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v7) )
    return 0LL;
  if ( *(_DWORD *)(v4 + 104) )
    return 1LL;
  LOBYTE(v5) = *(_DWORD *)(v4 + 108) != 0;
  return v5;
}
