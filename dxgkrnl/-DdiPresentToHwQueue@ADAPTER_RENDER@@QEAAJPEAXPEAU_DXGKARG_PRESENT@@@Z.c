/*
 * XREFs of ?DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C0220C58
 * Callers:
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0164230 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0007690 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008740 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0008C68 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00099DC (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPresentToHwQueue(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_PRESENT *a3)
{
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  KIRQL CurrentIrql; // al
  __int64 v9; // r12
  struct DXGTHREAD *v10; // rdi
  struct DXGTHREAD *v11; // rax
  int v12; // r14d
  __int64 (__fastcall *v13)(void *, struct _DXGKARG_PRESENT *); // rax
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  KIRQL v19; // al
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // [rsp+50h] [rbp-49h] BYREF
  __int64 v25; // [rsp+58h] [rbp-41h]
  char v26; // [rsp+60h] [rbp-39h]
  _BYTE v27[24]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v28[8]; // [rsp+80h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-11h] BYREF

  v24 = -1;
  v25 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v26 = 1;
    v24 = 5135;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 5135);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 5135);
  Current = DXGPROCESS::GetCurrent(v6);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v27, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  CurrentIrql = KeGetCurrentIrql();
  v9 = CurrentIrql;
  v10 = 0LL;
  if ( CurrentIrql < 2u && (v11 = DXGTHREAD::GetCurrent(), (v10 = v11) != 0LL) )
    v12 = *((_DWORD *)v11 + 12);
  else
    v12 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v28,
    *((struct DXGADAPTER **)this + 2));
  v13 = *(__int64 (__fastcall **)(void *, struct _DXGKARG_PRESENT *))(*((_QWORD *)this + 2) + 1344LL);
  if ( v13 )
    v14 = v13(a2, a3);
  else
    v14 = -1073741822;
  if ( v28[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v9 != KeGetCurrentIrql() )
  {
    v19 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v9, v19);
  }
  if ( v10 )
  {
    v16 = *((int *)v10 + 12);
    if ( (_DWORD)v16 != v12 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v10 + 12), v12, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
  v20[3] = v14;
  v20[4] = a2;
  v20[5] = a3->SubRectCnt;
  v20[6] = a3->pDmaBuffer;
  v20[7] = a3->DmaSize;
  if ( v14 <= -1073741670 )
  {
    if ( v14 == -1073741670
      || v14 == -1073741822
      || v14 == -1073741816
      || v14 == -1073741801
      || v14 == -1073741795
      || v14 == -1073741674 )
    {
      goto LABEL_32;
    }
LABEL_31:
    WdLogSingleEntry1(2LL, v14);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v14,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_32;
  }
  if ( v14 != -1071775743 && v14 != -1071775736 && v14 != -1071775232 && v14 )
    goto LABEL_31;
LABEL_32:
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v24);
  return (unsigned int)v14;
}
