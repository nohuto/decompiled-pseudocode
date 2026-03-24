/*
 * XREFs of ?DdiSubmitCommandVirtual@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z @ 0x1C0101FE0
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommandVirtual@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z @ 0x1C0004DA0 (-ADAPTER_RENDER_DdiSubmitCommandVirtual@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDVIRTUA.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0004BC8 (W32GetThreadWin32Thread.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0004C60 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0004D20 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004DC0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C015C100 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommandVirtual(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *ThreadProperty; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rbp
  int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 Value; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // rax
  void *v32; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v34; // rax
  unsigned __int8 v35; // cl
  _QWORD *v36; // rax
  __int64 v37; // rax
  int v38; // [rsp+20h] [rbp-88h] BYREF
  __int64 v39; // [rsp+28h] [rbp-80h]
  char v40; // [rsp+30h] [rbp-78h]
  _BYTE v41[8]; // [rsp+38h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v38 = -1;
  v39 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v40 = 1;
    v38 = 5063;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5063);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 5063LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  ThreadProperty = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_32;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v31 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v31 + 24) = 507LL;
    WdLogEvent5_WdAssertion(v31);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5);
  CurrentProcess = PsGetCurrentProcess(v12, v11, v13, v14);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && ProcessDxgProcess
    && (v32 = *(void **)(ProcessDxgProcess + 88)) != 0LL
    && v32 != &gDxgkWin32kEngInterface
    && (ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread)) != 0 )
  {
    ThreadProperty = *(struct DXGTHREAD **)(ThreadWin32Thread + 80);
  }
  else
  {
    ThreadProperty = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
    if ( !ThreadProperty )
    {
      ThreadProperty = DxgkThreadObjectCreateDxgThread();
      if ( !ThreadProperty )
        goto LABEL_32;
    }
    ObfDereferenceObject(ThreadProperty);
  }
  if ( ThreadProperty )
  {
    v17 = *((_DWORD *)ThreadProperty + 8);
    goto LABEL_11;
  }
LABEL_32:
  v17 = 0;
LABEL_11:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v41,
    *((struct DXGADAPTER **)this + 2));
  v19 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *))(*((_QWORD *)this + 2) + 840LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
          a2);
  if ( v41[0] )
    KeUnstackDetachProcess(&ApcState);
  v20 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v20 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v18);
    v34[3] = 275LL;
    v34[4] = 16LL;
    v34[5] = this;
    v34[6] = CurrentIrql;
    v35 = KeGetCurrentIrql();
    v34[7] = v35;
    WdLogEvent5_WdCriticalError(v34);
  }
  if ( ThreadProperty && *((_DWORD *)ThreadProperty + 8) != v17 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v18);
    v36[3] = 275LL;
    v36[4] = 38LL;
    v36[5] = *((int *)ThreadProperty + 8);
    v36[6] = v17;
    v36[7] = 0LL;
    WdLogEvent5_WdCriticalError(v36);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v18);
  v21[3] = v19;
  v21[4] = a2->hContext;
  v21[5] = a2->DmaBufferVirtualAddress;
  DmaBufferSize = a2->DmaBufferSize;
  v21[6] = DmaBufferSize;
  v24 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v23);
  v24[3] = a2->pDmaBufferPrivateData;
  v24[4] = a2->DmaBufferPrivateDataSize;
  v24[5] = a2->SubmissionFenceId;
  v24[6] = a2->NodeOrdinal;
  Value = a2->Flags.Value;
  v24[7] = Value;
  if ( (_DWORD)v19 != -1073741811 && (_DWORD)v19 )
  {
    v37 = WdLogNewEntry5_WdError(Value, v25);
    *(_QWORD *)(v37 + 24) = v19;
    WdLogEvent5_WdError(v37);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v27);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v38);
  return (unsigned int)v19;
}
