__int64 __fastcall SetWindowMinimizeAnimation(struct tagWND *a1, const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2)
{
  int v2; // edi
  unsigned int v4; // ebx
  _BYTE v6[40]; // [rsp+20h] [rbp-68h] BYREF
  int v7; // [rsp+48h] [rbp-40h]

  v2 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 > 4u )
    return 3221225485LL;
  v4 = -1073741816;
  memset_0(v6, 0, 0x40uLL);
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v6) )
  {
    if ( v7 == v2 )
    {
      return 0;
    }
    else
    {
      v7 = v2;
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v6) )
        return (unsigned int)_DwmAsyncSetCompositionAttribute((__int64)a1);
      else
        return (unsigned int)-1073741801;
    }
  }
  return v4;
}
