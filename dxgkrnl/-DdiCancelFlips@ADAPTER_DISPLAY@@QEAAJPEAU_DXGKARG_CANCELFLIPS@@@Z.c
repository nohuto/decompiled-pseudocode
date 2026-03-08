/*
 * XREFs of ?DdiCancelFlips@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CANCELFLIPS@@@Z @ 0x1C00423E8
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiCancelFlips@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_CANCELFLIPS@@@Z @ 0x1C0047990 (-ADAPTER_DISPLAY_DdiCancelFlips@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_CANCELFLIPS@@@Z.c)
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

__int64 __fastcall ADAPTER_DISPLAY::DdiCancelFlips(ADAPTER_DISPLAY *this, struct _DXGKARG_CANCELFLIPS *a2, __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // r15
  struct DXGTHREAD *v7; // rdi
  struct DXGTHREAD *Current; // rax
  int v9; // r14d
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(_QWORD, struct _DXGKARG_CANCELFLIPS *); // rax
  int v12; // ebx
  KIRQL v13; // al
  __int64 v14; // rcx
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // [rsp+60h] [rbp-29h] BYREF
  __int64 v22; // [rsp+68h] [rbp-21h]
  char v23; // [rsp+70h] [rbp-19h]
  _BYTE v24[8]; // [rsp+78h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-9h] BYREF

  LODWORD(v21) = -1;
  v22 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v23 = 1;
    LODWORD(v21) = 5160;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5160);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 5160);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  CurrentIrql = KeGetCurrentIrql();
  v6 = CurrentIrql;
  v7 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v7 = Current) != 0LL) )
    v9 = *((_DWORD *)Current + 12);
  else
    v9 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v24,
    *((struct DXGADAPTER **)this + 2));
  v10 = *((_QWORD *)this + 2);
  v11 = *(__int64 (__fastcall **)(_QWORD, struct _DXGKARG_CANCELFLIPS *))(v10 + 1480);
  if ( v11 )
    v12 = v11(*(_QWORD *)(v10 + 280), a2);
  else
    v12 = -1073741822;
  if ( v24[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v13 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v13);
  }
  if ( v7 )
  {
    v14 = *((int *)v7 + 12);
    if ( (_DWORD)v14 != v9 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, v14, v9, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  if ( v12 != -1073741822 )
  {
    if ( v12 )
    {
      WdLogSingleEntry1(2LL, v12);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v16,
            v15,
            v17,
            0LL,
            0,
            -1,
            L"Driver returned an invalid NTSTATUS code: 0x%I64x",
            v12,
            0LL,
            0LL,
            0LL,
            0LL,
            v21,
            v22);
      }
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v21);
  return (unsigned int)v12;
}
