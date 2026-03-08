/*
 * XREFs of ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F62F4
 * Callers:
 *     NtUserRegisterGhostWindow @ 0x1C01DA750 (NtUserRegisterGhostWindow.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C002484C (InternalRemoveProp.c)
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C0039B60 (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C009FF14 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C01F4F78 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F4FB8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x1C01F55FC (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F5BBC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F687C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxRegisterGhostWindow(HWND a1, HWND a2, __int64 a3)
{
  unsigned int v5; // esi
  __int64 CurrentProcess; // rax
  const struct tagWND *v7; // rbx
  __int64 v8; // rax
  struct tagWND *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
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
  v7 = (const struct tagWND *)HMValidateHandleNoSecure((int)a2, 1);
  if ( v7 )
  {
    v17 = 0LL;
    v18 = 0LL;
    ThreadLock(v7, &v17);
    if ( !_ShouldGhostWindow(v7) )
      goto LABEL_21;
    if ( GetProp((__int64)v7, *(unsigned __int16 *)(gpsi + 900LL), 1u) != -1 )
      goto LABEL_21;
    if ( !IsHungWindow((const struct tagTHREADINFO **)v7) )
      goto LABEL_21;
    v8 = HMValidateHandleNoSecure((int)a1, 1);
    v9 = (struct tagWND *)v8;
    if ( !v8
      || *(_QWORD *)(v8 + 16) != gptiCurrent
      || **(_WORD **)(*(_QWORD *)(v8 + 136) + 8LL) != *(_WORD *)(gpsi + 900LL) )
    {
      goto LABEL_21;
    }
    v19 = 0LL;
    v20 = 0LL;
    ThreadLock(v8, &v19);
    if ( (unsigned int)SetGhostProp(v9, a2) )
    {
      if ( (unsigned int)SetGhostProp(v7, a1) )
      {
        SetGhostFNID(v9, 1);
        xxxShowGhostWindow(v9, v7);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v9)
          && !(unsigned int)IsWindowBeingDestroyed((__int64)v7)
          && (HWND)GetProp((__int64)v9, *(unsigned __int16 *)(gpsi + 900LL), 1u) == a2
          && (HWND)GetProp((__int64)v7, *(unsigned __int16 *)(gpsi + 900LL), 1u) == a1 )
        {
          v5 = 1;
          goto LABEL_20;
        }
        SetGhostFNID(v9, 0);
        if ( (HWND)GetProp((__int64)v7, *(unsigned __int16 *)(gpsi + 900LL), 1u) == a1 )
          InternalRemoveProp((__int64)v7, *(unsigned __int16 *)(gpsi + 900LL), 1u);
        xxxHideGhostWindow(v9, v7);
      }
      InternalRemoveProp((__int64)v9, *(unsigned __int16 *)(gpsi + 900LL), 1u);
    }
LABEL_20:
    ThreadUnlock1(v11, v10, v12);
    if ( v5 )
    {
LABEL_23:
      ThreadUnlock1(v14, v13, v15);
      return v5;
    }
LABEL_21:
    if ( GetProp((__int64)v7, *(unsigned __int16 *)(gpsi + 900LL), 1u) == -1 )
      InternalRemoveProp((__int64)v7, *(unsigned __int16 *)(gpsi + 900LL), 1u);
    goto LABEL_23;
  }
  return v5;
}
