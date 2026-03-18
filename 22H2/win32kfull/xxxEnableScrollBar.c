/*
 * XREFs of xxxEnableScrollBar @ 0x1C009E260
 * Callers:
 *     NtUserEnableScrollBar @ 0x1C009E160 (NtUserEnableScrollBar.c)
 *     xxxSBWndProc @ 0x1C022AA50 (xxxSBWndProc.c)
 * Callees:
 *     xxxEnableWindow @ 0x1C000BA8C (xxxEnableWindow.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C009E2A0 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01BB0C0 (safe_cast_fnid_to_PSBWND.c)
 */

__int64 __fastcall xxxEnableScrollBar(struct tagWND *BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  char v13; // dl

  if ( a2 != 2 )
    return xxxEnableWndSBArrows(BugCheckParameter2, a2, a3);
  v6 = safe_cast_fnid_to_PSBWND();
  v7 = v6;
  if ( !v6 )
    return 0LL;
  v8 = *(_DWORD *)(v6 + 12);
  v9 = v8 & 3;
  if ( v9 == a3 )
    return 0LL;
  if ( a3 != 3 )
  {
    if ( !a3 )
    {
      v10 = 2;
      if ( v9 == 3 )
      {
        v11 = v8 & 0xFFFFFFFC;
        goto LABEL_11;
      }
LABEL_14:
      _InterlockedIncrement(&glSendMessage);
      return xxxSendTransformableMessageTimeout((ULONG_PTR)BugCheckParameter2, 0, 0, 0LL, 1, 1);
    }
    if ( (a3 | v9) != 3 )
      goto LABEL_14;
  }
  v10 = 1;
  v11 = a3 | v8;
LABEL_11:
  *(_DWORD *)(v7 + 12) = v11;
  v12 = xxxEnableWindow(BugCheckParameter2, v10 == 2);
  v13 = *(_BYTE *)(*((_QWORD *)BugCheckParameter2 + 5) + 31LL);
  if ( !v12 )
    return v13 & 8;
  LOBYTE(v12) = ~v13;
  return (v12 >> 3) & 1;
}
