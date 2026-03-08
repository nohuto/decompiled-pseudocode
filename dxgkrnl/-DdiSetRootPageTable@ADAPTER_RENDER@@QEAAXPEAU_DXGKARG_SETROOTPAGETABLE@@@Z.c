/*
 * XREFs of ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C01D4FB4
 * Callers:
 *     ?ADAPTER_RENDER_DdiSetRootPageTable@@YAXPEAVADAPTER_RENDER@@PEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C0015010 (-ADAPTER_RENDER_DdiSetRootPageTable@@YAXPEAVADAPTER_RENDER@@PEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0007690 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008740 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0008C68 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_RENDER::DdiSetRootPageTable(
        ADAPTER_RENDER *this,
        struct _DXGKARG_SETROOTPAGETABLE *a2,
        __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // r14
  struct DXGTHREAD *v7; // rbx
  struct DXGTHREAD *Current; // rax
  int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  KIRQL v13; // al
  int v14; // [rsp+30h] [rbp-29h] BYREF
  __int64 v15; // [rsp+38h] [rbp-21h]
  char v16; // [rsp+40h] [rbp-19h]
  _BYTE v17[8]; // [rsp+48h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-9h] BYREF

  v14 = -1;
  v15 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v16 = 1;
    v14 = 5059;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5059);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v14, 5059);
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
    (DXGVALIDATIONPROCESSATTACH *)v17,
    *((struct DXGADAPTER **)this + 2));
  (*(void (__fastcall **)(_QWORD, struct _DXGKARG_SETROOTPAGETABLE *))(*((_QWORD *)this + 2) + 936LL))(
    *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
    a2);
  if ( v17[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v13 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v13);
  }
  if ( v7 )
  {
    v10 = *((int *)v7 + 12);
    if ( (_DWORD)v10 != v9 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, v10, v9, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v14);
  }
}
