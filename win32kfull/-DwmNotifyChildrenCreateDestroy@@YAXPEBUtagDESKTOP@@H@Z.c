/*
 * XREFs of ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C007E644
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C007E250 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C002C460 (IsDesktopWindow.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0043348 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     IsMotherDesktopWindow @ 0x1C007E8EC (IsMotherDesktopWindow.c)
 *     DwmGetClassStyle @ 0x1C007E918 (DwmGetClassStyle.c)
 *     DwmAsyncChildCreate @ 0x1C007E990 (DwmAsyncChildCreate.c)
 *     IsMessageParentWindow @ 0x1C007EAD8 (IsMessageParentWindow.c)
 *     DwmAsyncChildDestroy @ 0x1C007EAF8 (DwmAsyncChildDestroy.c)
 *     SendDwmIconChange @ 0x1C00A1060 (SendDwmIconChange.c)
 *     DwmAsyncTextChange @ 0x1C00A5394 (DwmAsyncTextChange.c)
 *     DwmChildRectChange @ 0x1C00AD03C (DwmChildRectChange.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00AD734 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1C00AEA8C (DirtyVisRgnTrackers.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

void __fastcall DwmNotifyChildrenCreateDestroy(const struct tagDESKTOP *a1, int a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  __int64 *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  struct _KPROCESS *v11; // rbx
  int ClassStyle; // eax
  __int64 v13; // rcx
  void *v14; // rax
  struct tagWND *v15; // rcx
  __int64 v16; // rcx
  void *v17; // rax
  void *v18; // rax
  int v19; // [rsp+60h] [rbp-A8h]
  int v20; // [rsp+64h] [rbp-A4h]
  int v21; // [rsp+68h] [rbp-A0h]
  __int64 ProcessSequenceNumber; // [rsp+70h] [rbp-98h]
  int ProcessId; // [rsp+78h] [rbp-90h]
  __int64 v24; // [rsp+80h] [rbp-88h]
  __int64 v25; // [rsp+88h] [rbp-80h]
  __int64 v26[8]; // [rsp+90h] [rbp-78h] BYREF

  v4 = gSharedInfo[1];
  v5 = v4 + 32LL * giheLast;
  v6 = (__int64 *)gpKernelHandleTable;
  while ( v4 <= v5 )
  {
    if ( *(_BYTE *)(v4 + 24) == 1 )
    {
      v7 = *v6;
      if ( *(const struct tagDESKTOP **)(*v6 + 24) == a1 && !(unsigned int)IsMotherDesktopWindow(*v6) )
      {
        if ( a2 )
        {
          LOBYTE(v9) = IsDesktopWindow(v8);
          if ( !v9 && (unsigned int)IsMessageParentWindow() )
            GetDesktopWindow(v10);
          memset_0(v26, 0, sizeof(v26));
          _GetWindowCompositionInfo((const struct tagWND *)v7, (struct WINDOWCOMPOSITIONINFO *)v26);
          v11 = *(struct _KPROCESS **)(**(_QWORD **)(v7 + 16) + 544LL);
          ProcessSequenceNumber = PsGetProcessSequenceNumber(v11);
          ProcessId = (unsigned int)PsGetProcessId(v11);
          v24 = *(_QWORD *)(v7 + 40) + 88LL;
          v25 = ***(_QWORD ***)(*(_QWORD *)(v7 + 24) + 8LL);
          ClassStyle = DwmGetClassStyle(v7);
          v13 = *(_QWORD *)(v7 + 40);
          v19 = ClassStyle;
          v20 = *(_DWORD *)(v13 + 232);
          v21 = *(_DWORD *)(v13 + 24);
          v14 = (void *)ReferenceDwmApiPort(v13);
          DwmAsyncChildCreate(v14, v21, v20, v19, (__int64)v26, v25, v24, ProcessId, ProcessSequenceNumber);
          DwmChildRectChange((struct tagWND *)v7);
          DirtyVisRgnTrackers(v7);
          WindowMargins::CheckForChanges(v7, 0LL);
          if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 26LL) & 8) != 0 && IsTopLevelWindow(v7) )
          {
            SendDwmIconChange(v15);
            v17 = (void *)ReferenceDwmApiPort(v16);
            DwmAsyncTextChange(v17);
          }
        }
        else
        {
          v18 = (void *)ReferenceDwmApiPort(v8);
          DwmAsyncChildDestroy(v18);
        }
      }
    }
    v4 += 32LL;
    v6 += 3;
  }
}
