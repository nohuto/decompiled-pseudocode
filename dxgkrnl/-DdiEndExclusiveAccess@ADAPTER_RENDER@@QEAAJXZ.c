/*
 * XREFs of ?DdiEndExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02C2FD8
 * Callers:
 *     ?IommuEndExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x1C02BC720 (-IommuEndExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0007690 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0008C68 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiEndExclusiveAccess(ADAPTER_RENDER *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  KIRQL CurrentIrql; // al
  __int64 v7; // r15
  struct DXGTHREAD *v8; // rbx
  struct DXGTHREAD *Current; // rax
  int v10; // r14d
  __int64 v11; // rax
  KIRQL v12; // al
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v17; // [rsp+58h] [rbp-19h] BYREF
  int v18; // [rsp+60h] [rbp-11h] BYREF
  __int64 v19; // [rsp+68h] [rbp-9h]
  char v20; // [rsp+70h] [rbp-1h]
  _BYTE v21[8]; // [rsp+78h] [rbp+7h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp+Fh] BYREF

  v18 = -1;
  v19 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v20 = 1;
    v18 = 5131;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5131);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v18, 5131);
  v4 = *((_QWORD *)this + 2);
  LODWORD(v5) = 0;
  if ( *(_QWORD *)(v4 + 1312) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 4612));
    CurrentIrql = KeGetCurrentIrql();
    v7 = CurrentIrql;
    v8 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v8 = Current) != 0LL) )
      v10 = *((_DWORD *)Current + 12);
    else
      v10 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v21,
      *((struct DXGADAPTER **)this + 2));
    v11 = *((_QWORD *)this + 2);
    v17 = 0;
    v5 = (*(int (__fastcall **)(_QWORD, int *))(v11 + 1312))(*(_QWORD *)(v11 + 280), &v17);
    if ( v21[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v7 != KeGetCurrentIrql() )
    {
      v12 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v7, v12);
    }
    if ( v8 )
    {
      v13 = *((int *)v8 + 12);
      if ( (_DWORD)v13 != v10 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, v13, v10, 0LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
    if ( (_DWORD)v5 )
    {
      WdLogSingleEntry1(2LL, v5);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v5,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v18);
  return (unsigned int)v5;
}
