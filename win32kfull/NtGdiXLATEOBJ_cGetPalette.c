__int64 __fastcall NtGdiXLATEOBJ_cGetPalette(__int64 a1, ULONG a2, ULONG a3, char *a4)
{
  ULONG Palette; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  XLATEOBJ *v14; // r12
  unsigned int v16; // ebp
  ULONG *v17; // rdi

  Palette = 0;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v11 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v14 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v14 && a4 )
  {
    if ( a3 > 0x9C4000 )
    {
      --*((_DWORD *)v11 + 105);
      return 0LL;
    }
    v16 = 4 * a3;
    if ( 4 * a3 )
      v17 = (ULONG *)Win32AllocPool(v16, 1886221639LL, v12, v13);
    else
      v17 = 0LL;
    if ( v17 )
    {
      Palette = XLATEOBJ_cGetPalette(v14, a2, a3, v17);
      if ( Palette )
        Palette &= -((unsigned int)bSafeCopyBits(a4, v17, v16) != 0);
      Win32FreePool(v17);
    }
  }
  --*((_DWORD *)v11 + 105);
  return Palette;
}
