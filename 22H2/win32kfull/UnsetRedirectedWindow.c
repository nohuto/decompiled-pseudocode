/*
 * XREFs of UnsetRedirectedWindow @ 0x1C00EF498
 * Callers:
 *     xxxSetWindowStyle @ 0x1C005E140 (xxxSetWindowStyle.c)
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 *     UnsetLayeredWindow @ 0x1C00EEE28 (UnsetLayeredWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C00F1C94 (zzzUpdateLayeredWindow.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E7C30 (UserRecreateRedirectionBitmap.c)
 *     xxxPrintWindow @ 0x1C01E7D10 (xxxPrintWindow.c)
 * Callees:
 *     UnredirectDCEs @ 0x1C004C19C (UnredirectDCEs.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     _GetProp @ 0x1C006B8F0 (_GetProp.c)
 *     HintSpriteShape @ 0x1C00BD538 (HintSpriteShape.c)
 *     GetRedirectionBitmap @ 0x1C00BEBC0 (GetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00BEC48 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00EF578 (DeleteOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00EF608 (DeleteOrSetRedirectionBitmap.c)
 */

__int64 __fastcall UnsetRedirectedWindow(struct tagWND *a1, int a2)
{
  unsigned int v3; // esi
  __int64 Prop; // rbp
  int v6; // edx
  BOOL v7; // eax
  __int64 RedirectionBitmap; // rbx
  __int64 v9; // r9

  v3 = 1;
  Prop = GetProp((__int64)a1, (unsigned __int16)atomLayer, 1LL);
  v6 = *(_DWORD *)(Prop + 32) & ~a2;
  *(_DWORD *)(Prop + 32) = v6;
  if ( (a2 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x20) == 0 )
  {
    v7 = HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), a1, 0LL, 0);
    v6 = *(_DWORD *)(Prop + 32);
    v3 = v7;
  }
  if ( !v6 )
  {
    SetOrClrWF(0, (__int64)a1, 0xB20u, 1);
    DeleteOldRedirectionBitmap(a1);
    RedirectionBitmap = GetRedirectionBitmap((__int64)a1);
    UnredirectDCEs(a1);
    if ( RedirectionBitmap )
    {
      v3 = SetRedirectionBitmap((void **)a1, 0LL, 1);
      DeleteOrSetRedirectionBitmap(a1, RedirectionBitmap, 0LL, v9);
    }
  }
  return v3;
}
