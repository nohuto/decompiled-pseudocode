/*
 * XREFs of NtUserDrawIconEx @ 0x1C00BDC50
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C0025DC8 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0025E68 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C0073978 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _DrawIconEx @ 0x1C00BDD48 (_DrawIconEx.c)
 */

__int64 __fastcall NtUserDrawIconEx(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        ULONG64 a11)
{
  struct tagCURSOR *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rbx
  struct tagCURSOR *VirtualizedDpiCursor; // rax
  struct tagCURSOR *AnimatedCursorFrame; // rdi
  __int64 v21; // rcx
  __int64 v23; // rcx
  _BYTE *v24; // rdx
  _BYTE v25[16]; // [rsp+50h] [rbp-38h] BYREF
  int v26; // [rsp+60h] [rbp-28h]
  __int64 v27; // [rsp+68h] [rbp-20h]

  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v25);
  v15 = (struct tagCURSOR *)HMValidateHandle(a4, 3u);
  v18 = 0LL;
  if ( v15 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v15);
    AnimatedCursorFrame = VirtualizedDpiCursor;
    if ( a10 )
    {
      v23 = *((unsigned int *)VirtualizedDpiCursor + 20);
      if ( (v23 & 8) == 0 || (AnimatedCursorFrame = GetAnimatedCursorFrame(VirtualizedDpiCursor, 0)) != 0LL )
      {
        if ( PsGetCurrentProcessWow64Process(v23) )
        {
          v27 = 1LL;
        }
        else
        {
          v27 = 4LL;
          v18 = 3LL;
        }
        if ( (v18 & a11) != 0 )
          ExRaiseDatatypeMisalignment();
        v24 = (_BYTE *)a11;
        if ( a11 >= MmUserProbeAddress )
          v24 = (_BYTE *)MmUserProbeAddress;
        *v24 = *v24;
        v24[39] = v24[39];
        *(_QWORD *)a11 = *((_QWORD *)AnimatedCursorFrame + 11);
        *(_QWORD *)(a11 + 8) = *((_QWORD *)AnimatedCursorFrame + 12);
        *(_QWORD *)(a11 + 32) = *((_QWORD *)AnimatedCursorFrame + 16);
        GetVirtualizedCursorSize(AnimatedCursorFrame, (int *)(a11 + 24), (int *)(a11 + 28));
        *(_DWORD *)(a11 + 16) = *((_DWORD *)AnimatedCursorFrame + 35);
        *(_DWORD *)(a11 + 20) = *((_DWORD *)AnimatedCursorFrame + 36);
        LODWORD(v18) = 1;
        v26 = 1;
      }
    }
    else
    {
      LODWORD(v18) = DrawIconEx(a1, a2, a3, VirtualizedDpiCursor, a5, a6, a7, a8, a9);
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v25, v16, v17);
  UserSessionSwitchLeaveCrit(v21);
  return (int)v18;
}
