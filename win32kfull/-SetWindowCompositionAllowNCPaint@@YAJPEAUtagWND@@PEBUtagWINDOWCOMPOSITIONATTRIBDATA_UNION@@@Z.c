__int64 __fastcall SetWindowCompositionAllowNCPaint(
        struct tagWND *a1,
        const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2)
{
  unsigned int v4; // ebx
  int v5; // edi
  _DWORD v7[16]; // [rsp+20h] [rbp-68h] BYREF

  v4 = -1073741816;
  memset_0(v7, 0, sizeof(v7));
  v5 = *(_DWORD *)a2 != 0;
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v7) )
  {
    if ( -__CFSHR__(v7[0], 2) == v5 )
    {
      return 0;
    }
    else
    {
      v7[0] = v7[0] & 0xFFFFFFFD | (2 * v5);
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v7) )
        return (unsigned int)_DwmAsyncSetCompositionAttribute((__int64)a1);
      else
        return (unsigned int)-1073741801;
    }
  }
  return v4;
}
