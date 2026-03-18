/*
 * XREFs of ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0098A20
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C00986F4 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C00205C0 (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x1C0020620 (IsMessageParentWindow.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C004D894 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C004EC00 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     IsMotherDesktopWindow @ 0x1C0062F70 (IsMotherDesktopWindow.c)
 *     DwmChildRectChange @ 0x1C006BCDC (DwmChildRectChange.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     DwmAsyncTextChange @ 0x1C008507C (DwmAsyncTextChange.c)
 *     SendDwmIconChange @ 0x1C0085110 (SendDwmIconChange.c)
 *     DwmAsyncChildCreate @ 0x1C0098CB4 (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C0098E00 (DwmGetClassStyle.c)
 *     DwmAsyncChildDestroy @ 0x1C0098E78 (DwmAsyncChildDestroy.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

void __fastcall DwmNotifyChildrenCreateDestroy(const struct tagDESKTOP *a1, int a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  __int64 *v6; // r15
  ULONG_PTR v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  struct _KPROCESS *v13; // rbx
  int ClassStyle; // eax
  __int64 v15; // rcx
  void *v16; // rax
  __int64 v17; // rdx
  int v18; // r8d
  __int64 v19; // rbx
  void *v20; // rax
  void *v21; // rax
  int v22; // [rsp+60h] [rbp-A8h]
  int v23; // [rsp+64h] [rbp-A4h]
  int v24; // [rsp+68h] [rbp-A0h]
  __int64 ProcessSequenceNumber; // [rsp+70h] [rbp-98h]
  int ProcessId; // [rsp+78h] [rbp-90h]
  __int64 v27; // [rsp+80h] [rbp-88h]
  __int64 v28; // [rsp+88h] [rbp-80h]
  __int64 v29[8]; // [rsp+90h] [rbp-78h] BYREF

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
          if ( !v9 )
          {
            LOBYTE(v11) = IsMessageParentWindow(v10);
            if ( v11 )
              GetDesktopWindow(v12);
          }
          memset(v29, 0, sizeof(v29));
          _GetWindowCompositionInfo((const struct tagWND *)v7, (struct WINDOWCOMPOSITIONINFO *)v29);
          v13 = *(struct _KPROCESS **)(**(_QWORD **)(v7 + 16) + 544LL);
          ProcessSequenceNumber = PsGetProcessSequenceNumber(v13);
          ProcessId = (unsigned int)PsGetProcessId(v13);
          v27 = *(_QWORD *)(v7 + 40) + 88LL;
          v28 = ***(_QWORD ***)(*(_QWORD *)(v7 + 24) + 8LL);
          ClassStyle = DwmGetClassStyle(v7);
          v15 = *(_QWORD *)(v7 + 40);
          v22 = ClassStyle;
          v23 = *(_DWORD *)(v15 + 232);
          v24 = *(_DWORD *)(v15 + 24);
          v16 = (void *)ReferenceDwmApiPort();
          DwmAsyncChildCreate(v16, v24, v23, v22, (__int64)v29, v28, v27, ProcessId, ProcessSequenceNumber);
          DwmChildRectChange((__int64 *)v7, v17, v18);
          DirtyVisRgnTrackers((struct tagWND *)v7);
          WindowMargins::CheckForChanges((const struct tagWND *)v7, 1);
          if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 26LL) & 8) != 0 && IsTopLevelWindow(v7) )
          {
            SendDwmIconChange(v7);
            v19 = *(_QWORD *)v7;
            v20 = (void *)ReferenceDwmApiPort();
            DwmAsyncTextChange(v20, v19);
          }
        }
        else
        {
          v21 = (void *)ReferenceDwmApiPort();
          DwmAsyncChildDestroy(v21);
        }
      }
    }
    v4 += 32LL;
    v6 += 3;
  }
}
