__int64 __fastcall LogicalCursorPosFromDpiAwarenessContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v12; // r14
  __int64 v13; // rax
  unsigned __int16 v14; // di
  unsigned __int16 v15; // bx
  __int128 v16; // [rsp+30h] [rbp-28h]
  __int64 v17[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  CurrentThreadDpiAwarenessContext = a1;
  v5 = 0LL;
  v6 = *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 3304);
  if ( !v6 )
    return 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  if ( !v7 )
    return 0LL;
  v10 = *(_DWORD *)(v7 + 68) >> 8;
  v9 = CurrentThreadDpiAwarenessContext >> 8;
  LOWORD(v10) = v9 ^ v10;
  v18 = 0LL;
  if ( (v10 & 0x1FF) == 0 )
    return *(_QWORD *)(v7 + 60);
  v12 = gpsi;
  if ( !CurrentThreadDpiAwarenessContext )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v9, v10, v8);
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 || (int)Is_MonitorFromPointSupported() < 0 )
    return v12[620];
  if ( qword_1C02D71A8 )
    v5 = qword_1C02D71A8(v12[620], 2LL, 18LL);
  v13 = *(_QWORD *)(v5 + 40);
  v14 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  v15 = *(_WORD *)(v13 + 60);
  v16 = *(_OWORD *)(v13 + 28);
  GetMonitorRectForDpi(v17, v5, v14);
  ScaleDPIPt((unsigned int)&v18, (_DWORD)v12 + 4960, v14, v15, v17[0], v16);
  return v18;
}
