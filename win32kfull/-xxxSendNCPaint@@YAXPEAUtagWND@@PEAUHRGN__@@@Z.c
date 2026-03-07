void __fastcall xxxSendNCPaint(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rax
  int v5; // ecx
  int v6; // ebx
  int v7; // ebp
  __int64 v8; // r8
  _DWORD *v9; // rax
  int v10; // r15d
  int v11; // ecx
  int v12; // edx
  int v13; // r14d
  int v14; // eax
  int v15; // r13d
  int v16; // ebp
  __int64 v17; // rbx
  __int64 v18; // rcx
  void *v19; // rax
  int v20; // [rsp+50h] [rbp+8h]

  v2 = *((_QWORD *)a1 + 5);
  v5 = *(_DWORD *)(v2 + 232);
  v6 = *(_DWORD *)(v2 + 28);
  v7 = *(_DWORD *)(v2 + 24);
  *(_BYTE *)(v2 + 17) &= ~8u;
  v20 = v5;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_15;
  v9 = (_DWORD *)*((_QWORD *)a1 + 5);
  v10 = v9[7];
  v11 = v9[6];
  v12 = v9[58];
  v13 = v7 ^ v11;
  v14 = v20 ^ v12;
  v15 = v6 ^ v10;
  if ( v6 == v10 )
  {
    if ( v13 )
      goto LABEL_7;
    if ( !v14 )
      goto LABEL_15;
  }
  if ( (v15 & 0xB1CF0000) != 0 )
  {
    v16 = -16;
LABEL_11:
    DirtyVisRgnTrackers((__int64)a1);
    v17 = *(_QWORD *)a1;
    v19 = (void *)ReferenceDwmApiPort(v18);
    DwmAsyncChildStyleChange(v19, v17, v16, v10);
    goto LABEL_12;
  }
LABEL_7:
  if ( (v13 & 0x4E27A9) != 0 )
  {
    v16 = -20;
    v10 = v11;
    goto LABEL_11;
  }
  if ( (v14 & 0x12C0) != 0 )
  {
    v16 = -268435456;
    v10 = v12;
    goto LABEL_11;
  }
LABEL_12:
  if ( (v15 & 0xC40000) != 0 || (v13 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL, v8);
LABEL_15:
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0 )
  {
    SetOrClrWF(1, (__int64 *)a1, 0x40u, 1);
    a2 = 1LL;
    SetOrClrWF(0, (__int64 *)a1, 0x101u, 1);
  }
  if ( *(char *)(*((_QWORD *)a1 + 5) + 22LL) >= 0 )
  {
    if ( !a2 )
      return;
  }
  else
  {
    SetOrClrWF(0, (__int64 *)a1, 0x680u, 1);
  }
  xxxSendMessage(a1, 0x85u);
}
