/*
 * XREFs of ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0015B48
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0015B30 (-ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0007690 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008740 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0008C68 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommand(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMAND *a2,
        __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // r15
  struct DXGTHREAD *v7; // rbx
  int v8; // esi
  __int64 v9; // r12
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGTHREAD *Current; // rax
  KIRQL v17; // al
  __int64 v18; // rcx
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // [rsp+60h] [rbp-29h] BYREF
  __int64 v23; // [rsp+68h] [rbp-21h]
  char v24; // [rsp+70h] [rbp-19h]
  _BYTE v25[8]; // [rsp+78h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-9h] BYREF

  LODWORD(v22) = -1;
  v23 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v24 = 1;
    LODWORD(v22) = 5013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5013LL);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 5013);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  CurrentIrql = KeGetCurrentIrql();
  v6 = CurrentIrql;
  v7 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v7 = Current) != 0LL) )
    v8 = *((_DWORD *)Current + 12);
  else
    v8 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v25,
    *((struct DXGADAPTER **)this + 2));
  v9 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMAND *))(*((_QWORD *)this + 2) + 520LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
         a2);
  if ( v25[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v17 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v17);
  }
  if ( v7 )
  {
    v18 = *((int *)v7 + 12);
    if ( (_DWORD)v18 != v8 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, v18, v8, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v10[3] = v9;
  v10[4] = a2->hDevice;
  v10[5] = a2->DmaBufferSegmentId;
  v10[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  v10[7] = a2->DmaBufferSize;
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v11[3] = a2->DmaBufferSubmissionStartOffset;
  v11[4] = a2->DmaBufferSubmissionEndOffset;
  v11[5] = a2->pDmaBufferPrivateData;
  v11[6] = a2->DmaBufferPrivateDataSize;
  v11[7] = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v12[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v12[4] = a2->SubmissionFenceId;
  v12[5] = a2->NodeOrdinal;
  v12[6] = a2->Flags.Value;
  if ( (_DWORD)v9 )
  {
    WdLogSingleEntry1(2LL, v9);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v20,
          v19,
          v21,
          0,
          0,
          -1,
          (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v9,
          0LL,
          0LL,
          0LL,
          0LL,
          v22,
          v23);
    }
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, (unsigned int)v22);
  return (unsigned int)v9;
}
