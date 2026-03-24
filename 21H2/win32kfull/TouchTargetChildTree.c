/*
 * XREFs of TouchTargetChildTree @ 0x1C021732C
 * Callers:
 *     xxxDCompSpeedHitTest @ 0x1C004CF2C (xxxDCompSpeedHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C02179DC (xxxPointerSpeedHitTest.c)
 * Callees:
 *     PtInRect @ 0x1C004DEBC (PtInRect.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C0214DDC (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     ?DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C0214FF8 (-DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z @ 0x1C0224DE8 (-TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z.c)
 *     _TTPixelsToHm @ 0x1C0260690 (_TTPixelsToHm.c)
 */

struct tagWND *__fastcall TouchTargetChildTree(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        unsigned __int64 a3,
        _DWORD *a4)
{
  struct tagWND *v6; // rdi
  _DWORD *v7; // r10
  unsigned __int64 v8; // r8
  int v9; // r15d
  int v10; // r14d
  __int64 v11; // rcx
  unsigned int v12; // r13d
  unsigned int v13; // r11d
  unsigned int v14; // r10d
  int v15; // r14d
  unsigned int v16; // r10d
  int v17; // r11d
  int v18; // r15d
  int v19; // eax
  int v20; // r10d
  int v21; // r11d
  int v22; // ecx
  unsigned int v23; // r13d
  __int64 v24; // r10
  unsigned int v25; // r15d
  __int64 v26; // r10
  __int64 v27; // r10
  int v28; // r11d
  struct tagWND *v29; // rax
  struct tagWND *v30; // rsi
  unsigned int v32; // [rsp+80h] [rbp+8h]
  unsigned __int64 v33; // [rsp+90h] [rbp+18h]
  int v36; // [rsp+A0h] [rbp+28h]

  v33 = a3;
  v6 = a1;
  if ( !a1 )
    return v6;
  v7 = (_DWORD *)*((_QWORD *)a1 + 5);
  v8 = HIDWORD(a3);
  v9 = v7[29] - v8;
  v10 = v8 - v7[27];
  v11 = (unsigned int)(v7[28] - v33);
  if ( (int)v11 < 0 || (int)v33 - v7[26] < 0 || v10 < 0 || v9 < 0 )
  {
    v23 = *((_DWORD *)a2 + 46);
    v36 = TTPixelsToHm((unsigned int)(v7[24] - v33), v23);
    TTPixelsToHm((unsigned int)(v33 - *(_DWORD *)(v24 + 88)), v23);
    v25 = *((_DWORD *)a2 + 47);
    v32 = v25;
    v15 = TTPixelsToHm((unsigned int)(HIDWORD(v33) - *(_DWORD *)(v26 + 92)), v25);
    v18 = TTPixelsToHm((unsigned int)(*(_DWORD *)(v27 + 100) - HIDWORD(v33)), v25);
    if ( v36 < 500 || v28 < 500 || v15 < 500 || v18 < 500 )
    {
      TTPixelsToHm((unsigned int)(*((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 5)), v32);
      v19 = TTPixelsToHm((unsigned int)(*((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4)), v23);
      v22 = 0;
      goto LABEL_16;
    }
  }
  else
  {
    v12 = *((_DWORD *)a2 + 46);
    v36 = TTPixelsToHm(v11, v12);
    TTPixelsToHm(v13, v12);
    v15 = TTPixelsToHm((unsigned int)v10, *((unsigned int *)a2 + 47));
    v18 = TTPixelsToHm((unsigned int)v9, v14);
    if ( v36 < 500 || v17 < 500 || v15 < 500 || v18 < 500 )
    {
      TTPixelsToHm((unsigned int)(*((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 5)), v16);
      v19 = TTPixelsToHm((unsigned int)(*((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4)), v12);
      v22 = 1;
LABEL_16:
      TraceLoggingHitTestWindowTargeting(v22, v36, v21, v15, v18, v19, v20);
    }
  }
  LODWORD(v33) = *a4 + v33;
  HIDWORD(v33) += a4[1];
  if ( *((_QWORD *)v6 + 14) )
  {
    if ( PtInRect((_DWORD *)(*((_QWORD *)v6 + 5) + 104LL), v33) )
    {
      v29 = ClassicChildTreeSpeedHitTest(v6, (struct tagPOINT)v33);
      v30 = v29;
      if ( v29 )
      {
        if ( !(unsigned int)DoesPointSnapToTopLevelWindow(v6, v29, a2, (struct tagPOINT)v33) )
          return v30;
      }
    }
  }
  return v6;
}
