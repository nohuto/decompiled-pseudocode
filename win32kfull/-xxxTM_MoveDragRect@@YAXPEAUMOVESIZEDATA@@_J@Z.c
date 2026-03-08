/*
 * XREFs of ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x1C01F27AC
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EFBFC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     bSetDevDragRect @ 0x1C001DE80 (bSetDevDragRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     GreIsWindowResizeInProgress @ 0x1C014CCA0 (GreIsWindowResizeInProgress.c)
 *     ?SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01EBAF4 (-SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x1C01ED7A4 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01ED7C0 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1C01F230C (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 *     ?SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z @ 0x1C023DB80 (-SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z.c)
 */

void __fastcall xxxTM_MoveDragRect(struct MOVESIZEDATA *this, __int64 a2)
{
  __int64 v2; // rax
  Gre::Base **v4; // rcx
  int v5; // r13d
  unsigned int v6; // esi
  char v7; // di
  Gre::Base *v8; // rcx
  struct tagMONITOR *v9; // r8
  bool v10; // zf
  struct tagRECT *v11; // r14
  PDEVICE_OBJECT *v12; // rdx
  _UNKNOWN **v13; // r8
  struct tagRECT *v14; // r15
  unsigned int v15; // esi
  int v16; // eax
  unsigned __int64 v17; // r8
  struct tagWND *v18; // rcx
  unsigned __int64 v19; // r8
  struct tagWND *v20; // rcx
  int v21; // ecx
  int v22; // edx
  int v23; // ecx
  unsigned int v24; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v25; // [rsp+54h] [rbp-2Ch] BYREF
  struct tagPOINT v26; // [rsp+58h] [rbp-28h]
  __int64 v27; // [rsp+60h] [rbp-20h]
  struct tagRECT v28; // [rsp+68h] [rbp-18h] BYREF

  v2 = *((_QWORD *)this + 26);
  v4 = (Gre::Base **)*((_QWORD *)this + 2);
  v27 = v2;
  v5 = (__int16)a2;
  v6 = a2;
  v7 = 0;
  v28 = 0LL;
  v8 = *v4;
  v26.y = SWORD1(a2);
  v24 = 0;
  v25 = 0;
  v26.x = (__int16)a2;
  if ( GreIsWindowResizeInProgress(v8, a2) )
  {
    *((_DWORD *)this + 50) |= 0x40000000u;
    return;
  }
  v10 = *((_DWORD *)this + 44) == 9;
  v11 = (struct tagRECT *)((char *)this + 24);
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)((char *)this + 24);
  *(_OWORD *)((char *)this + 72) = *(_OWORD *)((char *)this + 56);
  if ( v10 )
  {
    if ( !xxxSizeOrMoveRect(this, v26, (struct tagRECT *)((char *)this + 40), &v24) )
      return;
  }
  else
  {
    if ( !(unsigned int)SizeRect(this, v6, v9, &v25) )
      return;
    v7 = v25;
    v24 = 532;
  }
  v12 = &WPP_GLOBAL_Control;
  v13 = &WPP_RECORDER_INITIALIZED;
  v14 = (struct tagRECT *)((char *)this + 40);
  v15 = 0;
  if ( (*((_DWORD *)this + 50) & 0x20) != 0 )
  {
    if ( (v7 & 2) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v13) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v13) = 0;
      }
      if ( (_BYTE)v12 || (_BYTE)v13 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v12,
          (_DWORD)v13,
          0,
          5,
          1,
          48,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
      xxxDrawDragRect(this, 0LL, 0x80000000);
LABEL_32:
      v13 = &WPP_RECORDER_INITIALIZED;
      v12 = &WPP_GLOBAL_Control;
      goto LABEL_33;
    }
    if ( (v7 & 1) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v13) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v13) = 0;
      }
      if ( (_BYTE)v12 || (_BYTE)v13 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v12,
          (_DWORD)v13,
          0,
          5,
          1,
          49,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
      bSetDevDragRect(*(Gre::Base **)(gpDispInfo + 40LL), 0LL, 0LL, 0);
      goto LABEL_32;
    }
  }
LABEL_33:
  v16 = *((_DWORD *)this + 50);
  if ( (v16 & 0x1000000) != 0 )
  {
    if ( (v16 & 0x20) != 0 )
    {
      v17 = *((int *)this + 44);
      v18 = (struct tagWND *)*((_QWORD *)this + 2);
      v28 = *(struct tagRECT *)((char *)this + 72);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v18, v24, v17, (__int128 *)&v28.left, 0, 0, 0LL, 1, 0);
      xxxDrawDragRectEx(this, (struct tagRECT *)((char *)this + 72), 0x80000000, (struct tagRECT *)((char *)this + 56));
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v13) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v13) = 0;
      }
      if ( (_BYTE)v12 || (_BYTE)v13 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v12,
          (_DWORD)v13,
          0,
          5,
          1,
          50,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
      v14 = (struct tagRECT *)((char *)this + 72);
      v15 = 0x80000000;
      v11 = (struct tagRECT *)((char *)this + 56);
    }
  }
  v19 = *((int *)this + 44);
  v20 = (struct tagWND *)*((_QWORD *)this + 2);
  v28 = *v14;
  _InterlockedIncrement(&glSendMessage);
  xxxSendTransformableMessageTimeout(v20, v24, v19, (__int128 *)&v28.left, 0, 0, 0LL, 1, 0);
  xxxDrawDragRectEx(this, &v28, v15 | 3, v11);
  if ( *((_DWORD *)this + 44) == 9
    && ((*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 288LL) & 0xF) == 2 || *((_QWORD *)this + 26) == v27) )
  {
    v21 = *((_DWORD *)this + 42);
    v22 = *((_DWORD *)this + 43);
    if ( (*((_DWORD *)this + 50) & 0x1000020) == 0x1000000 )
    {
      *((_DWORD *)this + 42) = v21 + *((_DWORD *)this + 10) - v5;
      *((_DWORD *)this + 43) = v22 + *((_DWORD *)this + 11) - v26.y;
    }
    else
    {
      v23 = v28.left + v21 - v5;
      *((_DWORD *)this + 43) = v28.top + v22 - v26.y;
      *((_DWORD *)this + 42) = v23;
    }
  }
  DWM_ARRANGEMENT_DATA::SendShrinkWidthToDwm((struct MOVESIZEDATA *)((char *)this + 344), this);
}
