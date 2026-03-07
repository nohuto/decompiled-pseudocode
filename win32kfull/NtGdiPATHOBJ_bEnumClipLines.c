__int64 __fastcall NtGdiPATHOBJ_bEnumClipLines(__int64 a1, unsigned int a2, volatile void *a3)
{
  unsigned __int64 v3; // rdi
  unsigned int v5; // r14d
  struct _CLIPLINE *v6; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v9; // r12
  _DWORD *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r13
  struct _CLIPLINE *v14; // rax
  __int64 v15; // rax

  v3 = a2;
  v5 = 0;
  v6 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v9 = ThreadCurrentObj;
  v10 = (_DWORD *)((char *)ThreadCurrentObj + 420);
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*v10;
  if ( (unsigned int)(v3 - 33) > 0x270FFDF )
  {
    --*v10;
    return 0LL;
  }
  v13 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v13 )
  {
    v14 = (struct _CLIPLINE *)Win32AllocPool(v3, 1886221639LL, v11, v12);
    v6 = v14;
    if ( v14 )
    {
      memset(v14, 0, v3);
      if ( (*((_DWORD *)v9 + 103) & 0x100) != 0 )
      {
        v15 = *(_QWORD *)(v13 + 72);
        if ( v15 )
          v5 = *(_QWORD *)(v15 + 144) == 0LL;
        else
          v5 = 1;
      }
      v3 = a2;
      if ( !v5 )
        v5 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)(v13 + 72), (struct _PATHOBJ *)v13, a2, v6, 0);
    }
  }
  ProbeForWrite(a3, v3, 4u);
  if ( v6 )
    memmove((void *)a3, v6, v3);
  else
    memset_0((void *)a3, 0, v3);
  if ( v6 )
    Win32FreePool(v6);
  --*v10;
  return v5;
}
