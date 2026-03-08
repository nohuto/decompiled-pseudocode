/*
 * XREFs of ?DdiAcquireSwizzlingRange@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_ACQUIRESWIZZLINGRANGE@@@Z @ 0x1C02BE814
 * Callers:
 *     ?ADAPTER_RENDER_DdiAcquireSwizzlingRange@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_ACQUIRESWIZZLINGRANGE@@@Z @ 0x1C0047AF0 (-ADAPTER_RENDER_DdiAcquireSwizzlingRange@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_ACQUIRESWIZZLINGRA.c)
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

__int64 __fastcall ADAPTER_RENDER::DdiAcquireSwizzlingRange(
        ADAPTER_RENDER *this,
        struct _DXGKARG_ACQUIRESWIZZLINGRANGE *a2,
        __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // r12
  struct DXGTHREAD *v7; // rbx
  struct DXGTHREAD *Current; // rax
  int v9; // r14d
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  KIRQL v15; // al
  _QWORD *v16; // rax
  __int64 PrivateDriverData; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  int v25; // [rsp+50h] [rbp-29h] BYREF
  __int64 v26; // [rsp+58h] [rbp-21h]
  char v27; // [rsp+60h] [rbp-19h]
  _BYTE v28[8]; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v27 = 1;
    v25 = 5006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5006);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 5006);
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
    (DXGVALIDATIONPROCESSATTACH *)v28,
    *((struct DXGADAPTER **)this + 2));
  v10 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ACQUIRESWIZZLINGRANGE *))(*((_QWORD *)this + 2) + 496LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          a2);
  if ( v28[0] )
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
  v16[4] = a2->hAllocation;
  v16[5] = a2->RangeId;
  PrivateDriverData = a2->PrivateDriverData;
  v16[6] = PrivateDriverData;
  v21 = WdLogNewEntry5_WdTrace(PrivateDriverData, v18, v19, v20);
  *(_QWORD *)(v21 + 24) = a2->SegmentId;
  *(_QWORD *)(v21 + 32) = a2->CPUTranslatedAddress.QuadPart;
  if ( (_DWORD)v10 != -1071775481 && (_DWORD)v10 != -1071775480 && (_DWORD)v10 )
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v25);
  return (unsigned int)v10;
}
