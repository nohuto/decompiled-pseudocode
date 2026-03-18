/*
 * XREFs of DxgkCheckMonitorPowerState @ 0x1C01F1940
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007998 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0008248 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C017687C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C01B25DC (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmGetTargetLinkTrainingStatusFromSource@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x1C01F1C44 (-DmmGetTargetLinkTrainingStatusFromSource@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z.c)
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C02332EC (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 */

__int64 __fastcall DxgkCheckMonitorPowerState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v6; // r15
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  __int64 v11; // rbx
  DXGADAPTER *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned int v20; // ebx
  DXGADAPTER *v21; // rsi
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  void *v27; // rcx
  void *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rcx
  bool v35; // sf
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  _QWORD *v39; // rax
  int IsWaitingForPowerOn; // eax
  char v41; // cl
  __int64 v42; // [rsp+20h] [rbp-88h]
  DXGADAPTER *v43; // [rsp+50h] [rbp-58h] BYREF
  int v44; // [rsp+60h] [rbp-48h] BYREF
  __int64 v45; // [rsp+68h] [rbp-40h]
  char v46; // [rsp+70h] [rbp-38h]
  _BYTE v47[8]; // [rsp+78h] [rbp-30h] BYREF
  DXGADAPTER *v48; // [rsp+80h] [rbp-28h]
  char v49; // [rsp+88h] [rbp-20h]
  DXGADAPTER *v50; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v51; // [rsp+C0h] [rbp+18h] BYREF

  v3 = (__int64 *)a1;
  v44 = -1;
  v45 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v46 = 1;
    v44 = 2046;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2046);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v44, 2046);
  Current = DXGPROCESS::GetCurrent(v4);
  v6 = Current;
  if ( !Current )
  {
    v20 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_27;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 400LL))() )
  {
    v20 = -1071775738;
    WdLogSingleEntry1(3LL, -1071775738LL);
LABEL_27:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( !v46 )
      return v20;
    v35 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_44:
    if ( v35 )
      McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v44);
    return v20;
  }
  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v8 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v33 = PsGetCurrentProcessSessionId(v7);
    v20 = -1073741811;
    WdLogSingleEntry2(2LL, v33, -1073741811LL);
    v42 = (unsigned int)PsGetCurrentProcessSessionId(v34);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkCheckMonitorPowerState is not called from a valid session (session ID = 0x%I64x), returning 0x%I64x",
      v42,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_27;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v11 = *v3;
  v51 = v11;
  v50 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v43, v11, (struct _KTHREAD **)v6, &v50, 1);
  v12 = v50;
  if ( !v50 )
  {
    v36 = (unsigned int)v11;
    v20 = -1073741811;
    WdLogSingleEntry2(3LL, v36, -1073741811LL);
LABEL_25:
    if ( v43 )
      DXGADAPTER::ReleaseReference(v43);
    goto LABEL_27;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v6 + 11) + 208LL))() )
  {
    v20 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = -1071775738LL;
    goto LABEL_40;
  }
  v48 = v12;
  v49 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
  if ( *((_DWORD *)v12 + 50) == 1 )
  {
    v19 = *((_QWORD *)v50 + 365);
    if ( v19 )
    {
      if ( HIDWORD(v51) < *(_DWORD *)(v19 + 96) )
      {
        v20 = 0;
        if ( *((int *)SessionDataForSpecifiedSession + 4630) <= 0 )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdTrace(HIDWORD(v51), v50, v17, v18);
          v20 = -1071775738;
          v32[3] = -1071775738LL;
          v32[4] = v50;
          v32[5] = HIDWORD(v51);
        }
        else
        {
          v21 = v50;
          v22 = HIDWORD(v51);
          if ( ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v50 + 365), HIDWORD(v51)) )
          {
            if ( !DXGADAPTER::IsVSyncAvailable(v21, v22) )
            {
              LODWORD(v51) = 0;
              LOBYTE(v50) = 0;
              if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(v21) )
                goto LABEL_21;
              IsWaitingForPowerOn = DmmIsWaitingForPowerOn(v27, v22, (unsigned __int8 *)&v50);
              v41 = (char)v50;
              if ( IsWaitingForPowerOn < 0 )
                v41 = 0;
              if ( !v41 )
              {
LABEL_21:
                if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(v21)
                  && DmmGetTargetLinkTrainingStatusFromSource(v28, v22, (enum _DXGK_CONNECTION_STATUS *)&v51) >= 0
                  && (_DWORD)v51 == 12 )
                {
                  v20 = -2145517568;
                }
                else
                {
                  v20 = -1071775738;
                }
              }
              else
              {
                v20 = 0;
              }
            }
          }
          else
          {
            v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
            v20 = -1071775739;
            v39[3] = -1071775739LL;
            v39[4] = v21;
            v39[5] = v22;
          }
        }
        if ( v49 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
        goto LABEL_25;
      }
      v20 = -1073741811;
      WdLogSingleEntry2(3LL, HIDWORD(v51), -1073741811LL);
    }
    else
    {
      v20 = -1073741637;
      WdLogSingleEntry2(3LL, v50, -1073741637LL);
    }
    if ( v49 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
LABEL_40:
    if ( v43 )
      DXGADAPTER::ReleaseReference(v43);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( !v46 )
      return v20;
    LOBYTE(v29) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v35 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_44;
  }
  if ( v49 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
  if ( v43 )
    DXGADAPTER::ReleaseReference(v43);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
  if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v44);
  return 3221226166LL;
}
