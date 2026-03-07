__int64 __fastcall NtUserDrawIconEx(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
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
  __int64 v20; // rcx
  __int64 v22; // rcx
  _BYTE *v23; // rdx
  _BYTE v24[16]; // [rsp+50h] [rbp-38h] BYREF
  int v25; // [rsp+60h] [rbp-28h]
  __int64 v26; // [rsp+68h] [rbp-20h]

  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v24);
  LOBYTE(v15) = 3;
  v16 = (struct tagCURSOR *)HMValidateHandle(a4, v15);
  v17 = 0LL;
  if ( v16 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v16);
    AnimatedCursorFrame = VirtualizedDpiCursor;
    if ( a10 )
    {
      v22 = *((unsigned int *)VirtualizedDpiCursor + 20);
      if ( (v22 & 8) == 0 || (AnimatedCursorFrame = GetAnimatedCursorFrame(VirtualizedDpiCursor, 0)) != 0LL )
      {
        if ( PsGetCurrentProcessWow64Process(v22) )
        {
          v26 = 1LL;
        }
        else
        {
          v26 = 4LL;
          v17 = 3LL;
        }
        if ( (v17 & a11) != 0 )
          ExRaiseDatatypeMisalignment();
        v23 = (_BYTE *)a11;
        if ( a11 >= MmUserProbeAddress )
          v23 = (_BYTE *)MmUserProbeAddress;
        *v23 = *v23;
        v23[39] = v23[39];
        *(_QWORD *)a11 = *((_QWORD *)AnimatedCursorFrame + 11);
        *(_QWORD *)(a11 + 8) = *((_QWORD *)AnimatedCursorFrame + 12);
        *(_QWORD *)(a11 + 32) = *((_QWORD *)AnimatedCursorFrame + 16);
        GetVirtualizedCursorSize(AnimatedCursorFrame, (int *)(a11 + 24), (int *)(a11 + 28));
        *(_DWORD *)(a11 + 16) = *((_DWORD *)AnimatedCursorFrame + 35);
        *(_DWORD *)(a11 + 20) = *((_DWORD *)AnimatedCursorFrame + 36);
        LODWORD(v17) = 1;
        v25 = 1;
      }
    }
    else
    {
      LODWORD(v17) = DrawIconEx(a1, a2, a3, (__int64)VirtualizedDpiCursor, a5, a6, a7, a8, a9);
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v24);
  UserSessionSwitchLeaveCrit(v20);
  return (int)v17;
}
