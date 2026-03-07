__int64 __fastcall xxxDWP_DoNCActivate(struct tagWND *a1, char a2, __int64 a3)
{
  int v5; // r15d
  __int64 v6; // rcx
  __int64 result; // rax
  void *v8; // rax
  _BYTE *v9; // rdx
  char v10; // r8
  unsigned __int16 v11; // di
  __int64 v12; // rbp
  HDC DCEx; // rsi
  __int64 v14; // rax
  unsigned int WindowBorders; // eax

  v5 = 4108;
  if ( (a2 & 1) != 0 || (a2 & 2) == 0 && (unsigned int)IsModelessMenuNotificationWindow((__int64)a1) )
  {
    v6 = 1LL;
    v5 = 4109;
  }
  else
  {
    v6 = 0LL;
  }
  SetOrClrWF(v6, a1, 64LL, 1LL);
  if ( a3 != -1 )
  {
    v9 = (_BYTE *)*((_QWORD *)a1 + 5);
    v10 = v9[31];
    if ( (v10 & 0x10) != 0 && (v9[17] & 1) == 0 )
    {
      v11 = 0;
      if ( *(_DWORD *)(gpsi + 4576LL) != *(_DWORD *)(gpsi + 4580LL)
        || *(_DWORD *)(gpsi + 4604LL) != *(_DWORD *)(gpsi + 4644LL) )
      {
        v11 = 4108;
      }
      if ( (v10 & 0x20) == 0 && (v9[30] & 4) != 0 && *(_DWORD *)(gpsi + 4608LL) != *(_DWORD *)(gpsi + 4612LL) )
        v11 |= 0x8000u;
      if ( v11 )
      {
        v12 = UserValidateCopyRgn(a3);
        DCEx = (HDC)_GetDCEx(a1, v12, 65537LL);
        if ( DCEx )
        {
          v14 = *((_QWORD *)a1 + 5);
          if ( (*(_BYTE *)(v14 + 16) & 1) != 0 )
          {
            WindowBorders = GetWindowBorders(*(unsigned int *)(v14 + 28), *(unsigned int *)(v14 + 24));
            xxxMenuBarDraw(a1, DCEx, WindowBorders, WindowBorders);
          }
          xxxDrawCaptionBar(a1, DCEx, v5 | v11);
          _ReleaseDC(DCEx);
        }
        else
        {
          GreDeleteObject(v12);
        }
      }
    }
  }
  result = IsToplevelWindowDesktopComposed(a1);
  if ( (_DWORD)result )
  {
    result = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(result + 26) & 8) != 0 )
    {
      v8 = (void *)ReferenceDwmApiPort();
      return DwmAsyncActivationChange(v8);
    }
  }
  return result;
}
