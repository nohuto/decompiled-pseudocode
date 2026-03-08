/*
 * XREFs of ?DdiNotifyFocusPresent@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0042ABC
 * Callers:
 *     ?ADAPTER_RENDER_DdiNotifyFocusPresent@@YAJPEAVADAPTER_RENDER@@@Z @ 0x1C0047C50 (-ADAPTER_RENDER_DdiNotifyFocusPresent@@YAJPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0007690 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiNotifyFocusPresent(ADAPTER_RENDER *this, __int64 a2, __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v5; // r15
  struct DXGTHREAD *v6; // rdi
  struct DXGTHREAD *Current; // rax
  int v8; // r14d
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(_QWORD); // rax
  int v11; // ebx
  KIRQL v12; // al
  __int64 v13; // rcx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // [rsp+68h] [rbp-19h] BYREF
  __int64 v21; // [rsp+70h] [rbp-11h]
  char v22; // [rsp+78h] [rbp-9h]
  _BYTE v23[8]; // [rsp+80h] [rbp-1h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp+7h] BYREF

  LODWORD(v20) = -1;
  v21 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    LODWORD(v20) = 5116;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5116);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 5116);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  CurrentIrql = KeGetCurrentIrql();
  v5 = CurrentIrql;
  v6 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v6 = Current) != 0LL) )
    v8 = *((_DWORD *)Current + 12);
  else
    v8 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v23,
    *((struct DXGADAPTER **)this + 2));
  v9 = *((_QWORD *)this + 2);
  v10 = *(__int64 (__fastcall **)(_QWORD))(v9 + 1264);
  if ( v10 )
    v11 = v10(*(_QWORD *)(v9 + 280));
  else
    v11 = -1073741822;
  if ( v23[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v5 != KeGetCurrentIrql() )
  {
    v12 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v5, v12);
  }
  if ( v6 )
  {
    v13 = *((int *)v6 + 12);
    if ( (_DWORD)v13 != v8 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, v13, v8, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  if ( v11 != -1073741822 && v11 != -1073741801 )
  {
    if ( v11 )
    {
      WdLogSingleEntry1(2LL, v11);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v15,
            v14,
            v16,
            0LL,
            0,
            -1,
            L"Driver returned an invalid NTSTATUS code: 0x%I64x",
            v11,
            0LL,
            0LL,
            0LL,
            0LL,
            v20,
            v21);
      }
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v20);
  return (unsigned int)v11;
}
