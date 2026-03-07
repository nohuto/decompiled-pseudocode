__int64 __fastcall xxxRegisterSiblingFrostWindow(HWND a1, HWND a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 CurrentProcess; // rax
  struct tagWND *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  _WORD *v10; // r8
  __int64 v11; // rax
  struct tagWND *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]
  __int128 v19; // [rsp+38h] [rbp-30h] BYREF
  __int64 v20; // [rsp+48h] [rbp-20h]

  v5 = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5);
    return v5;
  }
  v7 = (struct tagWND *)HMValidateHandleNoSecure((int)a2, 1);
  if ( v7 )
  {
    v17 = 0LL;
    v18 = 0LL;
    ThreadLock(v7, &v17);
    if ( !(unsigned int)_ShouldFrostSiblingWindow(v7) )
      goto LABEL_19;
    v11 = HMValidateHandleNoSecure((int)a1, 1);
    v12 = (struct tagWND *)v11;
    if ( !v11 )
      goto LABEL_19;
    v9 = gptiCurrent;
    v8 = gptiCurrent;
    if ( *(_QWORD *)(v11 + 16) != gptiCurrent )
      goto LABEL_19;
    v10 = *(_WORD **)(*(_QWORD *)(v11 + 136) + 8LL);
    v8 = gpsi;
    v9 = *(unsigned __int16 *)(gpsi + 900LL);
    if ( *v10 != (_WORD)v9 )
      goto LABEL_19;
    v19 = 0LL;
    v20 = 0LL;
    ThreadLock(v11, &v19);
    if ( (unsigned int)SetFrostProp(v12, (__int64)a2) )
    {
      if ( (unsigned int)SetFrostProp(v7, (__int64)a1) )
      {
        SetGhostFNID(v12, 1);
        xxxShowGhostWindow(v12, v7);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v12)
          && !(unsigned int)IsWindowBeingDestroyed((__int64)v7)
          && (HWND)GetProp((__int64)v12, *(unsigned __int16 *)(gpsi + 1378LL), 1u) == a2
          && (HWND)GetProp((__int64)v7, *(unsigned __int16 *)(gpsi + 1378LL), 1u) == a1 )
        {
          v5 = 1;
          goto LABEL_18;
        }
        SetGhostFNID(v12, 0);
        if ( (HWND)GetProp((__int64)v7, *(unsigned __int16 *)(gpsi + 1378LL), 1u) == a1 )
          InternalRemoveProp((__int64)v7, *(unsigned __int16 *)(gpsi + 1378LL), 1u);
        xxxHideGhostWindow(v12, v7);
      }
      InternalRemoveProp((__int64)v12, *(unsigned __int16 *)(gpsi + 1378LL), 1u);
    }
LABEL_18:
    ThreadUnlock1(v14, v13, v15);
LABEL_19:
    ThreadUnlock1(v9, v8, v10);
  }
  return v5;
}
