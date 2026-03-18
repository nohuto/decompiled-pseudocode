/*
 * XREFs of ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C020BFC8
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020E1A8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     CkptRestore @ 0x1C007C97C (CkptRestore.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C00CA760 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00CBA94 (-IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddd @ 0x1C01E06A0 (WPP_RECORDER_AND_TRACE_SF_qdddd.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1C020AAD8 (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?ShouldGoMonitorMaximizedMoveSizeData@@YA_NPEAUMOVESIZEDATA@@@Z @ 0x1C020B048 (-ShouldGoMonitorMaximizedMoveSizeData@@YA_NPEAUMOVESIZEDATA@@@Z.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C020B338 (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C024AC80 (-MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 */

void __fastcall xxxCommitMoveSize(struct tagWND *a1, struct MOVESIZEDATA *a2)
{
  int v4; // r14d
  int v5; // ebp
  struct MOVESIZEDATA *v6; // rdx
  unsigned __int8 v7; // al
  int v8; // r15d
  struct tagRECT *Prop; // rsi
  struct tagMONITOR *v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  LONG v13; // eax
  struct tagWND *v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // edx
  struct tagRECT *v20; // rax
  struct tagRECT *v21; // rsi
  int v22; // eax
  int v23; // esi
  char v24; // dl
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // r8
  int v28; // ecx
  struct tagRECT v29; // [rsp+70h] [rbp-88h] BYREF
  __int64 v30; // [rsp+80h] [rbp-78h] BYREF
  __int128 v31; // [rsp+88h] [rbp-70h]
  int v32; // [rsp+98h] [rbp-60h]
  char v33; // [rsp+9Ch] [rbp-5Ch]
  __int128 v34; // [rsp+A0h] [rbp-58h]

  v4 = 0;
  v5 = 0;
  if ( *((_QWORD *)a1 + 13) != GetDesktopWindow((__int64)a1) )
    goto LABEL_44;
  v7 = ShouldGoMonitorMaximizedMoveSizeData(v6);
  v8 = v7;
  if ( (*((_DWORD *)a2 + 50) & 0x300) != 0 || v7 )
    v5 = 1;
  Prop = (struct tagRECT *)GetProp((__int64)a1, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
  if ( Prop )
  {
    if ( (unsigned int)(*((_DWORD *)a2 + 44) - 1) <= 1 )
    {
      v11 = *((_DWORD *)a2 + 50);
      if ( (v11 & 0x6000) == 0x6000 && (v11 & 0x300) == 0x300 )
      {
        Prop->left = *((_DWORD *)a2 + 6);
        Prop->right = *((_DWORD *)a2 + 8);
        goto LABEL_31;
      }
    }
    if ( *((_QWORD *)a2 + 27) == *((_QWORD *)a2 + 29) )
    {
      if ( (*((_DWORD *)a2 + 50) & 0x1000) == 0 && v5 )
      {
        *Prop = *(struct tagRECT *)((char *)a2 + 136);
        v14 = (struct tagWND *)*((_QWORD *)a2 + 29);
LABEL_30:
        AdvancedWindowPos::MigrateCheckpoint(a1, v14, v10);
      }
    }
    else if ( v8 || IsSemiMaximized(a1) )
    {
      if ( (*((_DWORD *)a2 + 50) & 0x1000000) != 0 )
      {
        v12 = *(_QWORD *)&Prop->left - *((_QWORD *)a2 + 19);
        if ( *(_QWORD *)&Prop->left == *((_QWORD *)a2 + 19) )
          v12 = *(_QWORD *)&Prop->right - *((_QWORD *)a2 + 20);
        if ( v12 )
          *Prop = *(struct tagRECT *)((char *)a2 + 152);
      }
      if ( IsVerticallyMaximized(a1) )
        MonitorFromRect(Prop, 2u, 0);
      if ( (*((_DWORD *)a2 + 50) & 0x300) == 0x300 )
      {
        v13 = *((_DWORD *)a2 + 66);
        if ( Prop->left <= v13 && v13 < Prop->right )
          MonitorFromRect(Prop, 2u, 0);
      }
      if ( IsVerticallyMaximized(a1) && ((unsigned __int16)v10 & 0x300) == 0x300 )
      {
        v10 = (struct tagMONITOR *)((unsigned int)v10 | 0x80000);
        *((_DWORD *)a2 + 50) = (_DWORD)v10;
      }
      goto LABEL_30;
    }
  }
LABEL_31:
  v15 = *((_QWORD *)a2 + 25);
  if ( ((v15 ^ (v15 >> 5)) & 0x300) != 0 || (v15 & 0x80000) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v16 = *((_QWORD *)a1 + 5);
    v4 = 0;
    v17 = *((_QWORD *)a2 + 3) - *(_QWORD *)(v16 + 88);
    if ( !v17 )
      v17 = *((_QWORD *)a2 + 4) - *(_QWORD *)(v16 + 96);
    if ( v17 )
    {
      v5 = 1;
      goto LABEL_39;
    }
  }
  v5 = 0;
LABEL_39:
  MakeArrangedStateObservable(a2);
  if ( v8 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) == 0 || *((_QWORD *)a2 + 27) != *((_QWORD *)a2 + 29) )
    {
      v18 = *((_QWORD *)a2 + 29);
      v32 = 0;
      v30 = v18;
      v31 = 0LL;
      v33 = 0;
      v34 = 0LL;
      xxxMinMaximizeEx((ULONG_PTR)a1, 3u, gdwPUDFlags & 0x10000 | 6, (__int64)&v30);
    }
    *((_DWORD *)a2 + 50) |= 0x40000000u;
    return;
  }
LABEL_44:
  v19 = *((_DWORD *)a2 + 50);
  if ( (v19 & 0x7000) == 0x1000 && (v19 & 0x20) == 0
    || (((v19 & 0x100000) == 0) & *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL)) != 0 )
  {
    v20 = (struct tagRECT *)GetProp((__int64)a1, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
    v21 = v20;
    if ( v20 )
    {
      v29 = *(struct tagRECT *)((char *)a2 + 24);
      SwapRect(v20, &v29);
      xxxMinMaximize(*((_QWORD *)a2 + 2), 9LL, 4LL);
      SwapRect(&v29, v21);
      MakeArrangedStateObservable(a2);
    }
  }
  v22 = *((_DWORD *)a2 + 44);
  v23 = 516;
  if ( (v22 == 9 && !v5 || v22 == 10) && !v4 )
    v23 = 517;
  v24 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qdddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v24,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      23LL,
      4u,
      1u,
      0x17u,
      (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
      a1,
      *((_DWORD *)a2 + 6),
      *((_DWORD *)a2 + 7),
      *((_DWORD *)a2 + 8),
      *((_DWORD *)a2 + 9));
  v25 = *((_DWORD *)a2 + 50);
  if ( (v25 & 0x300) != 0 )
  {
    SetOrClrWF(1, *((struct tagWND **)a2 + 2), 0xD910u, 1);
    v25 = *((_DWORD *)a2 + 50);
  }
  v26 = *((unsigned int *)a2 + 7);
  v27 = *((unsigned int *)a2 + 6);
  v28 = *((_DWORD *)a2 + 9) - v26;
  *((_DWORD *)a2 + 50) = v25 | 0x40000000;
  xxxSetWindowPos(a1, 0LL, v27, v26, *((_DWORD *)a2 + 8) - v27, v28, v23);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
    CkptRestore(a1, (struct tagRECT *)((char *)a2 + 24));
}
