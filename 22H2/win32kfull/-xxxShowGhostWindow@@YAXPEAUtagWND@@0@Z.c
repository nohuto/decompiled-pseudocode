/*
 * XREFs of ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F56B0
 * Callers:
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F5128 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F53F8 (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     DwmAsyncNotifyAnimationChange @ 0x1C0016AEC (DwmAsyncNotifyAnimationChange.c)
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C008E464 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C00C3EC4 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     SetVisible @ 0x1C00EBC94 (SetVisible.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01F3EB4 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C01F50B4 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     DwmAsyncGhostChange @ 0x1C026C774 (DwmAsyncGhostChange.c)
 */

void __fastcall xxxShowGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  BOOL v2; // ebx
  char v5; // cl
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rcx
  int v11; // r13d
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // edi
  void *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  void *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  void *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rbx
  void *v28; // rax
  int v29; // [rsp+40h] [rbp-30h]
  int v30; // [rsp+40h] [rbp-30h]
  __int64 v31; // [rsp+48h] [rbp-28h] BYREF
  __int128 v32; // [rsp+50h] [rbp-20h] BYREF

  v2 = 0;
  v29 = 0;
  v5 = *(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL);
  v6 = 99;
  if ( (v5 & 0x20) != 0 )
    v29 = 1;
  else
    v2 = (v5 & 1) != 0;
  v7 = *((_QWORD *)a2 + 2);
  if ( v7 && (v8 = *(_QWORD *)(v7 + 432), v8 == gpqForeground) && *(struct tagWND **)(v8 + 128) == a2 )
  {
    v9 = 96;
    *(_DWORD *)(*((_QWORD *)a1 + 2) + 488LL) |= 0x20u;
  }
  else
  {
    v9 = 112;
    v6 = 115;
  }
  if ( *(char *)(*((_QWORD *)a2 + 5) + 26LL) < 0 )
    SetOrClrWF(1, a1, 0xA80u, 1);
  v32 = *(_OWORD *)(*((_QWORD *)a2 + 5) + 88LL);
  xxxEnableChildWindowDpiMessageX(a1);
  v10 = *((_QWORD *)a2 + 5);
  if ( (*(_DWORD *)(v10 + 288) & 0xF) != 2 )
  {
    v31 = ValidateHmonitor(*(_QWORD *)(v10 + 256));
    LogicalToPhysicalDPIRect(&v32, &v32, *(unsigned int *)(*((_QWORD *)a2 + 5) + 288LL), &v31);
    if ( v2 )
      xxxSetWindowPos(a1, 0LL, (unsigned int)v32, DWORD1(v32), DWORD2(v32) - v32, HIDWORD(v32) - DWORD1(v32), 20);
    else
      v6 = v9;
  }
  v11 = 3;
  if ( v29 )
  {
    v12 = 1LL;
    v13 = 7LL;
  }
  else
  {
    if ( !v2 )
      goto LABEL_20;
    v12 = 17LL;
    v13 = 3LL;
  }
  xxxMinMaximize((__int64)a1, v13, v12);
  _CopyWindowCheckpoint(a2, a1, v14, v15);
  v6 |= 2u;
LABEL_20:
  v30 = IsWindowDesktopComposed(a2);
  v17 = v30;
  if ( v30 )
  {
    v18 = (void *)ReferenceDwmApiPort(v16);
    DwmAsyncGhostChange(v18);
    v19 = *(_QWORD *)a2;
    v21 = (void *)ReferenceDwmApiPort(v20);
    DwmAsyncNotifyAnimationChange(v21, 0, v19);
    v22 = *(_QWORD *)a1;
    v24 = (void *)ReferenceDwmApiPort(v23);
    DwmAsyncNotifyAnimationChange(v24, 0, v22);
    v17 = v30;
  }
  SetOrClrWF(0, a1, 0xE01u, 1);
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 20LL) & 0x20) != 0 )
  {
    SetOrClrWF(0, a2, 0x420u, 1);
    SetOrClrWF(1, a1, 0x420u, 1);
    v25 = 1LL;
  }
  else
  {
    v25 = (__int64)a2;
  }
  SetVisible(a2, 0x10u);
  if ( !gdwDeferWinEvent )
    v11 = 1;
  xxxWindowEvent(0x8003u, a2, 0, 0, v11);
  xxxSetWindowPos(a1, v25, (unsigned int)v32, DWORD1(v32), DWORD2(v32) - v32, HIDWORD(v32) - DWORD1(v32), v6);
  xxxNotifyShellOfWindowSwap(a2, a1);
  if ( v17 )
  {
    v27 = *(_QWORD *)a1;
    v28 = (void *)ReferenceDwmApiPort(v26);
    DwmAsyncNotifyAnimationChange(v28, 1, v27);
  }
}
