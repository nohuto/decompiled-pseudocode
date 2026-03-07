__int64 __fastcall NtUserGetComboBoxInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rcx
  struct tagWND *v5; // rsi
  int ComboBoxInfo; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  __int64 v10; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+40h] [rbp-88h] BYREF
  __int64 v17; // [rsp+50h] [rbp-78h]
  __int128 v18; // [rsp+70h] [rbp-58h] BYREF
  _OWORD v19[3]; // [rsp+80h] [rbp-48h] BYREF

  memset_0(&v18, 0, 0x40uLL);
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  v5 = (struct tagWND *)ValidateHwnd(a1);
  if ( v5 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v5;
    HMLockObject(v5);
    if ( PsGetCurrentProcessWow64Process(v7) )
      v8 = 0LL;
    else
      v8 = 3LL;
    if ( (v8 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[63] = v9[63];
    LODWORD(v18) = *(_DWORD *)a2;
    ComboBoxInfo = xxxGetComboBoxInfo(v5);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v10);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v5, CurrentThreadDpiAwarenessContext) )
    {
      TransformRectBetweenCoordinateSpaces((char *)v19 + 4, (char *)v19 + 4, 0LL, v5);
      TransformRectBetweenCoordinateSpaces((char *)&v18 + 4, (char *)&v18 + 4, 0LL, v5);
    }
    if ( ComboBoxInfo )
    {
      *(_OWORD *)a2 = v18;
      *(_OWORD *)(a2 + 16) = v19[0];
      *(_OWORD *)(a2 + 32) = v19[1];
      *(_OWORD *)(a2 + 48) = v19[2];
    }
    ThreadUnlock1(v13, v12, v14);
  }
  else
  {
    ComboBoxInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v4);
  return ComboBoxInfo;
}
