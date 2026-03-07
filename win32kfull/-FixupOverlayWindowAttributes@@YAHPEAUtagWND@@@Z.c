__int64 __fastcall FixupOverlayWindowAttributes(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 TopLevelWindow; // rax
  ShellWindowManagement *v3; // rsi
  int v4; // eax
  int v5; // edi
  BOOL v6; // ebp
  struct tagBWL *v7; // rax
  struct tagBWL *v8; // r14
  _QWORD *i; // rdi
  __int64 v10; // rax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v1 = 0;
  TopLevelWindow = GetTopLevelWindow((__int64)a1);
  v3 = (ShellWindowManagement *)TopLevelWindow;
  if ( TopLevelWindow )
  {
    v4 = *(_DWORD *)(TopLevelWindow + 320);
    v5 = 0;
    v6 = (v4 & 0x10000) != 0;
    if ( (v4 & 0x10000) != 0 )
      goto LABEL_13;
    v7 = BuildHwndList(v3, 1, 0LL, 1);
    v8 = v7;
    if ( v7 )
    {
      for ( i = (_QWORD *)((char *)v7 + 32); *i != 1LL; ++i )
      {
        v10 = HMValidateHandleNoSecure(*i, 1);
        if ( v10 && (*(_DWORD *)(v10 + 320) & 0x10000) != 0 )
        {
          v6 = 1;
          break;
        }
      }
      v5 = 1;
      FreeHwndList(v8);
    }
    if ( v5 )
    {
LABEL_13:
      v12 = 0LL;
      LODWORD(v12) = v6;
      v13 = 0LL;
      LOBYTE(v1) = (int)SetWindowCompositionVideoOverlayActive(
                          v3,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v12) >= 0;
    }
  }
  return v1;
}
