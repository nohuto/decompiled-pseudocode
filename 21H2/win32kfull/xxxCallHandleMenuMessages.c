/*
 * XREFs of xxxCallHandleMenuMessages @ 0x1C0237090
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C2120 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C0249BDC (xxxMNDragOver.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104AC8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNEndMenuState @ 0x1C0222200 (xxxMNEndMenuState.c)
 *     xxxEndMenuLoop @ 0x1C0233D00 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0233F78 (xxxHandleMenuMessages.c)
 *     MNCheckButtonDownState @ 0x1C0236BA4 (MNCheckButtonDownState.c)
 */

__int64 __fastcall xxxCallHandleMenuMessages(__int64 a1, __int64 *a2, int a3, __int64 a4, __int64 a5)
{
  int v5; // r10d
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // eax
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v14; // r14d
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v22; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v25; // rax
  int v26; // ecx
  __int64 *v28[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-30h] BYREF
  int v30; // [rsp+38h] [rbp-28h]
  int v31; // [rsp+3Ch] [rbp-24h]
  __int64 v32; // [rsp+40h] [rbp-20h]
  __int64 v33; // [rsp+48h] [rbp-18h]
  __int128 v34; // [rsp+50h] [rbp-10h]

  v5 = *(_DWORD *)(a1 + 8);
  v31 = 0;
  v34 = 0LL;
  if ( (v5 & 0x4008) == 0x4008 )
  {
    MNCheckButtonDownState(a1);
    v5 = *(_DWORD *)(a1 + 8);
  }
  if ( a2 )
    v29 = *a2;
  else
    v29 = 0LL;
  v30 = a3;
  v32 = a4;
  v10 = a5;
  if ( (unsigned int)(a3 - 512) <= 0xE )
    v10 = ((unsigned __int16)(*(_WORD *)(a2[5] + 108) + WORD1(a5)) << 16) | (unsigned __int16)(a5
                                                                                             + *(_WORD *)(a2[5] + 104));
  v11 = *(_QWORD *)a1;
  v33 = v10;
  *(_DWORD *)(a1 + 8) = v5 | 0x200;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v28, v11);
  v12 = xxxHandleMenuMessages((__int64)&v29, a1, v28);
  CurrentThread = KeGetCurrentThread();
  v14 = v12;
  v15 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v16)
    || (CurrentProcess = PsGetCurrentProcess(v18, v17, v19),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v22),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v15 = *ThreadWin32Thread;
  }
  if ( v28[0] != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v28[0] + 2) )
  {
    if ( *((_BYTE *)v28[0] + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v28[0]);
  }
  v25 = *(_QWORD **)(v15 + 1472);
  if ( v25 )
    *(_QWORD *)(v15 + 1472) = *v25;
  v26 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v26 & 0xFFFFFDFF;
  if ( v14 && (v26 & 0x100) != 0 && ((v26 & 4) == 0 || (**(_DWORD **)a1 & 0x8000) != 0) )
  {
    xxxEndMenuLoop(a1, *(_QWORD *)a1);
    xxxMNEndMenuState(a1);
  }
  return v14;
}
