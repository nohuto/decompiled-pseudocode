struct tagWND *__fastcall UserRecreateRedirectionBitmap(__int64 a1)
{
  struct tagTHREADINFO *v2; // rsi
  int v3; // ebx
  struct tagWND *result; // rax
  struct tagWND *v5; // rdi
  __int64 v6; // rbx

  v2 = PtiCurrentShared(a1);
  v3 = *((_DWORD *)v2 + 387);
  *((_DWORD *)v2 + 387) = 0;
  result = (struct tagWND *)ValidateHwnd(a1);
  *((_DWORD *)v2 + 387) = v3;
  v5 = result;
  if ( result )
  {
    if ( (*(_BYTE *)(*((_QWORD *)result + 5) + 27LL) & 0x20) != 0 )
    {
      HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), result, 0LL, 0);
      DeleteOldRedirectionBitmap((__int64)v5);
      result = (struct tagWND *)GetRedirectionBitmap((__int64)v5);
      v6 = (__int64)result;
      if ( result )
      {
        UnselectRedirectionBitmapsInDCEs(v5);
        SetRedirectionBitmap((void **)v5, 0LL, 0);
        DeleteOrSetRedirectionBitmap((__int64)v5, v6, 1);
        result = (struct tagWND *)RecreateRedirectionBitmap((void **)v5, 0, 0, 0, 0, 0LL);
        if ( (int)result < 0 )
          return (struct tagWND *)UnsetRedirectedWindow(v5, 1);
      }
    }
  }
  return result;
}
