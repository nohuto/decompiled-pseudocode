/*
 * XREFs of ?DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z @ 0x1C0173B84
 * Callers:
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01738D4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
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
 *     McTemplateK0pqt_EtwWriteTransfer @ 0x1C0044EB0 (McTemplateK0pqt_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEVISIBILITY *a2,
        __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // r12
  struct DXGTHREAD *v7; // rsi
  struct DXGTHREAD *Current; // rax
  int v9; // r15d
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  KIRQL v15; // al
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // [rsp+20h] [rbp-59h]
  BOOL v17; // [rsp+28h] [rbp-51h]
  int v18; // [rsp+50h] [rbp-29h] BYREF
  __int64 v19; // [rsp+58h] [rbp-21h]
  char v20; // [rsp+60h] [rbp-19h]
  _BYTE v21[8]; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v17 = a2->Visible != 0;
    VidPnSourceId = a2->VidPnSourceId;
    McTemplateK0pqt_EtwWriteTransfer((__int64)this, (__int64)a2, a3, this, VidPnSourceId, v17);
  }
  v18 = -1;
  v19 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v20 = 1;
    v18 = 5011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5011);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v18, 5011);
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
    (DXGVALIDATIONPROCESSATTACH *)v21,
    *((struct DXGADAPTER **)this + 2));
  v10 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEVISIBILITY *))(*((_QWORD *)this + 2) + 640LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          a2);
  if ( v21[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v15 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v15);
  }
  if ( v7 )
  {
    v11 = *((int *)v7 + 12);
    if ( (_DWORD)v11 != v9 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, v11, v9, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  WdLogSingleEntry3(4LL, v10, a2->VidPnSourceId, a2->Visible);
  if ( (_DWORD)v10 != -1073741801 && (_DWORD)v10 )
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
  if ( (int)v10 >= 0 )
    *(_BYTE *)(4000LL * a2->VidPnSourceId + *((_QWORD *)this + 16) + 761) = a2->Visible;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v18);
  return (unsigned int)v10;
}
