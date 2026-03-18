/*
 * XREFs of InitClientInfo @ 0x1C003A4B4
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     InitSystemThread @ 0x1C00AE200 (InitSystemThread.c)
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 */

__int64 __fastcall InitClientInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  PVOID CurrentProcess; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  BOOL v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rcx

  v5 = *(_QWORD *)(a1 + 480);
  *(_DWORD *)(v5 + 16) = *(_DWORD *)(a1 + 632);
  *(_DWORD *)(*(_QWORD *)(a1 + 480) + 28LL) = *(_DWORD *)(a1 + 488);
  *(_QWORD *)(*(_QWORD *)(a1 + 480) + 208LL) = 0LL;
  v6 = *(_QWORD *)(a1 + 440);
  v7 = *(_QWORD *)(a1 + 480);
  if ( v6 )
  {
    *(_WORD *)(v7 + 152) = *(_WORD *)(v6 + 72);
    v7 = *(_QWORD *)(a1 + 480);
    *(_QWORD *)(v7 + 144) = *(_QWORD *)(*(_QWORD *)(a1 + 440) + 40LL);
  }
  else
  {
    *(_WORD *)(v7 + 152) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 480) + 144LL) = 0LL;
  }
  CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v5, a3, a4);
  v12 = 0;
  if ( CurrentProcess )
    v12 = CurrentProcess == g_pepDwm;
  v13 = v12;
  v14 = *(_QWORD *)(a1 + 424);
  if ( *(int *)(v14 + 12) < 0 )
    v13 |= 2u;
  if ( (*(_DWORD *)(v14 + 820) & 0x800) != 0 )
    v13 |= 4u;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(CurrentProcess, v8, v10, v11) + 12) & 0x20000000) != 0 )
    v13 |= 0x40u;
  *(_QWORD *)(*(_QWORD *)(a1 + 480) + 224LL) |= v13;
  *(_DWORD *)(*(_QWORD *)(a1 + 480) + 232LL) = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(*(_QWORD *)(a1 + 480) + 236LL) = 0;
  v15 = *(_QWORD *)(a1 + 480);
  *(_QWORD *)(a1 + 360) = v15 + 232;
  *(_DWORD *)(v15 + 240) = *(_DWORD *)(a1 + 344);
  *(_DWORD *)(*(_QWORD *)(a1 + 480) + 244LL) = 0;
  *(_QWORD *)(a1 + 368) = *(_QWORD *)(a1 + 480) + 240LL;
  return 1LL;
}
