/*
 * XREFs of ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01ED4B8
 * Callers:
 *     xxxNextWindow @ 0x1C01EE910 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01EF0A8 (xxxOldNextWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     GetMonitorRect @ 0x1C007CB08 (GetMonitorRect.c)
 *     GetDPIServerInfo @ 0x1C00BA3D4 (GetDPIServerInfo.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01ED850 (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 *     ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C01ED94C (-_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01EE6BC (_GetNextQueueWindow.c)
 */

struct tagWND *__fastcall InitSwitchWndInfo(struct tagSwitchWndInfo **a1, struct tagWND *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  struct tagBWL *v11; // rax
  struct tagBWL *v12; // rbp
  int v13; // eax
  int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  __int64 v22; // rcx
  INT v23; // eax
  int v24; // r13d
  int v25; // edx
  int v26; // r12d
  __int64 PrevTaskIndex; // r8
  int v28; // r11d
  char *v29; // rdx
  int SystemArgument2_high; // ebp
  int v31; // eax
  bool v32; // zf
  int v33; // edi
  __int64 v34; // rcx
  int DpcData; // r14d
  int v36; // eax
  int v37; // r15d
  int v38; // r9d
  __int64 v39; // rdx
  _DWORD *DPIServerInfo; // rbx
  __m128i *MonitorRect; // rax
  int v42; // edi
  __int64 v43; // r9
  unsigned __int64 v44; // xmm0_8
  int v45; // r10d
  int v46; // r8d
  int v47; // r11d
  HWND *v48; // [rsp+20h] [rbp-58h] BYREF
  __int64 v49[10]; // [rsp+28h] [rbp-50h] BYREF
  int v51; // [rsp+90h] [rbp+18h]
  int v52; // [rsp+98h] [rbp+20h] BYREF

  v51 = a3;
  v4 = 0;
  v48 = 0LL;
  v52 = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)(gptiCurrent + 464LL);
  v9 = *(_QWORD *)(GetDispInfo(a1, a2, a3, a4) + 96);
  *a1 = 0LL;
  v10 = *(_QWORD *)(v8 + 24);
  v49[0] = v9;
  v11 = BuildHwndList(*(ShellWindowManagement **)(v10 + 112), (const struct tagWND *)2, 0LL, 1);
  v12 = v11;
  if ( !v11 )
  {
LABEL_26:
    LOBYTE(v4) = (_GetKeyState(16LL) & 0x8000u) != 0LL;
    return (struct tagWND *)GetNextQueueWindow(a2, v4, 0LL);
  }
  v13 = _RemoveNonTaskWindows(v11, a2, &v52, &v48);
  v14 = v13;
  if ( v13 < 2 )
  {
    if ( v13 == 1 )
      v7 = HMValidateHandleNoSecure(*((_QWORD *)v12 + 4), 1);
    else
      v7 = *(_QWORD *)(v8 + 168);
LABEL_7:
    FreeHwndList(v12);
    if ( v7 )
      return (struct tagWND *)v7;
    goto LABEL_26;
  }
  v15 = Win32AllocPoolWithQuotaZInit(120LL, 1818325845LL);
  v18 = v15;
  if ( !v15 )
    goto LABEL_7;
  *(_QWORD *)(v15 + 8) = gptiCurrent;
  *(_QWORD *)(v15 + 16) = v12;
  *(_QWORD *)(v15 + 24) = v48;
  *(_DWORD *)(v15 + 40) = v14;
  *(_DWORD *)(v15 + 44) = v14;
  DpiForSystem = GetDpiForSystem(v17, v16);
  DpiDependentMetric = GetDpiDependentMetric(5LL, DpiForSystem);
  v22 = *(_QWORD *)(gptiCurrent + 424LL);
  LODWORD(v48) = DpiDependentMetric;
  v23 = EngMulDiv(11, *(unsigned __int16 *)(v22 + 284), 96);
  v24 = (int)v48;
  v25 = v52;
  *(_DWORD *)(v18 + 112) = (_DWORD)v48;
  v26 = v23 + v24;
  *(_DWORD *)(v18 + 116) = v23 + v24;
  PrevTaskIndex = (int)NextPrevTaskIndex((struct tagSwitchWndInfo *)v18, v25, 1, v51 == 0);
  v29 = (char *)v12 + 8 * PrevTaskIndex + 32;
  SystemArgument2_high = v14;
  *(_QWORD *)(v18 + 32) = v29;
  if ( SHIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) < v14 )
    SystemArgument2_high = HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2);
  v31 = v14 / SystemArgument2_high;
  v32 = v14 == SystemArgument2_high * (v14 / SystemArgument2_high);
  v33 = v14 % SystemArgument2_high;
  v34 = !v32;
  DpcData = v34 + v31;
  if ( (int)v34 + v31 <= SLODWORD(WPP_MAIN_CB.Dpc.DpcData) )
  {
    v36 = 0;
  }
  else
  {
    DpcData = (int)WPP_MAIN_CB.Dpc.DpcData;
    v33 = SystemArgument2_high;
    *(_DWORD *)(v18 + 44) = SystemArgument2_high * LODWORD(WPP_MAIN_CB.Dpc.DpcData);
    v36 = v28;
  }
  *(_DWORD *)(v18 + 48) = v36;
  v37 = SystemArgument2_high;
  *(_DWORD *)(v18 + 56) = SystemArgument2_high;
  if ( v33 )
    v37 = v33;
  *(_DWORD *)(v18 + 60) = DpcData;
  *(_DWORD *)(v18 + 64) = v37;
  if ( (int)PrevTaskIndex < SystemArgument2_high * DpcData )
  {
    v38 = (int)PrevTaskIndex / SystemArgument2_high;
    v34 = (unsigned int)(SystemArgument2_high * ((int)PrevTaskIndex / SystemArgument2_high));
    v39 = (unsigned int)((int)PrevTaskIndex % SystemArgument2_high);
  }
  else
  {
    v38 = v28 + (DpcData >> 2);
    v39 = (unsigned int)(v28 + (SystemArgument2_high >> 2));
    v4 = PrevTaskIndex - SystemArgument2_high * v38 - v39;
  }
  *(_DWORD *)(v18 + 52) = v4;
  *(_DWORD *)(v18 + 72) = v38;
  *(_DWORD *)(v18 + 68) = v39;
  DPIServerInfo = (_DWORD *)GetDPIServerInfo(v34, v39);
  MonitorRect = (__m128i *)GetMonitorRect((__int64)v49, v49[0]);
  v42 = DPIServerInfo[1];
  v43 = MonitorRect->m128i_i64[0];
  v44 = _mm_srli_si128(*MonitorRect, 8).m128i_u64[0];
  v45 = v44 - *(_OWORD *)MonitorRect;
  if ( v45 >= v24 / 2 + DPIServerInfo[4] + v26 * HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) + 6 * v42 )
    v45 = v24 / 2 + DPIServerInfo[4] + v26 * HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) + 6 * v42;
  v46 = DPIServerInfo[5];
  *(_DWORD *)(v18 + 76) = v45;
  v47 = HIDWORD(v44) - HIDWORD(v43);
  if ( HIDWORD(v44) - HIDWORD(v43) >= DpcData * v26 + v24 + v46 / 2 + 2 * v46 )
    v47 = DpcData * v26 + v24 + v46 / 2 + 2 * v46;
  *(_DWORD *)(v18 + 80) = v47;
  if ( DpcData == 1 )
    SystemArgument2_high = v37;
  *(_DWORD *)(v18 + 88) = v24 >> 1;
  *(_DWORD *)(v18 + 84) = (v45 + -4 * v42 - SystemArgument2_high * v26) >> 1;
  *(_QWORD *)v18 = gpswiFirst;
  gpswiFirst = (struct tagSwitchWndInfo *)v18;
  *a1 = (struct tagSwitchWndInfo *)v18;
  return (struct tagWND *)HMValidateHandleNoSecure(**(_QWORD **)(v18 + 32), 1);
}
