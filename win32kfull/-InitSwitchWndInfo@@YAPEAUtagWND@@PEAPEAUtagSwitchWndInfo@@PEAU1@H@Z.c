struct tagWND *__fastcall InitSwitchWndInfo(struct tagSwitchWndInfo **a1, struct tagWND *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  struct tagBWL *v10; // rax
  struct tagBWL *v11; // rbp
  int v12; // eax
  int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  __int64 v20; // rcx
  INT v21; // eax
  int v22; // r13d
  int v23; // edx
  int v24; // r12d
  __int64 PrevTaskIndex; // r8
  int v26; // r11d
  char *v27; // rdx
  int v28; // ebp
  int v29; // eax
  bool v30; // zf
  int v31; // edi
  __int64 v32; // rcx
  int v33; // r14d
  int v34; // eax
  int v35; // r15d
  int v36; // r9d
  int v37; // edx
  _DWORD *DPIServerInfo; // rbx
  __m128i *MonitorRect; // rax
  int v40; // edi
  __int64 v41; // r9
  unsigned __int64 v42; // xmm0_8
  int v43; // r10d
  int v44; // r8d
  int v45; // r11d
  HWND *v46; // [rsp+20h] [rbp-58h] BYREF
  __int64 v47[10]; // [rsp+28h] [rbp-50h] BYREF
  int v50; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v46 = 0LL;
  v50 = 0;
  v6 = 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 464LL);
  v8 = *(_QWORD *)(GetDispInfo(a1) + 96);
  *a1 = 0LL;
  v9 = *(_QWORD *)(v7 + 24);
  v47[0] = v8;
  v10 = BuildHwndList(*(ShellWindowManagement **)(v9 + 112), 2, 0LL, 1);
  v11 = v10;
  if ( !v10 )
  {
LABEL_26:
    LOBYTE(v3) = (_GetKeyState(16LL) & 0x8000u) != 0LL;
    return (struct tagWND *)GetNextQueueWindow(a2, v3, 0LL);
  }
  v12 = _RemoveNonTaskWindows(v10, a2, &v50, &v46);
  v13 = v12;
  if ( v12 < 2 )
  {
    if ( v12 == 1 )
      v6 = HMValidateHandleNoSecure(*((_QWORD *)v11 + 4), 1);
    else
      v6 = *(_QWORD *)(v7 + 168);
LABEL_7:
    FreeHwndList(v11);
    if ( v6 )
      return (struct tagWND *)v6;
    goto LABEL_26;
  }
  v14 = Win32AllocPoolWithQuotaZInit(120LL, 1818325845LL);
  v16 = v14;
  if ( !v14 )
    goto LABEL_7;
  *(_QWORD *)(v14 + 8) = gptiCurrent;
  *(_QWORD *)(v14 + 16) = v11;
  *(_QWORD *)(v14 + 24) = v46;
  *(_DWORD *)(v14 + 40) = v13;
  *(_DWORD *)(v14 + 44) = v13;
  DpiForSystem = GetDpiForSystem(v15);
  DpiDependentMetric = GetDpiDependentMetric(5, DpiForSystem);
  v20 = *(_QWORD *)(gptiCurrent + 424LL);
  LODWORD(v46) = DpiDependentMetric;
  v21 = EngMulDiv(11, *(unsigned __int16 *)(v20 + 284), 96);
  v22 = (int)v46;
  v23 = v50;
  *(_DWORD *)(v16 + 112) = (_DWORD)v46;
  v24 = v21 + v22;
  *(_DWORD *)(v16 + 116) = v21 + v22;
  PrevTaskIndex = (int)NextPrevTaskIndex((struct tagSwitchWndInfo *)v16, v23, 1, a3 == 0);
  v27 = (char *)v11 + 8 * PrevTaskIndex + 32;
  v28 = v13;
  *(_QWORD *)(v16 + 32) = v27;
  if ( gnFastAltTabColumns < v13 )
    v28 = gnFastAltTabColumns;
  v29 = v13 / v28;
  v30 = v13 == v28 * (v13 / v28);
  v31 = v13 % v28;
  v32 = !v30;
  v33 = v32 + v29;
  if ( (int)v32 + v29 <= gnFastAltTabRows )
  {
    v34 = 0;
  }
  else
  {
    v33 = gnFastAltTabRows;
    v31 = v28;
    *(_DWORD *)(v16 + 44) = v28 * gnFastAltTabRows;
    v34 = v26;
  }
  *(_DWORD *)(v16 + 48) = v34;
  v35 = v28;
  *(_DWORD *)(v16 + 56) = v28;
  if ( v31 )
    v35 = v31;
  *(_DWORD *)(v16 + 60) = v33;
  *(_DWORD *)(v16 + 64) = v35;
  if ( (int)PrevTaskIndex < v28 * v33 )
  {
    v36 = (int)PrevTaskIndex / v28;
    v32 = (unsigned int)(v28 * ((int)PrevTaskIndex / v28));
    v37 = (int)PrevTaskIndex % v28;
  }
  else
  {
    v36 = v26 + (v33 >> 2);
    v37 = v26 + (v28 >> 2);
    v3 = PrevTaskIndex - v28 * v36 - v37;
  }
  *(_DWORD *)(v16 + 52) = v3;
  *(_DWORD *)(v16 + 72) = v36;
  *(_DWORD *)(v16 + 68) = v37;
  DPIServerInfo = (_DWORD *)GetDPIServerInfo(v32);
  MonitorRect = (__m128i *)GetMonitorRect(v47, v47[0]);
  v40 = DPIServerInfo[1];
  v41 = MonitorRect->m128i_i64[0];
  v42 = _mm_srli_si128(*MonitorRect, 8).m128i_u64[0];
  v43 = v42 - *(_OWORD *)MonitorRect;
  v44 = DPIServerInfo[5];
  if ( v43 >= DPIServerInfo[4] + gnFastAltTabColumns * v24 + 6 * v40 + v22 / 2 )
    v43 = DPIServerInfo[4] + gnFastAltTabColumns * v24 + 6 * v40 + v22 / 2;
  *(_DWORD *)(v16 + 76) = v43;
  v45 = HIDWORD(v42) - HIDWORD(v41);
  if ( HIDWORD(v42) - HIDWORD(v41) >= v33 * v24 + v22 + v44 / 2 + 2 * v44 )
    v45 = v33 * v24 + v22 + v44 / 2 + 2 * v44;
  *(_DWORD *)(v16 + 80) = v45;
  if ( v33 == 1 )
    v28 = v35;
  *(_DWORD *)(v16 + 88) = v22 >> 1;
  *(_DWORD *)(v16 + 84) = (v43 + -4 * v40 - v28 * v24) >> 1;
  *(_QWORD *)v16 = gpswiFirst;
  gpswiFirst = (struct tagSwitchWndInfo *)v16;
  *a1 = (struct tagSwitchWndInfo *)v16;
  return (struct tagWND *)HMValidateHandleNoSecure(**(_QWORD **)(v16 + 32), 1);
}
