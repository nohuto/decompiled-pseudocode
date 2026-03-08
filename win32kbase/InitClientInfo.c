/*
 * XREFs of InitClientInfo @ 0x1C0079034
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0076490 (xxxCreateThreadInfo.c)
 *     InitSystemThread @ 0x1C00C2CB0 (InitSystemThread.c)
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 */

__int64 __fastcall InitClientInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 CurrentProcess; // rcx
  BOOL v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx

  *(_DWORD *)(*(_QWORD *)(a1 + 480) + 16LL) = *(_DWORD *)(a1 + 632);
  v5 = *(_QWORD *)(a1 + 480);
  *(_DWORD *)(v5 + 28) = *(_DWORD *)(a1 + 488);
  *(_QWORD *)(*(_QWORD *)(a1 + 480) + 208LL) = 0LL;
  v6 = *(_QWORD *)(a1 + 440);
  if ( v6 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 480) + 152LL) = *(_WORD *)(v6 + 72);
    v5 = *(_QWORD *)(a1 + 480);
    *(_QWORD *)(v5 + 144) = *(_QWORD *)(*(_QWORD *)(a1 + 440) + 40LL);
  }
  else
  {
    *(_WORD *)(*(_QWORD *)(a1 + 480) + 152LL) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 480) + 144LL) = 0LL;
  }
  CurrentProcess = PsGetCurrentProcess(v5, a2, a3, a4);
  v8 = 0;
  if ( CurrentProcess )
    v8 = CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  v9 = v8;
  v10 = *(_QWORD *)(a1 + 424);
  if ( *(int *)(v10 + 12) < 0 )
    v9 |= 2u;
  if ( (*(_DWORD *)(v10 + 812) & 0x800) != 0 )
    v9 |= 4u;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(CurrentProcess);
  v12 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v12 = CurrentProcessWin32Process & -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( (*(_DWORD *)(v12 + 12) & 0x20000000) != 0 )
    v9 |= 0x40u;
  *(_QWORD *)(*(_QWORD *)(a1 + 480) + 224LL) |= v9;
  *(_DWORD *)(*(_QWORD *)(a1 + 480) + 232LL) = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(*(_QWORD *)(a1 + 480) + 236LL) = 0;
  v13 = *(_QWORD *)(a1 + 480);
  *(_QWORD *)(a1 + 360) = v13 + 232;
  *(_DWORD *)(v13 + 240) = *(_DWORD *)(a1 + 344);
  *(_DWORD *)(*(_QWORD *)(a1 + 480) + 244LL) = 0;
  *(_QWORD *)(a1 + 368) = *(_QWORD *)(a1 + 480) + 240LL;
  return 1LL;
}
