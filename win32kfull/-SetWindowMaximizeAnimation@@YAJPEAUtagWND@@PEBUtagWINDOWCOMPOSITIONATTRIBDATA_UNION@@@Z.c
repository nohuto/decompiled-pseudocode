__int64 __fastcall SetWindowMaximizeAnimation(struct tagWND *a1, const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2)
{
  __int64 v2; // rsi
  int v4; // edi
  unsigned int v6; // ebx
  _BYTE v8[64]; // [rsp+20h] [rbp-68h] BYREF

  v2 = *(int *)a2;
  v4 = *((_DWORD *)a2 + 1);
  if ( (unsigned int)v2 > 2 )
    return 3221225485LL;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( (unsigned int)v2 <= 1 )
        goto LABEL_5;
    }
    else if ( (v4 & 0xFF000000) == 0xFF000000 )
    {
      goto LABEL_5;
    }
    return 3221225485LL;
  }
LABEL_5:
  v6 = -1073741816;
  memset_0(v8, 0, sizeof(v8));
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v8) )
  {
    if ( *(_DWORD *)&v8[4 * v2 + 44] == v4 )
    {
      return 0;
    }
    else
    {
      *(_DWORD *)&v8[4 * v2 + 44] = v4;
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v8) )
        return (unsigned int)_DwmAsyncSetCompositionAttribute(a1, 28LL, a2);
      else
        return (unsigned int)-1073741801;
    }
  }
  return v6;
}
