__int64 __fastcall UMPDOBJ::bPrepareBitmapsForClient(UMPDOBJ *this, struct _SURFOBJ **a2, struct _SURFOBJ **a3)
{
  __int64 v3; // rax
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v6; // rax

  v3 = (__int64)*a2;
  if ( !*a2 || !*(_WORD *)(v3 + 76) || (*(_DWORD *)(v3 + 88) & 0x40000) != 0 )
    return 1LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v6 = *(struct _SURFOBJ **)(ThreadWin32Thread + 384);
    if ( v6 )
    {
      *a2 = v6;
      return 1LL;
    }
  }
  return 0LL;
}
