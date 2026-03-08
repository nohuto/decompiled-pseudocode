/*
 * XREFs of ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C02F53EC
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F5F2C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009534 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

char __fastcall DxgkIsPortraitFirstTarget(struct _LUID a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  DXGADAPTER *v7; // rsi
  char v8; // di
  __int64 v9; // rbx
  const wchar_t *v10; // r9
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h]
  char v21; // [rsp+68h] [rbp-98h]
  _BYTE v22[144]; // [rsp+70h] [rbp-90h] BYREF

  v19 = -1;
  v3 = a2;
  v20 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2180;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2180);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 2180);
  Global = DXGGLOBAL::GetGlobal();
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v18);
  v7 = v6;
  if ( v6 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, v6, 0LL);
    v9 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22, 0LL);
    DXGADAPTER::ReleaseReference(v7);
    if ( (int)v9 >= 0 )
    {
      v11 = *((_QWORD *)v7 + 365);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 104);
        if ( v12 )
        {
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v18, *(_QWORD *)(v11 + 104));
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v12 + 120) + 72LL));
          v13 = *(_QWORD *)(v12 + 120);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v13, v3);
          if ( TargetById )
          {
            v8 = *((_BYTE *)TargetById + 405);
          }
          else
          {
            WdLogSingleEntry2(2LL, v3, v7);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Fail to get VideoPresentTarget 0x%I64x from adapter 0x%I64x!",
              v3,
              (__int64)v7,
              0LL,
              0LL,
              0LL);
            v8 = 0;
          }
          if ( v13 )
            ReferenceCounted::Release((ReferenceCounted *)(v13 + 64));
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v18 + 40));
          goto LABEL_21;
        }
        WdLogSingleEntry1(2LL, v7);
        v10 = L"Fail to get VidPnMgr on adapter 0x%I64x!";
      }
      else
      {
        WdLogSingleEntry1(2LL, v7);
        v10 = L"Try to check portrait first target on a non-display adapter 0x%I64x!";
      }
      v9 = 0LL;
    }
    else
    {
      WdLogSingleEntry2(2LL, v7, v9);
      v10 = L"Failed to acquir the adapter core access lock on adapter 0x%I64x (Status = 0x%I64x)!";
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, (__int64)v7, v9, 0LL, 0LL, 0LL);
    v8 = 0;
LABEL_21:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22);
    goto LABEL_22;
  }
  WdLogSingleEntry1(2LL, 2751LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Cannot find the caller specified adapter in global adapter list!",
    2751LL,
    0LL,
    0LL,
    0LL,
    0LL);
  v8 = 0;
LABEL_22:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 )
  {
    LOBYTE(v15) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v19);
  }
  return v8;
}
