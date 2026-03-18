/*
 * XREFs of ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C02132C8
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0211D70 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073DC (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0009784 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000A858 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B2C0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01CA0D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?VmBusSendDdiGetNodeMetadata@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C03875B4 (-VmBusSendDdiGetNodeMetadata@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::DdiGetNodeMetadata(DXGADAPTER *this, unsigned int a2, struct _DXGK_NODEMETADATA *a3)
{
  int v3; // r14d
  __int64 v5; // r12
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rax
  KIRQL CurrentIrql; // al
  __int64 v10; // r15
  struct DXGTHREAD *v11; // rsi
  struct DXGTHREAD *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  KIRQL v17; // al
  int v18; // [rsp+50h] [rbp-49h] BYREF
  __int64 v19; // [rsp+58h] [rbp-41h]
  char v20; // [rsp+60h] [rbp-39h]
  _BYTE v21[24]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v22[8]; // [rsp+80h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-11h] BYREF

  v18 = -1;
  v3 = 0;
  v5 = a2;
  v19 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v20 = 1;
    v18 = 5053;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 5053);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v18, 5053);
  if ( *((_BYTE *)this + 209) )
  {
    LODWORD(v13) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetNodeMetadata((DXGADAPTER *)((char *)this + 4472), v5, a3);
  }
  else
  {
    Current = DXGPROCESS::GetCurrent(v7);
    DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v21, Current);
    DXGADAPTER::AcquireDdiSync((__int64)this, 1);
    _InterlockedIncrement((volatile signed __int32 *)this + 1153);
    CurrentIrql = KeGetCurrentIrql();
    v10 = CurrentIrql;
    v11 = 0LL;
    if ( CurrentIrql < 2u )
    {
      v12 = DXGTHREAD::GetCurrent();
      v11 = v12;
      if ( v12 )
        v3 = *((_DWORD *)v12 + 12);
    }
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v22, this);
    a3->FriendlyName[0] = 0;
    v13 = (*((int (__fastcall **)(_QWORD, _QWORD, struct _DXGK_NODEMETADATA *))this + 109))(
            *((_QWORD *)this + 35),
            (unsigned int)v5,
            a3);
    if ( v22[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v10 != KeGetCurrentIrql() )
    {
      v17 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v10, v17);
    }
    if ( v11 && *((_DWORD *)v11 + 12) != v3 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v11 + 12), v3, 0LL);
    _InterlockedDecrement((volatile signed __int32 *)this + 1153);
    WdLogSingleEntry3(4LL, v13, v5, a3->EngineType);
    if ( (_DWORD)v13 != -1073741811 && (_DWORD)v13 )
    {
      WdLogSingleEntry1(2LL, v13);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(this);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v18);
  return (unsigned int)v13;
}
