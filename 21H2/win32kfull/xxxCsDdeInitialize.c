/*
 * XREFs of xxxCsDdeInitialize @ 0x1C01280E0
 * Callers:
 *     NtUserDdeInitialize @ 0x1C0127FE0 (NtUserDdeInitialize.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C0089C78 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A9DC (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE4E0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxChangeMonitorFlags @ 0x1C01283AC (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall xxxCsDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v10; // edi
  unsigned __int64 Window; // rsi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdi
  struct tagWND **v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD v21[2]; // [rsp+98h] [rbp-41h] BYREF
  _QWORD v22[3]; // [rsp+A8h] [rbp-31h] BYREF
  _QWORD v23[3]; // [rsp+C0h] [rbp-19h] BYREF
  _QWORD v24[10]; // [rsp+D8h] [rbp-1h] BYREF

  v5 = 0LL;
  v24[2] = 0LL;
  v23[2] = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
    return 16399LL;
  if ( !PsGetCurrentProcessWin32Process(a1)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8),
        v10 = 1,
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v10 = 0;
  }
  SmartObjStackRefBase<tagMENU>::Init(v22, 0LL);
  v22[2] = 0LL;
  Window = xxxCreateWindowEx(
             0,
             (wchar_t *)*(unsigned __int16 *)(gpsi + 884LL),
             *(unsigned __int16 *)(gpsi + 884LL),
             0LL,
             -1073741824,
             0,
             0,
             0,
             0,
             0LL,
             (__int64)v22,
             hModuleWin,
             0LL,
             0,
             -2147482870,
             v10,
             0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v22);
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
  v21[1] = Window;
  v21[0] = v13 + 48;
  HMAssignmentLock(v21);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v21);
  xxxSetWindowLongPtr(*v15, 0LL, *(_QWORD *)v14, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v21);
  *(_QWORD *)(v14 + 56) = a5;
  *(_QWORD *)(v14 + 24) = WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
  *(_DWORD *)(v14 + 40) = 0;
  *(_QWORD *)(v14 + 32) = *(_QWORD *)(gptiCurrent + 624LL);
  v16 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 624LL) = v14;
  v23[0] = v16;
  *(_QWORD *)(gptiCurrent + 416LL) = v23;
  v23[1] = v14;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = (PVOID)v14;
  HMLockObject(v14);
  v24[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v24;
  v24[1] = Window;
  HMLockObject(Window);
  xxxChangeMonitorFlags(v14, a4);
  if ( (*(_BYTE *)(_HMPheFromObject(v14) + 25) & 1) != 0 )
  {
    HMAssignmentUnlock(v15);
    if ( ThreadUnlock1(v19) )
      xxxDestroyWindow(Window);
    ThreadUnlock1(v20);
    return 16399LL;
  }
  *a1 = *(_QWORD *)v14;
  if ( *v15 )
    v5 = *(_QWORD *)*v15;
  *a2 = v5;
  ThreadUnlock1(a1);
  ThreadUnlock1(v17);
  *a3 = MonitorFlags;
  return 0LL;
}
