/*
 * XREFs of xxxDCETrackCaptionButton @ 0x1C01BA87C
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C0222AD8 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C0011688 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0011784 (xxxSetCapture.c)
 *     xxxInternalGetMessage @ 0x1C006A4F0 (xxxInternalGetMessage.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     xxxDispatchMessage @ 0x1C0117884 (xxxDispatchMessage.c)
 *     xxxSleepThread2 @ 0x1C0125E60 (xxxSleepThread2.c)
 *     ?xxxDCECalcCaptionButton@@YAXPEAUtagWND@@HPEAG@Z @ 0x1C01B9498 (-xxxDCECalcCaptionButton@@YAXPEAUtagWND@@HPEAG@Z.c)
 *     xxxTrackCaptionButton @ 0x1C022C718 (xxxTrackCaptionButton.c)
 *     DwmSyncHitTestQuery @ 0x1C026E030 (DwmSyncHitTestQuery.c)
 */

__int64 __fastcall xxxDCETrackCaptionButton(struct tagWND *a1, unsigned int a2)
{
  unsigned __int16 v2; // si
  unsigned int v5; // r14d
  unsigned __int16 v6; // r13
  void *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int16 v13; // r12
  __int16 v14; // bx
  unsigned int v15; // edi
  __int64 v16; // rcx
  int v17; // eax
  void *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int16 v23; // ax
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  unsigned int v29; // [rsp+50h] [rbp-29h] BYREF
  int v30; // [rsp+54h] [rbp-25h] BYREF
  __int64 v31; // [rsp+58h] [rbp-21h]
  __int128 v32; // [rsp+60h] [rbp-19h] BYREF
  __int64 v33[2]; // [rsp+70h] [rbp-9h]
  __int128 v34; // [rsp+80h] [rbp+7h]
  unsigned __int16 v35; // [rsp+E0h] [rbp+67h] BYREF
  int v36; // [rsp+E8h] [rbp+6Fh]
  int v37; // [rsp+F0h] [rbp+77h]
  int v38; // [rsp+F8h] [rbp+7Fh]

  v36 = a2;
  v2 = 0;
  v29 = a2;
  v35 = 0;
  v32 = 0LL;
  LOWORD(v38) = 0;
  v30 = 1;
  v5 = 0;
  v6 = 0;
  *(_OWORD *)v33 = 0LL;
  v37 = 0;
  v34 = 0LL;
  v31 = gptiCurrent;
  v7 = (void *)ReferenceDwmApiPort(a1);
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  DwmSyncHitTestQuery(v7, 1LL, 0LL, a2, (__int64)&v29, (__int64)&v30);
  EnterCrit(1LL, 0LL);
  if ( !v30 )
    return xxxTrackCaptionButton(a1, a2);
  switch ( a2 )
  {
    case 8u:
      v5 = 2;
      v6 = 1344;
      break;
    case 9u:
      v5 = 3;
      v6 = 1312;
      break;
    case 0x14u:
      v5 = 5;
      v6 = 1296;
      break;
    case 0x15u:
      v5 = 4;
      v6 = 1408;
      break;
  }
  xxxDCECalcCaptionButton(a1, v5, &v35);
  v13 = v35;
  if ( v35 )
  {
    v14 = 1;
    v38 = 1;
    SetOrClrWF(1, a1, v6, 1);
    xxxWindowEvent(0x800Au, a1, -2, v5, 0);
  }
  else
  {
    v14 = v38;
    v5 = 0;
  }
  xxxSetCapture((__int64)a1);
  v15 = v29;
  do
  {
    if ( !(unsigned int)xxxInternalGetMessage(&v32, 0LL, 512, 526, 1, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage(&v32, 0LL, 577, 599, 1, 0) )
      {
        v28 = v31;
        *(_DWORD *)(v31 + 488) |= 0x8000u;
        xxxDispatchMessage((__int64 *)&v32, v25, v26, v27);
        *(_DWORD *)(v28 + 488) &= ~0x8000u;
        v14 = v38;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_28;
    }
    if ( DWORD2(v32) != 514 )
    {
      if ( DWORD2(v32) == 512 && v13 )
      {
        v18 = (void *)ReferenceDwmApiPort(v16);
        UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
        DwmSyncHitTestQuery(v18, v33[0], v33[1], v36, (__int64)&v29, (__int64)&v30);
        EnterCrit(1LL, 0LL);
        v15 = v29;
        if ( v29 == v36 )
        {
          v23 = 1;
          v24 = 1;
        }
        else
        {
          v23 = 0;
          v24 = 0;
        }
        v14 = v38;
        if ( (_WORD)v38 != v23 )
        {
          v14 = v23;
          v38 = v23;
          SetOrClrWF(v24, a1, v6, 1);
          xxxWindowEvent(0x800Au, a1, -2, v5, 0);
        }
      }
LABEL_28:
      v17 = v37;
      continue;
    }
    xxxReleaseCapture();
    v17 = 1;
    v37 = 1;
  }
  while ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) && !v17 );
  if ( v13 )
  {
    if ( v14 && v13 != 0xF180 )
    {
      SetOrClrWF(0, a1, v6, 1);
      xxxWindowEvent(0x800Au, a1, -2, v5, 0);
    }
    if ( v37 )
    {
      if ( v15 == v36 )
        return v13;
    }
  }
  return v2;
}
