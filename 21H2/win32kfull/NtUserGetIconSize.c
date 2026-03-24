/*
 * XREFs of NtUserGetIconSize @ 0x1C010F600
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C0066FD4 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0067074 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     HMValidateHandle @ 0x1C00670E0 (HMValidateHandle.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C0081390 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 */

__int64 __fastcall NtUserGetIconSize(unsigned __int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // edi
  struct tagCURSOR *v9; // rax
  ULONG64 v10; // rcx
  struct tagCURSOR *VirtualizedDpiCursor; // rax
  int v13; // [rsp+20h] [rbp-28h] BYREF
  int v14[9]; // [rsp+24h] [rbp-24h] BYREF

  v8 = 0;
  v13 = 0;
  v14[0] = 0;
  EnterSharedCrit(0LL, 1LL);
  v9 = (struct tagCURSOR *)HMValidateHandle(a1, 3u);
  if ( v9 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v9);
    if ( (*((_DWORD *)VirtualizedDpiCursor + 20) & 8) == 0
      || (VirtualizedDpiCursor = GetAnimatedCursorFrame(VirtualizedDpiCursor, a2)) != 0LL )
    {
      GetVirtualizedCursorSize(VirtualizedDpiCursor, &v13, v14);
      v10 = MmUserProbeAddress;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_DWORD *)MmUserProbeAddress;
      *a3 = v13;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v14[0];
      v8 = 1;
      v14[1] = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}
