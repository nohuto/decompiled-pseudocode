/*
 * XREFs of NtUserGetMouseMovePointsEx @ 0x1C01F5500
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _GetMouseMovePointsEx @ 0x1C01D45BC (_GetMouseMovePointsEx.c)
 */

__int64 __fastcall NtUserGetMouseMovePointsEx(__int64 a1, ULONG64 a2, volatile void *a3, unsigned int a4, int a5)
{
  __int64 v5; // rsi
  ULONG64 v7; // rdi
  int v8; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG64 v12; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // rcx
  unsigned int MouseMovePoints; // ebx
  __int128 v17; // [rsp+38h] [rbp-40h] BYREF
  __int64 v18; // [rsp+48h] [rbp-30h]
  __int128 v19; // [rsp+50h] [rbp-28h]
  __int64 v20; // [rsp+60h] [rbp-18h]

  v5 = a4;
  v7 = a2;
  v8 = a1;
  v17 = 0LL;
  v18 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( v8 != 24 || (unsigned int)v5 > 0x40 )
  {
    v11 = 87LL;
    goto LABEL_10;
  }
  v10 = grpdeskRitInput;
  if ( *(_QWORD *)(ThreadWin32Thread + 456) != grpdeskRitInput )
  {
    v11 = 5LL;
LABEL_10:
    UserSetLastError(v11, v10);
    MouseMovePoints = -1;
    goto LABEL_11;
  }
  v12 = v7 + 24;
  if ( v7 + 24 < v7 || v12 > MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  v19 = *(_OWORD *)v7;
  v20 = *(_QWORD *)(v7 + 16);
  v17 = v19;
  v18 = v20;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v12);
  ProbeForWrite(a3, 24 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
  MouseMovePoints = GetMouseMovePointsEx((__int16 *)&v17, (__int64)a3, v5, a5);
LABEL_11:
  UserSessionSwitchLeaveCrit(v14);
  return MouseMovePoints;
}
