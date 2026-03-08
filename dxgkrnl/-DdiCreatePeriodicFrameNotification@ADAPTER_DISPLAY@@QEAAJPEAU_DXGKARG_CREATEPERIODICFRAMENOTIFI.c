/*
 * XREFs of ?DdiCreatePeriodicFrameNotification@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPERIODICFRAMENOTIFICATION@@@Z @ 0x1C02C0A74
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiCreatePeriodicFrameNotification@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_CREATEPERIODICFRAMENOTIFICATION@@@Z @ 0x1C00479F0 (-ADAPTER_DISPLAY_DdiCreatePeriodicFrameNotification@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_CREATE.c)
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

__int64 __fastcall ADAPTER_DISPLAY::DdiCreatePeriodicFrameNotification(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_CREATEPERIODICFRAMENOTIFICATION *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  KIRQL CurrentIrql; // al
  __int64 v7; // r12
  struct DXGTHREAD *v8; // rdi
  struct DXGTHREAD *Current; // rax
  int v10; // r14d
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  KIRQL v16; // al
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+50h] [rbp-29h] BYREF
  __int64 v22; // [rsp+58h] [rbp-21h]
  char v23; // [rsp+60h] [rbp-19h]
  _BYTE v24[8]; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v23 = 1;
    v21 = 5074;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5074);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 5074);
  v5 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v5 + 1136) && *(int *)(v5 + 2552) >= 8704 )
  {
    DXGADAPTER::AcquireDdiSync(v5, 1);
    a2->hAdapter = *(HANDLE *)(*((_QWORD *)this + 2) + 280LL);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
    CurrentIrql = KeGetCurrentIrql();
    v7 = CurrentIrql;
    v8 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v8 = Current) != 0LL) )
      v10 = *((_DWORD *)Current + 12);
    else
      v10 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v24,
      *((struct DXGADAPTER **)this + 2));
    v11 = (*(int (__fastcall **)(struct _DXGKARG_CREATEPERIODICFRAMENOTIFICATION *))(*((_QWORD *)this + 2) + 1136LL))(a2);
    if ( v24[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v7 != KeGetCurrentIrql() )
    {
      v16 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v7, v16);
    }
    if ( v8 )
    {
      v13 = *((int *)v8 + 12);
      if ( (_DWORD)v13 != v10 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, v13, v10, 0LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    v17[3] = v11;
    v17[4] = a2->hAdapter;
    v17[5] = a2->VidPnTargetId;
    v17[6] = a2->NotificationID;
    v17[7] = a2->hNotification;
    if ( (_DWORD)v11 != -1073741823 && (_DWORD)v11 != -1073741811 && (_DWORD)v11 != -1073741801 && (_DWORD)v11 )
    {
      WdLogSingleEntry1(2LL, v11);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  }
  else
  {
    LODWORD(v11) = -1073741822;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 )
  {
    LOBYTE(v18) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v21);
  }
  return (unsigned int)v11;
}
