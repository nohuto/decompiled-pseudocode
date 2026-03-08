/*
 * XREFs of xxxCsDdeInitialize @ 0x1C00E472C
 * Callers:
 *     NtUserDdeInitialize @ 0x1C00E4630 (NtUserDdeInitialize.c)
 * Callees:
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C002F618 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxChangeMonitorFlags @ 0x1C00E49D0 (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall xxxCsDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rdi
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // esi
  __int64 *Window; // rsi
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rbx
  struct tagWND **v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _BYTE v30[16]; // [rsp+98h] [rbp-51h] BYREF
  _QWORD v31[2]; // [rsp+A8h] [rbp-41h] BYREF
  _QWORD v32[3]; // [rsp+B8h] [rbp-31h] BYREF
  _QWORD v33[3]; // [rsp+D0h] [rbp-19h] BYREF
  _QWORD v34[10]; // [rsp+E8h] [rbp-1h] BYREF

  v5 = 0LL;
  v34[2] = 0LL;
  v33[2] = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
    return 16399LL;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    goto LABEL_7;
  v10 = PsGetCurrentProcessWin32Process(v9);
  if ( v10 )
    v10 &= -(__int64)(*(_QWORD *)v10 != 0LL);
  v11 = 1;
  if ( !(unsigned int)IsImmersiveAppRestricted(v10) )
LABEL_7:
    v11 = 0;
  SmartObjStackRefBase<tagMENU>::Init(v32, 0LL);
  v32[2] = 0LL;
  Window = (__int64 *)xxxCreateWindowEx(
                        0,
                        *(unsigned __int16 *)(gpsi + 884LL),
                        *(unsigned __int16 *)(gpsi + 884LL),
                        0LL,
                        0xC0000000,
                        0,
                        0,
                        0,
                        0,
                        0LL,
                        (__int64)v32,
                        hModuleWin,
                        0LL,
                        0,
                        0x30Au,
                        v11,
                        0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v32);
  if ( !Window )
    return 16399LL;
  LOBYTE(v13) = 9;
  v14 = HMAllocObject(gptiCurrent, 0LL, v13);
  v15 = v14;
  if ( !v14 )
  {
    xxxDestroyWindow(Window);
    return 16399LL;
  }
  v16 = (struct tagWND **)(v14 + 48);
  v31[1] = Window;
  v31[0] = v14 + 48;
  HMAssignmentLock(v31, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v30);
  xxxSetWindowLongPtr(*v16, 0, *(_QWORD *)v15, 0LL, 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v30);
  *(_QWORD *)(v15 + 56) = a5;
  *(_QWORD *)(v15 + 24) = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  *(_DWORD *)(v15 + 40) = 0;
  *(_QWORD *)(v15 + 32) = *(_QWORD *)(gptiCurrent + 624LL);
  v17 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 624LL) = v15;
  v33[0] = v17;
  *(_QWORD *)(gptiCurrent + 416LL) = v33;
  v33[1] = v15;
  WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = (PKDPC)v15;
  HMLockObject(v15);
  v34[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v34;
  v34[1] = Window;
  HMLockObject(Window);
  xxxChangeMonitorFlags(v15, a4);
  if ( (*(_BYTE *)(_HMPheFromObject(v15) + 25) & 1) != 0 )
  {
    HMAssignmentUnlock(v16);
    if ( ThreadUnlock1(v25, v24, v26) )
      xxxDestroyWindow(Window);
    ThreadUnlock1(v28, v27, v29);
    return 16399LL;
  }
  *a1 = *(_QWORD *)v15;
  if ( *v16 )
    v5 = *(_QWORD *)*v16;
  *a2 = v5;
  ThreadUnlock1(a1, v18, v19);
  ThreadUnlock1(v21, v20, v22);
  *a3 = MonitorFlags;
  return 0LL;
}
