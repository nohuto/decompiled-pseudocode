/*
 * XREFs of ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C0296398
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02967CC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000951C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0121C38 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

unsigned __int8 __fastcall DxgkIsPortraitFirstTarget(struct _LUID a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGADAPTER *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v29; // [rsp+28h] [rbp-79h] BYREF
  __int64 v30; // [rsp+30h] [rbp-71h]
  char v31; // [rsp+38h] [rbp-69h]
  __int64 v32; // [rsp+40h] [rbp-61h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v34[144]; // [rsp+58h] [rbp-49h] BYREF

  v29 = -1;
  v30 = 0LL;
  v4 = a2;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 2180;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2180);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 2180LL);
  Global = DXGGLOBAL::GetGlobal(v6, v5);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v33);
  v11 = v8;
  if ( v8 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v8, 0LL);
    v14 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34, 0LL);
    DXGADAPTER::ReleaseReference(v11);
    if ( (int)v14 >= 0 )
    {
      v18 = *((_QWORD *)v11 + 337);
      if ( v18 )
      {
        v19 = *(_QWORD *)(v18 + 88);
        if ( v19 )
        {
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v32, *(_QWORD *)(v18 + 88));
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v19 + 80) + 72LL));
          v21 = *(_QWORD *)(v19 + 80);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v21, (unsigned int)v4);
          if ( TargetById )
          {
            LOBYTE(v11) = *((_BYTE *)TargetById + 405);
          }
          else
          {
            v25 = WdLogNewEntry5_WdError(v24, v23);
            *(_QWORD *)(v25 + 24) = v4;
            *(_QWORD *)(v25 + 32) = v11;
            WdLogEvent5_WdError(v25);
            LOBYTE(v11) = 0;
          }
          if ( v21 )
            ReferenceCounted::Release((ReferenceCounted *)(v21 + 64), v23);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32 + 40), v23);
          goto LABEL_19;
        }
      }
      v17 = WdLogNewEntry5_WdError(v16, v15);
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v17 + 32) = v14;
    }
    *(_QWORD *)(v17 + 24) = v11;
    WdLogEvent5_WdError(v17);
    LOBYTE(v11) = 0;
LABEL_19:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34, v20);
    goto LABEL_20;
  }
  v12 = WdLogNewEntry5_WdError(v10, v9);
  *(_QWORD *)(v12 + 24) = 2746LL;
  WdLogEvent5_WdError(v12);
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v13);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v29);
  return (unsigned __int8)v11;
}
