/*
 * XREFs of ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x1C0043F28
 * Callers:
 *     ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x1C0041A80 (-DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z.c)
 *     ?DXGADAPTER_DdiSetPowerComponentFState@@YAJPEAVDXGADAPTER@@KK@Z @ 0x1C0047EC0 (-DXGADAPTER_DdiSetPowerComponentFState@@YAJPEAVDXGADAPTER@@KK@Z.c)
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

__int64 __fastcall DXGADAPTER::DdiSetPowerComponentFState(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r12d
  KIRQL CurrentIrql; // al
  __int64 v7; // r15
  struct DXGTHREAD *v8; // rbx
  struct DXGTHREAD *Current; // rax
  int v10; // r14d
  __int64 v11; // rdi
  KIRQL v12; // al
  __int64 v13; // rcx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // [rsp+60h] [rbp-39h] BYREF
  __int64 v21; // [rsp+68h] [rbp-31h]
  char v22; // [rsp+70h] [rbp-29h]
  _BYTE v23[8]; // [rsp+78h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-19h] BYREF

  LODWORD(v20) = -1;
  v3 = a3;
  v21 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    LODWORD(v20) = 5124;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5124);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 5124);
  _InterlockedIncrement((volatile signed __int32 *)this + 1153);
  CurrentIrql = KeGetCurrentIrql();
  v7 = CurrentIrql;
  v8 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v8 = Current) != 0LL) )
    v10 = *((_DWORD *)Current + 12);
  else
    v10 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v23, this);
  v11 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD))this + 104))(*((_QWORD *)this + 35), a2, v3);
  if ( v23[0] )
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
  _InterlockedDecrement((volatile signed __int32 *)this + 1153);
  if ( (_DWORD)v11 != -1071775466 )
  {
    if ( (_DWORD)v11 )
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
