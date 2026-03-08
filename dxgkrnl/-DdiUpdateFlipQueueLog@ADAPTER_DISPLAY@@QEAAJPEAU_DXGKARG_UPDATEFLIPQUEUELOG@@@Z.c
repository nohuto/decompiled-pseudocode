/*
 * XREFs of ?DdiUpdateFlipQueueLog@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEFLIPQUEUELOG@@@Z @ 0x1C0044A70
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiUpdateFlipQueueLog@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_UPDATEFLIPQUEUELOG@@@Z @ 0x1C0047AD0 (-ADAPTER_DISPLAY_DdiUpdateFlipQueueLog@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_UPDATEFLIPQUEUELOG@.c)
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

__int64 __fastcall ADAPTER_DISPLAY::DdiUpdateFlipQueueLog(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_UPDATEFLIPQUEUELOG *a2,
        __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // r15
  struct DXGTHREAD *v7; // rbx
  struct DXGTHREAD *Current; // rax
  int v9; // esi
  __int64 v10; // rdi
  KIRQL v11; // al
  __int64 v12; // rcx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // [rsp+60h] [rbp-29h] BYREF
  __int64 v20; // [rsp+68h] [rbp-21h]
  char v21; // [rsp+70h] [rbp-19h]
  _BYTE v22[8]; // [rsp+78h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-9h] BYREF

  LODWORD(v19) = -1;
  v20 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v21 = 1;
    LODWORD(v19) = 5161;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5161);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 5161);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  CurrentIrql = KeGetCurrentIrql();
  v6 = CurrentIrql;
  v7 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v7 = Current) != 0LL) )
    v9 = *((_DWORD *)Current + 12);
  else
    v9 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v22,
    *((struct DXGADAPTER **)this + 2));
  v10 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_UPDATEFLIPQUEUELOG *))(*((_QWORD *)this + 2) + 1408LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          a2);
  if ( v22[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v11 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v11);
  }
  if ( v7 )
  {
    v12 = *((int *)v7 + 12);
    if ( (_DWORD)v12 != v9 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, v12, v9, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  if ( (_DWORD)v10 )
  {
    WdLogSingleEntry1(2LL, v10);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v14,
          v13,
          v15,
          0LL,
          0,
          -1,
          L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v10,
          0LL,
          0LL,
          0LL,
          0LL,
          v19,
          v20);
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v19);
  return (unsigned int)v10;
}
