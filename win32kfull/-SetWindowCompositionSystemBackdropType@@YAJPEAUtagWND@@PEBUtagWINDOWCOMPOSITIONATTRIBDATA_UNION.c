__int64 __fastcall SetWindowCompositionSystemBackdropType(
        struct tagWND *a1,
        const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2)
{
  unsigned int v4; // ebx
  _BYTE v6[56]; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+58h] [rbp-20h]

  v4 = -1073741816;
  memset_0(v6, 0, 0x40uLL);
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v6) )
  {
    if ( v7 == *(_DWORD *)a2 )
    {
      return 0;
    }
    else
    {
      v7 = *(_DWORD *)a2;
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v6) )
        return (unsigned int)_DwmAsyncSetCompositionAttribute(a1, 30LL, a2);
      else
        return (unsigned int)-1073741801;
    }
  }
  return v4;
}
