__int64 __fastcall EnableHalftone(__int64 a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  char *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  HSEMAPHORE Semaphore; // rax
  HSEMAPHORE v7; // rax
  HSEMAPHORE v8; // rax

  v1 = SGDGetSessionState(a1);
  v2 = (char *)EngAllocMem(1u, 0x4E8u, 0x73675448u);
  *(_QWORD *)(v1 + 48) = v2;
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2 + 80, 255, 0x400uLL);
    *((_DWORD *)v3 + 18) = 1;
    *((_DWORD *)v3 + 19) = 20000000;
    v5 = *(_QWORD *)(SGDGetSessionState(v4) + 48);
    Semaphore = EngCreateSemaphore();
    *(_QWORD *)(v5 + 24) = Semaphore;
    if ( Semaphore )
    {
      *(_QWORD *)(v5 + 48) = 0LL;
      *(_QWORD *)(v5 + 60) = 0LL;
      *(_DWORD *)(v5 + 56) = 0;
      v7 = EngCreateSemaphore();
      *(_QWORD *)(v5 + 8) = v7;
      if ( v7 )
      {
        *(_WORD *)(v5 + 68) = 0;
        v8 = EngCreateSemaphore();
        *(_QWORD *)(v5 + 16) = v8;
        if ( v8 )
        {
          *(_WORD *)(v5 + 70) = 0;
          HT_InitSaneLimits();
          return 1LL;
        }
      }
    }
    HT_UninitializeSessionGlobals();
  }
  return 0LL;
}
