/*
 * XREFs of ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C01BC960
 * Callers:
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C01BC060 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x1C02C9980 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C02C9F38 (-DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000AB38 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C01B7C70 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z @ 0x1C01BD048 (-WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z.c)
 */

__int64 __fastcall DxgkEnumAdaptersInternal(struct ENUMADAPTERSINTERNAL *a1, char a2, __int64 a3, unsigned int a4)
{
  char v5; // bl
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v10; // rsi
  unsigned int ProcessSessionId; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // r8
  int v14; // eax
  struct DXGGLOBAL *v15; // rax
  int v16; // esi
  struct DXGGLOBAL *v17; // rax
  struct DXGGLOBAL *v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rbx
  __int64 v24; // rcx
  struct DXGPROCESS *v25; // rbx
  unsigned int v26; // ecx
  int v27; // [rsp+50h] [rbp-30h] BYREF
  __int64 v28; // [rsp+58h] [rbp-28h]
  char v29; // [rsp+60h] [rbp-20h]
  char v30[8]; // [rsp+68h] [rbp-18h] BYREF
  struct DXGPROCESS *v31; // [rsp+70h] [rbp-10h]
  char v32; // [rsp+78h] [rbp-8h]

  v27 = -1;
  v5 = a3;
  v28 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2078;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2078);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 2078);
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 1577LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pEnumAdapters != NULL", 1577LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent(v8);
  v10 = Current;
  if ( Current )
  {
    if ( v5 )
    {
      ProcessSessionId = PsGetProcessSessionId(*((_QWORD *)Current + 7));
      Global = DXGGLOBAL::GetGlobal();
      LOBYTE(v13) = a2;
      v14 = DXGSESSIONMGR::WaitForPnPTransitionDone(*((_QWORD *)Global + 118), a4, v13, ProcessSessionId, 0);
      if ( v14 < 0 )
      {
        v23 = v14;
        WdLogSingleEntry1(2LL, v14);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to wait for PnP notification on current session (ntStatus = 0x%I64x).",
          v23,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    v31 = v10;
    v32 = 0;
    if ( a2 == 1 )
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v30, 0);
    *(_DWORD *)a1 = 0;
    *((_DWORD *)a1 + 2) = 0;
    v15 = DXGGLOBAL::GetGlobal();
    v16 = DXGGLOBAL::IterateAdaptersWithCallback(v15, EnumAdaptersCallback, a1, 4LL);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      WdLogSingleEntry1(1LL, 1635LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->AdaptersBufferCount",
        1635LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      WdLogSingleEntry1(1LL, 1636LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->RequiredAdaptersBufferCount",
        1636LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v16 < 0 )
      goto LABEL_33;
    v17 = DXGGLOBAL::GetGlobal();
    v16 = DXGGLOBAL::IterateAdaptersWithCallback(v17, EnumAdaptersCallback, a1, 3LL);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      WdLogSingleEntry1(1LL, 1648LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->AdaptersBufferCount",
        1648LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      WdLogSingleEntry1(1LL, 1649LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->RequiredAdaptersBufferCount",
        1649LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v16 < 0 )
      goto LABEL_33;
    v18 = DXGGLOBAL::GetGlobal();
    v16 = DXGGLOBAL::IterateAdaptersWithCallback(v18, EnumAdaptersCallback, a1, 5LL);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      WdLogSingleEntry1(1LL, 1662LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->AdaptersBufferCount",
        1662LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      WdLogSingleEntry1(1LL, 1663LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->RequiredAdaptersBufferCount",
        1663LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v16 < 0 )
    {
LABEL_33:
      WdLogSingleEntry1(2LL, v16);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to iterate all the adapters (ntStatus = 0x%I64x).",
        v16,
        0LL,
        0LL,
        0LL,
        0LL);
      v25 = DXGPROCESS::GetCurrent(v24);
      while ( *(_DWORD *)a1 )
      {
        v26 = *(_DWORD *)a1 - 1;
        *(_DWORD *)a1 = v26;
        DXGADAPTER::DestroyHandle(v25, *(_DWORD *)(*((_QWORD *)a1 + 2) + 20LL * v26));
      }
    }
    v19 = v16;
    if ( v32 )
    {
      v32 = 0;
      (*(void (**)(void))(*((_QWORD *)v31 + 11) + 40LL))();
    }
  }
  else
  {
    v19 = -1073741811;
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 )
  {
    LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v27);
  }
  return v19;
}
