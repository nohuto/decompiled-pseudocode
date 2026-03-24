/*
 * XREFs of ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01E7584
 * Callers:
 *     zzzAnimateFade @ 0x1C01E809C (zzzAnimateFade.c)
 *     zzzShowFade @ 0x1C01E81C4 (zzzShowFade.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     GreUpdateSprite @ 0x1C00BE800 (GreUpdateSprite.c)
 *     zzzUpdateLayeredWindow @ 0x1C00F1C94 (zzzUpdateLayeredWindow.c)
 */

void __fastcall zzzUpdateFade(
        struct tagPOINT *a1,
        struct tagSIZE *a2,
        HDC a3,
        struct tagPOINT *a4,
        struct _BLENDFUNCTION *a5)
{
  int v9; // eax
  struct tagWND *v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rcx
  _QWORD v13[4]; // [rsp+80h] [rbp-28h] BYREF

  v13[2] = 0LL;
  v9 = gfade[6];
  if ( (v9 & 8) != 0 )
  {
    v10 = (struct tagWND *)HMValidateHandleNoSecure(gfade[0], 1);
    if ( v10 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v13[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v13;
      v13[1] = v10;
      HMLockObject(v10);
      zzzUpdateLayeredWindow(v10, 0LL, a1, a2, a3, a4, 0, a5, 2u, 0LL);
      ThreadUnlock1(v12);
    }
  }
  else
  {
    GreUpdateSprite(
      *(HDEV *)(gpDispInfo + 40LL),
      0LL,
      (void *)gfade[0],
      0LL,
      a1,
      a2,
      a3,
      a4,
      HIDWORD(gfade[6]),
      a5,
      2 - ((v9 & 0x40) != 0),
      0LL,
      0LL,
      1,
      0);
  }
}
