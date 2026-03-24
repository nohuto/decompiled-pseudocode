/*
 * XREFs of ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F2C38
 * Callers:
 *     xxxNextWindow @ 0x1C01F412C (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F4970 (xxxOldNextWindow.c)
 * Callees:
 *     GetMonitorRect @ 0x1C0041DF8 (GetMonitorRect.c)
 *     GetDpiDependentMetric @ 0x1C00614D0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0063CBC (GetDpiForSystem.c)
 *     BuildHwndList @ 0x1C006CB60 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DAC0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     GetDPIServerInfo @ 0x1C00E0E18 (GetDPIServerInfo.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01F2FEC (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 *     ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C01F30E8 (-_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01F3ED8 (_GetNextQueueWindow.c)
 */

struct tagWND *__fastcall InitSwitchWndInfo(struct tagSwitchWndInfo **a1, struct tagWND *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  struct tagBWL *v10; // rax
  struct tagBWL *v11; // rbp
  int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned int DpiForSystem; // eax
  INT v19; // eax
  int v20; // edx
  __int64 PrevTaskIndex; // r8
  char *v22; // rdx
  int v23; // ebp
  int v24; // eax
  bool v25; // zf
  int v26; // r14d
  __int64 v27; // rcx
  int v28; // r12d
  int v29; // eax
  int v30; // r13d
  int v31; // r9d
  int v32; // edx
  _DWORD *DPIServerInfo; // rbx
  __m128i *MonitorRect; // rax
  int v35; // edi
  int v36; // r14d
  __int64 v37; // r9
  unsigned __int64 v38; // xmm0_8
  int v39; // r10d
  int v40; // ecx
  int v41; // r8d
  int v42; // eax
  int v43; // r11d
  int DpiDependentMetric; // [rsp+20h] [rbp-58h]
  HWND *v45; // [rsp+28h] [rbp-50h] BYREF
  __int128 v46[4]; // [rsp+30h] [rbp-48h] BYREF
  int v48; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v45 = 0LL;
  v48 = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)(gptiCurrent + 464LL);
  v9 = *(_QWORD *)(GetDispInfo(a1, a2) + 96);
  *a1 = 0LL;
  *(_QWORD *)&v46[0] = v9;
  v10 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(v8 + 24) + 112LL), 2, 0LL);
  v11 = v10;
  if ( !v10 )
  {
LABEL_28:
    LOBYTE(v3) = (_GetKeyState(16LL) & 0x8000u) != 0LL;
    return (struct tagWND *)GetNextQueueWindow(a2, v3, 0LL);
  }
  v12 = _RemoveNonTaskWindows(v10, a2, &v48, &v45);
  if ( v12 < 2 )
  {
    if ( v12 != 1
      || (v13 = HMValidateHandleNoSecure(*((_QWORD *)v11 + 4), 1), (v7 = v13) != 0)
      && (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 23LL) & 7) == 1
      && a2 == (struct tagWND *)v13 )
    {
      v7 = *(_QWORD *)(v8 + 168);
    }
LABEL_9:
    FreeHwndList(v11);
    if ( v7 )
      return (struct tagWND *)v7;
    goto LABEL_28;
  }
  v14 = Win32AllocPoolWithQuota(120LL, 1818325845LL);
  v16 = v14;
  if ( !v14 )
    goto LABEL_9;
  *(_QWORD *)(v14 + 8) = gptiCurrent;
  *(_QWORD *)(v14 + 16) = v11;
  *(_QWORD *)(v14 + 24) = v45;
  *(_DWORD *)(v14 + 40) = v12;
  *(_DWORD *)(v14 + 44) = v12;
  DpiForSystem = GetDpiForSystem(v15);
  DpiDependentMetric = GetDpiDependentMetric(5LL, DpiForSystem);
  v19 = EngMulDiv(11, *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 424LL) + 284LL), 96);
  v20 = v48;
  *(_DWORD *)(v16 + 112) = DpiDependentMetric;
  LODWORD(v45) = DpiDependentMetric + v19;
  *(_DWORD *)(v16 + 116) = DpiDependentMetric + v19;
  PrevTaskIndex = (int)NextPrevTaskIndex((struct tagSwitchWndInfo *)v16, v20, 1, a3 == 0);
  v22 = (char *)v11 + 8 * PrevTaskIndex + 32;
  v23 = v12;
  *(_QWORD *)(v16 + 32) = v22;
  if ( gnFastAltTabColumns < v12 )
    v23 = gnFastAltTabColumns;
  v24 = v12 / v23;
  v25 = v12 == v23 * (v12 / v23);
  v26 = v12 % v23;
  v27 = !v25;
  v28 = v27 + v24;
  if ( (int)v27 + v24 <= gnFastAltTabRows )
  {
    v29 = 0;
  }
  else
  {
    v28 = gnFastAltTabRows;
    v26 = v23;
    *(_DWORD *)(v16 + 44) = v23 * gnFastAltTabRows;
    v29 = 1;
  }
  *(_DWORD *)(v16 + 48) = v29;
  v30 = v23;
  *(_DWORD *)(v16 + 56) = v23;
  if ( v26 )
    v30 = v26;
  *(_DWORD *)(v16 + 60) = v28;
  *(_DWORD *)(v16 + 64) = v30;
  if ( (int)PrevTaskIndex < v23 * v28 )
  {
    v31 = (int)PrevTaskIndex / v23;
    v27 = (unsigned int)(v23 * ((int)PrevTaskIndex / v23));
    v32 = (int)PrevTaskIndex % v23;
  }
  else
  {
    v31 = (v28 >> 2) + 1;
    v32 = (v23 >> 2) + 1;
    v3 = PrevTaskIndex - v23 * v31 - v32;
  }
  *(_DWORD *)(v16 + 52) = v3;
  *(_DWORD *)(v16 + 72) = v31;
  *(_DWORD *)(v16 + 68) = v32;
  DPIServerInfo = (_DWORD *)GetDPIServerInfo(v27);
  MonitorRect = (__m128i *)GetMonitorRect(v46, *(__int64 *)&v46[0]);
  v35 = DPIServerInfo[1];
  v36 = (int)v45;
  v37 = MonitorRect->m128i_i64[0];
  v38 = _mm_srli_si128(*MonitorRect, 8).m128i_u64[0];
  v39 = v38 - *(_OWORD *)MonitorRect;
  v40 = (int)v45;
  if ( v39 >= DpiDependentMetric / 2 + DPIServerInfo[4] + (int)v45 * gnFastAltTabColumns + 6 * v35 )
    v39 = DpiDependentMetric / 2 + DPIServerInfo[4] + (_DWORD)v45 * gnFastAltTabColumns + 6 * v35;
  v41 = DPIServerInfo[5];
  *(_DWORD *)(v16 + 76) = v39;
  v42 = v28 * v40 + DpiDependentMetric + v41 / 2;
  v43 = HIDWORD(v38) - HIDWORD(v37);
  if ( v28 != 1 )
    v30 = v23;
  *(_DWORD *)(v16 + 88) = DpiDependentMetric >> 1;
  *(_DWORD *)(v16 + 84) = (v39 + -4 * v35 - v36 * v30) >> 1;
  if ( v43 >= v42 + 2 * v41 )
    v43 = v42 + 2 * v41;
  *(_DWORD *)(v16 + 80) = v43;
  *(_QWORD *)v16 = gpswiFirst;
  gpswiFirst = (struct tagSwitchWndInfo *)v16;
  *a1 = (struct tagSwitchWndInfo *)v16;
  return (struct tagWND *)HMValidateHandleNoSecure(**(_QWORD **)(v16 + 32), 1);
}
