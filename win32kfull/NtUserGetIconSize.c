__int64 __fastcall NtUserGetIconSize(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v5; // rsi
  int v6; // r15d
  int v8; // edi
  __int64 v9; // rdx
  struct tagCURSOR *v10; // rax
  ULONG64 v11; // rcx
  struct tagCURSOR *VirtualizedDpiCursor; // rax
  int v14; // [rsp+20h] [rbp-28h] BYREF
  int v15[9]; // [rsp+24h] [rbp-24h] BYREF

  v5 = a3;
  v6 = a2;
  v8 = 0;
  v14 = 0;
  v15[0] = 0;
  EnterSharedCrit(a1, a2, a3);
  LOBYTE(v9) = 3;
  v10 = (struct tagCURSOR *)HMValidateHandle(a1, v9);
  if ( v10 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v10);
    if ( (*((_DWORD *)VirtualizedDpiCursor + 20) & 8) == 0
      || (VirtualizedDpiCursor = GetAnimatedCursorFrame(VirtualizedDpiCursor, v6)) != 0LL )
    {
      GetVirtualizedCursorSize(VirtualizedDpiCursor, &v14, v15);
      v11 = MmUserProbeAddress;
      if ( (unsigned __int64)v5 >= MmUserProbeAddress )
        v5 = (_DWORD *)MmUserProbeAddress;
      *v5 = v14;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v15[0];
      v8 = 1;
      v15[1] = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v11);
  return v8;
}
