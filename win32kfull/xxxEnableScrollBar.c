__int64 __fastcall xxxEnableScrollBar(struct tagWND *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  char v13; // dl

  v3 = a3;
  if ( a2 != 2 )
    return xxxEnableWndSBArrows(a1, a2, a3);
  v6 = safe_cast_fnid_to_PSBWND();
  v7 = v6;
  if ( !v6 )
    return 0LL;
  v8 = *(_DWORD *)(v6 + 12);
  v9 = v8 & 3;
  if ( v9 == (_DWORD)v3 )
    return 0LL;
  if ( (_DWORD)v3 != 3 )
  {
    if ( !(_DWORD)v3 )
    {
      v10 = 2;
      if ( v9 == 3 )
      {
        v11 = v8 & 0xFFFFFFFC;
        goto LABEL_11;
      }
LABEL_14:
      _InterlockedIncrement(&glSendMessage);
      return xxxSendTransformableMessageTimeout(a1, 0xE4u, v3, 0LL, 0, 0, 0LL, 1, 1);
    }
    if ( ((unsigned int)v3 | v9) != 3 )
      goto LABEL_14;
  }
  v10 = 1;
  v11 = v3 | v8;
LABEL_11:
  *(_DWORD *)(v7 + 12) = v11;
  v12 = xxxEnableWindow(a1, v10 == 2);
  v13 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( !v12 )
    return v13 & 8;
  LOBYTE(v12) = ~v13;
  return (v12 >> 3) & 1;
}
