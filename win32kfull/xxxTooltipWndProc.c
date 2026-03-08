/*
 * XREFs of xxxTooltipWndProc @ 0x1C00FA000
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     xxxDefWindowProc @ 0x1C00A66F0 (xxxDefWindowProc.c)
 *     ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00F9314 (-DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00F9B18 (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     InitTooltipDelay @ 0x1C00F9D58 (InitTooltipDelay.c)
 *     xxxValidateClassAndSize @ 0x1C00FA3E4 (xxxValidateClassAndSize.c)
 *     xxxBeginPaint @ 0x1C00FD4C0 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x1C00FE504 (xxxEndPaint.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BD154 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     StopFade @ 0x1C01BDEF0 (StopFade.c)
 *     zzzStartFade @ 0x1C01BE6C0 (zzzStartFade.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C0228074 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C02282E0 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0228AA4 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0228B58 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall xxxTooltipWndProc(struct tagWND *a1, unsigned int a2, HDC a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 v10; // rcx
  int v11; // eax
  HDC FadeInternal; // rax
  unsigned int v13; // r8d
  unsigned int v14; // edx
  struct tagWND *v15; // rcx
  __int64 v16; // [rsp+50h] [rbp-98h] BYREF
  HDC v17[10]; // [rsp+60h] [rbp-88h] BYREF

  memset_0(v17, 0, 0x48uLL);
  v16 = 0LL;
  if ( (unsigned int)xxxValidateClassAndSize((_DWORD)a1, a2, (_DWORD)a3, a4, 694, 129, (__int64)&v16) )
  {
    v8 = *((_QWORD *)a1 + 35);
    *(_QWORD *)v8 = a1;
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 && a2 != 130 )
      return xxxDefWindowProc(a1, a2, (HWND)a3, a4);
    switch ( a2 )
    {
      case 0xFu:
        xxxBeginPaint(a1);
        xxxTooltipRender((struct tagTOOLTIPWND *)v8, v17[0]);
        xxxEndPaint(a1, v17);
        break;
      case 0x14u:
        break;
      case 0x47u:
        v11 = *(_DWORD *)(a4 + 32);
        if ( (v11 & 0x40) == 0 )
        {
          if ( (v11 & 0x80u) != 0 )
          {
            if ( (gfade[12] & 0x20) != 0 )
              StopFade();
            else
              DestroyTooltipBitmap((struct tagTOOLTIPWND *)v8);
          }
          return xxxDefWindowProc(a1, a2, (HWND)a3, a4);
        }
        if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) != 0x80000800 )
        {
LABEL_26:
          v13 = *(_DWORD *)(v8 + 12);
LABEL_28:
          v14 = 2;
LABEL_30:
          SetTooltipTimer((struct tagTOOLTIPWND *)v8, v14, v13);
          return xxxDefWindowProc(a1, a2, (HWND)a3, a4);
        }
        if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80001000) != 0x80001000 )
        {
          if ( !(unsigned int)CreateTooltipBitmap(
                                (struct tagTOOLTIPWND *)v8,
                                *(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL),
                                *(_DWORD *)(*((_QWORD *)a1 + 5) + 100LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL)) )
            goto LABEL_27;
          FadeInternal = *(HDC *)(v8 + 16);
        }
        else
        {
          FadeInternal = CreateFadeInternal(a1, 0LL, 0x87u, 0x21u, 0);
        }
        if ( FadeInternal )
        {
          v15 = *(struct tagWND **)v8;
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(
            v15,
            0x317u,
            (unsigned __int64)FadeInternal,
            (__int128 *)0x1E,
            0,
            0,
            0LL,
            1,
            1);
          if ( (gfade[12] & 0x20) == 0 )
          {
            v14 = 3;
            v13 = 20;
            *(_DWORD *)(v8 + 40) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            goto LABEL_30;
          }
          zzzStartFade();
          goto LABEL_26;
        }
LABEL_27:
        v13 = 0;
        goto LABEL_28;
      default:
        switch ( a2 )
        {
          case 0x81u:
            InitTooltipDelay(v8);
            InitTooltipAnimation((struct tagTOOLTIPWND *)v8);
            return xxxDefWindowProc(a1, a2, (HWND)a3, a4);
          case 0x82u:
            DestroyTooltipBitmap((struct tagTOOLTIPWND *)v8);
            v10 = *(_QWORD *)(v8 + 16);
            if ( v10 )
              GreDeleteDC(v10);
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 24LL) + 48LL) &= 0xFFFFFCFF;
            return xxxDefWindowProc(a1, a2, (HWND)a3, a4);
          case 0x118u:
            xxxTooltipHandleTimer((struct tagTOOLTIPWND *)v8, (unsigned int)a3);
            break;
          case 0x318u:
            xxxTooltipRender((struct tagTOOLTIPWND *)v8, a3);
            break;
          default:
            return xxxDefWindowProc(a1, a2, (HWND)a3, a4);
        }
        return 0LL;
    }
    return 0LL;
  }
  return v16;
}
