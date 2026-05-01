/*
 * XREFs of ?HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1803D7C40
 * Callers:
 *     ?OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x1803CE0BC (-OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x1803D731C (-GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Win.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x1803D8FCC (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 *     ?SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z @ 0x1803D964C (-SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1803DA59C (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleFramePositionAndSizeUpdateCompleted(
        __int64 a1,
        unsigned int a2,
        int *a3,
        _DWORD *a4)
{
  RTL_SRWLOCK *v8; // r15
  __int64 v9; // rcx
  unsigned __int64 i; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  HMONITOR CurrentMonitor; // rax
  HMONITOR v17; // rdi
  KeyboardHosting::MonitorInformation *v18; // rcx
  KeyboardHosting::MonitorInformation *v19; // rcx
  char v20; // si
  int v21; // eax
  unsigned int v22; // edi
  __int128 v24; // [rsp+20h] [rbp-50h] BYREF
  __int128 v25; // [rsp+30h] [rbp-40h]
  __int128 v26; // [rsp+50h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  int v28; // [rsp+B0h] [rbp+40h] BYREF
  int v29; // [rsp+B4h] [rbp+44h]
  unsigned int v30; // [rsp+B8h] [rbp+48h]
  RTL_SRWLOCK *v31; // [rsp+C8h] [rbp+58h]

  v30 = a2;
  *a4 = 0;
  v8 = (RTL_SRWLOCK *)(a1 + 440);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 440));
  v31 = v8;
  v9 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v9 = 0x100000001B3LL * (*((unsigned __int8 *)&v30 + i) ^ (unsigned __int64)v9);
  v11 = 2 * (v9 & *(_QWORD *)(a1 + 424));
  v12 = *(_QWORD *)(a1 + 400);
  v13 = *(_QWORD *)(v12 + 16 * (v9 & *(_QWORD *)(a1 + 424)));
  v14 = *(_QWORD *)(a1 + 384);
  while ( 1 )
  {
    v15 = *(_QWORD *)(v12 + 8 * v11) == v14 ? *(_QWORD *)(a1 + 384) : **(_QWORD **)(v12 + 8 * v11 + 8);
    if ( v13 == v15 )
      break;
    if ( *(_DWORD *)(v13 + 16) == a2 )
      goto LABEL_11;
    v13 = *(_QWORD *)v13;
  }
  v13 = *(_QWORD *)(a1 + 384);
LABEL_11:
  if ( v13 == v14 )
    goto LABEL_28;
  v25 = *(_OWORD *)(v13 + 20);
  v26 = *(_OWORD *)(v13 + 52);
  v24 = *(_OWORD *)a3;
  CurrentMonitor = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitor(v13, &v24);
  v17 = CurrentMonitor;
  v18 = (KeyboardHosting::MonitorInformation *)(a1 + 232);
  if ( *(HMONITOR *)(a1 + 232) != CurrentMonitor )
  {
    *(_QWORD *)v18 = CurrentMonitor;
    KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v18);
  }
  if ( *(_BYTE *)(a1 + 500) )
  {
    v19 = (KeyboardHosting::MonitorInformation *)(a1 + 280);
    if ( *(HMONITOR *)(a1 + 280) != v17 )
    {
      *(_QWORD *)v19 = v17;
      KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v19);
    }
  }
  *a4 = 3;
  v20 = BYTE8(v26);
  if ( DWORD1(v25) == 1 )
  {
    if ( !WORD4(v26) )
      goto LABEL_27;
    v28 = *a3;
    v29 = a3[1];
    v21 = KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
            (KeyboardHosting::TabTipAdapterPolicy *)a1,
            (const struct Windows::Foundation::Point *)&v28,
            a2);
    v22 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)v21);
      goto LABEL_29;
    }
    if ( !*(_BYTE *)(a1 + 500) )
      goto LABEL_27;
    KeyboardHosting::TabTipAdapterPolicy::SaveGlobalPosition(
      (KeyboardHosting::TabTipAdapterPolicy *)a1,
      (const struct Windows::Foundation::Point *)&v28);
  }
  if ( DWORD1(v25) == 2 && (v20 || BYTE9(v26)) )
  {
    *(_DWORD *)(a1 + 452) = *a3;
    *(_DWORD *)(a1 + 456) = a3[1];
    *(_BYTE *)(a1 + 460) = 1;
    *(_DWORD *)(a1 + 496) = a2;
  }
LABEL_27:
  *(_BYTE *)(a1 + 448) = 1;
LABEL_28:
  v22 = 0;
LABEL_29:
  if ( v8 )
    ReleaseSRWLockShared(v8);
  return v22;
}
