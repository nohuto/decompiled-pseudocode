/*
 * XREFs of _FindWindowEx @ 0x1C008C110
 * Callers:
 *     NtUserFindWindowEx @ 0x1C00F7B30 (NtUserFindWindowEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     GetThreadDesktopWindow @ 0x1C0103DD0 (GetThreadDesktopWindow.c)
 */

_QWORD *__fastcall FindWindowEx(__int64 ThreadDesktopWindow, __int64 a2, unsigned __int16 *a3, const wchar_t *a4)
{
  __int16 Atom; // si
  int v8; // r14d
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned __int16 *v11; // rax
  int v12; // r11d
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  const wchar_t *v16; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rax
  __int16 v19; // [rsp+20h] [rbp-88h]

  Atom = 0;
  v19 = 0;
  v8 = 0;
  if ( a3 )
  {
    if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v9 = 2147483646LL;
      v10 = 256LL;
      v11 = gawchAtomScratch;
      v12 = 0;
      v13 = 0LL;
      while ( v10 )
      {
        if ( !v9 || !*a3 )
          goto LABEL_10;
        *v11++ = *a3++;
        --v10;
        --v9;
        ++v13;
      }
      --v11;
      v12 = -2147483643;
LABEL_10:
      *v11 = 0;
      if ( v12 < 0 )
      {
        Atom = 0;
        v19 = 0;
      }
      else
      {
        Atom = UserFindAtom(gawchAtomScratch);
        v19 = Atom;
      }
    }
    else
    {
      Atom = (__int16)a3;
      v19 = (__int16)a3;
    }
    if ( !Atom )
      return 0LL;
  }
  if ( !ThreadDesktopWindow )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    if ( !a2 )
      v8 = 1;
  }
  while ( 1 )
  {
    if ( a2 )
    {
      if ( *(_QWORD *)(a2 + 104) != ThreadDesktopWindow )
        return 0LL;
      v14 = *(_QWORD **)(a2 + 88);
    }
    else
    {
      v14 = *(_QWORD **)(ThreadDesktopWindow + 112);
    }
    while ( v14 )
    {
      if ( !Atom || Atom == *(_WORD *)(*(_QWORD *)(v14[17] + 8LL) + 2LL) )
      {
        if ( !a4 )
          break;
        v16 = *(_DWORD *)(v14[5] + 184LL) ? (const wchar_t *)v14[23] : szNull;
        if ( !_wcsicmp(a4, v16) )
          break;
      }
      v14 = (_QWORD *)v14[11];
    }
    if ( v14 || !v8 )
      break;
    v8 = 0;
    ThreadDesktopWindow = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v18 = *(_QWORD *)(ThreadWin32Thread + 456);
      if ( v18 )
        ThreadDesktopWindow = *(_QWORD *)(v18 + 104);
    }
    a2 = 0LL;
    Atom = v19;
  }
  return v14;
}
