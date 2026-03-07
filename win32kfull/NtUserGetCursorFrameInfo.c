__int64 __fastcall NtUserGetCursorFrameInfo(__int64 a1, __int64 a2, _DWORD *a3, int *a4)
{
  __int64 v6; // rsi
  struct tagCURSOR *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  struct tagCURSOR *VirtualizedDpiCursor; // rdi
  _DWORD *v12; // rcx
  _DWORD *v13; // rdx
  int v14; // eax
  struct tagCURSOR *AnimatedCursorFrame; // r8

  v6 = (int)a2;
  EnterSharedCrit(a1, a2, a3);
  v8 = (struct tagCURSOR *)HMValidateHandle(a1, 3u);
  v10 = 0LL;
  if ( v8 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v8);
    v12 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v12 = (_DWORD *)MmUserProbeAddress;
    *v12 = *v12;
    v13 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v13 = (_DWORD *)MmUserProbeAddress;
    *v13 = *v13;
    if ( (*((_DWORD *)VirtualizedDpiCursor + 20) & 8) != 0 )
    {
      AnimatedCursorFrame = GetAnimatedCursorFrame(VirtualizedDpiCursor, v6);
      if ( !AnimatedCursorFrame )
        goto LABEL_10;
      v14 = *((_DWORD *)VirtualizedDpiCursor + 23);
      v9 = *(unsigned int *)(*((_QWORD *)VirtualizedDpiCursor + 14) + 4 * v6);
      VirtualizedDpiCursor = AnimatedCursorFrame;
    }
    else
    {
      v14 = 1;
      v9 = 0LL;
    }
    if ( VirtualizedDpiCursor )
    {
      v10 = *(_QWORD *)VirtualizedDpiCursor;
      *a3 = v9;
      *a4 = v14;
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
