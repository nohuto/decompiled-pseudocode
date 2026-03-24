/*
 * XREFs of DxgkPollDisplayChildrenInternal @ 0x1C02257B0
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C0225790 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0222538 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026ABCC (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02960E8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 */

__int64 __fastcall DxgkPollDisplayChildrenInternal(_D3DKMT_POLLDISPLAYCHILDREN *a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r9
  _D3DKMT_POLLDISPLAYCHILDREN v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // ebx
  DXGGLOBAL *Global; // rax
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  _D3DKMT_POLLDISPLAYCHILDREN v21; // [rsp+30h] [rbp-108h] BYREF
  int v22; // [rsp+38h] [rbp-100h] BYREF
  __int64 v23; // [rsp+40h] [rbp-F8h]
  char v24; // [rsp+48h] [rbp-F0h]
  struct DXGPROCESS *Current; // [rsp+50h] [rbp-E8h]
  _QWORD v26[24]; // [rsp+60h] [rbp-D8h] BYREF

  memset(v26, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v26[1]);
  v26[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v26[3]) = 43;
  LOBYTE(v26[6]) = -1;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 2036);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2036LL);
  Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  if ( a2 == 1 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_D3DKMT_POLLDISPLAYCHILDREN *)MmUserProbeAddress;
    v11 = *a1;
    v21 = *a1;
  }
  else
  {
    v11 = *a1;
    v21 = *a1;
  }
  v12 = HIDWORD(*(unsigned __int64 *)&v11);
  if ( (unsigned int)v12 >= 0x20 )
    *((_DWORD *)&v21 + 1) = v12 & 1;
  v13 = *((unsigned int *)&v21 + 1);
  v14 = ((*((_BYTE *)&v21 + 4) & 1) != 0 ? 1 : 4) | 2;
  if ( (*((_BYTE *)&v21 + 4) & 0x10) == 0 )
    v14 = (*((_BYTE *)&v21 + 4) & 1) != 0 ? 1 : 4;
  if ( (*((_BYTE *)&v21 + 4) & 8) == 0 )
  {
    v16 = PollDisplayChildrenForAdapter(&v21, v14, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v26, v10);
    goto LABEL_19;
  }
  if ( !v21.hAdapter )
  {
    Global = DXGGLOBAL::GetGlobal((*((_BYTE *)&v21 + 4) & 1) != 0 ? 1 : 4, *((unsigned int *)&v21 + 1));
    v16 = DXGGLOBAL::PollDisplayChildrenAll(Global, &v21, v14, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v26);
LABEL_19:
    v17 = v16;
    goto LABEL_20;
  }
  v17 = -1073741811;
LABEL_20:
  if ( v17 >= 0 && (*((_BYTE *)&v21 + 4) & 4) != 0 )
  {
    v21 = (_D3DKMT_POLLDISPLAYCHILDREN)-1LL;
    memset(&v26[10], 0, 0x68uLL);
    v17 = DxgkHandleMonitorEvent(-1LL, 0xFFFFFFFFLL, 5LL);
    if ( v17 == -1071774941 )
      v17 = 0;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v13);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v22);
  return (unsigned int)v17;
}
