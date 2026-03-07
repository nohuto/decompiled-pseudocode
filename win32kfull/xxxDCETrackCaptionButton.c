__int64 __fastcall xxxDCETrackCaptionButton(struct tagWND *a1, unsigned int a2)
{
  unsigned __int16 v2; // si
  unsigned int v5; // r14d
  unsigned __int16 v6; // r13
  void *v7; // rdi
  __int64 v8; // rcx
  unsigned __int16 v10; // r12
  __int16 v11; // bx
  unsigned int v12; // edi
  __int64 v13; // rcx
  int v14; // eax
  void *v15; // rdi
  __int64 v16; // rcx
  unsigned __int16 v17; // ax
  int v18; // ecx
  __int64 v19; // rbx
  unsigned int v20; // [rsp+50h] [rbp-29h] BYREF
  int v21; // [rsp+54h] [rbp-25h] BYREF
  __int64 v22; // [rsp+58h] [rbp-21h]
  __int128 v23; // [rsp+60h] [rbp-19h] BYREF
  __int64 v24[2]; // [rsp+70h] [rbp-9h]
  __int128 v25; // [rsp+80h] [rbp+7h]
  unsigned __int16 v26; // [rsp+E0h] [rbp+67h] BYREF
  int v27; // [rsp+E8h] [rbp+6Fh]
  int v28; // [rsp+F0h] [rbp+77h]
  int v29; // [rsp+F8h] [rbp+7Fh]

  v27 = a2;
  v2 = 0;
  v20 = a2;
  v26 = 0;
  v23 = 0LL;
  LOWORD(v29) = 0;
  v21 = 1;
  v5 = 0;
  v6 = 0;
  *(_OWORD *)v24 = 0LL;
  v28 = 0;
  v25 = 0LL;
  v22 = gptiCurrent;
  v7 = (void *)ReferenceDwmApiPort(a1);
  UserSessionSwitchLeaveCrit(v8);
  DwmSyncHitTestQuery(v7, 1LL, 0LL, a2, (__int64)&v20, (__int64)&v21);
  EnterCrit(1LL, 0LL);
  if ( !v21 )
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
  xxxDCECalcCaptionButton(a1, v5, &v26);
  v10 = v26;
  if ( v26 )
  {
    v11 = 1;
    v29 = 1;
    SetOrClrWF(1, (__int64 *)a1, v6, 1);
    xxxWindowEvent(0x800Au, a1, -2, v5, 0);
  }
  else
  {
    v11 = v29;
    v5 = 0;
  }
  xxxSetCapture((__int64)a1);
  v12 = v20;
  do
  {
    if ( !(unsigned int)xxxInternalGetMessage(&v23, 0LL, 0x200u, 0x20Eu, 1, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage(&v23, 0LL, 0x241u, 0x257u, 1, 0) )
      {
        v19 = v22;
        *(_DWORD *)(v22 + 488) |= 0x8000u;
        xxxDispatchMessage((__int64 *)&v23);
        *(_DWORD *)(v19 + 488) &= ~0x8000u;
        v11 = v29;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_28;
    }
    if ( DWORD2(v23) != 514 )
    {
      if ( DWORD2(v23) == 512 && v10 )
      {
        v15 = (void *)ReferenceDwmApiPort(v13);
        UserSessionSwitchLeaveCrit(v16);
        DwmSyncHitTestQuery(v15, v24[0], v24[1], v27, (__int64)&v20, (__int64)&v21);
        EnterCrit(1LL, 0LL);
        v12 = v20;
        if ( v20 == v27 )
        {
          v17 = 1;
          v18 = 1;
        }
        else
        {
          v17 = 0;
          v18 = 0;
        }
        v11 = v29;
        if ( (_WORD)v29 != v17 )
        {
          v11 = v17;
          v29 = v17;
          SetOrClrWF(v18, (__int64 *)a1, v6, 1);
          xxxWindowEvent(0x800Au, a1, -2, v5, 0);
        }
      }
LABEL_28:
      v14 = v28;
      continue;
    }
    xxxReleaseCapture();
    v14 = 1;
    v28 = 1;
  }
  while ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) && !v14 );
  if ( v10 )
  {
    if ( v11 && v10 != 0xF180 )
    {
      SetOrClrWF(0, (__int64 *)a1, v6, 1);
      xxxWindowEvent(0x800Au, a1, -2, v5, 0);
    }
    if ( v28 )
    {
      if ( v12 == v27 )
        return v10;
    }
  }
  return v2;
}
