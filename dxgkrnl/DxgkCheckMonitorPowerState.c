/*
 * XREFs of DxgkCheckMonitorPowerState @ 0x1C01E3020
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006DA4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0009274 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C017779C (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C017E65C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DmmGetTargetLinkTrainingStatusFromSource@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x1C01E3328 (-DmmGetTargetLinkTrainingStatusFromSource@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z.c)
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C0224D4C (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 */

__int64 __fastcall DxgkCheckMonitorPowerState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  __int64 v14; // rbx
  DXGADAPTER *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned int v23; // ebx
  DXGADAPTER *v24; // rsi
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v33; // rax
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  bool v39; // sf
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  _QWORD *v43; // rax
  int IsWaitingForPowerOn; // eax
  char v45; // cl
  __int64 v46; // [rsp+20h] [rbp-88h]
  DXGADAPTER *v47; // [rsp+50h] [rbp-58h] BYREF
  int v48; // [rsp+60h] [rbp-48h] BYREF
  __int64 v49; // [rsp+68h] [rbp-40h]
  char v50; // [rsp+70h] [rbp-38h]
  _BYTE v51[8]; // [rsp+78h] [rbp-30h] BYREF
  DXGADAPTER *v52; // [rsp+80h] [rbp-28h]
  char v53; // [rsp+88h] [rbp-20h]
  DXGADAPTER *v54; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v55; // [rsp+C0h] [rbp+18h] BYREF

  v3 = (__int64 *)a1;
  v48 = -1;
  v49 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v50 = 1;
    v48 = 2046;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2046);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v48, 2046);
  Current = DXGPROCESS::GetCurrent(v4);
  v6 = Current;
  if ( !Current )
  {
    v23 = -1073741811;
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
    v23 = -1071775738;
    WdLogSingleEntry1(3LL, -1071775738LL);
LABEL_27:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    if ( !v50 )
      return v23;
    v39 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_44:
    if ( v39 )
      McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v48);
    return v23;
  }
  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v9 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7, v10, v11);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v34 = PsGetCurrentProcessSessionId(v8, v7, v10, v11);
    v23 = -1073741811;
    WdLogSingleEntry2(2LL, v34, -1073741811LL);
    v46 = (unsigned int)PsGetCurrentProcessSessionId(v36, v35, v37, v38);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkCheckMonitorPowerState is not called from a valid session (session ID = 0x%I64x), returning 0x%I64x",
      v46,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_27;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v14 = *v3;
  v55 = v14;
  v54 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v47, v14, (struct _KTHREAD **)v6, &v54, 1);
  v15 = v54;
  if ( !v54 )
  {
    v40 = (unsigned int)v14;
    v23 = -1073741811;
    WdLogSingleEntry2(3LL, v40, -1073741811LL);
LABEL_25:
    if ( v47 )
      DXGADAPTER::ReleaseReference(v47);
    goto LABEL_27;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v6 + 11) + 208LL))() )
  {
    v23 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = -1071775738LL;
    goto LABEL_40;
  }
  v52 = v15;
  v53 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
  if ( *((_DWORD *)v15 + 50) == 1 )
  {
    v22 = *((_QWORD *)v54 + 365);
    if ( v22 )
    {
      if ( HIDWORD(v55) < *(_DWORD *)(v22 + 96) )
      {
        v23 = 0;
        if ( *((int *)SessionDataForSpecifiedSession + 4630) <= 0 )
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdTrace(HIDWORD(v55), v54, v20, v21);
          v23 = -1071775738;
          v33[3] = -1071775738LL;
          v33[4] = v54;
          v33[5] = HIDWORD(v55);
        }
        else
        {
          v24 = v54;
          v25 = HIDWORD(v55);
          if ( ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v54 + 365), HIDWORD(v55)) )
          {
            if ( !DXGADAPTER::IsVSyncAvailable(v24, v25) )
            {
              LODWORD(v55) = 0;
              LOBYTE(v54) = 0;
              if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(v24) )
                goto LABEL_21;
              IsWaitingForPowerOn = DmmIsWaitingForPowerOn(v24, v25, (unsigned __int8 *)&v54);
              v45 = (char)v54;
              if ( IsWaitingForPowerOn < 0 )
                v45 = 0;
              if ( !v45 )
              {
LABEL_21:
                if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(v24)
                  && DmmGetTargetLinkTrainingStatusFromSource(v24, v25, (enum _DXGK_CONNECTION_STATUS *)&v55) >= 0
                  && (_DWORD)v55 == 12 )
                {
                  v23 = -2145517568;
                }
                else
                {
                  v23 = -1071775738;
                }
              }
              else
              {
                v23 = 0;
              }
            }
          }
          else
          {
            v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
            v23 = -1071775739;
            v43[3] = -1071775739LL;
            v43[4] = v24;
            v43[5] = v25;
          }
        }
        if ( v53 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
        goto LABEL_25;
      }
      v23 = -1073741811;
      WdLogSingleEntry2(3LL, HIDWORD(v55), -1073741811LL);
    }
    else
    {
      v23 = -1073741637;
      WdLogSingleEntry2(3LL, v54, -1073741637LL);
    }
    if ( v53 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
LABEL_40:
    if ( v47 )
      DXGADAPTER::ReleaseReference(v47);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    if ( !v50 )
      return v23;
    LOBYTE(v30) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v39 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_44;
  }
  if ( v53 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
  if ( v47 )
    DXGADAPTER::ReleaseReference(v47);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
  if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v48);
  return 3221226166LL;
}
