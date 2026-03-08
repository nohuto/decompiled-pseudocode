/*
 * XREFs of ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C02C4348
 * Callers:
 *     ?ADAPTER_RENDER_DdiPatch@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PATCH@@@Z @ 0x1C0047C70 (-ADAPTER_RENDER_DdiPatch@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PATCH@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0007690 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008740 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0008C68 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPatch(ADAPTER_RENDER *this, const struct _DXGKARG_PATCH *a2, __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // r15
  struct DXGTHREAD *v7; // rbx
  struct DXGTHREAD *Current; // rax
  int v9; // esi
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  KIRQL v15; // al
  _QWORD *v16; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  __int64 DmaBufferPrivateDataSubmissionStartOffset; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 PatchLocationListSize; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  int v35; // [rsp+50h] [rbp-29h] BYREF
  __int64 v36; // [rsp+58h] [rbp-21h]
  char v37; // [rsp+60h] [rbp-19h]
  _BYTE v38[8]; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  v35 = -1;
  v36 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v37 = 1;
    v35 = 5008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5008);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 5008);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  CurrentIrql = KeGetCurrentIrql();
  v6 = CurrentIrql;
  v7 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v7 = Current) != 0LL) )
    v9 = *((_DWORD *)Current + 12);
  else
    v9 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v38,
    *((struct DXGADAPTER **)this + 2));
  v10 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_PATCH *))(*((_QWORD *)this + 2) + 512LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          a2);
  if ( v38[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v15 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v15);
  }
  if ( v7 )
  {
    v12 = *((int *)v7 + 12);
    if ( (_DWORD)v12 != v9 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, v12, v9, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
  v16[3] = v10;
  v16[4] = a2->hDevice;
  v16[5] = a2->DmaBufferSegmentId;
  v16[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  DmaBufferSize = a2->DmaBufferSize;
  v16[7] = DmaBufferSize;
  v21 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v18, v19, v20);
  v21[3] = a2->DmaBufferSubmissionStartOffset;
  v21[4] = a2->DmaBufferSubmissionEndOffset;
  v21[5] = a2->pDmaBufferPrivateData;
  v21[6] = a2->DmaBufferPrivateDataSize;
  DmaBufferPrivateDataSubmissionStartOffset = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v21[7] = DmaBufferPrivateDataSubmissionStartOffset;
  v26 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferPrivateDataSubmissionStartOffset, v23, v24, v25);
  v26[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v26[4] = a2->pAllocationList;
  v26[5] = a2->AllocationListSize;
  v26[6] = a2->pPatchLocationList;
  PatchLocationListSize = a2->PatchLocationListSize;
  v26[7] = PatchLocationListSize;
  v31 = (_QWORD *)WdLogNewEntry5_WdTrace(PatchLocationListSize, v28, v29, v30);
  v31[3] = a2->PatchLocationListSubmissionStart;
  v31[4] = a2->PatchLocationListSubmissionLength;
  v31[5] = a2->SubmissionFenceId;
  v31[6] = a2->Flags.Value;
  if ( (_DWORD)v10 )
  {
    WdLogSingleEntry1(2LL, v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v35);
  return (unsigned int)v10;
}
