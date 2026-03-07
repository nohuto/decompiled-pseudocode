__int64 __fastcall bInsideDriverCall(struct _SPRITESTATE *a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdi
  Gre::Base *v4; // rcx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v7 = *(_QWORD *)a1;
  v3 = ThreadWin32Thread;
  v5 = 0;
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v7) )
    Gre::Base::Globals(v4);
  if ( !v3 || !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v7) || !*(_DWORD *)(v3 + 104) && !*(_DWORD *)(v3 + 108) )
    return *((unsigned int *)a1 + 22);
  if ( *(struct _SPRITESTATE **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 32LL) == a1 )
    return **(unsigned int **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
  return v5;
}
