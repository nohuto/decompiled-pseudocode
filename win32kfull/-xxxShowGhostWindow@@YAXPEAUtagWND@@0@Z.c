void __fastcall xxxShowGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  BOOL v2; // ebx
  char v5; // cl
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // r13d
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edi
  void *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rcx
  void *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  void *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rbx
  void *v29; // rax
  int v30; // [rsp+40h] [rbp-30h]
  int v31; // [rsp+40h] [rbp-30h]
  __int64 v32; // [rsp+48h] [rbp-28h] BYREF
  __int128 v33; // [rsp+50h] [rbp-20h] BYREF

  v2 = 0;
  v30 = 0;
  v5 = *(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL);
  v6 = 99;
  if ( (v5 & 0x20) != 0 )
    v30 = 1;
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
    SetOrClrWF(1, (__int64 *)a1, 0xA80u, 1);
  v33 = *(_OWORD *)(*((_QWORD *)a2 + 5) + 88LL);
  xxxEnableChildWindowDpiMessageX(a1);
  v13 = *((_QWORD *)a2 + 5);
  if ( (*(_DWORD *)(v13 + 288) & 0xF) != 2 )
  {
    v32 = ValidateHmonitor(*(_QWORD *)(v13 + 256), v10, v11, v12);
    LogicalToPhysicalDPIRect(&v33, &v33, *(unsigned int *)(*((_QWORD *)a2 + 5) + 288LL), &v32);
    if ( v2 )
      xxxSetWindowPos(a1, 0LL, (unsigned int)v33, DWORD1(v33), DWORD2(v33) - v33, HIDWORD(v33) - DWORD1(v33), 20);
    else
      v6 = v9;
  }
  v14 = 3;
  if ( v30 )
  {
    v15 = 1LL;
    v16 = 7LL;
  }
  else
  {
    if ( !v2 )
      goto LABEL_20;
    v15 = 17LL;
    v16 = 3LL;
  }
  xxxMinMaximize((__int64)a1, v16, v15);
  _CopyWindowCheckpoint(a2, a1);
  v6 |= 2u;
LABEL_20:
  v31 = IsWindowDesktopComposed(a2);
  v18 = v31;
  if ( v31 )
  {
    v19 = (void *)ReferenceDwmApiPort(v17);
    DwmAsyncGhostChange(v19);
    v20 = *(_QWORD *)a2;
    v22 = (void *)ReferenceDwmApiPort(v21);
    DwmAsyncNotifyAnimationChange(v22, 0, v20);
    v23 = *(_QWORD *)a1;
    v25 = (void *)ReferenceDwmApiPort(v24);
    DwmAsyncNotifyAnimationChange(v25, 0, v23);
    v18 = v31;
  }
  SetOrClrWF(0, (__int64 *)a1, 0xE01u, 1);
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 20LL) & 0x20) != 0 )
  {
    SetOrClrWF(0, (__int64 *)a2, 0x420u, 1);
    SetOrClrWF(1, (__int64 *)a1, 0x420u, 1);
    v26 = 1LL;
  }
  else
  {
    v26 = (__int64)a2;
  }
  SetVisible(a2, 0x10u);
  if ( !gdwDeferWinEvent )
    v14 = 1;
  xxxWindowEvent(0x8003u, a2, 0, 0, v14);
  xxxSetWindowPos(a1, v26, (unsigned int)v33, DWORD1(v33), DWORD2(v33) - v33, HIDWORD(v33) - DWORD1(v33), v6);
  xxxNotifyShellOfWindowSwap(a2, a1);
  if ( v18 )
  {
    v28 = *(_QWORD *)a1;
    v29 = (void *)ReferenceDwmApiPort(v27);
    DwmAsyncNotifyAnimationChange(v29, 1, v28);
  }
}
