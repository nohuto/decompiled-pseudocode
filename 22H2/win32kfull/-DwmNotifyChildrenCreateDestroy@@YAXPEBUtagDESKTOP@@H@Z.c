/*
 * XREFs of ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00E9D5C
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C00E9904 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     SendDwmIconChange @ 0x1C0038960 (SendDwmIconChange.c)
 *     DwmAsyncTextChange @ 0x1C00471A0 (DwmAsyncTextChange.c)
 *     IsDesktopWindow @ 0x1C004C550 (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x1C004C5B0 (IsMessageParentWindow.c)
 *     DwmChildRectChange @ 0x1C004E0EC (DwmChildRectChange.c)
 *     _GetWindowCompositionInfo @ 0x1C006DE10 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C006FBE8 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     IsMotherDesktopWindow @ 0x1C00E9FE8 (IsMotherDesktopWindow.c)
 *     DwmAsyncChildCreate @ 0x1C00EA014 (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C00EA158 (DwmGetClassStyle.c)
 *     DwmAsyncChildDestroy @ 0x1C00EA1D0 (DwmAsyncChildDestroy.c)
 */

void __fastcall DwmNotifyChildrenCreateDestroy(const struct tagDESKTOP *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 *v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int ProcessId; // eax
  __int64 v13; // rdi
  int v14; // r13d
  int v15; // r14d
  int v16; // r15d
  __int64 v17; // rbp
  __int64 ProcessSequenceNumber; // rbx
  int ClassStyle; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  void *v22; // rax
  __int64 v23; // rdx
  int v24; // r8d
  void *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  void *v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // [rsp+60h] [rbp-98h]
  struct _KPROCESS *v32; // [rsp+70h] [rbp-88h]
  __int64 *v33; // [rsp+78h] [rbp-80h]
  __int64 v34[2]; // [rsp+80h] [rbp-78h] BYREF
  __int128 v35; // [rsp+90h] [rbp-68h]
  __int64 v36; // [rsp+A0h] [rbp-58h]
  const struct tagDESKTOP *v37; // [rsp+100h] [rbp+8h]
  unsigned int v38; // [rsp+108h] [rbp+10h]
  __int64 *v39; // [rsp+110h] [rbp+18h]
  unsigned __int64 v40; // [rsp+118h] [rbp+20h]

  v38 = a2;
  v37 = a1;
  v2 = (unsigned int)a2;
  v3 = gSharedInfo[1];
  v31 = v3;
  v40 = v3 + 32LL * giheLast;
  v39 = (__int64 *)gpKernelHandleTable;
  v4 = v40;
  if ( v3 <= v40 )
  {
    v5 = (__int64 *)gpKernelHandleTable;
    do
    {
      if ( *(_BYTE *)(v3 + 24) == 1 )
      {
        v6 = *v5;
        v33 = (__int64 *)v6;
        if ( *(const struct tagDESKTOP **)(v6 + 24) == a1 )
        {
          if ( !(unsigned int)IsMotherDesktopWindow(v6, a2, v2) )
          {
            if ( (_DWORD)v2 )
            {
              LOBYTE(v8) = IsDesktopWindow(v7);
              if ( !v8 )
              {
                LOBYTE(v10) = IsMessageParentWindow(v9);
                if ( v10 )
                  GetDesktopWindow(v11);
              }
              *(_OWORD *)v34 = 0LL;
              v36 = 0LL;
              v35 = 0LL;
              GetWindowCompositionInfo(v6, (__int64)v34);
              v32 = *(struct _KPROCESS **)(**(_QWORD **)(v6 + 16) + 544LL);
              ProcessId = (unsigned int)PsGetProcessId(v32);
              v13 = *(_QWORD *)(v6 + 40);
              v14 = ProcessId;
              v15 = *(_DWORD *)(v13 + 232);
              v16 = *(_DWORD *)(v13 + 24);
              v17 = ***(_QWORD ***)(*(_QWORD *)(v6 + 24) + 8LL);
              ProcessSequenceNumber = PsGetProcessSequenceNumber(v32);
              ClassStyle = DwmGetClassStyle(v6);
              v22 = (void *)ReferenceDwmApiPort(v21, v20);
              DwmAsyncChildCreate(v22, v16, v15, ClassStyle, (__int64)v34, v17, v13 + 88, v14, ProcessSequenceNumber);
              DwmChildRectChange((unsigned __int64)v33, v23, v24);
              if ( (*(_BYTE *)(v33[5] + 26) & 8) != 0 )
              {
                if ( (unsigned int)IsTopLevelWindow((__int64)v33) )
                {
                  SendDwmIconChange((__int64)v33);
                  v28 = (void *)ReferenceDwmApiPort(v27, v26);
                  DwmAsyncTextChange(v28, *v33, v29, v30);
                }
              }
              v3 = v31;
              v4 = v40;
            }
            else
            {
              v25 = (void *)ReferenceDwmApiPort(v7, a2);
              DwmAsyncChildDestroy(v25);
            }
            v2 = v38;
          }
          a1 = v37;
        }
        v5 = v39;
      }
      v3 += 32LL;
      v5 += 3;
      v31 = v3;
      v39 = v5;
    }
    while ( v3 <= v4 );
  }
}
