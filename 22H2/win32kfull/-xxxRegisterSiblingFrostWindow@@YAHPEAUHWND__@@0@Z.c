/*
 * XREFs of ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F53F8
 * Callers:
 *     NtUserRegisterSiblingFrostWindow @ 0x1C01D9910 (NtUserRegisterSiblingFrostWindow.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C00C94BC (InternalRemoveProp.c)
 *     IsWindowBeingDestroyed @ 0x1C00CF084 (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F3D04 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C01F3D78 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F42A0 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F49BC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F56B0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

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
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // r9
  __int128 v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+30h] [rbp-38h]
  __int128 v25; // [rsp+38h] [rbp-30h] BYREF
  __int64 v26; // [rsp+48h] [rbp-20h]

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
    v23 = 0LL;
    v24 = 0LL;
    ThreadLock(v7, &v23);
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
    v25 = 0LL;
    v26 = 0LL;
    ThreadLock(v11, &v25);
    if ( (unsigned int)SetFrostProp(v12, (__int64)a2, v13, v14) )
    {
      if ( (unsigned int)SetFrostProp(v7, (__int64)a1, v17, v18) )
      {
        SetGhostFNID(v12, 1);
        xxxShowGhostWindow(v12, v7);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v12)
          && !(unsigned int)IsWindowBeingDestroyed((__int64)v7)
          && (HWND)GetProp((__int64)v12, *(unsigned __int16 *)(gpsi + 1378LL), 1LL, v19) == a2
          && (HWND)GetProp((__int64)v7, *(unsigned __int16 *)(gpsi + 1378LL), 1LL, v20) == a1 )
        {
          v5 = 1;
          goto LABEL_18;
        }
        SetGhostFNID(v12, 0);
        if ( (HWND)GetProp((__int64)v7, *(unsigned __int16 *)(gpsi + 1378LL), 1LL, v21) == a1 )
          InternalRemoveProp((__int64)v7, *(unsigned __int16 *)(gpsi + 1378LL), 1u);
        xxxHideGhostWindow(v12, v7);
      }
      InternalRemoveProp((__int64)v12, *(unsigned __int16 *)(gpsi + 1378LL), 1u);
    }
LABEL_18:
    ThreadUnlock1(v16, v15, v17);
LABEL_19:
    ThreadUnlock1(v9, v8, v10);
  }
  return v5;
}
