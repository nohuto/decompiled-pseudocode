/*
 * XREFs of ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C017EFB0
 * Callers:
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C017E6B0 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x1C02CE700 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C02CECB8 (-DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C00037DC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C017F1B0 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z @ 0x1C017F698 (-WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C018CFB8 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkEnumAdaptersInternal(struct ENUMADAPTERSINTERNAL *a1, char a2, __int64 a3, unsigned int a4)
{
  char v5; // bl
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v9; // rsi
  unsigned int ProcessSessionId; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // r8
  int v13; // eax
  struct DXGGLOBAL *v14; // rax
  int v15; // esi
  struct DXGGLOBAL *v16; // rax
  struct DXGGLOBAL *v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rbx
  struct DXGPROCESS *v23; // rbx
  unsigned int v24; // ecx
  int v25; // [rsp+50h] [rbp-30h] BYREF
  __int64 v26; // [rsp+58h] [rbp-28h]
  char v27; // [rsp+60h] [rbp-20h]
  char v28[8]; // [rsp+68h] [rbp-18h] BYREF
  struct DXGPROCESS *v29; // [rsp+70h] [rbp-10h]
  char v30; // [rsp+78h] [rbp-8h]

  v25 = -1;
  v5 = a3;
  v26 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2078;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2078);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 2078);
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 1573LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pEnumAdapters != NULL", 1573LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  v9 = Current;
  if ( Current )
  {
    if ( v5 )
    {
      ProcessSessionId = PsGetProcessSessionId(*((_QWORD *)Current + 7));
      Global = DXGGLOBAL::GetGlobal();
      LOBYTE(v12) = a2;
      v13 = DXGSESSIONMGR::WaitForPnPTransitionDone(*((_QWORD *)Global + 118), a4, v12, ProcessSessionId, 0);
      if ( v13 < 0 )
      {
        v22 = v13;
        WdLogSingleEntry1(2LL, v13);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to wait for PnP notification on current session (ntStatus = 0x%I64x).",
          v22,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    v29 = v9;
    v30 = 0;
    if ( a2 == 1 )
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v28, 0);
    *(_DWORD *)a1 = 0;
    *((_DWORD *)a1 + 2) = 0;
    v14 = DXGGLOBAL::GetGlobal();
    v15 = DXGGLOBAL::IterateAdaptersWithCallback(v14, EnumAdaptersCallback, a1, 4LL);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      WdLogSingleEntry1(1LL, 1631LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->AdaptersBufferCount",
        1631LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      WdLogSingleEntry1(1LL, 1632LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->RequiredAdaptersBufferCount",
        1632LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v15 < 0 )
      goto LABEL_33;
    v16 = DXGGLOBAL::GetGlobal();
    v15 = DXGGLOBAL::IterateAdaptersWithCallback(v16, EnumAdaptersCallback, a1, 3LL);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      WdLogSingleEntry1(1LL, 1644LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->AdaptersBufferCount",
        1644LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      WdLogSingleEntry1(1LL, 1645LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->RequiredAdaptersBufferCount",
        1645LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v15 < 0 )
      goto LABEL_33;
    v17 = DXGGLOBAL::GetGlobal();
    v15 = DXGGLOBAL::IterateAdaptersWithCallback(v17, EnumAdaptersCallback, a1, 5LL);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      WdLogSingleEntry1(1LL, 1658LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->AdaptersBufferCount",
        1658LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      WdLogSingleEntry1(1LL, 1659LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->RequiredAdaptersBufferCount",
        1659LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v15 < 0 )
    {
LABEL_33:
      WdLogSingleEntry1(2LL, v15);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to iterate all the adapters (ntStatus = 0x%I64x).",
        v15,
        0LL,
        0LL,
        0LL,
        0LL);
      v23 = DXGPROCESS::GetCurrent();
      while ( *(_DWORD *)a1 )
      {
        v24 = *(_DWORD *)a1 - 1;
        *(_DWORD *)a1 = v24;
        DXGADAPTER::DestroyHandle(v23, *(_DWORD *)(*((_QWORD *)a1 + 2) + 20LL * v24));
      }
    }
    v18 = v15;
    if ( v30 )
    {
      v30 = 0;
      (*(void (**)(void))(*((_QWORD *)v29 + 11) + 40LL))();
    }
  }
  else
  {
    v18 = -1073741811;
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 )
  {
    LOBYTE(v19) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v25);
  }
  return v18;
}
