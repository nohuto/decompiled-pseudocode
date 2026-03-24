/*
 * XREFs of ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C013C0D4
 * Callers:
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C013B380 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x1C0173BF0 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C0221CF8 (-DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000A41C (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00EDC54 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C013C28C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkWaitForPnPTransitionDone @ 0x1C013C5FC (DxgkWaitForPnPTransitionDone.c)
 */

__int64 __fastcall DxgkEnumAdaptersInternal(struct ENUMADAPTERSINTERNAL *a1, char a2, __int64 a3, unsigned int a4)
{
  char v5; // si
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGPROCESS *v15; // rdi
  unsigned int ProcessSessionId; // eax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // edi
  unsigned int v28; // eax
  struct DXGGLOBAL *v29; // rax
  unsigned int v30; // eax
  struct DXGGLOBAL *v31; // rax
  unsigned int v32; // eax
  unsigned int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  struct _KTHREAD **v51; // rsi
  int v52; // [rsp+20h] [rbp-30h] BYREF
  __int64 v53; // [rsp+28h] [rbp-28h]
  char v54; // [rsp+30h] [rbp-20h]
  char v55[8]; // [rsp+38h] [rbp-18h] BYREF
  struct DXGPROCESS *v56; // [rsp+40h] [rbp-10h]
  char v57; // [rsp+48h] [rbp-8h]

  v52 = -1;
  v53 = 0LL;
  v5 = a3;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v54 = 1;
    v52 = 2078;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2078);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v52, 2078LL);
  if ( !a1 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v37 + 24) = 1524LL;
    WdLogEvent5_WdAssertion(v37);
  }
  Current = DXGPROCESS::GetCurrent(v9, v8, v10, v11);
  v15 = Current;
  if ( Current )
  {
    if ( v5 )
    {
      ProcessSessionId = PsGetProcessSessionId(*((_QWORD *)Current + 7));
      LOBYTE(v17) = a2;
      v18 = DxgkWaitForPnPTransitionDone(a4, v17, ProcessSessionId, 0LL, v52, v53);
      v21 = v18;
      if ( v18 < 0 )
      {
        v39 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v39 + 24) = v21;
        WdLogEvent5_WdError(v39);
      }
    }
    v56 = v15;
    v57 = 0;
    DXGUSERCRIT::Acquire((DXGUSERCRIT *)v55, 0LL);
    *(_DWORD *)a1 = 0;
    *((_DWORD *)a1 + 2) = 0;
    Global = DXGGLOBAL::GetGlobal(v23, v22);
    v27 = DXGGLOBAL::IterateAdaptersWithCallback(Global, EnumAdaptersCallback, a1, 4LL);
    v28 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v26, v25);
      *(_QWORD *)(v40 + 24) = 1579LL;
      WdLogEvent5_WdAssertion(v40);
      v28 = *(_DWORD *)a1;
    }
    if ( v28 > *((_DWORD *)a1 + 2) )
    {
      v41 = WdLogNewEntry5_WdAssertion(v26, v25);
      *(_QWORD *)(v41 + 24) = 1580LL;
      WdLogEvent5_WdAssertion(v41);
    }
    if ( v27 < 0 )
      goto LABEL_31;
    v29 = DXGGLOBAL::GetGlobal(v26, v25);
    v27 = DXGGLOBAL::IterateAdaptersWithCallback(v29, EnumAdaptersCallback, a1, 3LL);
    v30 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      v42 = WdLogNewEntry5_WdAssertion(v26, v25);
      *(_QWORD *)(v42 + 24) = 1592LL;
      WdLogEvent5_WdAssertion(v42);
      v30 = *(_DWORD *)a1;
    }
    if ( v30 > *((_DWORD *)a1 + 2) )
    {
      v43 = WdLogNewEntry5_WdAssertion(v26, v25);
      *(_QWORD *)(v43 + 24) = 1593LL;
      WdLogEvent5_WdAssertion(v43);
    }
    if ( v27 < 0 )
      goto LABEL_31;
    v31 = DXGGLOBAL::GetGlobal(v26, v25);
    v27 = DXGGLOBAL::IterateAdaptersWithCallback(v31, EnumAdaptersCallback, a1, 5LL);
    v32 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      v44 = WdLogNewEntry5_WdAssertion(v26, v25);
      *(_QWORD *)(v44 + 24) = 1606LL;
      WdLogEvent5_WdAssertion(v44);
      v32 = *(_DWORD *)a1;
    }
    if ( v32 > *((_DWORD *)a1 + 2) )
    {
      v45 = WdLogNewEntry5_WdAssertion(v26, v25);
      *(_QWORD *)(v45 + 24) = 1607LL;
      WdLogEvent5_WdAssertion(v45);
    }
    if ( v27 < 0 )
    {
LABEL_31:
      v46 = WdLogNewEntry5_WdError(v26, v25);
      *(_QWORD *)(v46 + 24) = v27;
      WdLogEvent5_WdError(v46);
      v51 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v48, v47, v49, v50);
      while ( *(_DWORD *)a1 )
        DXGADAPTER::DestroyHandle(v51, *(unsigned int *)(*((_QWORD *)a1 + 2) + 20LL * (unsigned int)--*(_DWORD *)a1));
    }
    v33 = v27;
    if ( v57 )
    {
      v57 = 0;
      (*(void (**)(void))(*((_QWORD *)v56 + 11) + 40LL))();
    }
  }
  else
  {
    v38 = WdLogNewEntry5_WdError(v14, v13);
    v33 = -1073741811;
    *(_QWORD *)(v38 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v38);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52, v25);
  if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v52);
  return v33;
}
