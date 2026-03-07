char *__fastcall GetOemBitmapInfoForDpi(__int64 a1, int a2)
{
  __int64 v2; // rdi
  int v3; // r11d
  struct OEMBITMAPSET *v4; // rbx
  unsigned int v5; // r11d
  __int64 CurrentProcessWin32Process; // rax

  v2 = (int)a1;
  v3 = a2;
  if ( !a2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v3 = *(unsigned __int16 *)(CurrentProcessWin32Process + 284);
  }
  v4 = (struct OEMBITMAPSET *)((char *)&gOemBitmapSet + 760 * (unsigned int)GetDpiCacheSlot(v3));
  EnsureOemBitmapInfoForDpiSlot(v4, v5);
  return (char *)v4 + 8 * v2 + 16;
}
