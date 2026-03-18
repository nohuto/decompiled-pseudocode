/*
 * XREFs of xxxCsDdeInitialize @ 0x1C010D64C
 * Callers:
 *     NtUserDdeInitialize @ 0x1C010D550 (NtUserDdeInitialize.c)
 * Callees:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C004F3D8 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxChangeMonitorFlags @ 0x1C010D918 (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall xxxCsDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v10; // esi
  _QWORD *Window; // rsi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rbx
  struct tagWND **v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _BYTE v31[16]; // [rsp+98h] [rbp-51h] BYREF
  _QWORD v32[2]; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v33[3]; // [rsp+B8h] [rbp-31h] BYREF
  _QWORD v34[3]; // [rsp+D0h] [rbp-19h] BYREF
  _QWORD v35[10]; // [rsp+E8h] [rbp-1h] BYREF

  v5 = 0LL;
  v35[2] = 0LL;
  v34[2] = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
    return 16399LL;
  if ( !PsGetCurrentProcessWin32Process(a1)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8),
        v10 = 1,
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v10 = 0;
  }
  SmartObjStackRefBase<tagMENU>::Init(v33, 0LL);
  v33[2] = 0LL;
  Window = (_QWORD *)xxxCreateWindowEx(
                       0,
                       (wchar_t *)*(unsigned __int16 *)(gpsi + 884LL),
                       *(unsigned __int16 *)(gpsi + 884LL),
                       0LL,
                       0xC0000000,
                       0,
                       0,
                       0,
                       0,
                       0LL,
                       (__int64)v33,
                       hModuleWin,
                       0LL,
                       0,
                       0x30Au,
                       v10,
                       0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v33);
  if ( !Window )
    return 16399LL;
  LOBYTE(v12) = 9;
  v13 = HMAllocObject(gptiCurrent, 0LL, v12);
  v14 = v13;
  if ( !v13 )
  {
    xxxDestroyWindow(Window);
    return 16399LL;
  }
  v15 = (struct tagWND **)(v13 + 48);
  v32[1] = Window;
  v32[0] = v13 + 48;
  HMAssignmentLock(v32, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v31);
  xxxSetWindowLongPtr(*v15, 0, *(_QWORD *)v14, 0LL, 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v31, v16, v17);
  *(_QWORD *)(v14 + 56) = a5;
  *(_QWORD *)(v14 + 24) = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
  *(_DWORD *)(v14 + 40) = 0;
  *(_QWORD *)(v14 + 32) = *(_QWORD *)(gptiCurrent + 624LL);
  v18 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 624LL) = v14;
  v34[0] = v18;
  *(_QWORD *)(gptiCurrent + 416LL) = v34;
  v34[1] = v14;
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = v14;
  HMLockObject(v14);
  v35[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v35;
  v35[1] = Window;
  HMLockObject(Window);
  xxxChangeMonitorFlags(v14, a4);
  if ( (*(_BYTE *)(_HMPheFromObject(v14) + 25) & 1) != 0 )
  {
    HMAssignmentUnlock(v15);
    if ( ThreadUnlock1(v26, v25, v27) )
      xxxDestroyWindow(Window);
    ThreadUnlock1(v29, v28, v30);
    return 16399LL;
  }
  *a1 = *(_QWORD *)v14;
  if ( *v15 )
    v5 = *(_QWORD *)*v15;
  *a2 = v5;
  ThreadUnlock1(a1, v19, v20);
  ThreadUnlock1(v22, v21, v23);
  *a3 = MonitorFlags;
  return 0LL;
}
