/*
 * XREFs of ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x1C020F9AC
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020E1A8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C00CA760 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     bSetDevDragRect @ 0x1C010FE70 (bSetDevDragRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     GreIsWindowResizeInProgress @ 0x1C016E988 (GreIsWindowResizeInProgress.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddd @ 0x1C01E06A0 (WPP_RECORDER_AND_TRACE_SF_qdddd.c)
 *     ?MoveRect@@YAHPEAUMOVESIZEDATA@@KW4MOVERECT_STYLE@@@Z @ 0x1C020AB64 (-MoveRect@@YAHPEAUMOVESIZEDATA@@KW4MOVERECT_STYLE@@@Z.c)
 *     ?SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C020B09C (-SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C020B338 (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x1C020C448 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAUMOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020F75C (-xxxSizeOrMoveRect@@YAHPEAUMOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 */

void __fastcall xxxTM_MoveDragRect(struct MOVESIZEDATA *a1, unsigned int a2)
{
  __int64 v2; // rax
  HWND *v4; // rcx
  char v5; // di
  HWND v7; // rcx
  struct tagMONITOR *v8; // r8
  bool v9; // zf
  struct tagRECT *v10; // r13
  __int128 v11; // xmm0
  unsigned int v12; // esi
  int v13; // eax
  unsigned int v14; // r12d
  int v15; // eax
  struct tagRECT *v16; // rdi
  unsigned __int64 v17; // r8
  unsigned __int64 *v18; // rcx
  char v19; // dl
  unsigned __int64 v20; // r8
  unsigned __int64 *v21; // rcx
  char v22; // dl
  int v23; // ecx
  int v24; // edx
  LONG top; // ecx
  __int64 v26; // [rsp+48h] [rbp-51h]
  __int64 v27; // [rsp+50h] [rbp-49h]
  __int64 v28; // [rsp+58h] [rbp-41h]
  __int64 v29; // [rsp+60h] [rbp-39h]
  unsigned int v30; // [rsp+70h] [rbp-29h] BYREF
  struct tagRECT *v31; // [rsp+78h] [rbp-21h] BYREF
  struct tagRECT *v32; // [rsp+80h] [rbp-19h]
  __int64 v33; // [rsp+88h] [rbp-11h]
  struct tagRECT v34; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v35; // [rsp+A0h] [rbp+7h] BYREF

  v2 = *((_QWORD *)a1 + 26);
  v4 = (HWND *)*((_QWORD *)a1 + 2);
  v5 = 0;
  v31 = 0LL;
  v30 = 0;
  v34 = 0LL;
  v7 = *v4;
  v33 = v2;
  if ( GreIsWindowResizeInProgress(v7) )
  {
    *((_DWORD *)a1 + 50) |= 0x80000000;
    return;
  }
  v9 = *((_DWORD *)a1 + 44) == 9;
  v10 = (struct tagRECT *)((char *)a1 + 56);
  v11 = *(_OWORD *)((char *)a1 + 24);
  *(_OWORD *)((char *)a1 + 72) = *(_OWORD *)((char *)a1 + 56);
  *(_OWORD *)((char *)a1 + 40) = v11;
  if ( v9 )
  {
    if ( (*((_DWORD *)a1 + 50) & 0x800) != 0 )
    {
      if ( !(unsigned int)xxxSizeOrMoveRect(a1, a2, &v30, &v34, (struct tagCHECKPOINT **)&v31) )
        return;
      v5 = v30;
      if ( (v30 & 1) != 0 )
      {
        SwapRect(v31, &v34);
        xxxMinMaximize(*((_QWORD *)a1 + 2), 9LL, 4LL);
        SwapRect(&v34, v31);
        v12 = 532;
        goto LABEL_12;
      }
    }
    else if ( !(unsigned int)MoveRect((__int64)a1, a2, 0) )
    {
      return;
    }
    v12 = 534;
  }
  else
  {
    if ( !(unsigned int)SizeRect(a1, a2, v8, &v30) )
      return;
    v5 = v30;
    v12 = 532;
  }
LABEL_12:
  v13 = *((_DWORD *)a1 + 50);
  v14 = 0;
  v32 = (struct tagRECT *)((char *)a1 + 40);
  if ( (v13 & 0x20) != 0 )
  {
    if ( (v5 & 4) != 0 )
    {
      xxxDrawDragRect(a1, 0LL, 0x80000000);
    }
    else if ( (v5 & 2) != 0 )
    {
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
    }
  }
  v15 = *((_DWORD *)a1 + 50);
  if ( (v15 & 0x2000000) == 0 )
    goto LABEL_28;
  v16 = (struct tagRECT *)((char *)a1 + 72);
  if ( (v15 & 0x20) != 0 )
  {
    v17 = *((int *)a1 + 44);
    v18 = (unsigned __int64 *)*((_QWORD *)a1 + 2);
    v35 = *v16;
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(v18, v12, v17, (__int64)&v35, 0, 0, 0LL, 1, 0);
    v19 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qdddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v19,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        21LL,
        4u,
        1u,
        0x15u,
        (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
        *((_QWORD *)a1 + 2),
        v35.left,
        v35.top,
        v35.right,
        v35.bottom);
    xxxDrawDragRectEx(a1, (struct tagRECT *)((char *)a1 + 72), 0x80000000, (struct tagRECT *)((char *)a1 + 56));
LABEL_28:
    v16 = v32;
    v10 = (struct tagRECT *)((char *)a1 + 24);
    goto LABEL_29;
  }
  v14 = 0x80000000;
LABEL_29:
  v20 = *((int *)a1 + 44);
  v21 = (unsigned __int64 *)*((_QWORD *)a1 + 2);
  v35 = *v16;
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout(v21, v12, v20, (__int64)&v35, 0, 0, 0LL, 1, 0);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v22 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v22 = 0;
  }
  if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v29) = v35.bottom;
    LODWORD(v28) = v35.right;
    LODWORD(v27) = v35.top;
    LODWORD(v26) = v35.left;
    WPP_RECORDER_AND_TRACE_SF_qdddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v22,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      22LL,
      4u,
      1u,
      0x16u,
      (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
      *((_QWORD *)a1 + 2),
      v26,
      v27,
      v28,
      v29);
  }
  xxxDrawDragRectEx(a1, &v35, v14 | 3, v10);
  if ( *((_DWORD *)a1 + 44) == 9
    && ((*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL) & 0xF) == 2 || *((_QWORD *)a1 + 26) == v33) )
  {
    v23 = *((_DWORD *)a1 + 42) - (__int16)a2;
    v24 = *((_DWORD *)a1 + 43) - SHIWORD(a2);
    if ( (*((_DWORD *)a1 + 50) & 0x2000020) == 0x2000000 )
    {
      *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 10) + v23;
      top = *((_DWORD *)a1 + 11);
    }
    else
    {
      *((_DWORD *)a1 + 42) = v35.left + v23;
      top = v35.top;
    }
    *((_DWORD *)a1 + 43) = v24 + top;
  }
}
