/*
 * XREFs of UserRecreateRedirectionBitmap @ 0x1C01E2880
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C001F87C (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     HintSpriteShape @ 0x1C00210C4 (HintSpriteShape.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     GetRedirectionBitmap @ 0x1C0049330 (GetRedirectionBitmap.c)
 *     RecreateRedirectionBitmap @ 0x1C008F778 (RecreateRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C00B40A4 (UnsetRedirectedWindow.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00B4184 (DeleteOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00B4214 (DeleteOrSetRedirectionBitmap.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1C01E21E0 (-UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z.c)
 */

struct tagWND *__fastcall UserRecreateRedirectionBitmap(__int64 a1)
{
  __int64 ThreadWin32Thread; // rdi
  int v3; // ebx
  struct tagWND *result; // rax
  struct tagWND *v5; // rsi
  HSURF v6; // rbx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v3 = *(_DWORD *)(ThreadWin32Thread + 1508);
  *(_DWORD *)(ThreadWin32Thread + 1508) = 0;
  result = (struct tagWND *)ValidateHwnd(a1);
  *(_DWORD *)(ThreadWin32Thread + 1508) = v3;
  v5 = result;
  if ( result )
  {
    if ( (*(_BYTE *)(*((_QWORD *)result + 5) + 27LL) & 0x20) != 0 )
    {
      HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), result, 0LL, 0);
      DeleteOldRedirectionBitmap((__int64)v5);
      result = (struct tagWND *)GetRedirectionBitmap((__int64)v5);
      v6 = (HSURF)result;
      if ( result )
      {
        UnselectRedirectionBitmapsInDCEs(v5);
        SetRedirectionBitmap(v5, 0LL, 0);
        DeleteOrSetRedirectionBitmap((__int64)v5, v6, 1);
        result = (struct tagWND *)RecreateRedirectionBitmap(v5, 0, 0, 0, 0, 0LL);
        if ( (int)result < 0 )
          return (struct tagWND *)UnsetRedirectedWindow(v5, 1);
      }
    }
  }
  return result;
}
