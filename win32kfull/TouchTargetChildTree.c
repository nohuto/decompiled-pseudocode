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
  int v11; // ecx
  int v12; // r13d
  int v13; // r11d
  int v14; // r14d
  int v15; // r10d
  int v16; // r10d
  int v17; // r11d
  int v18; // r15d
  int v19; // eax
  int v20; // r10d
  int v21; // r11d
  int v22; // ecx
  int v23; // r13d
  __int64 v24; // r10
  int v25; // r15d
  __int64 v26; // r10
  __int64 v27; // r10
  int v28; // r11d
  struct tagWND *v29; // rax
  struct tagWND *v30; // rsi
  int v32; // [rsp+80h] [rbp+8h]
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
  v11 = v7[28] - v33;
  if ( v11 < 0 || (int)v33 - v7[26] < 0 || v10 < 0 || v9 < 0 )
  {
    v23 = *((_DWORD *)a2 + 46);
    v36 = TTPixelsToHm(v7[24] - (int)v33, v23);
    TTPixelsToHm(v33 - *(_DWORD *)(v24 + 88), v23);
    v25 = *((_DWORD *)a2 + 47);
    v32 = v25;
    v14 = TTPixelsToHm(HIDWORD(v33) - *(_DWORD *)(v26 + 92), v25);
    v18 = TTPixelsToHm(*(_DWORD *)(v27 + 100) - HIDWORD(v33), v25);
    if ( v36 < 500 || v28 < 500 || v14 < 500 || v18 < 500 )
    {
      TTPixelsToHm(*((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 5), v32);
      v19 = TTPixelsToHm(*((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4), v23);
      v22 = 0;
      goto LABEL_16;
    }
  }
  else
  {
    v12 = *((_DWORD *)a2 + 46);
    v36 = TTPixelsToHm(v11, v12);
    TTPixelsToHm(v13, v12);
    v14 = TTPixelsToHm(v10, *((_DWORD *)a2 + 47));
    v18 = TTPixelsToHm(v9, v15);
    if ( v36 < 500 || v17 < 500 || v14 < 500 || v18 < 500 )
    {
      TTPixelsToHm(*((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 5), v16);
      v19 = TTPixelsToHm(*((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4), v12);
      v22 = 1;
LABEL_16:
      TraceLoggingHitTestWindowTargeting(v22, v36, v21, v14, v18, v19, v20);
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
