/*
 * XREFs of xxxEnableScrollBar @ 0x1C00F6700
 * Callers:
 *     NtUserEnableScrollBar @ 0x1C00F6600 (NtUserEnableScrollBar.c)
 *     xxxSBWndProc @ 0x1C0246160 (xxxSBWndProc.c)
 * Callees:
 *     xxxEnableWindow @ 0x1C0037210 (xxxEnableWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00F6740 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D47C8 (safe_cast_fnid_to_PSBWND.c)
 */

__int64 __fastcall xxxEnableScrollBar(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // rbx
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
    return xxxEnableWndSBArrows((struct tagWND *)a1, a2, a3);
  v6 = safe_cast_fnid_to_PSBWND();
  v7 = v6;
  if ( !v6 )
    return 0LL;
  v8 = *(_DWORD *)(v6 + 12);
  v9 = v8 & 3;
  if ( v9 == (_DWORD)v3 )
    return 0LL;
  if ( (_DWORD)v3 == 3 )
  {
    v10 = 1;
LABEL_7:
    v11 = v3 | v8;
    goto LABEL_8;
  }
  if ( (_DWORD)v3 )
  {
    if ( ((unsigned int)v3 | v9) != 3 )
    {
LABEL_20:
      _InterlockedIncrement(&glSendMessage);
      return xxxSendTransformableMessageTimeout(a1, 0xE4u, v3, 0LL, 0, 0, 0LL, 1, 1);
    }
    v10 = 1;
  }
  else
  {
    v10 = 2;
    if ( v9 != 3 )
      v10 = 0;
  }
  if ( !v10 )
    goto LABEL_20;
  if ( (_DWORD)v3 )
    goto LABEL_7;
  v11 = v8 & 0xFFFFFFFC;
LABEL_8:
  *(_DWORD *)(v7 + 12) = v11;
  v12 = xxxEnableWindow((struct tagWND *)a1, v10 == 2);
  v13 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
  if ( !v12 )
    return v13 & 8;
  LOBYTE(v12) = ~v13;
  return (v12 >> 3) & 1;
}
