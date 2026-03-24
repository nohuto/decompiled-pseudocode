/*
 * XREFs of ?DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z @ 0x1C00E6E20
 * Callers:
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00EA8F4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0004C60 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0004D20 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004DC0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqt_EtwWriteTransfer @ 0x1C003E5C0 (McTemplateK0pqt_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEVISIBILITY *a2,
        __int64 a3)
{
  unsigned __int8 CurrentIrql; // r12
  struct DXGTHREAD *v6; // rsi
  struct DXGTHREAD *Current; // rax
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v19; // rax
  unsigned __int8 v20; // cl
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // [rsp+20h] [rbp-39h]
  BOOL v25; // [rsp+28h] [rbp-31h]
  int v26; // [rsp+30h] [rbp-29h] BYREF
  __int64 v27; // [rsp+38h] [rbp-21h]
  char v28; // [rsp+40h] [rbp-19h]
  _BYTE v29[8]; // [rsp+48h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-9h] BYREF

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v25 = a2->Visible != 0;
    VidPnSourceId = a2->VidPnSourceId;
    McTemplateK0pqt_EtwWriteTransfer((__int64)this, (__int64)a2, a3, this, VidPnSourceId, v25);
  }
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 5011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5011);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 5011LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  v6 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v6 = Current) != 0LL) )
    v8 = *((_DWORD *)Current + 8);
  else
    v8 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v29,
    *((struct DXGADAPTER **)this + 2));
  v10 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEVISIBILITY *))(*((_QWORD *)this + 2) + 552LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
          a2);
  if ( v29[0] )
    KeUnstackDetachProcess(&ApcState);
  v11 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v11 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v9);
    v19[3] = 275LL;
    v19[4] = 16LL;
    v19[5] = this;
    v19[6] = CurrentIrql;
    v20 = KeGetCurrentIrql();
    v19[7] = v20;
    WdLogEvent5_WdCriticalError(v19);
  }
  if ( v6 && *((_DWORD *)v6 + 8) != v8 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v9);
    v21[3] = 275LL;
    v21[4] = 38LL;
    v22 = *((int *)v6 + 8);
    v21[7] = 0LL;
    v21[5] = v22;
    v21[6] = v8;
    WdLogEvent5_WdCriticalError(v21);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  v12 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v12[3] = v10;
  v12[4] = a2->VidPnSourceId;
  v12[5] = a2->Visible;
  WdLogEvent5_WdEvent(v12);
  if ( (_DWORD)v10 != -1073741801 && (_DWORD)v10 )
  {
    v23 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v23 + 24) = v10;
    WdLogEvent5_WdError(v23);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (int)v10 >= 0 )
  {
    v15 = 3968LL * a2->VidPnSourceId;
    *(_BYTE *)(v15 + *((_QWORD *)this + 14) + 721) = a2->Visible;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26, v15);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v26);
  return (unsigned int)v10;
}
