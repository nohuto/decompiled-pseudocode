/*
 * XREFs of xxxEnableScrollBar @ 0x1C00C6A60
 * Callers:
 *     NtUserEnableScrollBar @ 0x1C00C6960 (NtUserEnableScrollBar.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     xxxEnableWindow @ 0x1C00AEC3C (xxxEnableWindow.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00C6AA0 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D0504 (safe_cast_fnid_to_PSBWND.c)
 */

__int64 __fastcall xxxEnableScrollBar(struct tagWND *BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // r9d
  int v9; // ecx
  int v10; // r8d
  unsigned int v11; // eax
  unsigned int v12; // r9d
  unsigned int v13; // eax
  char v14; // dl

  v3 = a3;
  if ( a2 != 2 )
    return xxxEnableWndSBArrows(BugCheckParameter2, a2, a3);
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
      if ( v9 != 3 )
      {
LABEL_8:
        _InterlockedIncrement(&glSendMessage);
        return xxxSendTransformableMessageTimeout(
                 (unsigned __int64 *)BugCheckParameter2,
                 0xE4u,
                 v3,
                 0LL,
                 0,
                 0,
                 0LL,
                 1,
                 1);
      }
      goto LABEL_11;
    }
    if ( ((unsigned int)v3 | v9) != 3 )
      goto LABEL_8;
  }
  v10 = 1;
LABEL_11:
  v11 = v3 | v8;
  v12 = v8 & 0xFFFFFFFC;
  if ( (_DWORD)v3 )
    v12 = v11;
  *(_DWORD *)(v7 + 12) = v12;
  v13 = xxxEnableWindow(BugCheckParameter2, v10 == 2);
  v14 = *(_BYTE *)(*((_QWORD *)BugCheckParameter2 + 5) + 31LL);
  if ( !v13 )
    return v14 & 8;
  LOBYTE(v13) = ~v14;
  return (v13 >> 3) & 1;
}
