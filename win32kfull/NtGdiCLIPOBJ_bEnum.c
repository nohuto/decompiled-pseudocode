__int64 __fastcall NtGdiCLIPOBJ_bEnum(__int64 a1, unsigned int a2, char *a3)
{
  __int64 v4; // r14
  unsigned int v5; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  __int64 result; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  XCLIPOBJ *v13; // r15
  char *v14; // rax
  char *v15; // rbp
  unsigned int v16; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  v5 = -1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = (__int64)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v9 = result;
  if ( result )
  {
    ++*(_DWORD *)(result + 420);
    v10 = UMPDOBJ::GetDDIOBJ<_CLIPOBJ>(result, a1);
    v13 = (XCLIPOBJ *)v10;
    if ( v10 )
    {
      if ( (*(_DWORD *)(v9 + 412) & 0x100) != 0 && !*(_QWORD *)(v10 + 56) )
      {
        result = 0xFFFFFFFFLL;
        --*(_DWORD *)(v9 + 420);
        return result;
      }
      if ( (unsigned int)(v4 - 1) <= 0x270FFFF )
      {
        v14 = (char *)Win32AllocPool(v4, 1886221639LL, v11, v12);
        v15 = v14;
        if ( v14 )
        {
          v16 = 0;
          v5 = XCLIPOBJ::bEnum(v13, v4, v14, &v16);
          if ( v5 != -1 && !(unsigned int)bSafeCopyBits(a3, v15, v16) )
            v5 = -1;
          Win32FreePool(v15);
        }
      }
    }
    --*(_DWORD *)(v9 + 420);
    return v5;
  }
  return result;
}
