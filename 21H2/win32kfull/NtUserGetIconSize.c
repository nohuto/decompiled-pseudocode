/*
 * XREFs of NtUserGetIconSize @ 0x1C00FB970
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C0025DC8 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0025E68 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C0073978 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 */

__int64 __fastcall NtUserGetIconSize(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v5; // rsi
  int v6; // r15d
  int v8; // edi
  struct tagCURSOR *v9; // rax
  ULONG64 v10; // rcx
  struct tagCURSOR *VirtualizedDpiCursor; // rax
  int v13; // [rsp+20h] [rbp-28h] BYREF
  int v14[9]; // [rsp+24h] [rbp-24h] BYREF

  v5 = a3;
  v6 = a2;
  v8 = 0;
  v13 = 0;
  v14[0] = 0;
  EnterSharedCrit(a1, a2, a3);
  v9 = (struct tagCURSOR *)HMValidateHandle(a1, 3u);
  if ( v9 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v9);
    if ( (*((_DWORD *)VirtualizedDpiCursor + 20) & 8) == 0
      || (VirtualizedDpiCursor = GetAnimatedCursorFrame(VirtualizedDpiCursor, v6)) != 0LL )
    {
      GetVirtualizedCursorSize(VirtualizedDpiCursor, &v13, v14);
      v10 = MmUserProbeAddress;
      if ( (unsigned __int64)v5 >= MmUserProbeAddress )
        v5 = (_DWORD *)MmUserProbeAddress;
      *v5 = v13;
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
