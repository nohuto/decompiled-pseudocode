/*
 * XREFs of InitClientInfo @ 0x1C00851D0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003D918 (xxxCreateThreadInfo.c)
 *     InitSystemThread @ 0x1C0084E20 (InitSystemThread.c)
 * Callees:
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 */

__int64 __fastcall InitClientInfo(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  PVOID CurrentProcess; // rcx
  BOOL v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx

  v2 = *(_QWORD *)(a1 + 480);
  *(_DWORD *)(v2 + 16) = *(_DWORD *)(a1 + 632);
  *(_DWORD *)(*(_QWORD *)(a1 + 480) + 28LL) = *(_DWORD *)(a1 + 488);
  *(_QWORD *)(*(_QWORD *)(a1 + 480) + 208LL) = 0LL;
  v3 = *(_QWORD *)(a1 + 440);
  v4 = *(_QWORD *)(a1 + 480);
  if ( v3 )
  {
    *(_WORD *)(v4 + 152) = *(_WORD *)(v3 + 72);
    v4 = *(_QWORD *)(a1 + 480);
    *(_QWORD *)(v4 + 144) = *(_QWORD *)(*(_QWORD *)(a1 + 440) + 40LL);
  }
  else
  {
    *(_WORD *)(v4 + 152) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 480) + 144LL) = 0LL;
  }
  CurrentProcess = (PVOID)PsGetCurrentProcess(v4, v2);
  v6 = 0;
  if ( CurrentProcess )
    v6 = CurrentProcess == g_pepDwm;
  v7 = v6;
  v8 = *(_QWORD *)(a1 + 424);
  if ( *(int *)(v8 + 12) < 0 )
    v7 |= 2u;
  if ( (*(_DWORD *)(v8 + 820) & 0x800) != 0 )
    v7 |= 4u;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(CurrentProcess) + 12) & 0x20000000) != 0 )
    v7 |= 0x40u;
  *(_QWORD *)(*(_QWORD *)(a1 + 480) + 224LL) |= v7;
  *(_DWORD *)(*(_QWORD *)(a1 + 480) + 232LL) = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(*(_QWORD *)(a1 + 480) + 236LL) = 0;
  v9 = *(_QWORD *)(a1 + 480);
  *(_QWORD *)(a1 + 360) = v9 + 232;
  *(_DWORD *)(v9 + 240) = *(_DWORD *)(a1 + 344);
  *(_DWORD *)(*(_QWORD *)(a1 + 480) + 244LL) = 0;
  *(_QWORD *)(a1 + 368) = *(_QWORD *)(a1 + 480) + 240LL;
  return 1LL;
}
