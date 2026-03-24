/*
 * XREFs of ?ADAPTER_RENDER_DdiPreemptCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1C0007070
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0004C60 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0004D20 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004DC0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiPreemptCommand(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_PREEMPTCOMMAND *a2)
{
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v5; // rbx
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 PreemptionFenceId; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGTHREAD *Current; // rax
  _QWORD *v17; // rax
  unsigned __int8 v18; // cl
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // [rsp+20h] [rbp-60h] BYREF
  __int64 v23; // [rsp+28h] [rbp-58h]
  char v24; // [rsp+30h] [rbp-50h]
  _BYTE v25[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 5014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry(&v22, 5014LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)a1 + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  v5 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v5 = Current) != 0LL) )
    v6 = *((_DWORD *)Current + 8);
  else
    v6 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v25,
    *((struct DXGADAPTER **)a1 + 2));
  v8 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_PREEMPTCOMMAND *))(*((_QWORD *)a1 + 2) + 440LL))(
         *(_QWORD *)(*((_QWORD *)a1 + 2) + 272LL),
         a2);
  if ( v25[0] )
    KeUnstackDetachProcess(&ApcState);
  v9 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v9 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v7);
    v17[3] = 275LL;
    v17[4] = 16LL;
    v17[5] = a1;
    v17[6] = CurrentIrql;
    v18 = KeGetCurrentIrql();
    v17[7] = v18;
    WdLogEvent5_WdCriticalError(v17);
  }
  if ( v5 && *((_DWORD *)v5 + 8) != v6 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v7);
    v19[3] = 275LL;
    v19[4] = 38LL;
    v20 = *((int *)v5 + 8);
    v19[7] = 0LL;
    v19[5] = v20;
    v19[6] = v6;
    WdLogEvent5_WdCriticalError(v19);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)a1 + 2) + 4364LL));
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v7);
  v10[3] = v8;
  v10[4] = a2->Flags.Value;
  PreemptionFenceId = a2->PreemptionFenceId;
  v10[5] = PreemptionFenceId;
  if ( (_DWORD)v8 )
  {
    v21 = WdLogNewEntry5_WdError(PreemptionFenceId, v11);
    *(_QWORD *)(v21 + 24) = v8;
    WdLogEvent5_WdError(v21);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)a1 + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v13);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit);
  return (unsigned int)v8;
}
