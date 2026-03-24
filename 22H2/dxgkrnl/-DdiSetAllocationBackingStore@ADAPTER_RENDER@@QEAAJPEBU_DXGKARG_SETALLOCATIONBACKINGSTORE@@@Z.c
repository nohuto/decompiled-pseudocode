/*
 * XREFs of ?DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z @ 0x1C00D65D0
 * Callers:
 *     ?ADAPTER_RENDER_DdiSetAllocationBackingStore@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z @ 0x1C0027640 (-ADAPTER_RENDER_DdiSetAllocationBackingStore@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SETALLOCATIONB.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0004C60 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0004D20 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004DC0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x1C0025A88 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetAllocationBackingStore(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int (__fastcall *v7)(_QWORD, const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *); // rsi
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // r14
  struct DXGTHREAD *v10; // rbx
  struct DXGTHREAD *Current; // rax
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int8 v16; // cl
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  int v23; // [rsp+20h] [rbp-88h] BYREF
  __int64 v24; // [rsp+28h] [rbp-80h]
  char v25; // [rsp+30h] [rbp-78h]
  _BYTE v26[56]; // [rsp+38h] [rbp-70h] BYREF

  v23 = -1;
  v24 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 5157;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5157);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 5157LL);
  v6 = *((_QWORD *)this + 2);
  v7 = *(int (__fastcall **)(_QWORD, const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *))(v6 + 1368);
  if ( v7 )
  {
    DXGADAPTER::AcquireDdiSync(v6, 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
    CurrentIrql = KeGetCurrentIrql();
    v10 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v10 = Current) != 0LL) )
      v12 = *((_DWORD *)Current + 8);
    else
      v12 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v26,
      *((struct DXGADAPTER **)this + 2));
    v8 = v7(*(_QWORD *)(*((_QWORD *)this + 2) + 272LL), a2);
    DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v26);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13);
      v15[3] = 275LL;
      v15[4] = 16LL;
      v15[5] = this;
      v15[6] = CurrentIrql;
      v16 = KeGetCurrentIrql();
      v15[7] = v16;
      WdLogEvent5_WdCriticalError(v15);
    }
    if ( v10 && *((_DWORD *)v10 + 8) != v12 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13);
      v17[3] = 275LL;
      v17[4] = 38LL;
      v18 = *((int *)v10 + 8);
      v17[7] = 0LL;
      v17[5] = v18;
      v17[6] = v12;
      WdLogEvent5_WdCriticalError(v17);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
    if ( (_DWORD)v8 )
    {
      v19 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v19 + 24) = v8;
      WdLogEvent5_WdError(v19);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  }
  else
  {
    LODWORD(v8) = -1073741637;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23, v5);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v23);
  return (unsigned int)v8;
}
