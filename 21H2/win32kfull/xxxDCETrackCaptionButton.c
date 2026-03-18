/*
 * XREFs of xxxDCETrackCaptionButton @ 0x1C00C901C
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00C8EC0 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     xxxDispatchMessage @ 0x1C00429F0 (xxxDispatchMessage.c)
 *     xxxSleepThread2 @ 0x1C0052D3C (xxxSleepThread2.c)
 *     xxxMNCanClose @ 0x1C0068094 (xxxMNCanClose.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     xxxInternalGetMessage @ 0x1C00A4B4C (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C00AA35C (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00AA44C (xxxSetCapture.c)
 *     DwmSyncHitTestQuery @ 0x1C00CA230 (DwmSyncHitTestQuery.c)
 *     xxxTrackCaptionButton @ 0x1C0243270 (xxxTrackCaptionButton.c)
 */

__int64 __fastcall xxxDCETrackCaptionButton(struct tagWND *a1, unsigned int a2)
{
  unsigned __int16 v2; // r14
  void *v5; // rdi
  __int64 v6; // rcx
  unsigned int v7; // r15d
  unsigned __int16 v8; // si
  __int16 v9; // di
  int v10; // ebx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rdi
  __int64 v17; // rcx
  unsigned __int16 v18; // ax
  int v19; // ecx
  __int128 v20; // [rsp+58h] [rbp-21h] BYREF
  __int64 v21[2]; // [rsp+68h] [rbp-11h]
  __int128 v22; // [rsp+78h] [rbp-1h]
  __int64 v23; // [rsp+E0h] [rbp+67h] BYREF
  int v24; // [rsp+E8h] [rbp+6Fh]
  int v25; // [rsp+F0h] [rbp+77h]
  __int64 v26; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = 0;
  LODWORD(v23) = a2;
  v20 = 0LL;
  *(_OWORD *)v21 = 0LL;
  LOWORD(v25) = 0;
  v22 = 0LL;
  v24 = 0;
  LODWORD(v26) = 1;
  v5 = (void *)ReferenceDwmApiPort(a1);
  UserSessionSwitchLeaveCrit(v6);
  DwmSyncHitTestQuery(v5, 1LL, 0LL, a2, (__int64)&v23, (__int64)&v26);
  EnterCrit(1LL, 0LL);
  if ( !(_DWORD)v26 )
    return xxxTrackCaptionButton(a1, a2);
  if ( a2 == 8 )
  {
    v15 = *((_QWORD *)a1 + 5);
    v7 = 2;
    v8 = 1344;
    if ( (*(_BYTE *)(v15 + 30) & 2) != 0 )
    {
      v2 = -3808;
      if ( (*(_BYTE *)(v15 + 31) & 0x20) == 0 )
        v2 = -4064;
      goto LABEL_7;
    }
    goto LABEL_28;
  }
  if ( a2 == 9 )
  {
    v14 = *((_QWORD *)a1 + 5);
    v7 = 3;
    v8 = 1312;
    if ( (*(_BYTE *)(v14 + 30) & 1) != 0 )
    {
      if ( (*(_BYTE *)(v14 + 31) & 1) != 0 )
        v2 = -3808;
      else
        v2 = -4048;
      goto LABEL_7;
    }
    goto LABEL_28;
  }
  if ( a2 != 20 )
  {
    if ( a2 == 21 )
    {
      v7 = 4;
      v8 = 1408;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
      {
        v2 = -3712;
        goto LABEL_7;
      }
    }
    else
    {
      v8 = 0;
    }
LABEL_28:
    v9 = v25;
    v7 = 0;
    goto LABEL_8;
  }
  v7 = 5;
  v8 = 1296;
  if ( !(unsigned int)xxxMNCanClose(a1) )
    goto LABEL_28;
  v2 = -4000;
LABEL_7:
  v25 = 1;
  v9 = 1;
  SetOrClrWF(1, a1, v8, 1);
  xxxWindowEvent(0x800Au, a1, -2, v7, 0);
LABEL_8:
  xxxSetCapture((__int64)a1);
  v10 = v23;
  do
  {
    if ( !(unsigned int)xxxInternalGetMessage(&v20, 0LL, 0x200u, 0x20Eu, 1, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage(&v20, 0LL, 0x241u, 0x257u, 1, 0) )
      {
        *(_DWORD *)(gptiCurrent + 488LL) |= 0x8000u;
        xxxDispatchMessage((__int64)&v20);
        *(_DWORD *)(gptiCurrent + 488LL) &= ~0x8000u;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_23;
    }
    if ( DWORD2(v20) != 514 )
    {
      if ( DWORD2(v20) == 512 && v2 )
      {
        v16 = (void *)ReferenceDwmApiPort(v11);
        UserSessionSwitchLeaveCrit(v17);
        DwmSyncHitTestQuery(v16, v21[0], v21[1], a2, (__int64)&v23, (__int64)&v26);
        EnterCrit(1LL, 0LL);
        v10 = v23;
        if ( (_DWORD)v23 == a2 )
        {
          v18 = 1;
          v19 = 1;
        }
        else
        {
          v18 = 0;
          v19 = 0;
        }
        v9 = v25;
        if ( (_WORD)v25 != v18 )
        {
          v9 = v18;
          v25 = v18;
          SetOrClrWF(v19, a1, v8, 1);
          xxxWindowEvent(0x800Au, a1, -2, v7, 0);
        }
      }
LABEL_23:
      v12 = v24;
      continue;
    }
    xxxReleaseCapture();
    v12 = 1;
    v24 = 1;
  }
  while ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) && !v12 );
  if ( !v2 )
    return 0LL;
  if ( v9 && v2 != 0xF180 )
  {
    SetOrClrWF(0, a1, v8, 1);
    xxxWindowEvent(0x800Au, a1, -2, v7, 0);
  }
  if ( !v24 || v10 != a2 )
    return 0;
  return v2;
}
