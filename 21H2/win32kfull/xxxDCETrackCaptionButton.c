/*
 * XREFs of xxxDCETrackCaptionButton @ 0x1C00D7CFC
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00DB008 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     DwmSyncHitTestQuery @ 0x1C002ACF4 (DwmSyncHitTestQuery.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     xxxSleepThread2 @ 0x1C0058750 (xxxSleepThread2.c)
 *     xxxMNCanClose @ 0x1C0061560 (xxxMNCanClose.c)
 *     xxxDispatchMessage @ 0x1C006AE54 (xxxDispatchMessage.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     xxxInternalGetMessage @ 0x1C00D9FB0 (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C00DAE50 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00DAF80 (xxxSetCapture.c)
 *     xxxTrackCaptionButton @ 0x1C0247A10 (xxxTrackCaptionButton.c)
 */

__int64 __fastcall xxxDCETrackCaptionButton(__int64 *a1, unsigned int a2)
{
  unsigned __int16 v2; // si
  __int64 *v4; // r14
  unsigned int v5; // r12d
  unsigned __int16 v6; // r15
  __int64 v7; // rbx
  void *v8; // rdi
  __int64 v9; // rcx
  __int16 v10; // di
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  int v15; // edx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbx
  void *v20; // rdi
  __int64 v21; // rcx
  __int16 v22; // ax
  int v23; // ecx
  __int64 v24; // rdi
  __int64 v25; // [rsp+50h] [rbp-19h] BYREF
  __int64 v26; // [rsp+58h] [rbp-11h]
  __int128 v27; // [rsp+60h] [rbp-9h] BYREF
  __int64 v28[2]; // [rsp+70h] [rbp+7h]
  __int128 v29; // [rsp+80h] [rbp+17h]
  int v30; // [rsp+D8h] [rbp+6Fh]
  __int16 v31; // [rsp+E0h] [rbp+77h]
  __int64 v32; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = 0;
  LODWORD(v32) = a2;
  v27 = 0LL;
  v4 = a1;
  v5 = 0;
  *(_OWORD *)v28 = 0LL;
  v26 = gptiCurrent;
  v6 = 0;
  v29 = 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 776LL);
  v31 = 0;
  v30 = 0;
  LODWORD(v25) = 1;
  if ( gdwInAtomicOperation )
  {
    a1 = (__int64 *)gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v8 = (void *)ReferenceDwmApiPort(a1, gdwInAtomicOperation);
  UserSessionSwitchLeaveCrit(v9);
  DwmSyncHitTestQuery(v8, *v4, 512, v7, 1LL, 0LL, a2, &v32, &v25);
  EnterCrit(0LL, 1LL);
  if ( !(_DWORD)v25 )
    return xxxTrackCaptionButton(v4, a2);
  if ( a2 == 8 )
  {
    v5 = 2;
    v6 = 1344;
    goto LABEL_37;
  }
  if ( a2 == 9 )
  {
    v17 = v4[5];
    v5 = 3;
    v6 = 1312;
    if ( (*(_BYTE *)(v17 + 30) & 1) != 0 )
    {
      if ( (*(_BYTE *)(v17 + 31) & 1) != 0 )
        v2 = -3808;
      else
        v2 = -4048;
      goto LABEL_8;
    }
    goto LABEL_41;
  }
  if ( a2 != 20 )
  {
    if ( a2 == 21 )
    {
      v5 = 4;
      v6 = 1408;
      if ( (*(_BYTE *)(v4[5] + 25) & 4) != 0 )
      {
        v2 = -3712;
        goto LABEL_8;
      }
LABEL_41:
      v10 = 0;
      v5 = 0;
      goto LABEL_9;
    }
LABEL_37:
    if ( v5 == 2 )
    {
      v18 = v4[5];
      if ( (*(_BYTE *)(v18 + 30) & 2) != 0 )
      {
        v2 = -3808;
        if ( (*(_BYTE *)(v18 + 31) & 0x20) == 0 )
          v2 = -4064;
        goto LABEL_8;
      }
    }
    goto LABEL_41;
  }
  v5 = 5;
  v6 = 1296;
  if ( !(unsigned int)xxxMNCanClose((__int64)v4) )
    goto LABEL_41;
  v2 = -4000;
LABEL_8:
  v31 = 1;
  v10 = 1;
  SetOrClrWF(1, (__int64)v4, v6, 1);
  xxxWindowEvent(0x800Au, (struct tagWND *)v4, -2, v5, 0);
LABEL_9:
  xxxSetCapture(v4);
  v11 = v32;
  do
  {
    if ( !(unsigned int)xxxInternalGetMessage((unsigned int)&v27, 0, 512, 526, 1, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage((unsigned int)&v27, 0, 577, 599, 1, 0) )
      {
        v24 = v26;
        *(_DWORD *)(v26 + 488) |= 0x8000u;
        xxxDispatchMessage((__int64)&v27);
        *(_DWORD *)(v24 + 488) &= ~0x8000u;
        v10 = v31;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_23;
    }
    if ( DWORD2(v27) != 514 )
    {
      if ( DWORD2(v27) == 512 && v2 )
      {
        v19 = *(_QWORD *)(gptiCurrent + 776LL);
        if ( gdwInAtomicOperation )
        {
          v13 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        v20 = (void *)ReferenceDwmApiPort(v13, v12);
        UserSessionSwitchLeaveCrit(v21);
        DwmSyncHitTestQuery(v20, *v4, 512, v19, v28[0], v28[1], a2, &v32, &v25);
        EnterCrit(0LL, 1LL);
        v11 = v32;
        if ( (_DWORD)v32 == a2 )
        {
          v22 = 1;
          v23 = 1;
        }
        else
        {
          v22 = 0;
          v23 = 0;
        }
        v10 = v31;
        if ( v31 != v22 )
        {
          v10 = v22;
          v31 = v22;
          SetOrClrWF(v23, (__int64)v4, v6, 1);
          xxxWindowEvent(0x800Au, (struct tagWND *)v4, -2, v5, 0);
        }
      }
LABEL_23:
      v15 = v30;
      continue;
    }
    xxxReleaseCapture(v13, v12, 0LL, v14);
    v15 = 1;
    v30 = 1;
  }
  while ( v4 == *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) && !v15 );
  if ( !v2 )
    return 0LL;
  if ( v10 && v2 != 0xF180 )
  {
    SetOrClrWF(0, (__int64)v4, v6, 1);
    xxxWindowEvent(0x800Au, (struct tagWND *)v4, -2, v5, 0);
  }
  if ( !v30 || v11 != a2 )
    return 0;
  return v2;
}
