/*
 * XREFs of UpdateSprite @ 0x1C002E7A8
 * Callers:
 *     xxxCompositedPaint @ 0x1C0015794 (xxxCompositedPaint.c)
 *     UnsetLayeredWindow @ 0x1C00240E0 (UnsetLayeredWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C002BBFC (_SetLayeredWindowAttributes.c)
 *     OffsetWindow @ 0x1C004C918 (OffsetWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UpdateSpriteArea @ 0x1C00DC4C4 (UpdateSpriteArea.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BE8C0 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     GreUpdateSprite @ 0x1C002F030 (GreUpdateSprite.c)
 *     ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C0043D6C (-InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall UpdateSprite(
        HDEV a1,
        const struct tagWND *a2,
        __int64 a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12)
{
  unsigned int v15; // edi
  int v16; // eax
  _BYTE v18[144]; // [rsp+90h] [rbp-D8h] BYREF

  memset_0(v18, 0, 0x88uLL);
  InitializeMiniWinInfo(a2, (struct tagMINIWINDOWINFO *)v18);
  v15 = 0;
  if ( (GetProp(a2, (unsigned __int16)atomDispAffinity, 1LL) & 1) != 0 )
    v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 424LL) + 56LL);
  v16 = IsWindowDesktopComposed(a2);
  return (unsigned int)GreUpdateSprite(
                         a1,
                         *(HWND *)a2,
                         0LL,
                         a4,
                         a5,
                         a6,
                         a7,
                         a8,
                         a9,
                         a10,
                         a11,
                         a12,
                         (struct tagMINIWINDOWINFO *)v18,
                         v16,
                         0,
                         v15) == 0
       ? 0x803F0001
       : 0;
}
