/*
 * XREFs of ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C021026C
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020E968 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     bSetDevDragRect @ 0x1C0029460 (bSetDevDragRect.c)
 *     xxxMinMaximizeEx @ 0x1C002B69C (xxxMinMaximizeEx.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C020B7DC (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C020BC8C (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C020BF30 (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020F704 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 *     WPP_RECORDER_SF_qdddd @ 0x1C0210CF0 (WPP_RECORDER_SF_qdddd.c)
 *     xxxDrawDragRect @ 0x1C0210F28 (xxxDrawDragRect.c)
 *     xxxDrawDragRectEx @ 0x1C0210F44 (xxxDrawDragRectEx.c)
 *     GreIsWindowResizeInProgress @ 0x1C026F778 (GreIsWindowResizeInProgress.c)
 */

void __fastcall xxxTM_MoveDragRect(struct _MOVESIZEDATA *a1, int a2)
{
  __int64 v2; // rax
  HWND *v4; // rcx
  int v5; // edi
  HWND v7; // rcx
  bool v8; // zf
  __int128 v9; // xmm0
  char *v10; // r12
  unsigned int v11; // r14d
  char v12; // dl
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int128 v17; // xmm0
  int v18; // eax
  int v19; // eax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rcx
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // ecx
  int v31; // edx
  int v32; // ecx
  int v33; // [rsp+20h] [rbp-59h]
  int v34; // [rsp+20h] [rbp-59h]
  unsigned int v35; // [rsp+50h] [rbp-29h] BYREF
  struct tagRECT *v36; // [rsp+58h] [rbp-21h] BYREF
  char *v37; // [rsp+60h] [rbp-19h]
  char *v38; // [rsp+68h] [rbp-11h]
  __int64 v39; // [rsp+70h] [rbp-9h]
  int v40[4]; // [rsp+78h] [rbp-1h] BYREF
  struct tagRECT v41; // [rsp+88h] [rbp+Fh] BYREF

  v2 = *((_QWORD *)a1 + 26);
  v4 = (HWND *)*((_QWORD *)a1 + 2);
  v5 = 0;
  v35 = 0;
  v41 = 0LL;
  v36 = 0LL;
  v7 = *v4;
  v39 = v2;
  if ( (unsigned int)GreIsWindowResizeInProgress(v7) )
  {
    *((_DWORD *)a1 + 50) |= 1u;
    return;
  }
  v8 = *((_DWORD *)a1 + 44) == 9;
  v9 = *(_OWORD *)((char *)a1 + 24);
  v10 = (char *)a1 + 40;
  v38 = (char *)a1 + 24;
  *(_OWORD *)((char *)a1 + 40) = v9;
  *(_OWORD *)((char *)a1 + 72) = *(_OWORD *)((char *)a1 + 56);
  if ( v8 )
  {
    if ( (*((_DWORD *)a1 + 49) & 0x800) == 0 )
    {
      if ( !(unsigned int)MoveRect((__int64)a1, a2, 0) )
        return;
      v11 = 534;
      goto LABEL_13;
    }
    if ( !(unsigned int)xxxSizeOrMoveRect(a1, a2, &v35, &v41, (struct tagCHECKPOINT **)&v36) )
      return;
    v12 = v35;
    if ( (v35 & 1) == 0 )
    {
      v11 = 534;
      goto LABEL_14;
    }
    SwapRect(v36, &v41);
    xxxMinMaximizeEx(*((struct tagWND **)a1 + 2), 9u, 4, 0LL, 0LL, 0LL);
    SwapRect(&v41, v36);
  }
  else if ( !(unsigned int)SizeRect(a1, a2, 0LL, &v35) )
  {
    return;
  }
  v11 = 532;
LABEL_13:
  v12 = v35;
LABEL_14:
  if ( (v12 & 2) != 0 && (v13 = *((_QWORD *)a1 + 2), (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 30LL) & 1) != 0) )
  {
    v14 = *((int *)a1 + 44);
    *(_OWORD *)v40 = *(_OWORD *)v10;
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(v13, v11, v14, (struct _LARGE_STRING *)v40, 0, 0, 0LL, 1, 0);
    xxxMinMaximizeEx(*((struct tagWND **)a1 + 2), 3u, 22, *((_QWORD *)a1 + 29), 0LL, 0LL);
    v15 = *((_QWORD *)a1 + 2);
    v16 = *(_QWORD *)(v15 + 40);
    if ( (*(_BYTE *)(v16 + 233) & 3) != 0 || (*(_BYTE *)(v16 + 31) & 1) != 0 )
      v5 = 128;
    *((_DWORD *)a1 + 49) = v5 | *((_DWORD *)a1 + 49) & 0xFFFFFF7F;
    v17 = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 88LL);
    *(_OWORD *)v40 = v17;
    *(_OWORD *)v10 = v17;
    *(_OWORD *)((char *)a1 + 72) = v17;
    *(_OWORD *)((char *)a1 + 24) = v17;
    *(_OWORD *)((char *)a1 + 56) = v17;
  }
  else
  {
    v18 = *((_DWORD *)a1 + 49);
    v37 = (char *)a1 + 40;
    if ( (v18 & 0x4000000) != 0 )
    {
      if ( (v18 & 0x20) != 0 )
      {
        if ( (v12 & 8) != 0 )
        {
          xxxDrawDragRect(a1, 0LL, 0x80000000LL);
        }
        else if ( (v12 & 4) != 0 )
        {
          bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
        }
      }
      v19 = *((_DWORD *)a1 + 49);
      if ( (v19 & 0x2000000) != 0 )
      {
        v10 = (char *)a1 + 72;
        if ( (v19 & 0x20) != 0 )
        {
          v20 = *((int *)a1 + 44);
          v21 = *((_QWORD *)a1 + 2);
          *(_OWORD *)v40 = *(_OWORD *)v10;
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(v21, v11, v20, (struct _LARGE_STRING *)v40, 0, 0, 0LL, 1, 0);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qdddd(v23, v22, v24, 12, v33, *((_QWORD *)a1 + 2), v40[0], v40[1], v40[2], v40[3]);
          xxxDrawDragRectEx(a1);
          v10 = v37;
        }
        else
        {
          v38 = (char *)a1 + 56;
        }
      }
    }
    v25 = *((int *)a1 + 44);
    v26 = *((_QWORD *)a1 + 2);
    *(_OWORD *)v40 = *(_OWORD *)v10;
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(v26, v11, v25, (struct _LARGE_STRING *)v40, 0, 0, 0LL, 1, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdddd(v28, v27, v29, 13, v34, *((_QWORD *)a1 + 2), v40[0], v40[1], v40[2], v40[3]);
    xxxDrawDragRectEx(a1);
    v10 = (char *)a1 + 40;
  }
  if ( *((_DWORD *)a1 + 44) == 9
    && ((*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL) & 0xF) == 2 || *((_QWORD *)a1 + 26) == v39) )
  {
    v30 = *((_DWORD *)a1 + 42) - (__int16)a2;
    v31 = *((_DWORD *)a1 + 43) - SHIWORD(a2);
    if ( (*((_DWORD *)a1 + 49) & 0x6000020) == 0x6000000 )
    {
      *((_DWORD *)a1 + 42) = *(_DWORD *)v10 + v30;
      v32 = *((_DWORD *)a1 + 11);
    }
    else
    {
      *((_DWORD *)a1 + 42) = v40[0] + v30;
      v32 = v40[1];
    }
    *((_DWORD *)a1 + 43) = v31 + v32;
  }
}
