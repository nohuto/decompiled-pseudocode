/*
 * XREFs of NtUserDrawIconEx @ 0x1C0028220
 * Callers:
 *     <none>
 * Callees:
 *     _DrawIconEx @ 0x1C0028030 (_DrawIconEx.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C00287B8 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0028B20 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C00B6570 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserDrawIconEx(
        HDC a1,
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
  __int64 v15; // rdx
  struct tagCURSOR *v16; // rax
  __int64 v17; // rbx
  struct tagCURSOR *VirtualizedDpiCursor; // rax
  struct tagCURSOR *AnimatedCursorFrame; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _BYTE *v25; // rdx
  _BYTE v26[16]; // [rsp+50h] [rbp-38h] BYREF
  int v27; // [rsp+60h] [rbp-28h]
  __int64 v28; // [rsp+68h] [rbp-20h]

  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v26);
  LOBYTE(v15) = 3;
  v16 = (struct tagCURSOR *)HMValidateHandle(a4, v15);
  v17 = 0LL;
  if ( v16 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v16);
    AnimatedCursorFrame = VirtualizedDpiCursor;
    if ( a10 )
    {
      if ( (*((_DWORD *)VirtualizedDpiCursor + 20) & 8) == 0
        || (AnimatedCursorFrame = GetAnimatedCursorFrame(VirtualizedDpiCursor, 0)) != 0LL )
      {
        if ( PsGetCurrentProcessWow64Process() )
        {
          v28 = 1LL;
        }
        else
        {
          v28 = 4LL;
          v17 = 3LL;
        }
        if ( (v17 & a11) != 0 )
          ExRaiseDatatypeMisalignment();
        v25 = (_BYTE *)a11;
        if ( a11 >= MmUserProbeAddress )
          v25 = (_BYTE *)MmUserProbeAddress;
        *v25 = *v25;
        v25[39] = v25[39];
        *(_QWORD *)a11 = *((_QWORD *)AnimatedCursorFrame + 11);
        *(_QWORD *)(a11 + 8) = *((_QWORD *)AnimatedCursorFrame + 12);
        *(_QWORD *)(a11 + 32) = *((_QWORD *)AnimatedCursorFrame + 16);
        GetVirtualizedCursorSize(AnimatedCursorFrame, (int *)(a11 + 24), (int *)(a11 + 28));
        *(_DWORD *)(a11 + 16) = *((_DWORD *)AnimatedCursorFrame + 35);
        *(_DWORD *)(a11 + 20) = *((_DWORD *)AnimatedCursorFrame + 36);
        LODWORD(v17) = 1;
        v27 = 1;
      }
    }
    else
    {
      LODWORD(v17) = DrawIconEx(a1, a2, a3, (__int64)VirtualizedDpiCursor, a5, a6, a7, a8, a9);
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v26);
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return (int)v17;
}
