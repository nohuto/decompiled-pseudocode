/*
 * XREFs of ?Is31TrayWindow@@YAHPEAUtagWND@@@Z @ 0x1C0238924
 * Callers:
 *     xxxSetWindowStyle @ 0x1C0050020 (xxxSetWindowStyle.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C006B9F0 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00A41CC (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?IsVSlick@@YAHPEAUtagWND@@@Z @ 0x1C0238984 (-IsVSlick@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall Is31TrayWindow(struct tagWND *a1)
{
  struct tagWND *v1; // rdx
  unsigned int v2; // ebx
  _BYTE *v4; // rcx
  char v5; // al

  v1 = (struct tagWND *)*((_QWORD *)a1 + 15);
  v2 = 0;
  if ( v1 )
  {
    v4 = (_BYTE *)*((_QWORD *)v1 + 5);
    if ( (char)v4[24] >= 0 )
    {
      if ( (v4[20] & 0x40) != 0 )
        return IsVSlick(v1);
      v5 = v4[30];
      if ( (v5 & 0xA) != 0 && ((v5 & 0xC0) != 0 || (v4[31] & 0x20) != 0) )
        return IsVSlick(v1);
      else
        return 1LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    LOBYTE(v2) = (unsigned int)IsVSlick(a1) == 0;
    return v2;
  }
}
