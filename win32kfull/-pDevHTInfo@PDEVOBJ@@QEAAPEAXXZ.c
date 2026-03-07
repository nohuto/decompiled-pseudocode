void *__fastcall PDEVOBJ::pDevHTInfo(PDEVOBJ *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rbx
  _DWORD *v6; // rdi

  v2 = Gre::Base::Globals(this);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v4 = ThreadWin32Thread;
  if ( !ThreadWin32Thread
    || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108)
    || !PDEVOBJ::bAllowShareAccess(this) )
  {
    return *(void **)(*(_QWORD *)this + 1504LL);
  }
  if ( *(_DWORD *)(v4 + 296) != *((_DWORD *)v2 + 954) )
  {
    v6 = *(_DWORD **)(v4 + 288);
    if ( v6 )
    {
      bDeletePalette(*(_QWORD *)v6);
      HT_DestroyDeviceHalftoneInfo(v6);
      *(_QWORD *)(v4 + 288) = 0LL;
    }
  }
  return *(void **)(v4 + 288);
}
