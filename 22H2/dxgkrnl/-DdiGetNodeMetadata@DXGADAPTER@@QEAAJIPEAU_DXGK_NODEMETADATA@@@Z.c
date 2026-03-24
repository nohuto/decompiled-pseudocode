/*
 * XREFs of ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C0187170
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01869A8 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0004C60 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0004D20 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004DC0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009F40 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendDdiGetNodeMetadata@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C02481B8 (-VmBusSendDdiGetNodeMetadata@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::DdiGetNodeMetadata(DXGADAPTER *this, unsigned int a2, struct _DXGK_NODEMETADATA *a3)
{
  __int64 v4; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v14; // rdi
  struct DXGTHREAD *v15; // rax
  int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v27; // rax
  unsigned __int8 v28; // cl
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // [rsp+20h] [rbp-49h] BYREF
  __int64 v33; // [rsp+28h] [rbp-41h]
  char v34; // [rsp+30h] [rbp-39h]
  _BYTE v35[24]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v36[8]; // [rsp+50h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-11h] BYREF

  v32 = -1;
  v4 = a2;
  v33 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 5053;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 5053);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 5053LL);
  if ( *((_BYTE *)this + 209) )
  {
    LODWORD(v19) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetNodeMetadata((DXGADAPTER *)((char *)this + 4240), v4, a3);
  }
  else
  {
    Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
    DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v35, Current);
    DXGADAPTER::AcquireDdiSync((__int64)this, 1);
    _InterlockedIncrement((volatile signed __int32 *)this + 1091);
    CurrentIrql = KeGetCurrentIrql();
    v14 = 0LL;
    if ( CurrentIrql < 2u && (v15 = DXGTHREAD::GetCurrent(v12, v11), (v14 = v15) != 0LL) )
      v16 = *((_DWORD *)v15 + 8);
    else
      v16 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v36, this);
    a3->FriendlyName[0] = 0;
    v19 = (*((int (__fastcall **)(_QWORD, _QWORD, struct _DXGK_NODEMETADATA *))this + 98))(
            *((_QWORD *)this + 34),
            (unsigned int)v4,
            a3);
    if ( v36[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17);
      v27[3] = 275LL;
      v27[4] = 16LL;
      v27[5] = this;
      v27[6] = CurrentIrql;
      v28 = KeGetCurrentIrql();
      v27[7] = v28;
      WdLogEvent5_WdCriticalError(v27);
    }
    if ( v14 && *((_DWORD *)v14 + 8) != v16 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17);
      v29[3] = 275LL;
      v29[4] = 38LL;
      v30 = *((int *)v14 + 8);
      v29[7] = 0LL;
      v29[5] = v30;
      v29[6] = v16;
      WdLogEvent5_WdCriticalError(v29);
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 1091);
    v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v18, v17);
    v20[3] = v19;
    v20[4] = v4;
    v20[5] = a3->EngineType;
    WdLogEvent5_WdEvent(v20);
    if ( (_DWORD)v19 != -1073741811 && (_DWORD)v19 )
    {
      v31 = WdLogNewEntry5_WdError(v22, v21);
      *(_QWORD *)(v31 + 24) = v19;
      WdLogEvent5_WdError(v31);
    }
    DXGADAPTER::ReleaseDdiSync(this);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v23);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v32);
  return (unsigned int)v19;
}
